// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "editaddressdialog.h"
#include "ui_editaddressdialog.h"

#include "addresstablemodel.h"
#include "guiutil.h"
#include "base58.h"
#include "wallet.h"
#include "walletmodel.h"
#include "init.h"

#include <QtWidgets/QDataWidgetMapper>
#include <QtWidgets/QMessageBox>

EditAddressDialog::EditAddressDialog(Mode mode, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditAddressDialog),
    mapper(0),
    mode(mode),
    model(0)
{
    ui->setupUi(this);

    GUIUtil::setupAddressWidget(ui->addressEdit, this);

    switch(mode)
    {
    case NewReceivingAddress:
        setWindowTitle(tr("New receiving address"));
        ui->addressEdit->setEnabled(false);
        ui->addressEdit->setVisible(false);
        break;
    case NewSendingAddress:
        setWindowTitle(tr("New sending address"));
        break;
    case EditReceivingAddress:
        setWindowTitle(tr("Edit receiving address"));
        ui->addressEdit->setEnabled(false);
        ui->addressEdit->setVisible(true);
        break;
    case EditSendingAddress:
        setWindowTitle(tr("Edit sending address"));
        break;
    }

    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
}

EditAddressDialog::~EditAddressDialog()
{
    delete ui;
}

void EditAddressDialog::setModel(AddressTableModel *model)
{
    this->model = model;
    if(!model)
        return;

    mapper->setModel(model);
    mapper->addMapping(ui->labelEdit, AddressTableModel::Label);
    mapper->addMapping(ui->addressEdit, AddressTableModel::Address);
}

void EditAddressDialog::loadRow(int row)
{
    mapper->setCurrentIndex(row);
    
    if (ui->addressEdit->text().length()<75)
    {
      CBitcoinAddress address(ui->addressEdit->text().toStdString());
      CKeyID keyID;
      if ( !address.GetKeyID(keyID) )
      {
          QMessageBox::warning(this, windowTitle(),
              tr("Address \"%1\" doesn't have public key ").arg(ui->addressEdit->text()),
              QMessageBox::Ok, QMessageBox::Ok);
          return;
      }
      CPubKey vchPubKey;
      if ( !pwalletMain->GetPubKey(keyID, vchPubKey))
      {
          QMessageBox::warning(this, windowTitle(),
              tr("Address \"%1\" doesn't have public key ").arg(ui->addressEdit->text()),
              QMessageBox::Ok, QMessageBox::Ok);
          return;
      }
      CSecret vchSecret;
      bool fCompressed;
      if (!pwalletMain->GetSecret(keyID, vchSecret, fCompressed))
      {
          QMessageBox::warning(this, windowTitle(),
              tr("Address \"%1\" doesn't have private key ").arg(ui->addressEdit->text()),
              QMessageBox::Ok, QMessageBox::Ok);
          return;
      }
      ui->lblPubkey->setText(HexStr(vchPubKey).c_str());
      ui->lblPrikey->setText(CBitcoinSecret(vchSecret, fCompressed).ToString().c_str());
      GUIUtil::setClipboard(QString::fromStdString(HexStr(vchPubKey)));
      
      ui->lblScanPubkey->setText("");
      ui->lblScanSecret->setText("");
      ui->lblSpendPubkey->setText("");
      ui->lblSpendSecret->setText("");
    }
}

bool EditAddressDialog::saveCurrentRow()
{
    if(!model)
        return false;

    switch(mode)
    {
    case NewReceivingAddress:
    case NewSendingAddress:
    	  {
    	   int typeInd  = AddressTableModel::AT_Normal;
         address = model->addRow(
                   mode == NewSendingAddress ? AddressTableModel::Send : AddressTableModel::Receive,
                   ui->labelEdit->text(),
                   ui->addressEdit->text(),
                   typeInd);
        }
        break;
    case EditReceivingAddress:
    case EditSendingAddress:
        if(mapper->submit())
        {
            address = ui->addressEdit->text();
        }
        break;
    }
    return !address.isEmpty();
}

void EditAddressDialog::accept()
{
    if(!model)
        return;

    if(!saveCurrentRow())
    {
        switch(model->getEditStatus())
        {
        case AddressTableModel::OK:
            // Failed with unknown reason. Just reject.
            break;
        case AddressTableModel::NO_CHANGES:
            // No changes were made during edit operation. Just reject.
            break;
        case AddressTableModel::INVALID_ADDRESS:
            QMessageBox::warning(this, windowTitle(),
                tr("The entered address \"%1\" is not a valid Fedoracoin address.").arg(ui->addressEdit->text()),
                QMessageBox::Ok, QMessageBox::Ok);
            break;
        case AddressTableModel::DUPLICATE_ADDRESS:
            QMessageBox::warning(this, windowTitle(),
                tr("The entered address \"%1\" is already in the address book.").arg(ui->addressEdit->text()),
                QMessageBox::Ok, QMessageBox::Ok);
            break;
        case AddressTableModel::WALLET_UNLOCK_FAILURE:
            QMessageBox::critical(this, windowTitle(),
                tr("Could not unlock wallet."),
                QMessageBox::Ok, QMessageBox::Ok);
            break;
        case AddressTableModel::KEY_GENERATION_FAILURE:
            QMessageBox::critical(this, windowTitle(),
                tr("New key generation failed."),
                QMessageBox::Ok, QMessageBox::Ok);
            break;

        }
        return;
    }
    QDialog::accept();
}

QString EditAddressDialog::getAddress() const
{
    return address;
}

void EditAddressDialog::setAddress(const QString &address)
{
    this->address = address;
    ui->addressEdit->setText(address);
}
