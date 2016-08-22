#include <QtGui>
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    quoteModel = new QSortFilterProxyModel;
    quoteModel->setDynamicSortFilter(true);

    ui->quoteView->setRootIsDecorated(false);
    ui->quoteView->setAlternatingRowColors(true);
    ui->quoteView->setModel(quoteModel);
    ui->quoteView->setSortingEnabled(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setQuoteModel(QAbstractItemModel *model)
{
    quoteModel->setSourceModel(model);
}
