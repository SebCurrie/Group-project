/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *GaussSeidell;
    QPushButton *Jacobi;
    QPushButton *SOR;
    QGroupBox *groupBox;
    QDoubleSpinBox *deltaVal;
    QDoubleSpinBox *ErrTol;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_2;
    QRadioButton *Problem0;
    QRadioButton *Problem1;
    QRadioButton *UD;
    QRadioButton *Problem2_2;
    QLabel *label;
    QGroupBox *groupBox_3;
    QRadioButton *red;
    QRadioButton *green;
    QRadioButton *black;
    QRadioButton *Other;
    QGroupBox *groupBox_4;
    QRadioButton *circle;
    QRadioButton *line;
    QRadioButton *rectangle;
    QPushButton *Draw;
    QPushButton *Draw_2;
    QGroupBox *Circlegroup;
    QLabel *label_3;
    QDoubleSpinBox *HorizLinear;
    QLabel *label_4;
    QDoubleSpinBox *VertLinear;
    QDoubleSpinBox *VertLinear_3;
    QLabel *label_5;
    QGroupBox *Linegroup;
    QDoubleSpinBox *HorizLinear_3;
    QLabel *label_8;
    QDoubleSpinBox *VertLinear_4;
    QDoubleSpinBox *VertLinear_2;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_7;
    QDoubleSpinBox *HorizLinear_2;
    QGroupBox *Rectanglegroup;
    QDoubleSpinBox *VertLinear_5;
    QLabel *label_16;
    QDoubleSpinBox *HorizLinear_4;
    QLabel *label_15;
    QDoubleSpinBox *HorizLinear_5;
    QDoubleSpinBox *VertLinear_6;
    QLabel *label_12;
    QLabel *label_14;
    QGroupBox *OtherColourBox;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *SetColour;
    QTextBrowser *OutputBox;
    QPushButton *pushButton;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QPushButton *Draw_3;
    QFrame *line_8;
    QLabel *label_21;
    QDoubleSpinBox *doubleSpinBox_2;
    QFrame *line_9;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(964, 693);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GaussSeidell = new QPushButton(centralWidget);
        GaussSeidell->setObjectName(QStringLiteral("GaussSeidell"));
        GaussSeidell->setEnabled(false);
        GaussSeidell->setGeometry(QRect(380, 80, 101, 31));
        Jacobi = new QPushButton(centralWidget);
        Jacobi->setObjectName(QStringLiteral("Jacobi"));
        Jacobi->setEnabled(false);
        Jacobi->setGeometry(QRect(380, 20, 101, 31));
        SOR = new QPushButton(centralWidget);
        SOR->setObjectName(QStringLiteral("SOR"));
        SOR->setEnabled(false);
        SOR->setGeometry(QRect(380, 140, 101, 31));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 61));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(204, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 51, 51, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(229, 25, 25, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(102, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(136, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(229, 127, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        groupBox->setPalette(palette);
        groupBox->setAutoFillBackground(false);
        deltaVal = new QDoubleSpinBox(groupBox);
        deltaVal->setObjectName(QStringLiteral("deltaVal"));
        deltaVal->setGeometry(QRect(0, 30, 69, 26));
        deltaVal->setMinimumSize(QSize(69, 26));
        deltaVal->setMaximumSize(QSize(69, 26));
        deltaVal->setMinimum(100);
        deltaVal->setMaximum(500);
        deltaVal->setSingleStep(100);
        ErrTol = new QDoubleSpinBox(groupBox);
        ErrTol->setObjectName(QStringLiteral("ErrTol"));
        ErrTol->setGeometry(QRect(130, 30, 69, 26));
        ErrTol->setDecimals(3);
        ErrTol->setMinimum(0.001);
        ErrTol->setMaximum(0.1);
        ErrTol->setSingleStep(0.001);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(280, 220, 121, 21));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(610, 30, 341, 351));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(false);
        groupBox_2->setGeometry(QRect(10, 120, 241, 161));
        Problem0 = new QRadioButton(groupBox_2);
        Problem0->setObjectName(QStringLiteral("Problem0"));
        Problem0->setGeometry(QRect(10, 20, 112, 23));
        Problem1 = new QRadioButton(groupBox_2);
        Problem1->setObjectName(QStringLiteral("Problem1"));
        Problem1->setGeometry(QRect(10, 50, 112, 23));
        UD = new QRadioButton(groupBox_2);
        UD->setObjectName(QStringLiteral("UD"));
        UD->setGeometry(QRect(10, 130, 211, 23));
        Problem2_2 = new QRadioButton(groupBox_2);
        Problem2_2->setObjectName(QStringLiteral("Problem2_2"));
        Problem2_2->setGeometry(QRect(10, 80, 211, 21));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(35, 100, 71, 21));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(false);
        groupBox_3->setGeometry(QRect(10, 300, 121, 141));
        groupBox_3->setCheckable(false);
        red = new QRadioButton(groupBox_3);
        red->setObjectName(QStringLiteral("red"));
        red->setGeometry(QRect(10, 20, 151, 23));
        green = new QRadioButton(groupBox_3);
        green->setObjectName(QStringLiteral("green"));
        green->setGeometry(QRect(10, 50, 112, 23));
        black = new QRadioButton(groupBox_3);
        black->setObjectName(QStringLiteral("black"));
        black->setGeometry(QRect(10, 80, 112, 23));
        Other = new QRadioButton(groupBox_3);
        Other->setObjectName(QStringLiteral("Other"));
        Other->setGeometry(QRect(10, 110, 112, 23));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setEnabled(false);
        groupBox_4->setGeometry(QRect(150, 300, 101, 111));
        circle = new QRadioButton(groupBox_4);
        circle->setObjectName(QStringLiteral("circle"));
        circle->setGeometry(QRect(10, 20, 112, 23));
        line = new QRadioButton(groupBox_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 50, 112, 21));
        rectangle = new QRadioButton(groupBox_4);
        rectangle->setObjectName(QStringLiteral("rectangle"));
        rectangle->setGeometry(QRect(10, 80, 112, 23));
        Draw = new QPushButton(centralWidget);
        Draw->setObjectName(QStringLiteral("Draw"));
        Draw->setEnabled(false);
        Draw->setGeometry(QRect(280, 580, 89, 25));
        Draw_2 = new QPushButton(centralWidget);
        Draw_2->setObjectName(QStringLiteral("Draw_2"));
        Draw_2->setEnabled(false);
        Draw_2->setGeometry(QRect(480, 580, 111, 25));
        Circlegroup = new QGroupBox(centralWidget);
        Circlegroup->setObjectName(QStringLiteral("Circlegroup"));
        Circlegroup->setEnabled(false);
        Circlegroup->setGeometry(QRect(280, 250, 141, 121));
        label_3 = new QLabel(Circlegroup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 30, 71, 16));
        HorizLinear = new QDoubleSpinBox(Circlegroup);
        HorizLinear->setObjectName(QStringLiteral("HorizLinear"));
        HorizLinear->setGeometry(QRect(70, 30, 71, 21));
        HorizLinear->setMaximum(300);
        label_4 = new QLabel(Circlegroup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 60, 71, 17));
        VertLinear = new QDoubleSpinBox(Circlegroup);
        VertLinear->setObjectName(QStringLiteral("VertLinear"));
        VertLinear->setGeometry(QRect(70, 60, 71, 21));
        VertLinear->setMaximum(300);
        VertLinear_3 = new QDoubleSpinBox(Circlegroup);
        VertLinear_3->setObjectName(QStringLiteral("VertLinear_3"));
        VertLinear_3->setGeometry(QRect(70, 90, 71, 21));
        VertLinear_3->setMaximum(150);
        label_5 = new QLabel(Circlegroup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 90, 71, 17));
        Linegroup = new QGroupBox(centralWidget);
        Linegroup->setObjectName(QStringLiteral("Linegroup"));
        Linegroup->setEnabled(false);
        Linegroup->setGeometry(QRect(440, 250, 141, 151));
        HorizLinear_3 = new QDoubleSpinBox(Linegroup);
        HorizLinear_3->setObjectName(QStringLiteral("HorizLinear_3"));
        HorizLinear_3->setGeometry(QRect(70, 90, 69, 21));
        HorizLinear_3->setMaximum(300);
        label_8 = new QLabel(Linegroup);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 60, 61, 17));
        VertLinear_4 = new QDoubleSpinBox(Linegroup);
        VertLinear_4->setObjectName(QStringLiteral("VertLinear_4"));
        VertLinear_4->setGeometry(QRect(70, 120, 69, 21));
        VertLinear_4->setMaximum(300);
        VertLinear_2 = new QDoubleSpinBox(Linegroup);
        VertLinear_2->setObjectName(QStringLiteral("VertLinear_2"));
        VertLinear_2->setGeometry(QRect(70, 60, 69, 21));
        VertLinear_2->setMaximum(300);
        label_11 = new QLabel(Linegroup);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 120, 61, 17));
        label_10 = new QLabel(Linegroup);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 90, 61, 17));
        label_7 = new QLabel(Linegroup);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 30, 61, 17));
        HorizLinear_2 = new QDoubleSpinBox(Linegroup);
        HorizLinear_2->setObjectName(QStringLiteral("HorizLinear_2"));
        HorizLinear_2->setGeometry(QRect(70, 30, 69, 21));
        HorizLinear_2->setMaximum(300);
        Rectanglegroup = new QGroupBox(centralWidget);
        Rectanglegroup->setObjectName(QStringLiteral("Rectanglegroup"));
        Rectanglegroup->setEnabled(false);
        Rectanglegroup->setGeometry(QRect(290, 410, 201, 161));
        VertLinear_5 = new QDoubleSpinBox(Rectanglegroup);
        VertLinear_5->setObjectName(QStringLiteral("VertLinear_5"));
        VertLinear_5->setGeometry(QRect(120, 120, 69, 21));
        VertLinear_5->setMaximum(300);
        label_16 = new QLabel(Rectanglegroup);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, 120, 111, 20));
        HorizLinear_4 = new QDoubleSpinBox(Rectanglegroup);
        HorizLinear_4->setObjectName(QStringLiteral("HorizLinear_4"));
        HorizLinear_4->setGeometry(QRect(120, 30, 69, 21));
        HorizLinear_4->setMaximum(300);
        label_15 = new QLabel(Rectanglegroup);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 60, 81, 20));
        HorizLinear_5 = new QDoubleSpinBox(Rectanglegroup);
        HorizLinear_5->setObjectName(QStringLiteral("HorizLinear_5"));
        HorizLinear_5->setGeometry(QRect(120, 90, 69, 21));
        HorizLinear_5->setMaximum(300);
        VertLinear_6 = new QDoubleSpinBox(Rectanglegroup);
        VertLinear_6->setObjectName(QStringLiteral("VertLinear_6"));
        VertLinear_6->setGeometry(QRect(120, 60, 69, 21));
        VertLinear_6->setMaximum(300);
        label_12 = new QLabel(Rectanglegroup);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 90, 111, 20));
        label_14 = new QLabel(Rectanglegroup);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 30, 81, 20));
        OtherColourBox = new QGroupBox(centralWidget);
        OtherColourBox->setObjectName(QStringLiteral("OtherColourBox"));
        OtherColourBox->setEnabled(false);
        OtherColourBox->setGeometry(QRect(10, 450, 241, 161));
        spinBox = new QSpinBox(OtherColourBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(37, 30, 61, 26));
        spinBox->setMaximum(255);
        spinBox_2 = new QSpinBox(OtherColourBox);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(37, 60, 61, 26));
        spinBox_2->setMaximum(255);
        spinBox_3 = new QSpinBox(OtherColourBox);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(37, 90, 61, 26));
        spinBox_3->setMaximum(255);
        label_17 = new QLabel(OtherColourBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 30, 31, 20));
        label_18 = new QLabel(OtherColourBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 60, 31, 20));
        label_19 = new QLabel(OtherColourBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 90, 31, 20));
        label_20 = new QLabel(OtherColourBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(150, 30, 31, 20));
        doubleSpinBox = new QDoubleSpinBox(OtherColourBox);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(170, 30, 69, 26));
        doubleSpinBox->setMinimum(-1000);
        doubleSpinBox->setMaximum(1000);
        SetColour = new QPushButton(OtherColourBox);
        SetColour->setObjectName(QStringLiteral("SetColour"));
        SetColour->setGeometry(QRect(10, 130, 89, 25));
        OutputBox = new QTextBrowser(centralWidget);
        OutputBox->setObjectName(QStringLiteral("OutputBox"));
        OutputBox->setGeometry(QRect(610, 410, 341, 151));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 80, 89, 25));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(240, 0, 41, 621));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(260, 200, 341, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 280, 261, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 440, 261, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(0, 605, 1071, 31));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        Draw_3 = new QPushButton(centralWidget);
        Draw_3->setObjectName(QStringLiteral("Draw_3"));
        Draw_3->setEnabled(false);
        Draw_3->setGeometry(QRect(380, 580, 91, 25));
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(569, 0, 61, 621));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setEnabled(false);
        label_21->setGeometry(QRect(160, 410, 31, 20));
        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setEnabled(false);
        doubleSpinBox_2->setGeometry(QRect(180, 410, 69, 26));
        doubleSpinBox_2->setMinimum(-1000);
        doubleSpinBox_2->setMaximum(1000);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(0, 95, 261, 31));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        groupBox_3->raise();
        groupBox_2->raise();
        groupBox->raise();
        GaussSeidell->raise();
        Jacobi->raise();
        SOR->raise();
        label_2->raise();
        graphicsView->raise();
        groupBox_4->raise();
        Draw->raise();
        Draw_2->raise();
        Circlegroup->raise();
        Linegroup->raise();
        Rectanglegroup->raise();
        OtherColourBox->raise();
        OutputBox->raise();
        pushButton->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        line_6->raise();
        Draw_3->raise();
        line_8->raise();
        label_21->raise();
        doubleSpinBox_2->raise();
        line_9->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 964, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        GaussSeidell->setText(QApplication::translate("MainWindow", "Gauss-Seidel", Q_NULLPTR));
        Jacobi->setText(QApplication::translate("MainWindow", "Jacobi", Q_NULLPTR));
        SOR->setText(QApplication::translate("MainWindow", "SOR", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Grid Size           Error Tolerance", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Boundary Coords", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Problem", Q_NULLPTR));
        Problem0->setText(QApplication::translate("MainWindow", "Problem 0", Q_NULLPTR));
        Problem1->setText(QApplication::translate("MainWindow", "Problem 1", Q_NULLPTR));
        UD->setText(QApplication::translate("MainWindow", "User Defined Problem", Q_NULLPTR));
        Problem2_2->setText(QApplication::translate("MainWindow", "Multi-wire Proportional ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Chamber", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Colour", Q_NULLPTR));
        red->setText(QApplication::translate("MainWindow", "Red    (+ve)", Q_NULLPTR));
        green->setText(QApplication::translate("MainWindow", "Green (-ve)", Q_NULLPTR));
        black->setText(QApplication::translate("MainWindow", "Black (GND)", Q_NULLPTR));
        Other->setText(QApplication::translate("MainWindow", "Other", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Shape", Q_NULLPTR));
        circle->setText(QApplication::translate("MainWindow", "Circle", Q_NULLPTR));
        line->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        rectangle->setText(QApplication::translate("MainWindow", "Rectangle", Q_NULLPTR));
        Draw->setText(QApplication::translate("MainWindow", "Draw", Q_NULLPTR));
        Draw_2->setText(QApplication::translate("MainWindow", "Done Drawing", Q_NULLPTR));
        Circlegroup->setTitle(QApplication::translate("MainWindow", "CIrcle", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Centre X:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Centre Y:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Radius :", Q_NULLPTR));
        Linegroup->setTitle(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Start Y:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "End Y:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "End X:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Start X:", Q_NULLPTR));
        Rectanglegroup->setTitle(QApplication::translate("MainWindow", "Rectangle", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Bottom Right Y:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Top Left Y:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Bottom Right X:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Top Left X:", Q_NULLPTR));
        OtherColourBox->setTitle(QApplication::translate("MainWindow", "Other Colour", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "R:", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "G:", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "B:", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "V:", Q_NULLPTR));
        SetColour->setText(QApplication::translate("MainWindow", "Set Colour", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
        Draw_3->setText(QApplication::translate("MainWindow", "Undo", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "V:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
