#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QPushButton>
#include <QComboBox>
#include <QGroupBox>
#include <QCheckBox>
#include <QTableWidget>
#include <QGridLayout>
#include <QLabel>
#include <QSpinBox>
#include <QLineEdit>
#include <QDateTimeEdit>
#include <QTextEdit>
#include <QScrollArea>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QWidget *guiWidget;
    QScrollArea *guiScrollArea;

    QVBoxLayout *mainLayout;

    // Colors & Palettes
    QColor noColor;
    QColor redColor;

    QColor offerContentColor;
    QPalette offerContentPalette;

    QColor offerMaskColor;
    QPalette offerMaskPalette;

    QColor requestContentColor;
    QPalette requestContentPalette;

    QColor requestMaskColor;
    QPalette requestMaskPalette;

    QColor offerMatchColor;
    QPalette offerMatchPalette;

    QColor requestMatchColor;
    QPalette requestMatchPalette;

    QColor doubleMatchColor;
    QPalette doubleMatchPalette;

    QColor directMatchColor;
    QColor indirectMatchColor;


    // Offer
    QGroupBox *offerGBox;
    QGridLayout *offerLayout;

    // Request
    QGroupBox *requestGBox;
    QGridLayout *requestLayout;

    // offerContent_1
    QGroupBox *offerContent_1_ByteGroupBox;
    QHBoxLayout *offerContent_1_ByteHBoxLayout;
    QCheckBox *offerContent_1_Byte_7_CheckBox;
    QCheckBox *offerContent_1_Byte_6_CheckBox;
    QCheckBox *offerContent_1_Byte_5_CheckBox;
    QCheckBox *offerContent_1_Byte_4_CheckBox;
    QCheckBox *offerContent_1_Byte_3_CheckBox;
    QCheckBox *offerContent_1_Byte_2_CheckBox;
    QCheckBox *offerContent_1_Byte_1_CheckBox;
    QCheckBox *offerContent_1_Byte_0_CheckBox;
    QPushButton *offerContent_1_ByteBtn;

    // offerMask_1
    QGroupBox *offerMask_1_ByteGroupBox;
    QHBoxLayout *offerMask_1_ByteHBoxLayout;
    QCheckBox *offerMask_1_Byte_7_CheckBox;
    QCheckBox *offerMask_1_Byte_6_CheckBox;
    QCheckBox *offerMask_1_Byte_5_CheckBox;
    QCheckBox *offerMask_1_Byte_4_CheckBox;
    QCheckBox *offerMask_1_Byte_3_CheckBox;
    QCheckBox *offerMask_1_Byte_2_CheckBox;
    QCheckBox *offerMask_1_Byte_1_CheckBox;
    QCheckBox *offerMask_1_Byte_0_CheckBox;
    QPushButton *offerMask_1_ByteBtn;

    // requestContent_1
    QGroupBox *requestContent_1_ByteGroupBox;
    QHBoxLayout *requestContent_1_ByteHBoxLayout;
    QCheckBox *requestContent_1_Byte_7_CheckBox;
    QCheckBox *requestContent_1_Byte_6_CheckBox;
    QCheckBox *requestContent_1_Byte_5_CheckBox;
    QCheckBox *requestContent_1_Byte_4_CheckBox;
    QCheckBox *requestContent_1_Byte_3_CheckBox;
    QCheckBox *requestContent_1_Byte_2_CheckBox;
    QCheckBox *requestContent_1_Byte_1_CheckBox;
    QCheckBox *requestContent_1_Byte_0_CheckBox;
    QPushButton *requestContent_1_ByteBtn;

    // requestMask_1
    QGroupBox *requestMask_1_ByteGroupBox;
    QHBoxLayout *requestMask_1_ByteHBoxLayout;
    QCheckBox *requestMask_1_Byte_7_CheckBox;
    QCheckBox *requestMask_1_Byte_6_CheckBox;
    QCheckBox *requestMask_1_Byte_5_CheckBox;
    QCheckBox *requestMask_1_Byte_4_CheckBox;
    QCheckBox *requestMask_1_Byte_3_CheckBox;
    QCheckBox *requestMask_1_Byte_2_CheckBox;
    QCheckBox *requestMask_1_Byte_1_CheckBox;
    QCheckBox *requestMask_1_Byte_0_CheckBox;
    QPushButton *requestMask_1_ByteBtn;

    // offerContent_2
    QGroupBox *offerContent_2_ByteGroupBox;
    QHBoxLayout *offerContent_2_ByteHBoxLayout;
    QCheckBox *offerContent_2_Byte_7_CheckBox;
    QCheckBox *offerContent_2_Byte_6_CheckBox;
    QCheckBox *offerContent_2_Byte_5_CheckBox;
    QCheckBox *offerContent_2_Byte_4_CheckBox;
    QCheckBox *offerContent_2_Byte_3_CheckBox;
    QCheckBox *offerContent_2_Byte_2_CheckBox;
    QCheckBox *offerContent_2_Byte_1_CheckBox;
    QCheckBox *offerContent_2_Byte_0_CheckBox;
    QPushButton *offerContent_2_ByteBtn;

    // offerMask_2
    QGroupBox *offerMask_2_ByteGroupBox;
    QHBoxLayout *offerMask_2_ByteHBoxLayout;
    QCheckBox *offerMask_2_Byte_7_CheckBox;
    QCheckBox *offerMask_2_Byte_6_CheckBox;
    QCheckBox *offerMask_2_Byte_5_CheckBox;
    QCheckBox *offerMask_2_Byte_4_CheckBox;
    QCheckBox *offerMask_2_Byte_3_CheckBox;
    QCheckBox *offerMask_2_Byte_2_CheckBox;
    QCheckBox *offerMask_2_Byte_1_CheckBox;
    QCheckBox *offerMask_2_Byte_0_CheckBox;
    QPushButton *offerMask_2_ByteBtn;

    // requestContent_2
    QGroupBox *requestContent_2_ByteGroupBox;
    QHBoxLayout *requestContent_2_ByteHBoxLayout;
    QCheckBox *requestContent_2_Byte_7_CheckBox;
    QCheckBox *requestContent_2_Byte_6_CheckBox;
    QCheckBox *requestContent_2_Byte_5_CheckBox;
    QCheckBox *requestContent_2_Byte_4_CheckBox;
    QCheckBox *requestContent_2_Byte_3_CheckBox;
    QCheckBox *requestContent_2_Byte_2_CheckBox;
    QCheckBox *requestContent_2_Byte_1_CheckBox;
    QCheckBox *requestContent_2_Byte_0_CheckBox;
    QPushButton *requestContent_2_ByteBtn;

    // requestMask_2
    QGroupBox *requestMask_2_ByteGroupBox;
    QHBoxLayout *requestMask_2_ByteHBoxLayout;
    QCheckBox *requestMask_2_Byte_7_CheckBox;
    QCheckBox *requestMask_2_Byte_6_CheckBox;
    QCheckBox *requestMask_2_Byte_5_CheckBox;
    QCheckBox *requestMask_2_Byte_4_CheckBox;
    QCheckBox *requestMask_2_Byte_3_CheckBox;
    QCheckBox *requestMask_2_Byte_2_CheckBox;
    QCheckBox *requestMask_2_Byte_1_CheckBox;
    QCheckBox *requestMask_2_Byte_0_CheckBox;
    QPushButton *requestMask_2_ByteBtn;

    // Spatial
    QGroupBox *spatialGBox;
    QGridLayout *spatialLayout;

    QPushButton *clearSpatial_1_Btn;
    QPushButton *refreshSpatial_1_Btn;

    QPushButton *clearSpatial_2_Btn;
    QPushButton *refreshSpatial_2_Btn;

    QPushButton *clearSpatialAll_Btn;
    QPushButton *refreshSpatialAll_Btn;

    QHBoxLayout *spatialTableLayout;
    QTableWidget *tableWidget_1;
    QTableWidget *tableWidget_2;
    QTableWidget *tableWidgetAll;

    int tableSideCount;

    // Interaction
    QGroupBox *interactionGBox;
    QGridLayout *interactionLayout;

public slots:

    void showOfferContent_1_Byte();
    void showOfferMask_1_Byte();
    void showRequestContent_1_Byte();
    void showRequestMask_1_Byte();

    void refreshSpatial_1();
    void clearSpatial_1();

    void showOfferContent_2_Byte();
    void showOfferMask_2_Byte();
    void showRequestContent_2_Byte();
    void showRequestMask_2_Byte();

    void refreshSpatial_2();
    void clearSpatial_2();

    void refreshSpatialAll();
    void clearSpatialAll();

private:

    int offerContent_1_ToByte();
    int offerMask_1_ToByte();
    int requestContent_1_ToByte();
    int requestMask_1_ToByte();

    void clearOfferContent_1();
    void clearOfferMask_1();
    void clearRequestContent_1();
    void clearRequestMask_1();

    int offerContent_2_ToByte();
    int offerMask_2_ToByte();
    int requestContent_2_ToByte();
    int requestMask_2_ToByte();

    void clearOfferContent_2();
    void clearOfferMask_2();
    void clearRequestContent_2();
    void clearRequestMask_2();

    void copyColor(QTableWidget* targetTable);
};

#endif // MAINWINDOW_H
