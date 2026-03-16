#include "mainwindow.h"

#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QCheckBox>
#include <QScrollArea>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QCheckBox>

MainWindow::MainWindow()
{
    setWindowTitle("To-Do List App");
    resize(600,650);

    // Buttons
    addButton = new QPushButton("Add");
    rmvButton = new QPushButton("Remove");

    // Text Input
    tskInput = new QLineEdit();

    // task Item - check if done.
    taskItem = new QCheckBox();

    // Label
    label = new QLabel("Hello World");

    // Scroll Area, where tasks will be displayed
    scrollarea = new QScrollArea();

    // layouts
    inputContainer = new QHBoxLayout();
    mainLayout = new QVBoxLayout();
    scrollLayout = new QVBoxLayout();

    widgets = new QWidget();

    mainLayout->addWidget(label);
    mainLayout->addWidget(tskInput);
    mainLayout->addWidget(addButton);
    mainLayout->addWidget(rmvButton);

    setLayout(mainLayout);

    /* QObject::connect(button, &QPushButton::clicked, [=]() {

        QString name = nameInput->text();
        label->setText("Welcome " + name);

    }); */
}