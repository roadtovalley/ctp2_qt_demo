#-------------------------------------------------
#
# Project created by QtCreator 2016-08-16T11:05:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ctp2_qt_demo
TEMPLATE = app


SOURCES += src/main.cpp \
    src/SecQuoterSpi.cpp \
    src/SecTraderSpi.cpp \
    src/widget.cpp \
    src/ctpthread.cpp

HEADERS  += src/SecQuoterSpi.h \
    src/SecTraderSpi.h \
    src/widget.h \
    src/ctpthread.h

FORMS    += src/widget.ui

win32: LIBS += -L$$PWD/api/sec_ctp/win32/traderapi/ -lzqthosttraderapi -L$$PWD/api/sec_ctp/win32/quoterapi/ -lzqthostmdapi
else:win64: LIBS += -L$$PWD/api/sec_ctp/win64/traderapi/ -lzqthosttraderapi -L$$PWD/api/sec_ctp/win64/quoterapi/ -lzqthostmdapi
else:unix: LIBS += -L$$PWD/api/sec_ctp/linux64/traderapi/ -lzqthosttraderapi -L$$PWD/api/sec_ctp/linux64/quoterapi/ -lzqthostmdapi -ldl

win32: INCLUDEPATH += $$PWD/api/sec_ctp/win32/traderapi
else:win64: INCLUDEPATH += $$PWD/api/sec_ctp/win64/traderapi
else:unix: INCLUDEPATH += $$PWD/api/sec_ctp/linux64/traderapi

win32: INCLUDEPATH += $$PWD/api/sec_ctp/win32/quoterapi
else:win64: INCLUDEPATH += $$PWD/api/sec_ctp/win64/quoterapi
else:unix: INCLUDEPATH += $$PWD/api/sec_ctp/linux64/quoterapi

win32: DEPENDPATH += $$PWD/api/sec_ctp/win32/traderapi
else:win64: DEPENDPATH += $$PWD/api/sec_ctp/win64/traderapi
else:unix: DEPENDPATH += $$PWD/api/sec_ctp/linux64/traderapi

win32: DEPENDPATH += $$PWD/api/sec_ctp/win32/quoterapi
else:win64: DEPENDPATH += $$PWD/api/sec_ctp/win64/quoterapi
else:unix: DEPENDPATH += $$PWD/api/sec_ctp/linux64/quoterapi

OTHER_FILES += \
    resources/main.rc
RC_FILE = \
  resources/main.rc
