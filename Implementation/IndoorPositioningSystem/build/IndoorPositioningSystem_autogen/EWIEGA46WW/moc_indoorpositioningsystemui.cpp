/****************************************************************************
** Meta object code from reading C++ file 'indoorpositioningsystemui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../indoorpositioningsystemui.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indoorpositioningsystemui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSIndoorPositioningSystemUIENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSIndoorPositioningSystemUIENDCLASS = QtMocHelpers::stringData(
    "IndoorPositioningSystemUI",
    "on_actionOpen_Video_triggered",
    "",
    "on_actionLoad_intrinsic_calibration_params_triggered",
    "on_actionLoad_model_params_triggered",
    "on_actionLoad_human_detector_weights_triggered",
    "onVideoOpened",
    "totalFrames",
    "videoDuration",
    "onFileLoaded",
    "success",
    "message",
    "onDistCoeffsLoaded",
    "onModelNotLoaded",
    "PredictionType",
    "type",
    "onHumanDetectorNotInitialized",
    "onUWBDataUpdated",
    "UWBData",
    "tag",
    "onDataUpdated",
    "image",
    "frameID",
    "timestamp",
    "onPositionUpdated",
    "currentTime",
    "onDurationUpdated",
    "currentTimeInMSeconds",
    "onShowWarning",
    "header",
    "onFinishedVideoProcessing",
    "onAcceptFrameByFrameExport",
    "onShowExportWarning",
    "ExportType",
    "onShowExportProcessDialog",
    "onUpdateExportProgress",
    "proportion",
    "onExportFinished",
    "onChangePredictionButtonName",
    "isPredictionRequested",
    "on_horizontalSlider_Duration_sliderReleased",
    "on_horizontalSlider_Duration_valueChanged",
    "position",
    "on_pushButton_Play_Pause_clicked",
    "on_pushButton_UWB_Data_Analysis_clicked",
    "on_pushButton_UWB_Localization_clicked",
    "on_pushButton_Export_Data_clicked",
    "on_pushButton_Predict_Optical_clicked",
    "on_pushButton_Predict_Model_clicked",
    "on_pushButton_UWB_Show_Coordinates_clicked",
    "on_pushButton_Optical_Show_Coordinates_clicked",
    "on_pushButton_Pixel_to_Real_Show_Coordinates_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSIndoorPositioningSystemUIENDCLASS_t {
    uint offsetsAndSizes[104];
    char stringdata0[26];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[53];
    char stringdata4[37];
    char stringdata5[47];
    char stringdata6[14];
    char stringdata7[12];
    char stringdata8[14];
    char stringdata9[13];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[19];
    char stringdata13[17];
    char stringdata14[15];
    char stringdata15[5];
    char stringdata16[30];
    char stringdata17[17];
    char stringdata18[8];
    char stringdata19[4];
    char stringdata20[14];
    char stringdata21[6];
    char stringdata22[8];
    char stringdata23[10];
    char stringdata24[18];
    char stringdata25[12];
    char stringdata26[18];
    char stringdata27[22];
    char stringdata28[14];
    char stringdata29[7];
    char stringdata30[26];
    char stringdata31[27];
    char stringdata32[20];
    char stringdata33[11];
    char stringdata34[26];
    char stringdata35[23];
    char stringdata36[11];
    char stringdata37[17];
    char stringdata38[29];
    char stringdata39[22];
    char stringdata40[44];
    char stringdata41[42];
    char stringdata42[9];
    char stringdata43[33];
    char stringdata44[40];
    char stringdata45[39];
    char stringdata46[34];
    char stringdata47[38];
    char stringdata48[36];
    char stringdata49[43];
    char stringdata50[47];
    char stringdata51[53];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSIndoorPositioningSystemUIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSIndoorPositioningSystemUIENDCLASS_t qt_meta_stringdata_CLASSIndoorPositioningSystemUIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "IndoorPositioningSystemUI"
        QT_MOC_LITERAL(26, 29),  // "on_actionOpen_Video_triggered"
        QT_MOC_LITERAL(56, 0),  // ""
        QT_MOC_LITERAL(57, 52),  // "on_actionLoad_intrinsic_calib..."
        QT_MOC_LITERAL(110, 36),  // "on_actionLoad_model_params_tr..."
        QT_MOC_LITERAL(147, 46),  // "on_actionLoad_human_detector_..."
        QT_MOC_LITERAL(194, 13),  // "onVideoOpened"
        QT_MOC_LITERAL(208, 11),  // "totalFrames"
        QT_MOC_LITERAL(220, 13),  // "videoDuration"
        QT_MOC_LITERAL(234, 12),  // "onFileLoaded"
        QT_MOC_LITERAL(247, 7),  // "success"
        QT_MOC_LITERAL(255, 7),  // "message"
        QT_MOC_LITERAL(263, 18),  // "onDistCoeffsLoaded"
        QT_MOC_LITERAL(282, 16),  // "onModelNotLoaded"
        QT_MOC_LITERAL(299, 14),  // "PredictionType"
        QT_MOC_LITERAL(314, 4),  // "type"
        QT_MOC_LITERAL(319, 29),  // "onHumanDetectorNotInitialized"
        QT_MOC_LITERAL(349, 16),  // "onUWBDataUpdated"
        QT_MOC_LITERAL(366, 7),  // "UWBData"
        QT_MOC_LITERAL(374, 3),  // "tag"
        QT_MOC_LITERAL(378, 13),  // "onDataUpdated"
        QT_MOC_LITERAL(392, 5),  // "image"
        QT_MOC_LITERAL(398, 7),  // "frameID"
        QT_MOC_LITERAL(406, 9),  // "timestamp"
        QT_MOC_LITERAL(416, 17),  // "onPositionUpdated"
        QT_MOC_LITERAL(434, 11),  // "currentTime"
        QT_MOC_LITERAL(446, 17),  // "onDurationUpdated"
        QT_MOC_LITERAL(464, 21),  // "currentTimeInMSeconds"
        QT_MOC_LITERAL(486, 13),  // "onShowWarning"
        QT_MOC_LITERAL(500, 6),  // "header"
        QT_MOC_LITERAL(507, 25),  // "onFinishedVideoProcessing"
        QT_MOC_LITERAL(533, 26),  // "onAcceptFrameByFrameExport"
        QT_MOC_LITERAL(560, 19),  // "onShowExportWarning"
        QT_MOC_LITERAL(580, 10),  // "ExportType"
        QT_MOC_LITERAL(591, 25),  // "onShowExportProcessDialog"
        QT_MOC_LITERAL(617, 22),  // "onUpdateExportProgress"
        QT_MOC_LITERAL(640, 10),  // "proportion"
        QT_MOC_LITERAL(651, 16),  // "onExportFinished"
        QT_MOC_LITERAL(668, 28),  // "onChangePredictionButtonName"
        QT_MOC_LITERAL(697, 21),  // "isPredictionRequested"
        QT_MOC_LITERAL(719, 43),  // "on_horizontalSlider_Duration_..."
        QT_MOC_LITERAL(763, 41),  // "on_horizontalSlider_Duration_..."
        QT_MOC_LITERAL(805, 8),  // "position"
        QT_MOC_LITERAL(814, 32),  // "on_pushButton_Play_Pause_clicked"
        QT_MOC_LITERAL(847, 39),  // "on_pushButton_UWB_Data_Analys..."
        QT_MOC_LITERAL(887, 38),  // "on_pushButton_UWB_Localizatio..."
        QT_MOC_LITERAL(926, 33),  // "on_pushButton_Export_Data_cli..."
        QT_MOC_LITERAL(960, 37),  // "on_pushButton_Predict_Optical..."
        QT_MOC_LITERAL(998, 35),  // "on_pushButton_Predict_Model_c..."
        QT_MOC_LITERAL(1034, 42),  // "on_pushButton_UWB_Show_Coordi..."
        QT_MOC_LITERAL(1077, 46),  // "on_pushButton_Optical_Show_Co..."
        QT_MOC_LITERAL(1124, 52)   // "on_pushButton_Pixel_to_Real_S..."
    },
    "IndoorPositioningSystemUI",
    "on_actionOpen_Video_triggered",
    "",
    "on_actionLoad_intrinsic_calibration_params_triggered",
    "on_actionLoad_model_params_triggered",
    "on_actionLoad_human_detector_weights_triggered",
    "onVideoOpened",
    "totalFrames",
    "videoDuration",
    "onFileLoaded",
    "success",
    "message",
    "onDistCoeffsLoaded",
    "onModelNotLoaded",
    "PredictionType",
    "type",
    "onHumanDetectorNotInitialized",
    "onUWBDataUpdated",
    "UWBData",
    "tag",
    "onDataUpdated",
    "image",
    "frameID",
    "timestamp",
    "onPositionUpdated",
    "currentTime",
    "onDurationUpdated",
    "currentTimeInMSeconds",
    "onShowWarning",
    "header",
    "onFinishedVideoProcessing",
    "onAcceptFrameByFrameExport",
    "onShowExportWarning",
    "ExportType",
    "onShowExportProcessDialog",
    "onUpdateExportProgress",
    "proportion",
    "onExportFinished",
    "onChangePredictionButtonName",
    "isPredictionRequested",
    "on_horizontalSlider_Duration_sliderReleased",
    "on_horizontalSlider_Duration_valueChanged",
    "position",
    "on_pushButton_Play_Pause_clicked",
    "on_pushButton_UWB_Data_Analysis_clicked",
    "on_pushButton_UWB_Localization_clicked",
    "on_pushButton_Export_Data_clicked",
    "on_pushButton_Predict_Optical_clicked",
    "on_pushButton_Predict_Model_clicked",
    "on_pushButton_UWB_Show_Coordinates_clicked",
    "on_pushButton_Optical_Show_Coordinates_clicked",
    "on_pushButton_Pixel_to_Real_Show_Coordinates_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSIndoorPositioningSystemUIENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  206,    2, 0x08,    1 /* Private */,
       3,    0,  207,    2, 0x08,    2 /* Private */,
       4,    0,  208,    2, 0x08,    3 /* Private */,
       5,    0,  209,    2, 0x08,    4 /* Private */,
       6,    2,  210,    2, 0x08,    5 /* Private */,
       9,    2,  215,    2, 0x08,    8 /* Private */,
      12,    0,  220,    2, 0x08,   11 /* Private */,
      13,    1,  221,    2, 0x08,   12 /* Private */,
      16,    0,  224,    2, 0x08,   14 /* Private */,
      17,    1,  225,    2, 0x08,   15 /* Private */,
      20,    3,  228,    2, 0x08,   17 /* Private */,
      24,    1,  235,    2, 0x08,   21 /* Private */,
      26,    2,  238,    2, 0x08,   23 /* Private */,
      28,    2,  243,    2, 0x08,   26 /* Private */,
      30,    0,  248,    2, 0x08,   29 /* Private */,
      31,    0,  249,    2, 0x08,   30 /* Private */,
      32,    3,  250,    2, 0x08,   31 /* Private */,
      34,    0,  257,    2, 0x08,   35 /* Private */,
      35,    1,  258,    2, 0x08,   36 /* Private */,
      37,    1,  261,    2, 0x08,   38 /* Private */,
      38,    2,  264,    2, 0x08,   40 /* Private */,
      40,    0,  269,    2, 0x08,   43 /* Private */,
      41,    1,  270,    2, 0x08,   44 /* Private */,
      43,    0,  273,    2, 0x08,   46 /* Private */,
      44,    0,  274,    2, 0x08,   47 /* Private */,
      45,    0,  275,    2, 0x08,   48 /* Private */,
      46,    0,  276,    2, 0x08,   49 /* Private */,
      47,    0,  277,    2, 0x08,   50 /* Private */,
      48,    0,  278,    2, 0x08,   51 /* Private */,
      49,    0,  279,    2, 0x08,   52 /* Private */,
      50,    0,  280,    2, 0x08,   53 /* Private */,
      51,    0,  281,    2, 0x08,   54 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    7,    8,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QImage, QMetaType::Int, QMetaType::QString,   21,   22,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,   22,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   29,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 33,   29,   11,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject IndoorPositioningSystemUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSIndoorPositioningSystemUIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSIndoorPositioningSystemUIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSIndoorPositioningSystemUIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IndoorPositioningSystemUI, std::true_type>,
        // method 'on_actionOpen_Video_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLoad_intrinsic_calibration_params_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLoad_model_params_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLoad_human_detector_weights_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVideoOpened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<long long, std::false_type>,
        // method 'onFileLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onDistCoeffsLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModelNotLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PredictionType, std::false_type>,
        // method 'onHumanDetectorNotInitialized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUWBDataUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<UWBData, std::false_type>,
        // method 'onDataUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onPositionUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onDurationUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<long long, std::false_type>,
        // method 'onShowWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onFinishedVideoProcessing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAcceptFrameByFrameExport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShowExportWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ExportType, std::false_type>,
        // method 'onShowExportProcessDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateExportProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onExportFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onChangePredictionButtonName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PredictionType, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_horizontalSlider_Duration_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_Duration_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_Play_Pause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_UWB_Data_Analysis_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_UWB_Localization_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Export_Data_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Predict_Optical_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Predict_Model_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_UWB_Show_Coordinates_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Optical_Show_Coordinates_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Pixel_to_Real_Show_Coordinates_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void IndoorPositioningSystemUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IndoorPositioningSystemUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionOpen_Video_triggered(); break;
        case 1: _t->on_actionLoad_intrinsic_calibration_params_triggered(); break;
        case 2: _t->on_actionLoad_model_params_triggered(); break;
        case 3: _t->on_actionLoad_human_detector_weights_triggered(); break;
        case 4: _t->onVideoOpened((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[2]))); break;
        case 5: _t->onFileLoaded((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->onDistCoeffsLoaded(); break;
        case 7: _t->onModelNotLoaded((*reinterpret_cast< std::add_pointer_t<PredictionType>>(_a[1]))); break;
        case 8: _t->onHumanDetectorNotInitialized(); break;
        case 9: _t->onUWBDataUpdated((*reinterpret_cast< std::add_pointer_t<UWBData>>(_a[1]))); break;
        case 10: _t->onDataUpdated((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->onPositionUpdated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->onDurationUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[2]))); break;
        case 13: _t->onShowWarning((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->onFinishedVideoProcessing(); break;
        case 15: _t->onAcceptFrameByFrameExport(); break;
        case 16: _t->onShowExportWarning((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ExportType>>(_a[3]))); break;
        case 17: _t->onShowExportProcessDialog(); break;
        case 18: _t->onUpdateExportProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->onExportFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->onChangePredictionButtonName((*reinterpret_cast< std::add_pointer_t<PredictionType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 21: _t->on_horizontalSlider_Duration_sliderReleased(); break;
        case 22: _t->on_horizontalSlider_Duration_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_pushButton_Play_Pause_clicked(); break;
        case 24: _t->on_pushButton_UWB_Data_Analysis_clicked(); break;
        case 25: _t->on_pushButton_UWB_Localization_clicked(); break;
        case 26: _t->on_pushButton_Export_Data_clicked(); break;
        case 27: _t->on_pushButton_Predict_Optical_clicked(); break;
        case 28: _t->on_pushButton_Predict_Model_clicked(); break;
        case 29: _t->on_pushButton_UWB_Show_Coordinates_clicked(); break;
        case 30: _t->on_pushButton_Optical_Show_Coordinates_clicked(); break;
        case 31: _t->on_pushButton_Pixel_to_Real_Show_Coordinates_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *IndoorPositioningSystemUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IndoorPositioningSystemUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSIndoorPositioningSystemUIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int IndoorPositioningSystemUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }
    return _id;
}
QT_WARNING_POP
