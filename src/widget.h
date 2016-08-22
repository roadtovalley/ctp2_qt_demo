#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QAbstractItemModel;
class QSortFilterProxyModel;
QT_END_NAMESPACE

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void setQuoteModel(QAbstractItemModel *model);
private:
    Ui::Widget *ui;
    QSortFilterProxyModel *quoteModel;
};

#endif // WIDGET_H
