#include "checkmodel.h"
#include <QPixmap>

CheckModel::CheckModel(QObject *parent)
    : QAbstractTableModel{parent}
{}

int CheckModel::rowCount(const QModelIndex &parent) const {
    if(this->modelData.isEmpty()|| parent.isValid()){
        return 0;
    }else{
        return this->modelData.size();
    }
}
int CheckModel::columnCount(const QModelIndex &parent)const {
    if(this->modelData.isEmpty()||parent.isValid()){
        return 0;
    }else{
        return this->modelData.at(0).size();
    }
}
QVariant CheckModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid()) {
        return QVariant();
    }

    if (role == Qt::DisplayRole || role == Qt::EditRole) {
        return this->modelData[index.row()][index.column()];
    } else if (role == Qt::ForegroundRole) {
        // Set font color based on the value
        QString value = this->modelData[index.row()][index.column()];
        if (value == "OK") {
            // Green color for "OK"
            return QBrush(Qt::green);
        } else if (value == " X ") {
            // Red color for "X"
            return QBrush(Qt::red);
        }
    } else if (role == Qt::FontRole){
        QFont font;
        if (index.column() == 0){
            font.setBold(true);
        } else{
            QString value = this->modelData[index.row()][index.column()];
            if(value == " X "){
                font.setBold(true);
            }
        }
        return font;
    } else if (role == Qt::BackgroundRole){
        // Set font color based on the value
        QString value = this->modelData[index.row()][index.column()];
        if (value == " X ") {
            // Red color for "X"
            QColor color = QColor("#FFA500");
            color.setAlpha(0.2*255);
            return QBrush(color);
        }
    }
    return QVariant();
}
QVariant CheckModel::headerData(int section, Qt::Orientation orientation, int role)const {
    if(role == Qt::DisplayRole){
        if (orientation == Qt::Horizontal && section >= 0 && section < this->headers.size()){
            return this->headers[section];
        }
    }else if ( role == Qt::FontRole && section >= 0 && section < this->headers.size()){
        QFont font;
        font .setBold(true);
        return font;
    }
    return QVariant();
}

void CheckModel::addRow(const QStringList &rowData){
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    this->modelData.append(rowData);
    endInsertRows();
}
void CheckModel::clear(){
    beginResetModel();
    if(!modelData.isEmpty()){
        modelData.clear();
    }
    endResetModel();
}
void CheckModel::performCheck(TableModel &model, Settings &settings){
    this->beginResetModel();
    int ok = 0;
    int nok = 0;
    for(int i =0; i< model.rowCount(); i++){
        QStringList rowData = QStringList();
        QModelIndex sn_index = model.index(i, 0);
        rowData.append(model.data(sn_index).toString());
        bool error = false;
        for(int j =0; j<7; j++){
            QModelIndex crack_index = model.index(i, j+2);
            QModelIndex reseat_index = model.index(i, j+10);
            bool conversionOk;
            double crack = model.data(crack_index).toDouble(&conversionOk);
            if(!conversionOk){
                qDebug()<< "error while converting crack "<< model.data(crack_index) << " to double row = " << crack_index.row() <<", col = "<< crack_index.column();
                return;
            }
            double reseat = model.data(reseat_index).toDouble(&conversionOk);
            if(!conversionOk){
                qDebug()<< "error while converting reseat "<< model.data(reseat_index) << " to double row = " << reseat_index.row() <<", col = "<< reseat_index.column();
                return;
            }
            bool res = reseat < crack;
            if(!error){
                error = !res? true : false;
            }
            rowData.append(res ? "OK" : " X ");
        }
        QModelIndex flowIndex = model.index(i,18);
        QModelIndex flowpressureIndex = model.index(i,19);
        rowData.append(model.data(flowIndex).toDouble() > settings.getMinFR() ? "OK": " X ");
        rowData.append(model.data(flowpressureIndex).toDouble()< settings.getMaxFP() ? "OK": " X ");
        if(!error){
            error = !(model.data(flowIndex).toDouble()>settings.getMinFR() &&model.data(flowpressureIndex).toDouble()<settings.getMaxFP());
        }
        this->addRow(rowData);
        ok += !error ? 1 : 0;
        nok += error ? 1 : 0;
    }
    this->endResetModel();
    emit this->checkFinished(ok, nok, this->rowCount());
}
