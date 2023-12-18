#ifndef CHECKMODEL_H
#define CHECKMODEL_H

#include <QAbstractTableModel>
#include <tablemodel.h>
#include <settings.h>

class CheckModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit CheckModel(QObject *parent = nullptr);

    // Interface for QAbstractTableModel
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex())const override;
    QVariant data(const QModelIndex &index, int role= Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole)const override;
    void addRow(const QStringList &rowData);
    void clear();
    void performCheck(TableModel &model, Settings &settings);
signals:
    void checkFinished(int ok, int nok, int rows);

private:
    QList<QStringList> modelData;
    QStringList headers = {"S/N", "Test1", "Test2", "Test3", "Test4", "Test5", "Test6", "Test7", "Flowtest", "FlowPressure"};
};
#endif // CHECKMODEL_H
