#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class QLineEdit;
class QLabel;
class QCheckBox;
class QPushButton;
class QScrollArea;
class QHBoxLayout;
class QVBoxLayout;
class QWidget;
class QCheckBox;

class MainWindow : public QWidget
{
public:
    MainWindow();

private:
    // Buttons
    QPushButton *addButton;
    QPushButton *rmvButton;

    // text Input
    QLineEdit *tskInput;

    // CheckBox
    QCheckBox *taskItem;

    // Label
    QLabel *label;

    // Scroll Area
    QScrollArea *scrollarea;

    // Layouts 
    QHBoxLayout *inputContainer;
    QVBoxLayout *mainLayout;
    QVBoxLayout *scrollLayout;

    // container widgets
    QWidget *widgets;
};

#endif