#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
/* My Includes */
#include <qdynamicbutton.h>
#include <chess.h>
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

    int counter_click_button = 0;
    int figure_selected_by_the_player = -1;
    int cell_selected_by_the_player = -1;

    void update_chess_map();

private slots:
    void on_addButton_clicked();    // СЛОТ-обработчик нажатия кнопки добавления
    void on_deleteButton_clicked(); // СЛОТ-обработчик нажатия кнопки удаления
    void slotGetNumber();           // СЛОТ для получения номера нажатой кнопки

    void on_pushButton2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW\_H
