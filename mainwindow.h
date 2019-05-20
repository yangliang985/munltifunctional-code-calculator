#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    QString on_pushButton_1_clicked();

    QString on_pushButton_0_clicked();

     void   on_textBrowser_destroyed();

    QString on_pushButton_2_clicked();

    QString on_pushButton_3_clicked();

    QString on_pushButton_4_clicked();

    QString on_pushButton_5_clicked();

    QString on_pushButton_6_clicked();

    QString on_pushButton_7_clicked();

    QString on_pushButton_8_clicked();

    QString on_pushButton_9_clicked();

    QString on_pushButton_10_clicked();

    QString on_pushButton_11_clicked();

    QString on_pushButton_13_clicked();

    QString on_pushButton_12_clicked();

    QString on_pushButton_14_clicked();

    QString on_pushButton_15_clicked();

    QString on_pushButton_16_clicked();

    QString on_pushButton_17_clicked();

    QString on_pushButton_18_clicked();

    QString on_pushButton_19_clicked();

    QString on_pushButton_20_clicked();

    QString on_pushButton_21_clicked();

    QString on_pushButton_22_clicked();

    QString  on_pushButton_23_clicked();

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButton0_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

private:

    int result_array[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int click_num  = 0;
    int click_num0 = 0 ,click_num1 = 0,click_num2 = 0, click_num3 =0, click_num4 =0,
        click_num5 =0, click_num6 =0, click_num7 =0, click_num8 =0, click_num9 =0,
        click_num10 =0, click_num11 =0, click_num12 =0, click_num13 =0, click_num14 =0,
        click_num15 =0, click_num16 =0, click_num17 =0, click_num18 =0, click_num19 =0,
        click_num20 =0, click_num21 =0, click_num22 =0, click_num23 = 0;
public:

    int result_num_sum ;
    int result_num_temp;
    QString str;
    QString temp;
    QString result_str =  "";
    int result_array_num;

public:
   int result_sum();
   void pushButton_changeColor(int result_array_num,QPushButton *pushButton_num);
   void result_show();
   QString result_num_str();
   QString show_result(QString str);
   void result_str_to_num( int result_num_temp);
   void change_all_color();
   void change_click_num(int result_array_num );
   void init();
};

#endif // MAINWINDOW_H
