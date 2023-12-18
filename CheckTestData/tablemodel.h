#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QObject>
#include <QAbstractTableModel>

class TableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit TableModel(QObject *parent = nullptr);
    // Interface for QAbstractTableModel
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex())const override;
    QVariant data(const QModelIndex &index, int role= Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole)const override;
    void setHeaders( const QStringList & headerList);
    void addRow(const QStringList &rowData);
    void loadData(const QString &file);
    void clear();
    QString getDate();
    QString getFilename();
    QString getOperator();
    QString getOrder();
    QString getDelivery();
    QString getDeliveryPos();
signals:

private:
    QStringList headers;
    QString date;
    QString filename;
    QString op;
    QString order;
    QString delivery;
    QString deliverypos;
    QList<QStringList> modelData;
};

#endif // TABLEMODEL_H
