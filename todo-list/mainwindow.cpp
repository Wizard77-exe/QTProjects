#include "mainwindow.h"

#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QCheckBox>
#include <QScrollArea>
#include <QVBoxLayout>

MainWindow::MainWindow()
{
    setWindowTitle("To-Do List App");
    resize(300,150);

    nameInput = new QLineEdit();
    nameInput->setPlaceholderText("Enter your name");

    button = new QPushButton("Welcome");
    checkbox = new QCheckBox("Hello World");

    scrollarea = new QScrollArea();

    label = new QLabel("Waiting...");

    QVBoxLayout *layout = new QVBoxLayout();

    layout->addWidget(nameInput);
    layout->addWidget(button);
    layout->addWidget(checkbox);
    layout->addWidget(label);

    scrollarea->setLayout(layout);

    (layout);

    QObject::connect(button, &QPushButton::clicked, [=]() {

        QString name = nameInput->text();
        label->setText("Welcome " + name);

    });
}