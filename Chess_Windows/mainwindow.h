#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
/* My Includes */
#include <qdynamicbutton.h>
#include <chess.h>
#include <client.h>
#include <server.h>
/* My define's*/
#define WHITE_PLAYER 0
#define BLACK_PLAYER 1
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    QVBoxLayout *m_vLaayout;

    ~MainWindow();

    CHESS chess;                    //логика шахмат

    Server *server;
    Client *client;                  //сетевая логика

    int counter_click_button = 0;
    int figure_selected_by_the_player = -1;
    int cell_selected_by_the_player = -1;

    int SIZE_BUTTON=60;
    int MERGE_BUTTON = 2;
    int color_backgroind = 0;

    int player = -1;    //0 - белые, 1 - черные
    bool hod_white_player = false;

    void update_chess_map();

    void update_chess_array(int arr[8][8]);
    void black_player_hod(QDynamicButton *button);
    void white_player_hod(QDynamicButton *button);

private slots:
    void on_addButton_clicked();    // СЛОТ-обработчик нажатия кнопки добавления
    void slotGetNumber();           // СЛОТ для получения номера нажатой кнопки

    void slot_update_map();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW\_H
