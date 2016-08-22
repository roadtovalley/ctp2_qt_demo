#ifndef CTPTHREAD_H
#define CTPTHREAD_H

#include <QtGui>
#include <QThread>
#include <iostream>
#include <string>
#include <stdio.h>
#include <iostream>
#include "SecQuoterSpi.h"
#include "SecTraderSpi.h"

#ifdef __unix__                   /* __unix__ is usually defined by compilers targeting Unix systems */
#define OS_Windows 0
#include <unistd.h>
#elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */
#define OS_Windows 1
#include <windows.h>
#endif

class ctpThread : public QThread
{
    Q_OBJECT
public:
    explicit ctpThread(QObject *parent = 0);

    void sl();
    void setQuoteModel(QStandardItemModel *model);
protected:
    void run();

private:
    volatile bool stopped;
    QStandardItemModel *quoteModel;
};

#endif // CTPTHREAD_H
