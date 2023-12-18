#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    void loadSettings();

    void setMinReseat(double val);
    void setReseat(double val);
    void setMaxReseat(double val);
    void setMinCrack(double val);
    void setCrack(double val);
    void setMaxCrack(double val);
    void setMaxFP(double val);
    void setMinFR(double val);

    double getMinReseat();
    double getReseat();
    double getMaxReseat();
    double getMinCrack();
    double getCrack();
    double getMaxCrack();
    double getMaxFP();
    double getMinFR();

private slots:
    void on_buttonBox_accepted();



private:
    Ui::Settings *ui;
    double minReseat = 1.6;
    double reseat = 1.8;
    double maxReseat = 2;
    double minCrack = 1.8;
    double crack = 2;
    double maxCrack = 2.2;
    double maxFP = 3;
    double minFR = 8;
    QString filename = "settings.json";
};

#endif // SETTINGS_H
