#ifndef SECQUOTERMODEL_H
#define SECQUOTERMODEL_H

#include <QAbstractItemModel>
#include "ZQThostFtdcMdApi.h"

class SecQuoterModel : public QAbstractItemModel
{
public:
    // When subclassing QAbstractItemModel, at the very least you must implement index(), parent(), rowCount(), columnCount(), and data().
    // These functions are used in all read-only models, and form the basis of editable models.
    explicit SecQuoterModel(QObject *parent = 0);
    ~SecQuoterModel();
    QModelIndex index ( int row, int column, const QModelIndex & parent = QModelIndex() ) const;
    QModelIndex	parent ( const QModelIndex & index ) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data ( const QModelIndex & index, int role = Qt::DisplayRole ) const;
    QVariant headerData ( int section, Qt::Orientation orientation, int role = Qt::DisplayRole ) const;

    void updateQuoterTab(CZQThostFtdcDepthMarketDataField *pDepthMarketData);
private:

};

#endif // SECQUOTERMODEL_H
