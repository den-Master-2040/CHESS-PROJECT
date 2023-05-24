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
    //ui->splitters->setStretchFactor(parent, 1);
    //ui->splitters->setStretchFactor(parent, 0);

    m_wdg = new QWidget(this);
    createGamePage();
    ui->stackedWidget->insertWidget(5,m_wdg);

    createPlayerMap();
    p_client = new Client("",0);
    connect(p_client, &Client::signalReadyRead,this, &MainWindow::slotUpdateMap);

    ui->stackedWidget->setCurrentIndex(1);
    setBufferHod();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete p_client;
}

void MainWindow::createGamePage()
{
    QLabel *lb = new QLabel(m_wdg);
    lb->setGeometry(10,340,361,91);
    lb->setStyleSheet("border-radius: 7px;"
                      "font: 700 28pt Constantia;"
                      "font-style: normal;"
                      "color: #FFFFFF;");
    lb->setText("No connect...");

    p_bContinue = new QPushButton(m_wdg);
    p_bContinue->setGeometry(10,490,131,81);
    p_bContinue->setStyleSheet("	border-radius: 7px;"
                               "font: 700 24pt Constantia;"
                               "font-style: normal;"
                               "color: #004220;");
    p_bContinue->setText("Сходить");

    p_bСancel = new QPushButton(m_wdg);
    p_bСancel->setGeometry(210,490,131,81);
    p_bСancel->setStyleSheet("border-radius: 7px;"
                             "font: 700 24pt Constantia;"
                             "font-style: normal;"
                             "color: #FFFFFF;");
    p_bСancel->setText("Отмена");



    p_bExit = new QPushButton(m_wdg);
    p_bExit->setGeometry(130,650,101,41);
    p_bExit->setStyleSheet(	"border-radius: 7px;"
                            "font: 700 24pt Constantia;"
                            "font-style: normal;"
                            "color: #991400;");
    p_bExit->setText("Выход");

    connect(p_bContinue,&QPushButton::clicked, this, &MainWindow::push_button_Continue);

    connect(p_bСancel,&QPushButton::clicked, this, &MainWindow::push_button_Сancel);

    connect(p_bExit,&QPushButton::clicked, this, &MainWindow::push_button_Exit);
}


/* Метод для добавления динамической кнопки
 * */
void MainWindow::createPlayerMap()
{
    for(int i = 0; i < 8;i++)
    {
        color_backgroind_counter++;

        for(int j = 0; j <8; j++)
        {
            QDynamicButton *button = new QDynamicButton(m_wdg);  // Создаем объект динамической кнопки

            button->SetID(i*8 + j);                             // ID

            button->picture = m_chess.chess_map[i][j];            //цифра для дальнейшего наложения картинки на кнопку

            button->setFixedHeight(SIZE_BUTTON+MERGE_BUTTON);   //высота кнопки

            button->setFixedWidth(SIZE_BUTTON+MERGE_BUTTON);    //ширина

            button->setGeometry(SIZE_BUTTON * j + 20 ,SIZE_BUTTON * i + 20, SIZE_BUTTON, SIZE_BUTTON);//расставляем кнопки в нужном месте

            /* Применение стиля к шахматной карте*/
            if(color_backgroind_counter%2)
                button->setStyleSheet(QString::fromUtf8("QPushButton{"
                                                        "background-color:" + color_white_map + ";"
                                                        "border-style: solid;"
                                                        "border-color: black;"
                                                        "border-width: 2px;"
                                                        "border-radius: 0px;}"));
            else
                button->setStyleSheet(QString::fromUtf8("QPushButton{"
                                                        "background-color:" + color_black_map + ";"
                                                        "border-style: solid;"
                                                        "border-color: black;"
                                                        "border-width: 2px;"
                                                        "border-radius: 0px;}"));

            color_backgroind_counter++;
            arrButton.push_back(button);

            /* Добавляем кнопку в слой с вертикальной компоновкой
             * */
            //m_vLaayout->addWidget(button);
            //ui->stackedWidget->setCurrentIndex(5);
            //ui->stackedWidget->setCurrentWidget(button);

            /* Подключаем сигнал нажатия кнопки к СЛОТ получения номера кнопки
             * */
            connect(button, SIGNAL(clicked()), this, SLOT(QualifierTeamWithButton()));
        }
    }
    update_chess_map();
}

void MainWindow::setVisibleButtonMap()
{
   /* for(int i = 0; i < wdg->(); i++)
    {
        /* Производим каст элемента слоя в объект динамической кнопки
         *
        QDynamicButton *button = qobject_cast<QDynamicButton*>(m_vLaayout->itemAt(i)->widget());

        button->setVisible(true);
    }
*/
}

void MainWindow::setBufferHod()
{
    for(int i = 0; i < 8; ++i)
        for(int j = 0; j < 8; ++j)
            buff_arr[i][j] = m_chess.chess_map[i][j];
}

void MainWindow::setChessMapInBuffer()
{
    for(int i = 0; i < 8; ++i)
        for(int j = 0; j < 8; ++j)
            m_chess.chess_map[i][j] = buff_arr[i][j];
}

void MainWindow::sendData()
{
    QString msg = "";
    for(int i = 0; i < 8;i++)
        for(int j = 0; j < 8; j++)
            msg += (char)(m_chess.chess_map[i][j] + '0');

    p_client->SendToServer(msg);

    p_client->str = ""; // для того чтобы ограничить доступ к кнопкам - не будет выполняться первое условие

    //ui->label_5->setText("Ожидайте ход соперника..");

    std::thread thread([this]()
    {
       getClientStr();
       //ui->label_5->setText("Делайте ход!");
    });
    thread.detach();
}

void MainWindow::QualifierTeamWithButton()
{
    QDynamicButton* button = qobject_cast<QDynamicButton*>(sender());
    if (PlayerTeam == WHITE_PLAYER)
        white_player_hod(button);
    else if (PlayerTeam == BLACK_PLAYER)
        black_player_hod(button);
}

void MainWindow::slotUpdateMap()
{
    std::string stdstring = p_client->str.toStdString();

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

    //ui->label_5->setText("Делайте ход!");
}

void MainWindow::black_player_hod(QDynamicButton *button)
{
    /////////////////////////////////////ОЖИДАЕМ ХОД ИГРОКА////////////////////////////////


    ///////////////////////////////////ПЕРВОЕ НАЖАТИЕ///////////////////////////////////////////////////////////
    if (counter_click_button == 0)
    {
        int id_button_local = button->getID();

        figure_player = id_button_local/8 + (id_button_local - (id_button_local/8 * 8) )*10;
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

        cell_player = id_button_local/8 + (id_button_local - (id_button_local/8 * 8) )*10;
        //                              //***строка (I)// + //*****************столбец (J)***************//
        //update_chess_map();                                                                  //синхронизируем двумерный массив с шахмотной доской
        //      ui->lineEdit->setText(QString::number(button->getID()));

    }

    ////////////////////////////////////ОБРАБОТКА//////////////////////////////////////////////////////////////
    if(figure_player !=-1 && cell_player !=-1)
    {
        m_chess.hod(figure_player,cell_player);
        update_chess_map();
        figure_player =-1;
        cell_player =-1;
        counter_click_button = 0;
    }

    readyToSendData = true;
}

void MainWindow::white_player_hod(QDynamicButton *button)
{
    if (hod_white_player)                   //bool hod_white_player - отображает состояние хода белых
    {
        if (p_client->str == ""
                || p_client->str == "You First"
                || p_client->str == "You Second")  return;     //если ход уже делался, то ждем хода черных
        hod_white_player = false;

    }

    ///////////////////////////////////ПЕРВОЕ НАЖАТИЕ///////////////////////////////////////////////////////////
    if (counter_click_button == 0)
    {
        int id_button_local = button->getID();

        figure_player = id_button_local/8 + (id_button_local - (id_button_local/8 * 8) )*10;
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

        cell_player = id_button_local/8 + (id_button_local - (id_button_local/8 * 8) )*10;
        //                              //***строка (I)// + //*****************столбец (J)***************//
        //update_chess_map();                                                                  //синхронизируем двумерный массив с шахмотной доской
        //      ui->lineEdit->setText(QString::number(button->getID()));

    }

    ////////////////////////////////////ОБРАБОТКА//////////////////////////////////////////////////////////////
    if(figure_player !=-1 && cell_player !=-1)
    {
        m_chess.hod(figure_player,cell_player);
        update_chess_map();
        figure_player =-1;
        cell_player =-1;
        p_client->str = "";
        counter_click_button = 0;
    }

    ////////////////////////////////////ОТПРАВКА ДАННЫХ//////////////////////////////////////////////////////////
    hod_white_player = true;            //ход сделан
    readyToSendData = true;
}

void MainWindow::getClientStr()
{
    while(p_client->str == ""){};

    //ход сделан, обновляем массив и карту
    std::string stdstring = p_client->str.toStdString();

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
    setBufferHod();

    //ui->label_5->setText("Делайте ход!");
}

void MainWindow::update_chess_map()
{
    /* Выполняем перебор всех элементов слоя, где располагаются динамические кнопки
     * */
    for(int i = 0; i < arrButton.size(); i++)
    {
        /* Производим каст элемента слоя в объект динамической кнопки
         * */
        QDynamicButton *button = qobject_cast<QDynamicButton*>(arrButton.at(i));
        //"D:/projects/worked/CHESS_ANDROID/CHESS-PROJECT-main/Chess_Windows/chess/" + QString::number(m_chess.chess_map[i/8][i%8]) + ".png"
        QPixmap pixmap(":/chess/chess/" + QString::number(m_chess.chess_map[i/8][i%8]) + ".png");

        QIcon ButtonIcon(pixmap);
        button->setIcon(ButtonIcon);
        //button->setText(QString::number(m_chess.chess_map[i/8][i%8]));
        button->setIconSize(QSize(SIZE_BUTTON, SIZE_BUTTON));
    }
}

void MainWindow::update_chess_array(int arr[8][8])
{
    for(int i = 0; i < 8; ++i)
        for(int j = 0; j < 8; ++j)
            m_chess.chess_map[i][j] = arr[i][j];
    update_chess_map();
}

void MainWindow::Connect(QString ip, int port)
{
    string ipS = ip.toStdString();
    string s1;
    remove_copy(ipS.begin(),ipS.end(), back_inserter(s1), '"');

    ip = QString::fromStdString(s1);

    p_client = new Client(ip,port);
    qDebug() << ip << " " << port;
    p_client->connectToServer();

    std::thread thread ([this](){

        while(p_client->str == ""){};
        while(PlayerTeam == -1)
        {
        if(p_client->str == "You first")
            PlayerTeam = WHITE_PLAYER;
        else if(p_client->str == "You Second")        
            PlayerTeam = BLACK_PLAYER;

        }
        if(p_client->str !="")
        ui->label_6->setText(p_client->str);
    });
    thread.detach();
    std::thread thread2 ([this](){
        this_thread::sleep_for(std::chrono::milliseconds(500));
        //ui->label_3->setText(p_client->getStatusConnectToServer());
    });
    thread2.detach();

    std::thread thread3([this](){

        while(PlayerTeam == -1) {};     //ожидаем подключения
        if(PlayerTeam == BLACK_PLAYER)
        {
            p_client->str = "";
            getClientStr();
            //ui->label_5->setText("Делайте ход!");
        }
    });
    thread3.detach();
}

void MainWindow::CheckConnect()
{
    //if(p_client != nullptr)
    //ui->label_3->setText(p_client->getStatusConnectToServer());
    //else ui->label_3->setText("Client not created...");
}

void MainWindow::CreateServer()
{
    std::thread thread ([](){
        system("D:/projects/build-server_Chess-Desktop_Qt_6_4_2_MinGW_64_bit-Debug/debug/server_Chess.exe");
    });

    thread.detach();    
    this_thread::sleep_for(std::chrono::milliseconds(500));
    Connect(ui->lineEdit->text(),ui->lineEdit_2->text().toInt());
}
//Кнопка создания игры
void MainWindow::on_pushButton_4_clicked()
{
    ui->splitters->setEnabled(false);
    //ui->splitters_2->setEnabled(false);
    //setVisibleButtonMap();
    //CreateServer();
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_clicked()
{
    //qDebug() << ui->lineEdit_3->text() << " " <<ui->lineEdit_4->text().toInt();
    Connect(ui->lineEdit_3->text(),ui->lineEdit_4->text().toInt());
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_6_clicked()
{

    ui->stackedWidget->setCurrentIndex(3);//
}

void MainWindow::on_pushButton_8_clicked()
{
    counter_pages++;
    qDebug() << counter_pages;
    ui->stackedWidget->setCurrentIndex(counter_pages);
}

void MainWindow::on_pushButton_9_clicked()
{
    counter_pages--;
    qDebug() << counter_pages;
    ui->stackedWidget->setCurrentIndex(counter_pages);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_5_clicked(){}

void MainWindow::push_button_Continue()
{
    qDebug() << "Continue";
    setBufferHod();
    if(readyToSendData)
        sendData();
    readyToSendData = false;
}

void MainWindow::push_button_Exit()
{
    qDebug() << "Exit";
}

void MainWindow::push_button_Сancel()
{
    setChessMapInBuffer();
    qDebug() << "Сancel";
}

