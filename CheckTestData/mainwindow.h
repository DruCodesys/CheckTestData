#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <tablemodel.h>
#include <checkmodel.h>
#include <settings.h>
#include <diagrambuilder.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void selectFile();
    void setModel(TableModel &model);

private slots:

    void on_loadButton_clicked();

    void on_checkButton_clicked();

    void on_checkFinished(int ok, int nok, int rows);

    void on_actionOpenFile_triggered();

    void on_settings_action_triggered();

private:
    Ui::MainWindow *ui;
    QStringList files;
    TableModel *model;
    CheckModel *checkmodel;
    Settings *settings;
    Diagrambuilder *diagrammbuilder;
};
#endif // MAINWINDOW_H
