#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <settings.h>
#include <QChartView>
#include <QShortcut>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->settings = new Settings();
    this->diagrammbuilder = new Diagrambuilder();
    statusBar() -> showMessage("Program started, load Data by File -> Open");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::selectFile(){
    this -> files = QFileDialog::getOpenFileNames(this, tr("Open File"),"/User/",tr("Text Files (*.csv)"));
}

void MainWindow::on_loadButton_clicked()
{
    // create new model
    this->model = new TableModel();
    ui->tableView->setModel(this->model);
    this->model->loadData(this->files.at(0));
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
    ui->dateLine->setText(this->model->getDate());
    ui->fileLine->setText(this->model->getFilename());
    ui->operatorLine->setText(this->model->getOperator());
    ui->orderLine->setText(this->model->getOrder());
    ui->deliveryLine->setText(this->model->getDelivery());
    ui->deliveryposLine->setText(this->model->getDeliveryPos());
    ui->checkButton->setEnabled(true);
}


void MainWindow::on_checkFinished(int ok, int nok, int rows){
    qDebug() <<"perform check finished, mark on statusbar with data: ok: "<<ok<<", nok: "<<nok<<", rows: "<<rows;
    statusBar()->showMessage(QString("Check performed: %1/%3 OK, %2/%3 not OK (%4%)")
                        .arg(ok)
                        .arg(nok)
                        .arg(rows)
                        .arg(QString::number((static_cast<double>(ok) / rows) * 100, 'f', 2)));
}

void MainWindow::on_checkButton_clicked()
{
    this->checkmodel = new CheckModel();
    this->connect(this->checkmodel, &CheckModel::checkFinished, this, &MainWindow::on_checkFinished);
    this->checkmodel->performCheck(*model, *settings);
    ui->tableView_2->setModel(this->checkmodel);
    ui->tableView_2->resizeColumnsToContents();
    QChart *chart = this->diagrammbuilder->calcDistribution(*model, *settings);
    QLayoutItem* item;
    QLayout* layout = ui->diagram->layout();
    if(layout != nullptr){
        while ((item = ui->diagram->layout()->takeAt(0)) != nullptr)
        {
            delete item->widget();
            delete item;
        }
    }
    delete layout;
    QChartView *view = new QChartView(chart);
    view->setRenderHint(QPainter::Antialiasing);
    QVBoxLayout *chartLayout = new QVBoxLayout(ui->diagram);
    chartLayout->addWidget(view);
}

void MainWindow::on_actionOpenFile_triggered()
{
    this ->selectFile();
    if(this->files.size() > 0){
        ui->fileLineEdit->setText(this->files.at(0));
        ui->loadButton->setEnabled(true);
    }
}


void MainWindow::on_settings_action_triggered()
{
    this->settings->exec();
}

