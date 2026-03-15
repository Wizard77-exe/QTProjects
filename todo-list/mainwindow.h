#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class QLineEdit;
class QLabel;
class QCheckBox;
class QPushButton;
class QScrollArea;

class MainWindow : public QWidget
{
public:
    MainWindow();

private:
    QScrollArea *scrollarea;
    QLineEdit *nameInput;
    QLabel *label;
    QCheckBox *checkbox;
    QPushButton *button;
};

#endif