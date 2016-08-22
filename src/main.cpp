#include <QtGui>
#include <QApplication>
#include <string>
#include <stdio.h>
#include <iostream>

#include "widget.h"
#include "ctpthread.h"

#ifdef __unix__                   /* __unix__ is usually defined by compilers targeting Unix systems */
#define OS_Windows 0
#include <unistd.h>
#elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */
#define OS_Windows 1
#include <windows.h>
#endif

QStandardItemModel *createQuoteModel(QObject *parent)
{
    QStandardItemModel *model = new QStandardItemModel(0, 14, parent);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("合约代码"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("交易所代码"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("合约名称"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("涨跌幅"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("今开盘"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("最高价"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("最低价"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("最新价"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("昨收盘"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("成交数量"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("成交金额"));
    model->setHeaderData(11, Qt::Horizontal, QObject::tr("涨停板价"));
    model->setHeaderData(12, Qt::Horizontal, QObject::tr("跌停板价"));
    model->setHeaderData(13, Qt::Horizontal, QObject::tr("最后修改时间"));

    return model;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    Widget w;
    ctpThread thrd_ctp;
    QStandardItemModel *quoteModel = createQuoteModel(&w);
    w.setQuoteModel(quoteModel);
    w.show();
    thrd_ctp.setQuoteModel(quoteModel);
    thrd_ctp.start();
    return a.exec();
}
