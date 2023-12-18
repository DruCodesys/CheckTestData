#include "settings.h"
#include "ui_settings.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>

// TODO: Doublevalidator
// TODO: Save settings when ok, discard when cancel
Settings::Settings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
    loadSettings();
    ui->minReseatPressure->setText(QString::number(this->minReseat));
    ui->reseatPressure ->setText(QString::number(this->reseat));
    ui->maxReseatPressure->setText(QString::number(this->maxReseat));
    ui->minCrackPressure->setText(QString::number(this->minCrack));
    ui->crackPressure->setText(QString::number(this->crack));
    ui->maxCrackPressure->setText(QString::number(this->maxCrack));
    ui->maxFlowPressure->setText(QString::number(this->maxFP));
    ui->minFlow->setText(QString::number(this->minFR));
}

Settings::~Settings()
{
    delete ui;
}
void Settings::setMinReseat(double val){
    this->minReseat = val;
}
void Settings::setReseat(double val){
    this->reseat = val;
}
void Settings::setMaxReseat(double val){
    this->maxReseat = val;
}
void Settings::setMinCrack(double val){
    this->minCrack = val;
}
void Settings::setCrack(double val){
    this->crack = val;
}
void Settings::setMaxCrack(double val){
    this->maxCrack = val;
}
void Settings::setMaxFP(double val){
    this->maxFP = val;
}
void Settings::setMinFR(double val){
    this->minFR = val;
}

double Settings::getMinReseat(){
    return this->minReseat;
}
double Settings::getReseat(){
    return this->reseat;
}
double Settings::getMaxReseat(){
    return this->maxReseat;
}
double Settings::getMinCrack(){
    return this->minCrack;
}
double Settings::getCrack(){
    return this->crack;
}
double Settings::getMaxCrack(){
    return this->maxCrack;
}
double Settings::getMaxFP(){
    return this->maxFP;
}
double Settings::getMinFR(){
    return this->minFR;
}

void Settings::on_buttonBox_accepted()
{
    bool conversionOk = true;
    this->minReseat = ui->minReseatPressure->text().toDouble(&conversionOk);
    if(!conversionOk){qDebug()<< "Error while saving min reseat pressure: not a double! "<< this->minReseat; conversionOk =! conversionOk;}
    this->reseat = ui->reseatPressure->text().toDouble(&conversionOk);
    if(!conversionOk){qDebug()<< "Error while saving reseat pressure: not a double!"<< this->reseat; conversionOk =! conversionOk;}
    this->maxReseat = ui->maxReseatPressure->text().toDouble(&conversionOk);
    if(!conversionOk){qDebug()<< "Error while saving max reseat pressure: not a double!"<< this->maxReseat; conversionOk =! conversionOk;}
    this->minCrack = ui->minCrackPressure->text().toDouble(&conversionOk);
    if(!conversionOk){qDebug()<< "Error while saving min crack pressure: not a double!"<< this->minCrack; conversionOk =! conversionOk;}
    this->crack = ui->crackPressure->text().toDouble(&conversionOk);
    if(!conversionOk){qDebug()<< "Error while saving crack pressure: not a double!"<< this->crack; conversionOk =! conversionOk;}
    this->maxCrack = ui->maxCrackPressure->text().toDouble(&conversionOk);
    if(!conversionOk){qDebug()<< "Error while saving min crack pressure: not a double!"<< this->maxCrack; conversionOk =! conversionOk;}
    this->minFR = ui->minFlow->text().toDouble(&conversionOk);
    if(!conversionOk){qDebug()<< "Error while saving flow rate pressure: not a double!"<< this->minFR; conversionOk =! conversionOk;}
    this->maxFP = ui->maxFlowPressure->text().toDouble(&conversionOk);
    if(!conversionOk){qDebug()<< "Error while saving flow pressure pressure: not a double!"<< this->maxFP; conversionOk =! conversionOk;}

    QJsonObject settingObject;
    settingObject["minReseat"] = getMinReseat();
    settingObject["reseat"] = getReseat();
    settingObject["maxReseat"] = getMaxReseat();
    settingObject["minCrack"] = getMinCrack();
    settingObject["crack"]= getCrack();
    settingObject["maxCrack"] = getMaxCrack();
    settingObject["maxFP"] = getMaxFP();
    settingObject["minFR"] = getMinFR();

    QJsonDocument jsonDoc(settingObject);
    QFile file(this->filename);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        out << jsonDoc.toJson();
        file.close();
    }else{
        qDebug()<<  "error while saviong settings";
    }
    this->close();
}


void Settings::loadSettings()
{
    QFile file(this->filename);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString jsonString = in.readAll();
        file.close();

        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonString.toUtf8());
        QJsonObject settingsObject = jsonDoc.object();

        // Check if the JSON document is valid and contains the expected keys
        if (!jsonDoc.isNull() && !jsonDoc.isEmpty() && settingsObject.contains("minReseat"))
        {
            // Load the settings from the JSON object
            qDebug() << getMinReseat();
            this->setMinReseat(settingsObject["minReseat"].toDouble());
            qDebug() << settingsObject["minReseat"].toDouble();
            qDebug() << this->getMinReseat();
            setReseat(settingsObject["reseat"].toDouble());
            setMaxReseat(settingsObject["maxReseat"].toDouble());
            setMinCrack(settingsObject["minCrack"].toDouble());
            setCrack(settingsObject["crack"].toDouble());
            setMaxCrack(settingsObject["maxCrack"].toDouble());
            setMaxFP(settingsObject["maxFP"].toDouble());
            setMinFR(settingsObject["minFR"].toDouble());

            qDebug() << "Settings loaded from settings.json";
        }
        else
        {
            qDebug() << "Error loading settings. Invalid or missing keys in JSON file.";
        }
    }
    else
    {
        qDebug() << "Error opening settings.json for reading.";
    }
}
