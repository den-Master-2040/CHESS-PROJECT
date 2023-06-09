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

    CHESS m_chess;                    //логика шахмат

    Server *p_server;
    Client *p_client;                  //сетевая логика

    int counter_click_button = 0;
    int figure_player = -1;
    int cell_player = -1;

    int SIZE_BUTTON = 60;
    int MERGE_BUTTON = 2;
    int color_backgroind_counter = 0;

    std::string color_white_map = "white";
    std::string color_black_map = "gray";

    int PlayerTeam = -1;    //0 - белые, 1 - черные
    bool hod_white_player = false;

    void update_chess_map();

    void update_chess_array(int arr[8][8]);
    void black_player_hod(QDynamicButton *button);
    void white_player_hod(QDynamicButton *button);
    void getClientStr();

private slots:
    void setPlayerMap();    // СЛОТ-обработчик нажатия кнопки добавления
    void QualifierTeamWithButton();           // СЛОТ для получения номера нажатой кнопки

    void slotUpdateMap();

    void Connect();

    void CheckConnect();

    void CreateServer();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW\_H
