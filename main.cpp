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
#include <QTranslator>
#include <QLocale>
#include <QDebug>

/**
 * @brief Главная функция программы
 * @param argc количество параметров командной строки
 * @param argv параметры командной строки
 * @return код результата
 */
int main(int argc, char *argv[])
{
    // Создаём объект класса QApplication. Класс QApplication является частью
    // библиотеки Qt и отвечает за функционирование программы в целом
    QApplication app(argc, argv);

    // Создаём объект класса QTranslator. Для перевода программы на другие языки
    QTranslator translator;
    // Определяем основной язык операционной системы
    QString locale = QLocale::system().name();

    bool loaded = false;
    loaded = translator.load(":/toynote_" + locale);
    if (!loaded)
        // если перевод не был загружен, генерируем передупреждение
        qWarning() << QString("Can't load %1 translation").arg(locale);
    else app.installTranslator(&translator);

    // Создаём объект класса MainWindow. Класс MainWindow является частью
    // данной программы и отвечает за функционирование её главного окна
    MainWindow window;
    // Отображаем главное окно
    window.show();

    // Начинаем обработку событий (щелчков мыши по элементам интерфейса и т. д.)
    return app.exec();
}
