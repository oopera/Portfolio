#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_SitzkomfortPaketCheckbox_toggled(bool checked);
    void on_SpiegelPaketCheckbox_toggled(bool checked);
    void on_SpurPaketCheckbox_2_toggled(bool checked);
    void on_FahrAssistenzPaketCheckbox_toggled(bool checked);
    void on_Diesel_toggled(bool checked);
    void on_Hybrid_toggled(bool checked);
    void on_Elektro_toggled(bool checked);
    void on_GTronic_toggled(bool checked);
    void on_Automatikgetriebe_toggled(bool checked);
    void on_HundertfuenfzehnKW_toggled(bool checked);
    void on_HunderatchtzehKW_toggled(bool checked);
    void on_Winterreifen_toggled(bool checked);
    void on_Anhaengerkupplung_toggled(bool checked);
    void on_Sitzheizung_toggled(bool checked);
    void on_checkBox_toggled(bool checked);
    void on_FarbAuswahl_currentIndexChanged(int index);
    void on_KonfigurationSpeichern_triggered();
    void on_FelgenAuswahl_currentIndexChanged(int index);
    void on_ZierelementAuswahl_currentIndexChanged(int index);
    void on_SItzBezugAuswahl_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
