#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <client.h>
#include <QThread>
#include <thread>
//#include <windows.h>
#include <string.h>
#include <chrono>

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

    client = new Client("",0);
    connect(client, &Client::signalReadyRead,this, &MainWindow::slot_update_map);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete client;

}

/* Метод для добавления динамической кнопки
 * */
void MainWindow::on_addButton_clicked()
{


    std::string color_white = "white";
    std::string color_black = "gray";

    for(int i = 0; i < 8;i++)
    {
        color_backgroind++;

        for(int j = 0; j <8; j++)
        {
            QDynamicButton *button = new QDynamicButton(this);  // Создаем объект динамической кнопки

            button->SetID(i*8 + j);                             // ID

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

            //QString Qstr(QString::number(chess.chess_map[i][j]));      //получаем цифру из массива

            //button->setText(Qstr);   //конвертируем строку в QString


            /* Добавляем кнопку в слой с вертикальной компоновкой
             * */
            m_vLaayout->addWidget(button);

            /* Подключаем сигнал нажатия кнопки к СЛОТ получения номера кнопки
             * */
            connect(button, SIGNAL(clicked()), this, SLOT(slotGetNumber()));
        }
    }
    update_chess_map();
}


/* СЛОТ для получения номера кнопки.
 * */
void MainWindow::slotGetNumber()
{
    QDynamicButton* button = qobject_cast<QDynamicButton*>(sender());
    if (player == WHITE_PLAYER)
        white_player_hod(button);
    else if (player == BLACK_PLAYER)
        black_player_hod(button);
}

void MainWindow::slot_update_map()
{
    std::string stdstring = client->str.toStdString();

    int arr[8][8];
    int counter = 0;
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
        {
            arr[i][j] = (stdstring.at(counter)) - '0';
            counter++;
        }
    update_chess_array(arr);
    update_chess_map();

    ui->label_5->setText("Делайте ход!");
}

void MainWindow::black_player_hod(QDynamicButton *button)
{
    ////////////////////////////////ЖДЕМ ХОД ПРОТИВНИКА И ОТОБРАЖАЕМ ЕГО ХОД///////////////////////////////////
    //client->slotReadyRead();
    QString data = client->str;
    if (data == "" || data == "You First" || data == "You Second")
    {
        ui->label_5->setText("Сейчас не ваш ход..");
        return;                                         //ждем ход белых
    }


    //ход сделан, обновляем массив и карту
    std::string stdstring = data.toStdString();

    int arr[8][8];
    int counter = 0;
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
        {
            arr[i][j] = (stdstring.at(counter)) - '0';
            counter++;
        }
    update_chess_array(arr);
    update_chess_map();

    ui->label_5->setText("Делайте ход!");

    /////////////////////////////////////ОЖИДАЕМ ХОД ИГРОКА////////////////////////////////


    ///////////////////////////////////ПЕРВОЕ НАЖАТИЕ///////////////////////////////////////////////////////////
    if (counter_click_button == 0)
    {
        int id_button_local = button->getID();

        figure_selected_by_the_player = id_button_local/8 + (id_button_local - (id_button_local/8 * 8) )*10;
        //                              //***строка (I)// + //*****************столбец (J)***************//


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
    //////////////////////////////////////ОТПРАВКА ДАННЫХ/////////////////////////////////////////////////////////

    QString msg = "";
    for(int i = 0; i < 8;i++)
        for(int j = 0; j < 8; j++)
            msg += QString::number(chess.chess_map[i][j]);

    client->SendToServer(msg);

    client->str = ""; // для того чтобы ограничить доступ к кнопкам - не будет выполняться первое условие

}

void MainWindow::white_player_hod(QDynamicButton *button)
{
    if (hod_white_player)                   //bool hod_white_player - отображает состояние хода белых
    {
        if (client->str == ""
                || client->str == "You First"
                || client->str == "You Second")  return;     //если ход уже делался, то ждем хода черных
        hod_white_player = false;

        //ход сделан, обновляем массив и карту
        std::string stdstring = client->str.toStdString();

        int arr[8][8];
        int counter = 0;
        for(int i = 0; i < 8; i++)
            for(int j = 0; j < 8; j++)
            {
                arr[i][j] = (stdstring.at(counter)) - '0';
                counter++;
            }
        update_chess_array(arr);
        update_chess_map();

        ui->label_5->setText("Делайте ход!");
    }



    ///////////////////////////////////ПЕРВОЕ НАЖАТИЕ///////////////////////////////////////////////////////////
    if (counter_click_button == 0)
    {
        int id_button_local = button->getID();

        figure_selected_by_the_player = id_button_local/8 + (id_button_local - (id_button_local/8 * 8) )*10;
        //                              //***строка (I)// + //*****************столбец (J)***************//


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
    ////////////////////////////////////ОТПРАВКА ДАННЫХ//////////////////////////////////////////////////////////

    QString msg = "";
    for(int i = 0; i < 8;i++)
        for(int j = 0; j < 8; j++)
            msg += QString::number(chess.chess_map[i][j]);

    client->SendToServer(msg);

    hod_white_player = true;            //ход сделан


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

        //button->setText(QString::fromStdString(std::to_string(chess.chess_map[i/8][i%8])));

        QPixmap pixmap("D:/projects/Chess_Windows/chess/" + QString::number(chess.chess_map[i/8][i%8]) + ".png");
        QIcon ButtonIcon(pixmap);
        button->setIcon(ButtonIcon);
        button->setIconSize(QSize(SIZE_BUTTON, SIZE_BUTTON));
    }
}

void MainWindow::update_chess_array(int arr[8][8])
{
    for(int i = 0; i < 8; ++i)
        for(int j = 0; j < 8; ++j)
            chess.chess_map[i][j] = arr[i][j];
    update_chess_map();
}



void MainWindow::on_pushButton_clicked()
{
    client = new Client(ui->lineEdit->text(),ui->lineEdit_2->text().toInt());

    client->connectToServer();


    std::thread thread ([this](){


        //client->getMessageFromServer();
        while(client->str == ""){};
        while(player == -1)
        {
        if(client->str == "You first")
            player = WHITE_PLAYER;
        else if(client->str == "You Second")
            player = BLACK_PLAYER;
        }
        if(client->str !="")
        ui->label_4->setText(client->str);

    });
    thread.detach();

}

void MainWindow::on_pushButton_2_clicked()
{
    if(client != nullptr)
    ui->label_3->setText(client->getStatusConnectToServer());
    else ui->label_3->setText("Client not created...");
}

void MainWindow::on_pushButton_4_clicked()
{
    std::thread thread ([](){
        system("D:/projects/build-server_Chess-Desktop_Qt_6_4_2_MinGW_64_bit-Debug/debug/server_Chess.exe");
    });

    thread.detach();    
}
