include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = fedoracoin-qt
noinst_LIBRARIES = libbitcoinqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# fedoracoin qt core #
QT_TS = \
  locale/bitcoin_ach.ts \
  locale/bitcoin_af_ZA.ts \
  locale/bitcoin_ar.ts \
  locale/bitcoin_be_BY.ts \
  locale/bitcoin_bg.ts \
  locale/bitcoin_bs.ts \
  locale/bitcoin_ca_ES.ts \
  locale/bitcoin_ca.ts \
  locale/bitcoin_ca@valencia.ts \
  locale/bitcoin_cmn.ts \
  locale/bitcoin_cs.ts \
  locale/bitcoin_cy.ts \
  locale/bitcoin_da.ts \
  locale/bitcoin_de.ts \
  locale/bitcoin_el_GR.ts \
  locale/bitcoin_en.ts \
  locale/bitcoin_eo.ts \
  locale/bitcoin_es_CL.ts \
  locale/bitcoin_es_DO.ts \
  locale/bitcoin_es_MX.ts \
  locale/bitcoin_es.ts \
  locale/bitcoin_es_UY.ts \
  locale/bitcoin_et.ts \
  locale/bitcoin_eu_ES.ts \
  locale/bitcoin_fa_IR.ts \
  locale/bitcoin_fa.ts \
  locale/bitcoin_fi.ts \
  locale/bitcoin_fr_CA.ts \
  locale/bitcoin_fr.ts \
  locale/bitcoin_gl.ts \
  locale/bitcoin_gu_IN.ts \
  locale/bitcoin_he.ts \
  locale/bitcoin_hi_IN.ts \
  locale/bitcoin_hr.ts \
  locale/bitcoin_hu.ts \
  locale/bitcoin_id_ID.ts \
  locale/bitcoin_it.ts \
  locale/bitcoin_ja.ts \
  locale/bitcoin_ka.ts \
  locale/bitcoin_kk_KZ.ts \
  locale/bitcoin_ko_KR.ts \
  locale/bitcoin_ky.ts \
  locale/bitcoin_la.ts \
  locale/bitcoin_lt.ts \
  locale/bitcoin_lv_LV.ts \
  locale/bitcoin_mn.ts \
  locale/bitcoin_ms_MY.ts \
  locale/bitcoin_nb.ts \
  locale/bitcoin_nl.ts \
  locale/bitcoin_pam.ts \
  locale/bitcoin_pl.ts \
  locale/bitcoin_pt_BR.ts \
  locale/bitcoin_pt_PT.ts \
  locale/bitcoin_ro_RO.ts \
  locale/bitcoin_ru.ts \
  locale/bitcoin_sah.ts \
  locale/bitcoin_sk.ts \
  locale/bitcoin_sl_SI.ts \
  locale/bitcoin_sq.ts \
  locale/bitcoin_sr.ts \
  locale/bitcoin_sv.ts \
  locale/bitcoin_th_TH.ts \
  locale/bitcoin_tr.ts \
  locale/bitcoin_uk.ts \
  locale/bitcoin_ur_PK.ts \
  locale/bitcoin_uz@Cyrl.ts \
  locale/bitcoin_vi.ts \
  locale/bitcoin_vi_VN.ts \
  locale/bitcoin_zh_CN.ts \
  locale/bitcoin_zh_HK.ts \
  locale/bitcoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/shiftdialog.ui \
  forms/coinnectordialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui \
  forms/qrcodedialog.ui \
  forms/paperwalletdialog.ui \
  forms/commentdialog.ui \
  forms/opennamedialog.ui \
  forms/debugdialog.ui \
  forms/snapwidget.ui \
  forms/createmultisigaddrdialog.ui \
  forms/multisigdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_bitcoinaddressvalidator.cpp \
  moc_bitcoinamountfield.cpp \
  moc_bitcoingui.cpp \
  moc_bitcoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_shiftdialog.cpp \
  moc_coinnectordialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp \
  moc_qrcodedialog.cpp \
  moc_snapwidget.cpp \
  moc_verticallabel.cpp \
  moc_reportview.cpp \
  moc_createmultisigaddrdialog.cpp \
  moc_multisigdialog.cpp

FEDORACOIN_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  bitcoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_fedoracoin.cpp
QT_QRC = fedoracoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

BITCOIN_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  bitcoinaddressvalidator.h \
  bitcoinamountfield.h \
  bitcoingui.h \
  bitcoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  shiftdialog.h \
  coinnectordialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  platformstyle.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h \
  qrcodedialog.h \
  snapwidget.h \
  qimagesource.h \
  verticallabel.h \
  reportview.h \
  createmultisigaddrdialog.h \
  multisigdialog.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/bitcoin.ico \
  res/icons/bitcoin.png \
  res/icons/bitcoin_testnet.ico \
  res/icons/bitcoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png \
  res/icons/openurl.png \
  res/icons/print.png \
  res/icons/account-report.png \
  res/icons/multisig.png \
  res/icons/coinnector.png \
  res/icons/openname.png \
  res/icons/bitmessage.png \
  res/icons/shapeshift.png \
  res/icons/comment.png \
  res/icons/sx.png \
  res/images/branch_closed.png \
  res/images/branch_open-on.png \
  res/images/branch_open.png \
  res/images/checkbox_checked_disabled.png \
  res/images/checkbox_checked_focus.png \
  res/images/checkbox_checked.png \
  res/images/checkbox_indeterminate_disabled.png \
  res/images/checkbox_indeterminate_focus.png \
  res/images/checkbox_indeterminate.png \
  res/images/checkbox_unchecked_disabled.png \
  res/images/checkbox_unchecked_focus.png \
  res/images/checkbox_unchecked.png \
  res/images/close-hover.png \
  res/images/close.png \
  res/images/close-pressed.png \
  res/images/down_arrow_disabled.png \
  res/images/down_arrow.png \
  res/images/Hmovetoolbar.png \
  res/images/Hsepartoolbar.png \
  res/images/left_arrow_disabled.png \
  res/images/left_arrow.png \
  res/images/radio_checked_disabled.png \
  res/images/radio_checked_focus.png \
  res/images/radio_checked.png \
  res/images/radio_unchecked_disabled.png \
  res/images/radio_unchecked_focus.png \
  res/images/radio_unchecked.png \
  res/images/right_arrow_disabled.png \
  res/images/right_arrow.png \
  res/images/sizegrip.png \
  res/images/stylesheet-branch-end.png \
  res/images/stylesheet-branch-more.png \
  res/images/stylesheet-vline.png \
  res/images/transparent.png \
  res/images/undock.png \
  res/images/up_arrow_disabled.png \
  res/images/up_arrow.png \
  res/images/Vmovetoolbar.png \
  res/images/Vsepartoolbar.png

RES_THEMES = \
  res/themes/fedoracoin-s.qss

RES_FONTS = \
  res/fonts/Montserrat-ExtraLight.ttf \
  res/fonts/Montserrat-SemiBold.ttf \
  res/fonts/Montserrat-BlackItalic.ttf \
  res/fonts/Montserrat-Italic.ttf \
  res/fonts/Montserrat-ThinItalic.ttf \
  res/fonts/Montserrat-Black.ttf \
  res/fonts/Montserrat-LightItalic.ttf \
  res/fonts/Montserrat-Thin.ttf \
  res/fonts/Montserrat-BoldItalic.ttf \
  res/fonts/Montserrat-Light.ttf \
  res/fonts/Montserrat-Bold.ttf \
  res/fonts/Montserrat-MediumItalic.ttf \
  res/fonts/Montserrat-ExtraBoldItalic.ttf \
  res/fonts/Montserrat-Medium.ttf \
  res/fonts/Montserrat-ExtraBold.ttf \
  res/fonts/Montserrat-Regular.ttf \
  res/fonts/Montserrat-ExtraLightItalic.ttf \
  res/fonts/Montserrat-SemiBoldItalic.ttf \
  res/fonts/RobotoMono-Italic.ttf \
  res/fonts/RobotoMono-LightItalic.ttf \
  res/fonts/RobotoMono-MediumItalic.ttf \
  res/fonts/RobotoMono-ThinItalic.ttf \
  res/fonts/RobotoMono-Light.ttf \
  res/fonts/RobotoMono-Medium.ttf \
  res/fonts/RobotoMono-Thin.ttf \
  res/fonts/RobotoMono-Regular.ttf \
  res/fonts/RobotoMono-BoldItalic.ttf \
  res/fonts/RobotoMono-Bold.ttf

BITCOIN_QT_CPP = \
  bitcoin.cpp \
  bitcoinaddressvalidator.cpp \
  bitcoinamountfield.cpp \
  bitcoingui.cpp \
  bitcoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  shiftdialog.cpp \
  coinnectordialog.cpp \
  qrcodedialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  verticallabel.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
BITCOIN_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  platformstyle.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp \
  reportview.cpp \
  snapwidget.cpp \
  verticallabel.cpp \
  qimagesource.cpp \
  createmultisigaddrdialog.cpp \
  multisigdialog.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png \
  res/images/LOGO.png \
  res/images/mainbg.png \
  res/images/about_bitcoin.png \
  res/images/paper_wallet.png \
  res/images/about.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

FEDORACOIN_RC = res/fedoracoin-qt-res.rc

libbitcoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libbitcoinqt_a_SOURCES = $(BITCOIN_QT_CPP) $(BITCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(RES_THEMES) $(RES_FONTS)

nodist_libbitcoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libbitcoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# fedoracoin-qt binary #
fedoracoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
fedoracoin_qt_SOURCES = bitcoin.cpp
if TARGET_DARWIN
  fedoracoin_qt_SOURCES += $(FEDORACOIN_MM)
endif
if TARGET_WINDOWS
  fedoracoin_qt_SOURCES += $(FEDORACOIN_RC)
endif
fedoracoin_qt_LDADD = libbitcoinqt.a $(LIBBITCOIN_SERVER)
if ENABLE_WALLET
fedoracoin_qt_LDADD += $(LIBBITCOIN_WALLET)
endif
fedoracoin_qt_LDADD += $(LIBBITCOIN_CLI) $(LIBBITCOIN_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
fedoracoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

bitcoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/bitcoinstrings.cpp

translate: bitcoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(BITCOIN_QT_CPP) $(BITCOIN_QT_H) $(FEDORACOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/bitcoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name bitcoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
