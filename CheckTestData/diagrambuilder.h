#ifndef DIAGRAMBUILDER_H
#define DIAGRAMBUILDER_H

#include <QObject>
#include <tablemodel.h>
#include <settings.h>
#include <QChart>
#include <QScatterSeries>

class Diagrambuilder : public QObject
{
    Q_OBJECT
public:
    explicit Diagrambuilder(QObject *parent = nullptr);
    QChart* calcDistribution(TableModel &model, Settings &settings);

private:
    QList<double> crack_delta;
    QList<double> reseat_delta;


signals:
};

#endif // DIAGRAMBUILDER_H
