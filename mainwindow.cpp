#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::result_sum()
{

    int  result_num_sum = 1 * result_array[0] + 2 * result_array[1] + 4 * result_array[2] + 8 * result_array[3] +
                     16 * result_array[4] + 32 * result_array[5] + 64 * result_array[6] + 128 * result_array[7] +
                     256 * result_array[8] + 512 * result_array[9] + 1024 * result_array[10] + 2048 * result_array[11] +
                     4096 * result_array[12] + 8192 * result_array[13] + 16384 * result_array[14] + 32768 * result_array[15] +
                     65536 * result_array[16] + 131072 * result_array[17] + 262144 * result_array[18] + 524288 * result_array[19] +
                     1048576 * result_array[20] + 2097152 * result_array[21] + 4194304 * result_array[22] + 8388608 * result_array[23];
    return result_num_sum;
}

void MainWindow ::init()
{
    for (int i = 0 ;i< 24;i++)
    {
        result_array[i] = 0;
    }
    click_num0 = 0 ,click_num1 = 0,click_num2 = 0, click_num3 =0, click_num4 =0,
    click_num5 =0, click_num6 =0, click_num7 =0, click_num8 =0, click_num9 =0,
    click_num10 =0, click_num11 =0, click_num12 =0, click_num13 =0, click_num14 =0,
    click_num15 =0, click_num16 =0, click_num17 =0, click_num18 =0, click_num19 =0,
    click_num20 =0, click_num21 =0, click_num22 =0, click_num23 = 0;
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
     //return result_str;
    ui -> pushButton_0 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_1 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_2 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_3 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_4 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_5 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_6 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_7 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_8 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_9 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_10 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_11 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_12 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_13 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_14 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_15 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_16 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_17 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_18 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_19 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_20 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_21 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_22 -> setStyleSheet("background-color:rgb()");
    ui -> pushButton_23 -> setStyleSheet("background-color:rgb()");

}
QString MainWindow ::result_num_str()
{
     QString result_str = QString::number(MainWindow::result_sum());
     return result_str;
}

QString MainWindow::show_result(QString str)
{
     ui ->textBrowser-> setText(str);
    return str;
}

void  MainWindow::result_str_to_num( int result_num_temp)
{
    //result_num_temp = result_str.toInt();
    result_array[0] = (result_num_temp & 1) / 1;
    result_array[1] = (result_num_temp & 2) / 2;
    result_array[2] = (result_num_temp & 4) / 4;
    result_array[3] = (result_num_temp & 8) / 8;
    result_array[4] = (result_num_temp & 16) / 16;
    result_array[5] = (result_num_temp & 32) / 32;
    result_array[6] = (result_num_temp & 64) / 64;
    result_array[7] = (result_num_temp & 128) / 128;
    result_array[8] = (result_num_temp & 256) / 256;
    result_array[9] = (result_num_temp & 512) / 512;
    result_array[10] = (result_num_temp & 1024) / 1024;
    result_array[11] = (result_num_temp & 2048) / 2048;
    result_array[12] = (result_num_temp & 4096) / 4096;
    result_array[13] = (result_num_temp & 8192) / 8192;
    result_array[14] = (result_num_temp & 16384) / 16384;
    result_array[15] = (result_num_temp & 32768) / 32768;
    result_array[16] = (result_num_temp & 65536) / 65536;
    result_array[17] = (result_num_temp & 131072) / 131072;
    result_array[18] = (result_num_temp & 262144) / 262144;
    result_array[19] = (result_num_temp & 524288) / 524288;
    result_array[20] = (result_num_temp & 1048576) / 1048576;
    result_array[21] = (result_num_temp & 2097152) / 2097152;
    result_array[22] = (result_num_temp & 4194304) / 4194304;
    result_array[23] = (result_num_temp & 8388608) / 8388608;   
}

void MainWindow::change_all_color()
{
pushButton_changeColor( result_array[0],ui -> pushButton_0);
pushButton_changeColor( result_array[1],ui -> pushButton_1);
pushButton_changeColor( result_array[2],ui -> pushButton_2);
pushButton_changeColor( result_array[3],ui -> pushButton_3);
pushButton_changeColor( result_array[4],ui -> pushButton_4);
pushButton_changeColor( result_array[5],ui -> pushButton_5);
pushButton_changeColor( result_array[6],ui -> pushButton_6);
pushButton_changeColor( result_array[7],ui -> pushButton_7);
pushButton_changeColor( result_array[8],ui -> pushButton_8);
pushButton_changeColor( result_array[9],ui -> pushButton_9);
pushButton_changeColor( result_array[10],ui -> pushButton_10);
pushButton_changeColor( result_array[11],ui -> pushButton_11);
pushButton_changeColor( result_array[12],ui -> pushButton_12);
pushButton_changeColor( result_array[13],ui -> pushButton_13);
pushButton_changeColor( result_array[14],ui -> pushButton_14);
pushButton_changeColor( result_array[15],ui -> pushButton_15);
pushButton_changeColor( result_array[16],ui -> pushButton_16);
pushButton_changeColor( result_array[17],ui -> pushButton_17);
pushButton_changeColor( result_array[18],ui -> pushButton_18);
pushButton_changeColor( result_array[19],ui -> pushButton_19);
pushButton_changeColor( result_array[20],ui -> pushButton_20);
pushButton_changeColor( result_array[21],ui -> pushButton_21);
pushButton_changeColor( result_array[22],ui -> pushButton_22);
pushButton_changeColor( result_array[23],ui -> pushButton_23);

/*click_num0 = ((result_array[0] == 0) ? 0:1);
click_num1 = ((result_array[1] == 0) ? 0:1);
click_num2 = (result_array[2] == 0) ? 0:1;
click_num3 = result_array[3] == 0 ? 0:1;
click_num0 = result_array[4] == 0 ? 0:1;
click_num1 = result_array[5] == 0 ? 0:1;
click_num2 = result_array[6] == 0 ? 0:1;
click_num3 = result_array[7] == 0 ? 0:1;
click_num0 = result_array[8] == 0 ? 0:1;
click_num1 = result_array[9] == 0 ? 0:1;
click_num0 = result_array[10] == 0 ? 0:1;
click_num1 = result_array[11] == 0 ? 0:1;
click_num2 = result_array[12] == 0 ? 0:1;
click_num3 = result_array[13] == 0 ? 0:1;
click_num0 = result_array[14] == 0 ? 0:1;
click_num1 = result_array[15] == 0 ? 0:1;
click_num2 = result_array[16] == 0 ? 0:1;
click_num3 = result_array[17] == 0 ? 0:1;
click_num0 = result_array[18] == 0 ? 0:1;
click_num1 = result_array[19] == 0 ? 0:1;
click_num0 = result_array[20] == 0 ? 0:1;
click_num1 = result_array[21] == 0 ? 0:1;
click_num2 = result_array[22] == 0 ? 0:1;
click_num3 = result_array[23] == 0 ? 0:1;
*/
if(result_array[0] == 0)
{
    click_num0 = 0;
}
if(result_array[0] == 1)
{
    click_num0 = 1;
}

if(result_array[1] == 0)
{
    click_num1 = 0;
}
if(result_array[1] == 1)
{
    click_num1 = 1;
}

if(result_array[2] == 0)
{
    click_num2 = 0;
}
if(result_array[2] == 1)
{
    click_num2 = 1;
}

if(result_array[3] == 0)
{
    click_num3 = 0;
}
if(result_array[3] == 1)
{
    click_num3 = 1;
}

if(result_array[4] == 0)
{
    click_num4 = 0;
}
if(result_array[4] == 1)
{
    click_num4 = 1;
}

if(result_array[5] == 0)
{
    click_num5 = 0;
}
if(result_array[5] == 1)
{
    click_num5 = 1;
}

if(result_array[6] == 0)
{
    click_num6 = 0;
}
if(result_array[6] == 1)
{
    click_num6 = 1;
}
if(result_array[7] == 0)
{
    click_num7 = 0;
}
if(result_array[7] == 1)
{
    click_num7 = 1;
}

if(result_array[8] == 0)
{
    click_num8 = 0;
}
if(result_array[8] == 1)
{
    click_num8 = 1;
}

if(result_array[9] == 0)
{
    click_num9 = 0;
}
if(result_array[9] == 1)
{
    click_num9 = 1;
}

if(result_array[10] == 0)
{
    click_num10 = 0;
}
if(result_array[10] == 1)
{
    click_num10 = 1;
}

if(result_array[11] == 0)
{
    click_num11 = 0;
}
if(result_array[11] == 1)
{
    click_num11 = 1;
}

if(result_array[12] == 0)
{
    click_num12 = 0;
}
if(result_array[12] == 1)
{
    click_num12 = 1;
}

if(result_array[13] == 0)
{
    click_num13 = 0;
}
if(result_array[13] == 1)
{
    click_num13 = 1;
}

if(result_array[14] == 0)
{
    click_num14 = 0;
}
if(result_array[14] == 1)
{
    click_num14 = 1;
}

if(result_array[15] == 0)
{
    click_num15 = 0;
}
if(result_array[15] == 1)
{
    click_num15 = 1;
}

if(result_array[16] == 0)
{
    click_num16 = 0;
}
if(result_array[16] == 1)
{
    click_num16 = 1;
}

if(result_array[17] == 0)
{
    click_num17 = 0;
}
if(result_array[17] == 1)
{
    click_num17 = 1;
}

if(result_array[18] == 0)
{
    click_num18 = 0;
}
if(result_array[18] == 1)
{
    click_num18 = 1;
}

if(result_array[19] == 0)
{
    click_num19 = 0;
}
if(result_array[19] == 1)
{
    click_num19 = 1;
}

if(result_array[20] == 0)
{
    click_num20 = 0;
}
if(result_array[20] == 1)
{
    click_num20 = 1;
}

if(result_array[21] == 0)
{
    click_num21 = 0;
}
if(result_array[21] == 1)
{
    click_num21 = 1;
}

if(result_array[22] == 0)
{
    click_num22 = 0;
}
if(result_array[22] == 1)
{
    click_num22 = 1;
}

if(result_array[23] == 0)
{
    click_num23 = 0;
}
if(result_array[23] == 1)
{
    click_num23 = 1;
}
}

void MainWindow::pushButton_changeColor(int result_array_num,QPushButton *pushButton_num)
{
    if(result_array_num == 1)
    {
         pushButton_num -> setStyleSheet("background-color:rgb(255,0,0)");
    }
    if(result_array_num == 0)
    {
         pushButton_num -> setStyleSheet("background-color:rgb()");
    }

}

void MainWindow::on_textBrowser_destroyed()
{

}

QString  MainWindow::on_pushButton_0_clicked()
{
    click_num0 ++;
    result_array[0] = click_num0 % 2;
    pushButton_changeColor( result_array[0], ui -> pushButton_0);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;


}

QString MainWindow::on_pushButton_1_clicked()
{
    click_num1 ++;
    result_array[1] = click_num1 % 2;
    pushButton_changeColor( result_array[1],ui -> pushButton_1);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_2_clicked()
{
    click_num2 ++;
    result_array[2] = click_num2%2;
    pushButton_changeColor(result_array[2], ui -> pushButton_2);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_3_clicked()
{
    click_num3 ++;
    result_array[3] = click_num3%2;
    pushButton_changeColor( result_array[3],ui -> pushButton_3);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_4_clicked()
{
    click_num4 ++;
    result_array[4] = click_num4%2;
    pushButton_changeColor( result_array[4],ui -> pushButton_4);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_5_clicked()
{
    click_num5 ++;
    result_array[5] = click_num5%2;
    pushButton_changeColor( result_array[5],ui -> pushButton_5);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_6_clicked()
{
    click_num6 ++;
    result_array[6] = click_num6%2;
    pushButton_changeColor( result_array[6],ui -> pushButton_6);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_7_clicked()
{
    click_num7 ++;
    result_array[7] = click_num7%2;
    pushButton_changeColor( result_array[7],ui -> pushButton_7);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_8_clicked()
{
    click_num8 ++;
    result_array[8] = click_num8%2;
    pushButton_changeColor( result_array[8],ui -> pushButton_8);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_9_clicked()
{
    click_num9 ++;
    result_array[9] = click_num9%2;
    pushButton_changeColor( result_array[9],ui -> pushButton_9);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_10_clicked()
{
    click_num10 ++;
    result_array[10] = click_num10%2;
    pushButton_changeColor( result_array[10],ui -> pushButton_10);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_11_clicked()
{
    click_num11 ++;
    result_array[11] = click_num11%2;
    pushButton_changeColor( result_array[11],ui -> pushButton_11);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}
QString MainWindow::on_pushButton_12_clicked()
{
    click_num12++;
    result_array[12] = click_num12%2;
    pushButton_changeColor( result_array[12],ui -> pushButton_12);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_13_clicked()
{
    click_num13 ++;
    result_array[13] = click_num13%2;
    pushButton_changeColor( result_array[13],ui -> pushButton_13);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}


QString MainWindow::on_pushButton_14_clicked()
{
    click_num14 ++;
    result_array[14] = click_num14%2;
    pushButton_changeColor( result_array[14],ui -> pushButton_14);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_15_clicked()
{
    click_num15 ++;
    result_array[15] = click_num15%2;
    pushButton_changeColor( result_array[15],ui -> pushButton_15);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_16_clicked()
{
    click_num16 ++;
    result_array[16] = click_num16%2;
    pushButton_changeColor( result_array[16],ui -> pushButton_16);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString  MainWindow::on_pushButton_17_clicked()
{
    click_num17 ++;
    result_array[17] = click_num17%2;
    pushButton_changeColor( result_array[17],ui -> pushButton_17);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_18_clicked()
{
    click_num18 ++;
    result_array[18] = click_num18%2;
    pushButton_changeColor( result_array[18],ui -> pushButton_18);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_19_clicked()
{
    click_num19 ++;
    result_array[19] = click_num19%2;
    pushButton_changeColor( result_array[19],ui -> pushButton_19);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString MainWindow::on_pushButton_20_clicked()
{
    click_num20 ++;
    result_array[20] = click_num20%2;
    pushButton_changeColor( result_array[20],ui -> pushButton_20);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString  MainWindow::on_pushButton_21_clicked()
{
    click_num21 ++;
    result_array[21] = click_num21%2;
    pushButton_changeColor( result_array[21],ui -> pushButton_21);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;
}

QString  MainWindow::on_pushButton_22_clicked()
{
    click_num22 ++;
    result_array[22] = click_num22%2;
    pushButton_changeColor( result_array[22],ui -> pushButton_22);
   // QString result_str = QString::number(MainWindow::result_sum());
    //ui ->textBrowser-> setText(result_str);
    result_str = MainWindow ::result_num_str();
    //ui ->textBrowser -> setText(result_str);
     MainWindow::show_result(result_str);
     return result_str;
}

QString  MainWindow::on_pushButton_23_clicked()
{
    click_num23 ++;
    result_array[23] = click_num23%2;
    pushButton_changeColor( result_array[23],ui -> pushButton_23);
    result_str = MainWindow ::result_num_str();
    MainWindow::show_result(result_str);
    return result_str;

}

void MainWindow::on_pushButton1_clicked()
{
    result_str.replace(QRegExp("^0"), "");
    result_str.append("1");
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton2_clicked()
{   
    result_str.replace(QRegExp("^0"), "");
    result_str.append("2");
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton3_clicked()
{
    result_str.replace(QRegExp("^0"), "");
    result_str.append("3"); // 加3
    MainWindow::show_result(result_str);  // 在框中显示结果
    //将框中结果由字符串转换为数字
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton4_clicked()
{
    result_str.replace(QRegExp("^0"), "");
    result_str.append("4");
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton5_clicked()
{
    result_str.replace(QRegExp("^0"), "");
    result_str.append("5");
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton6_clicked()
{
    result_str.replace(QRegExp("^0"), "");
    result_str.append("6");
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton7_clicked()
{
    result_str.replace(QRegExp("^0"), "");
    result_str.append("7");
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton8_clicked()
{
    result_str.replace(QRegExp("^0"), "");
    result_str.append("8");
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton9_clicked()
{
    result_str.replace(QRegExp("^0"), "");
    result_str.append("9");
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton0_clicked()
{
    result_str.append("0");
    result_str.replace(QRegExp("^0"), "");
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    if(result_num_temp > 16777215)
    {
        init();
        ui ->textBrowser-> setText("输入数据超出范围，请重新输入！ ");
    }
    else
    {
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
    }
}

void MainWindow::on_pushButton_26_clicked()
{
    init();
}

void MainWindow::on_pushButton_clicked()
{
    result_str = result_str.left(result_str.length() - 1);
    MainWindow::show_result(result_str);
    result_num_temp = result_str.toInt();
    MainWindow::result_str_to_num( result_num_temp);
    MainWindow::change_all_color();
}
