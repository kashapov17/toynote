/**
 * @file main.cpp
 * @brief Файл главной функции.
 ***************************
 * @author Кирилл Пушкарёв
 * @date 2017
 ***************************
 * @author Кашапов Ярослав
 * @date 2020
 */
#include "mainwindow.hpp"
#include <QApplication>

/**
 * @brief Главная функция программы
 * @param argc количество параметров командной строки
 * @param argv параметры командной строки
 * @return код результата
 */
int main(int argc, char *argv[])
{
    // Создать объект класса QApplication. Класс QApplication является частью
    // библиотеки Qt и отвечает за функционирование программы в целом
    QApplication app(argc, argv);
    // Создать объект класса MainWindow. Класс MainWindow является частью
    // данной программы и отвечает за функционирование её главного окна
    MainWindow window;
    // Отобразить главное окно
    window.show();

    // Начать обработку событий (щелчков мыши по элементам интерфейса и т. д.)
    return app.exec();
}
