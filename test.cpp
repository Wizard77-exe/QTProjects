#include <QApplication>
#include <QWidget>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Main window
    QWidget window;
    window.setWindowTitle("Qt ScrollArea Template");
    window.resize(400, 300);

    // Layout for main window
    QVBoxLayout *mainLayout = new QVBoxLayout(&window);

    // Scroll Area
    QScrollArea *scrollArea = new QScrollArea();
    scrollArea->setWidgetResizable(true);

    // Container widget inside scroll area
    QWidget *container = new QWidget();
    QVBoxLayout *containerLayout = new QVBoxLayout(container);

    // Example content (many widgets to force scrolling)
    for (int i = 1; i <= 20; i++) {
        QPushButton *button = new QPushButton(QString("Button %1").arg(i));
        containerLayout->addWidget(button);
    }

    containerLayout->addStretch();

    // Set container inside scroll area
    scrollArea->setWidget(container);

    // Add scroll area to main layout
    mainLayout->addWidget(scrollArea);

    window.show();

    return app.exec();
}