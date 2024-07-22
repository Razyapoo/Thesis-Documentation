#include "coordinateswindow.h"
#include "ui_coordinateswindow.h"

CoordinatesWindow::CoordinatesWindow(QWidget *parent, const QString& windowName, CoordinateWindowObjectType type)
    : QDialog(parent)
    , ui(new Ui::CoordinatesWindow)
{

    // Differentiate beetwen UWB and ( Pixel-to-Real / Optical ) type of window
    if (type == CoordinateWindowObjectType::Tag) {// UWB
        object1Label = new QLabel("Tag 1", this);
        object2Label = new QLabel("Tag 2", this);
        object3Label = new QLabel("Tag 3", this);
    } else { // Pixel-to-Real / Optical
        object1Label = new QLabel("Person 1", this);
        object2Label = new QLabel("Person 2", this);
        object3Label = new QLabel("Person 3", this);
    }

    ui->setupUi(this);
    setWindowTitle(windowName);
    setupLayout();
}

CoordinatesWindow::~CoordinatesWindow()
{
    delete ui;
}

//-------------------------------- Window declaration --------------------------------
void CoordinatesWindow::setupLayout() {

    // Define layout
    mainLayout = new QVBoxLayout(this);

    // Lables for first person
    object1XLabel = new QLabel("X: 0", this);
    object1YLabel = new QLabel("Y: 0", this);
    QGridLayout *object1Layout = new QGridLayout;
    object1Layout->addWidget(object1Label, 0, 0, 1, 2);
    object1Layout->addWidget(object1XLabel, 1, 0);
    object1Layout->addWidget(object1YLabel, 1, 1);

    // Lables for second person
    object2XLabel = new QLabel("X: 0", this);
    object2YLabel = new QLabel("Y: 0", this);
    QGridLayout *object2Layout = new QGridLayout;
    object2Layout->addWidget(object2Label, 0, 0, 1, 2);
    object2Layout->addWidget(object2XLabel, 1, 0);
    object2Layout->addWidget(object2YLabel, 1, 1);

    // Lables for third person
    object3XLabel = new QLabel("X: 0", this);
    object3YLabel = new QLabel("Y: 0", this);
    QGridLayout *object3Layout = new QGridLayout;
    object3Layout->addWidget(object3Label, 0, 0, 1, 2);
    object3Layout->addWidget(object3XLabel, 1, 0);
    object3Layout->addWidget(object3YLabel, 1, 1);

    mainLayout->addLayout(object1Layout);
    mainLayout->addLayout(object2Layout);
    mainLayout->addLayout(object3Layout);

    setLayout(mainLayout);
}

// Update position value in Window (for each Person / Tag)
void CoordinatesWindow::updatePosition(const QPointF& position, int objectID) {

    QString xText = "x: " + QString::number(position.x(), 'f', 4);
    QString yText = "y: " + QString::number(position.y(), 'f', 4);
    switch (objectID)
    {
    case 1:
        object1XLabel->setText(xText);
        object1YLabel->setText(yText);
        break;
    case 2:
        object2XLabel->setText(xText);
        object2YLabel->setText(yText);
        break;
    case 3:
        object3XLabel->setText(xText);
        object3YLabel->setText(yText);
        break;
    }
}
