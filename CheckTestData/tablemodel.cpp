#include "tablemodel.h"
#include <QFile>
#include <QFont>

TableModel::TableModel(QObject *parent)
    : QAbstractTableModel{parent}
{}

int TableModel::rowCount(const QModelIndex &parent)const{
    if( !parent.isValid()){
        return this->modelData.size();
    }else{
        return 0;
    }
}
int TableModel::columnCount(const QModelIndex &parent)const {
    if(parent.isValid() || this->modelData.isEmpty()){
        return 0;
    }else{
        return this->modelData.at(0).size();
    }
}
QVariant TableModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid()){
        return QVariant();
    }else if (role == Qt::DisplayRole){
        return this->modelData[index.row()][index.column()];
    }else if ( role == Qt::FontRole && index.column() == 0){
        QFont font;
        font.setBold(true);
        return font;
    }
    return QVariant();
}

QVariant TableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role == Qt::DisplayRole) {
        if (orientation == Qt::Horizontal && section >= 0 && section < this->headers.size())
            return this->headers[section];
    } else if (role == Qt::FontRole && orientation == Qt::Horizontal) {
        // Set the font weight to bold for horizontal headers
        QFont font;
        font.setBold(true);
        return font;
    }

    return QVariant();
}

void TableModel::setHeaders( const QStringList & headerList){
    beginResetModel();
    this->headers = headerList;
    endResetModel();
}
void TableModel::addRow(const QStringList &rowData){
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    this->modelData.append(rowData);
    endInsertRows();
}
void TableModel::clear(){
    beginResetModel();
    if(!modelData.isEmpty()){
        modelData.clear();
    }
    endResetModel();
}
void TableModel::loadData(const QString &filename){
    this->clear();

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Error: Unable to open file" << filename;
        return;
    }

    // read headers
    QTextStream in(&file);
    QString headersLine = in.readLine();
    QStringList headers = headersLine.split('\t');
    //qDebug() << "About to set headers: "<< headers;
    this->setHeaders(headers);

    // read metadata
    QString meta = in.readLine();
    QStringList metas = meta.split('\t');
    this->date = metas.at(0);
    this->filename = metas.at(1);
    this->op = metas.at(2);
    this->order = metas.at(3);
    this->delivery = metas.at(4);
    this->deliverypos = metas.at(5);

    // read in lines
    beginResetModel();
    while(!in.atEnd()){
        QString read = in.readLine();
        QStringList fields = read.split('\t');
        if (fields.size()==headers.size() && fields.at(0) != "S/N" ){
            this->addRow(fields);
        }else if(fields.size() > 6 && fields.size()< headers.size()){ //sometimes somehow the last line misses the last delimiter
            while(fields.size() < headers.size()){
                fields.append("");
            }
            this->addRow(fields);
        }else if(fields.size() > headers.size()){
            QStringList validFields;
            for ( int i = 0; i< headers.size(); i++){
                validFields.append(fields.at(i));
            }
            this->addRow(validFields);
        }
    }
    file.close();
    endResetModel();
}
QString TableModel::getDate(){
    return this->date;
}
QString TableModel::getFilename(){
    return this->filename;
}
QString TableModel::getOperator(){
    return this->op;
}
QString TableModel::getOrder(){
    return this->order;
}
QString TableModel::getDelivery(){
    return this->delivery;
}
QString TableModel::getDeliveryPos(){
    return this->deliverypos;
}

