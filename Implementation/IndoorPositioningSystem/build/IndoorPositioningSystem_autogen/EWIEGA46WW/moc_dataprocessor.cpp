/****************************************************************************
** Meta object code from reading C++ file 'dataprocessor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dataprocessor.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataprocessor.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDataProcessorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDataProcessorENDCLASS = QtMocHelpers::stringData(
    "DataProcessor",
    "requestChangePredictionButtonName",
    "",
    "PredictionType",
    "type",
    "isPredictionRequested",
    "requestShowPlot",
    "requestShowAvailableTags",
    "std::vector<int>",
    "availableTagIDs",
    "requestShowAvailableAnchors",
    "availableAnchorIDs",
    "requestShowPlotDistancesVsTimestamps",
    "std::vector<qlonglong>",
    "timestamps",
    "std::vector<double*>",
    "distances",
    "requestShowPlotRollingDeviations",
    "std::vector<double>",
    "deviations",
    "requestShowDatasetSegments",
    "segmentMeans",
    "requestShowOriginalVsAdjustedDistances",
    "timestampsToAnalyze",
    "distancesToAnalyzeOriginal",
    "distancesToAnalyzeAdjusted",
    "exportProgressUpdated",
    "progress",
    "onFindUWBMeasurementAndEnqueue",
    "frameIndex",
    "qImage",
    "DetectionData",
    "detectedPeople",
    "onFindUWBMeasurementAndExport",
    "rangeIndex",
    "ExportType",
    "lastRecord",
    "setAnchorPositions",
    "std::vector<AnchorPosition>",
    "anchorPositions",
    "calculateUWBCoordinates",
    "UWBData&",
    "data",
    "collectDataForTag",
    "tagIDText",
    "setRangeForDataAnalysis",
    "startTimeSec",
    "endTimeSec",
    "splitDataset",
    "threshold",
    "collectDataForPlotDistancesVsTimestamps",
    "anchorID",
    "calculateRollingDeviation",
    "windowSize",
    "calculatePolynomialRegression",
    "referenceValues",
    "updateOriginalWithAdjustedValues",
    "getSegmentFrameIDs",
    "cleanup"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDataProcessorENDCLASS_t {
    uint offsetsAndSizes[118];
    char stringdata0[14];
    char stringdata1[34];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[5];
    char stringdata5[22];
    char stringdata6[16];
    char stringdata7[25];
    char stringdata8[17];
    char stringdata9[16];
    char stringdata10[28];
    char stringdata11[19];
    char stringdata12[37];
    char stringdata13[23];
    char stringdata14[11];
    char stringdata15[21];
    char stringdata16[10];
    char stringdata17[33];
    char stringdata18[20];
    char stringdata19[11];
    char stringdata20[27];
    char stringdata21[13];
    char stringdata22[39];
    char stringdata23[20];
    char stringdata24[27];
    char stringdata25[27];
    char stringdata26[22];
    char stringdata27[9];
    char stringdata28[31];
    char stringdata29[11];
    char stringdata30[7];
    char stringdata31[14];
    char stringdata32[15];
    char stringdata33[30];
    char stringdata34[11];
    char stringdata35[11];
    char stringdata36[11];
    char stringdata37[19];
    char stringdata38[28];
    char stringdata39[16];
    char stringdata40[24];
    char stringdata41[9];
    char stringdata42[5];
    char stringdata43[18];
    char stringdata44[10];
    char stringdata45[24];
    char stringdata46[13];
    char stringdata47[11];
    char stringdata48[13];
    char stringdata49[10];
    char stringdata50[40];
    char stringdata51[9];
    char stringdata52[26];
    char stringdata53[11];
    char stringdata54[30];
    char stringdata55[16];
    char stringdata56[33];
    char stringdata57[19];
    char stringdata58[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDataProcessorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDataProcessorENDCLASS_t qt_meta_stringdata_CLASSDataProcessorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "DataProcessor"
        QT_MOC_LITERAL(14, 33),  // "requestChangePredictionButton..."
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 14),  // "PredictionType"
        QT_MOC_LITERAL(64, 4),  // "type"
        QT_MOC_LITERAL(69, 21),  // "isPredictionRequested"
        QT_MOC_LITERAL(91, 15),  // "requestShowPlot"
        QT_MOC_LITERAL(107, 24),  // "requestShowAvailableTags"
        QT_MOC_LITERAL(132, 16),  // "std::vector<int>"
        QT_MOC_LITERAL(149, 15),  // "availableTagIDs"
        QT_MOC_LITERAL(165, 27),  // "requestShowAvailableAnchors"
        QT_MOC_LITERAL(193, 18),  // "availableAnchorIDs"
        QT_MOC_LITERAL(212, 36),  // "requestShowPlotDistancesVsTim..."
        QT_MOC_LITERAL(249, 22),  // "std::vector<qlonglong>"
        QT_MOC_LITERAL(272, 10),  // "timestamps"
        QT_MOC_LITERAL(283, 20),  // "std::vector<double*>"
        QT_MOC_LITERAL(304, 9),  // "distances"
        QT_MOC_LITERAL(314, 32),  // "requestShowPlotRollingDeviations"
        QT_MOC_LITERAL(347, 19),  // "std::vector<double>"
        QT_MOC_LITERAL(367, 10),  // "deviations"
        QT_MOC_LITERAL(378, 26),  // "requestShowDatasetSegments"
        QT_MOC_LITERAL(405, 12),  // "segmentMeans"
        QT_MOC_LITERAL(418, 38),  // "requestShowOriginalVsAdjusted..."
        QT_MOC_LITERAL(457, 19),  // "timestampsToAnalyze"
        QT_MOC_LITERAL(477, 26),  // "distancesToAnalyzeOriginal"
        QT_MOC_LITERAL(504, 26),  // "distancesToAnalyzeAdjusted"
        QT_MOC_LITERAL(531, 21),  // "exportProgressUpdated"
        QT_MOC_LITERAL(553, 8),  // "progress"
        QT_MOC_LITERAL(562, 30),  // "onFindUWBMeasurementAndEnqueue"
        QT_MOC_LITERAL(593, 10),  // "frameIndex"
        QT_MOC_LITERAL(604, 6),  // "qImage"
        QT_MOC_LITERAL(611, 13),  // "DetectionData"
        QT_MOC_LITERAL(625, 14),  // "detectedPeople"
        QT_MOC_LITERAL(640, 29),  // "onFindUWBMeasurementAndExport"
        QT_MOC_LITERAL(670, 10),  // "rangeIndex"
        QT_MOC_LITERAL(681, 10),  // "ExportType"
        QT_MOC_LITERAL(692, 10),  // "lastRecord"
        QT_MOC_LITERAL(703, 18),  // "setAnchorPositions"
        QT_MOC_LITERAL(722, 27),  // "std::vector<AnchorPosition>"
        QT_MOC_LITERAL(750, 15),  // "anchorPositions"
        QT_MOC_LITERAL(766, 23),  // "calculateUWBCoordinates"
        QT_MOC_LITERAL(790, 8),  // "UWBData&"
        QT_MOC_LITERAL(799, 4),  // "data"
        QT_MOC_LITERAL(804, 17),  // "collectDataForTag"
        QT_MOC_LITERAL(822, 9),  // "tagIDText"
        QT_MOC_LITERAL(832, 23),  // "setRangeForDataAnalysis"
        QT_MOC_LITERAL(856, 12),  // "startTimeSec"
        QT_MOC_LITERAL(869, 10),  // "endTimeSec"
        QT_MOC_LITERAL(880, 12),  // "splitDataset"
        QT_MOC_LITERAL(893, 9),  // "threshold"
        QT_MOC_LITERAL(903, 39),  // "collectDataForPlotDistancesVs..."
        QT_MOC_LITERAL(943, 8),  // "anchorID"
        QT_MOC_LITERAL(952, 25),  // "calculateRollingDeviation"
        QT_MOC_LITERAL(978, 10),  // "windowSize"
        QT_MOC_LITERAL(989, 29),  // "calculatePolynomialRegression"
        QT_MOC_LITERAL(1019, 15),  // "referenceValues"
        QT_MOC_LITERAL(1035, 32),  // "updateOriginalWithAdjustedValues"
        QT_MOC_LITERAL(1068, 18),  // "getSegmentFrameIDs"
        QT_MOC_LITERAL(1087, 7)   // "cleanup"
    },
    "DataProcessor",
    "requestChangePredictionButtonName",
    "",
    "PredictionType",
    "type",
    "isPredictionRequested",
    "requestShowPlot",
    "requestShowAvailableTags",
    "std::vector<int>",
    "availableTagIDs",
    "requestShowAvailableAnchors",
    "availableAnchorIDs",
    "requestShowPlotDistancesVsTimestamps",
    "std::vector<qlonglong>",
    "timestamps",
    "std::vector<double*>",
    "distances",
    "requestShowPlotRollingDeviations",
    "std::vector<double>",
    "deviations",
    "requestShowDatasetSegments",
    "segmentMeans",
    "requestShowOriginalVsAdjustedDistances",
    "timestampsToAnalyze",
    "distancesToAnalyzeOriginal",
    "distancesToAnalyzeAdjusted",
    "exportProgressUpdated",
    "progress",
    "onFindUWBMeasurementAndEnqueue",
    "frameIndex",
    "qImage",
    "DetectionData",
    "detectedPeople",
    "onFindUWBMeasurementAndExport",
    "rangeIndex",
    "ExportType",
    "lastRecord",
    "setAnchorPositions",
    "std::vector<AnchorPosition>",
    "anchorPositions",
    "calculateUWBCoordinates",
    "UWBData&",
    "data",
    "collectDataForTag",
    "tagIDText",
    "setRangeForDataAnalysis",
    "startTimeSec",
    "endTimeSec",
    "splitDataset",
    "threshold",
    "collectDataForPlotDistancesVsTimestamps",
    "anchorID",
    "calculateRollingDeviation",
    "windowSize",
    "calculatePolynomialRegression",
    "referenceValues",
    "updateOriginalWithAdjustedValues",
    "getSegmentFrameIDs",
    "cleanup"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDataProcessorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  146,    2, 0x06,    1 /* Public */,
       6,    0,  151,    2, 0x06,    4 /* Public */,
       7,    1,  152,    2, 0x06,    5 /* Public */,
      10,    1,  155,    2, 0x06,    7 /* Public */,
      12,    2,  158,    2, 0x06,    9 /* Public */,
      17,    2,  163,    2, 0x06,   12 /* Public */,
      20,    1,  168,    2, 0x06,   15 /* Public */,
      22,    3,  171,    2, 0x06,   17 /* Public */,
      26,    1,  178,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      28,    3,  181,    2, 0x0a,   23 /* Public */,
      33,    5,  188,    2, 0x0a,   27 /* Public */,
      37,    1,  199,    2, 0x0a,   33 /* Public */,
      40,    1,  202,    2, 0x0a,   35 /* Public */,
      43,    1,  205,    2, 0x0a,   37 /* Public */,
      45,    2,  208,    2, 0x0a,   39 /* Public */,
      48,    1,  213,    2, 0x0a,   42 /* Public */,
      50,    1,  216,    2, 0x0a,   44 /* Public */,
      52,    1,  219,    2, 0x0a,   46 /* Public */,
      54,    1,  222,    2, 0x0a,   48 /* Public */,
      56,    0,  225,    2, 0x0a,   50 /* Public */,
      57,    0,  226,    2, 0x0a,   51 /* Public */,
      58,    0,  227,    2, 0x08,   52 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 18,   14,   19,
    QMetaType::Void, 0x80000000 | 18,   21,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 18,   23,   24,   25,
    QMetaType::Void, QMetaType::Int,   27,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QImage, 0x80000000 | 31,   29,   30,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 35, 0x80000000 | 31, QMetaType::Bool,   29,   34,    4,   32,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   46,   47,
    QMetaType::Void, QMetaType::Double,   49,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, 0x80000000 | 18,   55,
    QMetaType::Void,
    0x80000000 | 8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataProcessor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSDataProcessorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDataProcessorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDataProcessorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataProcessor, std::true_type>,
        // method 'requestChangePredictionButtonName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PredictionType, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'requestShowPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestShowAvailableTags'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<int> &, std::false_type>,
        // method 'requestShowAvailableAnchors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<int> &, std::false_type>,
        // method 'requestShowPlotDistancesVsTimestamps'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<long long> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double*>, std::false_type>,
        // method 'requestShowPlotRollingDeviations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<long long> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<double> &, std::false_type>,
        // method 'requestShowDatasetSegments'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<double> &, std::false_type>,
        // method 'requestShowOriginalVsAdjustedDistances'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<long long> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<double> &, std::false_type>,
        // method 'exportProgressUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onFindUWBMeasurementAndEnqueue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        QtPrivate::TypeAndForceComplete<DetectionData, std::false_type>,
        // method 'onFindUWBMeasurementAndExport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<ExportType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DetectionData &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAnchorPositions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<AnchorPosition>, std::false_type>,
        // method 'calculateUWBCoordinates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<UWBData &, std::false_type>,
        // method 'collectDataForTag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setRangeForDataAnalysis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const long long, std::false_type>,
        QtPrivate::TypeAndForceComplete<const long long, std::false_type>,
        // method 'splitDataset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double, std::false_type>,
        // method 'collectDataForPlotDistancesVsTimestamps'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'calculateRollingDeviation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'calculatePolynomialRegression'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<double> &, std::false_type>,
        // method 'updateOriginalWithAdjustedValues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getSegmentFrameIDs'
        QtPrivate::TypeAndForceComplete<std::vector<int>, std::false_type>,
        // method 'cleanup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DataProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataProcessor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestChangePredictionButtonName((*reinterpret_cast< std::add_pointer_t<PredictionType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->requestShowPlot(); break;
        case 2: _t->requestShowAvailableTags((*reinterpret_cast< std::add_pointer_t<std::vector<int>>>(_a[1]))); break;
        case 3: _t->requestShowAvailableAnchors((*reinterpret_cast< std::add_pointer_t<std::vector<int>>>(_a[1]))); break;
        case 4: _t->requestShowPlotDistancesVsTimestamps((*reinterpret_cast< std::add_pointer_t<std::vector<qlonglong>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<double*>>>(_a[2]))); break;
        case 5: _t->requestShowPlotRollingDeviations((*reinterpret_cast< std::add_pointer_t<std::vector<qlonglong>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[2]))); break;
        case 6: _t->requestShowDatasetSegments((*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[1]))); break;
        case 7: _t->requestShowOriginalVsAdjustedDistances((*reinterpret_cast< std::add_pointer_t<std::vector<qlonglong>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<double*>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[3]))); break;
        case 8: _t->exportProgressUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->onFindUWBMeasurementAndEnqueue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<DetectionData>>(_a[3]))); break;
        case 10: _t->onFindUWBMeasurementAndExport((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ExportType>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<DetectionData>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 11: _t->setAnchorPositions((*reinterpret_cast< std::add_pointer_t<std::vector<AnchorPosition>>>(_a[1]))); break;
        case 12: _t->calculateUWBCoordinates((*reinterpret_cast< std::add_pointer_t<UWBData&>>(_a[1]))); break;
        case 13: _t->collectDataForTag((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->setRangeForDataAnalysis((*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[2]))); break;
        case 15: _t->splitDataset((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 16: _t->collectDataForPlotDistancesVsTimestamps((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->calculateRollingDeviation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->calculatePolynomialRegression((*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[1]))); break;
        case 19: _t->updateOriginalWithAdjustedValues(); break;
        case 20: { std::vector<int> _r = _t->getSegmentFrameIDs();
            if (_a[0]) *reinterpret_cast< std::vector<int>*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->cleanup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataProcessor::*)(PredictionType , bool );
            if (_t _q_method = &DataProcessor::requestChangePredictionButtonName; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (_t _q_method = &DataProcessor::requestShowPlot; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const std::vector<int> & );
            if (_t _q_method = &DataProcessor::requestShowAvailableTags; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const std::vector<int> & );
            if (_t _q_method = &DataProcessor::requestShowAvailableAnchors; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const std::vector<long long> & , std::vector<double*> );
            if (_t _q_method = &DataProcessor::requestShowPlotDistancesVsTimestamps; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const std::vector<long long> & , const std::vector<double> & );
            if (_t _q_method = &DataProcessor::requestShowPlotRollingDeviations; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const std::vector<double> & );
            if (_t _q_method = &DataProcessor::requestShowDatasetSegments; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const std::vector<long long> & , std::vector<double*> , const std::vector<double> & );
            if (_t _q_method = &DataProcessor::requestShowOriginalVsAdjustedDistances; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(int );
            if (_t _q_method = &DataProcessor::exportProgressUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *DataProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDataProcessorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void DataProcessor::requestChangePredictionButtonName(PredictionType _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataProcessor::requestShowPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DataProcessor::requestShowAvailableTags(const std::vector<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataProcessor::requestShowAvailableAnchors(const std::vector<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataProcessor::requestShowPlotDistancesVsTimestamps(const std::vector<long long> & _t1, std::vector<double*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataProcessor::requestShowPlotRollingDeviations(const std::vector<long long> & _t1, const std::vector<double> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DataProcessor::requestShowDatasetSegments(const std::vector<double> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DataProcessor::requestShowOriginalVsAdjustedDistances(const std::vector<long long> & _t1, std::vector<double*> _t2, const std::vector<double> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DataProcessor::exportProgressUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
