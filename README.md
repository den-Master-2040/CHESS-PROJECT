
![image](https://github.com/den-Master-2040/CHESS-PROJECT/assets/107744290/8384392f-9f09-423c-b0c3-a2fe585d3a2c)
![image](https://github.com/den-Master-2040/CHESS-PROJECT/assets/107744290/84090499-ecbf-4dd8-a1cb-a344b4f6da52)
![image](https://github.com/den-Master-2040/CHESS-PROJECT/assets/107744290/115519b4-2099-40ca-b795-91d8744cd933)

Проект Кроссплатформенных шахмат. Начало разработки - январь 2023.
Стек технолгий: С++, Qt, QTcpSockets.

  Главаня цель проекта: Создать кроссплатформенное клиент-серверное приложение для игры в шахматы. 
  
  Актуальность: нет проектов, реализующих полностью кроссплатформенные шахматы, а выбранный стек технологий позволит максимально ускорить работу программы.
  
  Задачи: 
  1)  Реализовать систему клиент-серверной передачи данных
  2)  Распределить очередность ходов и управление отдельными фигурами.
  3)  Разработать удобный, современный и стильный дизайн приложения.
  4)  Протестировать приложение для поиска багов и ошибок.
  
  Проблемы с которыми я столкнулся:
  1) Сложность работы с клиент-серверной архитектурой из-за её сложной многопоточной системы.
  2) Большое количиство логических условий и состояний, которые нужно описать.
  3) Разность архитектур операционных систем.
  
  При разработке кроссплатформенных решений можно использовать два подхода:
  1) Использовать среду/библиотеку/фреймворк которая является кроссплатформенной.
  2) Вручную написать приложения для каждой системы.
  Я выбрал 1 вариант, так как он быстрее и проще, а потери в ускорении программы, её работоспособности - минимальны или вовсе отсутствуют. 
  Такой средой/библиотекой для разработки стала Qt. К тому же, в Qt имеется очень много полезных инструментов, которые использованы в проекте,
  поэтому данный выбор полностью опрадван. Написав программу в этой IDE, скомпилировать её можно под многие платформы. 
  
  Для того, чтобы реализовать клиент-серверную связь, можно использовать сетевые сокеты. Сетевой сокет это конечная точка сетевых коммуникаций. 
  Каждый использующийся сокет имеет тип и ассоциированный с ним процесс. Выделяют два типа - UDP - (User Datagram Protocol — протокол пользовательских датаграмм) и 
  TCP - (Transmission Control Protocol). Главное отличие этих проотоколов - способ доставки пакетов. UDP использует простую модель передачи, без явных «рукопожатий»
  для обеспечения надёжности, упорядочивания или целостности данных. Механизм TCP предоставляет поток данных с предварительной установкой соединения, осуществляет 
  повторный запрос данных в случае потери данных и устраняет дублирование при получении двух копий одного пакета, гарантируя тем самым (в отличие от UDP) целостность
  передаваемых данных и уведомление отправителя о результатах передачи. Я использовал TCP.
  
  ![image](https://user-images.githubusercontent.com/107744290/234424221-b4c92622-1b6c-473b-b749-82f94da9e780.png)

  
  Далее, нужно организовать главную логику программы. Чтобы не усложнять работу, я решил сделать сначала Консольную версию шахмат, с двумерным массивом 8 на 8.
  Есть отдельный репозиторий, в котором описана логика работы консольных шахмат. Разработанный функционал:
  1) Функция, обрабатывающая ход в любую точку (i,j) из другой точки (x,y) в двумерном массиве по выбранной фигуре. Если ход возможен, то массив обновляется;
  2) Функция обновления массива;
  3) Функция хода для конкретной команды;
  4) Функции хода каждой пешки.
  
  
  
  
