#include "diagrambuilder.h"
#include <QValueAxis>

Diagrambuilder::Diagrambuilder(QObject *parent)
    : QObject{parent}
{}

QChart* Diagrambuilder::calcDistribution(TableModel &model, Settings &setting){
    this->crack_delta.clear();
    this->reseat_delta.clear();
    double maxCrackDeviation = 0.0;
    double maxReseatDeviation = 0.0;
    QList<QScatterSeries*> serieslist;
    for(int i=0; i< model.rowCount(); i++){
        QScatterSeries *series = new QScatterSeries();
        QModelIndex sn_index = model.index(i, 0);
        QString sn = model.data(sn_index).toString();
        series->setName(sn);
        series->setMarkerShape(QScatterSeries::MarkerShapeTriangle);
        series->setMarkerSize(15);
        for(int j = 0; j < 8; j++){
            QModelIndex crack_index = model.index(i, j+2);
            QModelIndex reseat_index = model.index(i, j+10);
            double crack = model.data(crack_index).toDouble();
            double reseat = model.data(reseat_index).toDouble();
            double crackDeviation = qAbs(crack - setting.getCrack());
            double reseatDeviation = qAbs(reseat - setting.getReseat());
            maxCrackDeviation = qMax(maxCrackDeviation, crackDeviation);
            maxReseatDeviation = qMax(maxReseatDeviation, reseatDeviation);
            this->crack_delta.append(crack - setting.getCrack());
            this->reseat_delta.append(reseat - setting.getReseat());
            series->append(QPointF(crackDeviation, reseatDeviation));
        }
        for(int x = 0; x<8 ; x++){
            qDebug()<< series->at(x);
        }
        serieslist.append(series);
    }
    // create ScatterSeries and Scatterplot


    QValueAxis *crackAxis = new QValueAxis();
    crackAxis->setRange(setting.getMinCrack() - setting.getCrack(), setting.getMaxCrack() - setting.getCrack());
    crackAxis->setTitleText("Crack Deviation");

    QValueAxis *reseatAxis = new QValueAxis();
    reseatAxis->setRange(setting.getMinReseat()-setting.getReseat(), setting.getMaxReseat()-setting.getReseat());
    reseatAxis->setTitleText("Reseat Deviation");

    QChart *chart = new QChart();
    chart->addAxis(crackAxis, Qt::AlignBottom);
    chart->addAxis(reseatAxis, Qt::AlignLeft);
    for(int i =0; i< serieslist.size(); i++){
        chart->addSeries(serieslist.at(i));
        serieslist.at(i)->attachAxis(crackAxis);
        serieslist.at(i)->attachAxis(reseatAxis);
    }

    chart->setTitle("Distribution from nominal Crack/ Reseat");
    chart->setDropShadowEnabled(false);
    chart->legend()->setMarkerShape(QLegend::MarkerShapeFromSeries);
    return chart;
}
