#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <client.h>
using namespace  std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Для удобства работы слои разделены QSplitter */
    ui->splitters->setStretchFactor(parent, 1);
    ui->splitters->setStretchFactor(parent, 0);

    m_vLaayout = new QVBoxLayout(this);

    on_addButton_clicked();
    Client cl("192.168.0.67", 2323);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Метод для добавления динамической кнопки
 * */
void MainWindow::on_addButton_clicked()
{
    int SIZE_BUTTON=60;
    int MERGE_BUTTON = 2;
    int color_backgroind = 0;

    std::string color_white = "white";
    std::string color_black = "gray";

    for(int i = 0; i < 8;i++)
    {
        color_backgroind++;

        for(int j = 0; j <8; j++)
        {
            QDynamicButton *button = new QDynamicButton(this);  // Создаем объект динамической кнопки

            button->SetID(i*8 + j);                           //кривой ID

            button->picture = chess.chess_map[i][j];            //цифра для дальнейшего наложения картинки на кнопку

            button->setFixedHeight(SIZE_BUTTON+MERGE_BUTTON);   //высота кнопки

            button->setFixedWidth(SIZE_BUTTON+MERGE_BUTTON);    //ширина

            button->setGeometry(SIZE_BUTTON*j+20,SIZE_BUTTON*i+20,SIZE_BUTTON,SIZE_BUTTON);//расставляем кнопки в нужном месте

            /* Применение стиля к шахматной карте*/
            if(color_backgroind%2)
                button->setStyleSheet(QString::fromUtf8("QPushButton{"
                                                        "background-color:" + color_white + ";"
                                                                                            "border-style: solid;"
                                                                                            "border-color: black;"
                                                                                            "border-width: 2px;"
                                                                                            "border-radius: 0px;}"));
            else
                button->setStyleSheet(QString::fromUtf8("QPushButton{"
                                                        "background-color:" + color_black + ";"
                                                                                            "border-style: solid;"
                                                                                            "border-color: black;"
                                                                                            "border-width: 2px;"
                                                                                            "border-radius: 0px;}"));

            color_backgroind++;

            //QPixmap pixmap("D:/projects/chess_cross-platform/1.png");
            // QIcon ButtonIcon(pixmap);
            // button->setIcon(ButtonIcon);
            // button->setIconSize(pixmap.rect().size());

            QString Qstr(QString::number(chess.chess_map[i][j]));      //получаем цифру из массива

            button->setText(Qstr);   //конвертируем строку в QString


            /* Добавляем кнопку в слой с вертикальной компоновкой
             * */
            m_vLaayout->addWidget(button);

            /* Подключаем сигнал нажатия кнопки к СЛОТ получения номера кнопки
             * */
            connect(button, SIGNAL(clicked()), this, SLOT(slotGetNumber()));
        }
    }
}

/* Метод для удаления динамической кнопки по её номеру
 * */
void MainWindow::on_deleteButton_clicked()
{
    /* Выполняем перебор всех элементов слоя, где располагаются динамические кнопки
     * */
    for(int i = 0; i < m_vLaayout->count(); i++){
        /* Производим каст элемента слоя в объект динамической кнопки
         * */
        QDynamicButton *button = qobject_cast<QDynamicButton*>(m_vLaayout->itemAt(i)->widget());
        /* Если номер кнопки соответствует числу, которое установлено
         * в lineEdit, то производим удаление данной кнопки
         * */
        if(button->getID() == ui->lineEdit->text().toInt()){
            button->hide();
            delete button;
        }
    }
}

/* СЛОТ для получения номера кнопки.
 * */
void MainWindow::slotGetNumber()
{
    QDynamicButton* button = qobject_cast<QDynamicButton*>(sender());

    ///////////////////////////////////ПЕРВОЕ НАЖАТИЕ///////////////////////////////////////////////////////////
    if (counter_click_button == 0)
    {
        int id_button_local = button->getID();

        figure_selected_by_the_player = id_button_local/8 + (id_button_local - (id_button_local/8 * 8) )*10;
        //                              //***строка (I)// + //*****************столбец (J)***************//
        ui->lineEdit->setText(QString::number(id_button_local));

        counter_click_button++;             //кнопка была нажата, нужно увеличить счётчик
        return;
    }

    ///////////////////////////////ВТОРОЕ НАЖАТИЕ//////////////////////////////////////////////////////////////
    if (counter_click_button == 1)
    {
        counter_click_button = 0;       //две кнопки выбраны - нужно очистить счётчик

        int id_button_local = button->getID();
        qDebug() << id_button_local;

        cell_selected_by_the_player = id_button_local/8 + (id_button_local - (id_button_local/8 * 8) )*10;
        //                              //***строка (I)// + //*****************столбец (J)***************//
        //update_chess_map();                                                                  //синхронизируем двумерный массив с шахмотной доской
        //      ui->lineEdit->setText(QString::number(button->getID()));

    }

    ////////////////////////////////////ОБРАБОТКА//////////////////////////////////////////////////////////////
    if(figure_selected_by_the_player !=-1 && cell_selected_by_the_player !=-1)
    {
        chess.hod(figure_selected_by_the_player,cell_selected_by_the_player);
        update_chess_map();
        figure_selected_by_the_player =-1;
        cell_selected_by_the_player =-1;
        counter_click_button = 0;
    }


}

void MainWindow::update_chess_map()
{
    /* Выполняем перебор всех элементов слоя, где располагаются динамические кнопки
     * */
    for(int i = 0; i < m_vLaayout->count(); i++)
    {

        /* Производим каст элемента слоя в объект динамической кнопки
         * */
        QDynamicButton *button = qobject_cast<QDynamicButton*>(m_vLaayout->itemAt(i)->widget());
        /* Если номер кнопки соответствует числу, которое установлено
         * в lineEdit, то производим удаление данной кнопки
         * */

        button->setText(QString::fromStdString(std::to_string(chess.chess_map[i/8][i%8])));
        //if(button->getID() == ui->lineEdit->text().toInt()){
        //    button->hide();
        //    delete button;
        //}
    }
}

void MainWindow::on_pushButton2_clicked()
{
    update_chess_map();
}

void MainWindow::on_pushButton_3_clicked()
{
    on_deleteButton_clicked();
}

