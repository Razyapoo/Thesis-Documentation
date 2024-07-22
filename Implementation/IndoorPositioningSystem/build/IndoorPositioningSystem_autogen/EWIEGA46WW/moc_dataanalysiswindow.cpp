/****************************************************************************
** Meta object code from reading C++ file 'dataanalysiswindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dataanalysiswindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataanalysiswindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDataAnalysisWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDataAnalysisWindowENDCLASS = QtMocHelpers::stringData(
    "DataAnalysisWindow",
    "requestAnalyseData",
    "",
    "startTimeSec",
    "endTimeSec",
    "requestCollectDataForPlotDistancesVsTimestamps",
    "anchorID",
    "requestCalculateRollingDeviation",
    "windowSize",
    "requestSplitDataset",
    "threshold",
    "requestCalculatePolynomialRegression",
    "std::vector<double>",
    "referenceValues",
    "requestUpdateOriginalWithAdjustedValues",
    "requestSegmentFramesExport",
    "initDataAnalysis",
    "startDataAnalysis",
    "showAvailableTags",
    "std::vector<int>",
    "availableTagIDs",
    "showAvailableAnchors",
    "availableAnchorIDs",
    "showPlotDistancesVsTimestamps",
    "std::vector<qlonglong>",
    "timestamps",
    "std::vector<double*>",
    "distances",
    "showPlotRollingDeviations",
    "deviations",
    "validateRollingDeviationInput",
    "validateThresholdInput",
    "showDatasetSegments",
    "datasetSegmentMeans",
    "showOriginalVsAdjustedDistances",
    "timestampsToAnalyze",
    "distancesToAnalyzeOriginal",
    "distancesToAnalyzeAdjusted",
    "uploadReferenceValues"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDataAnalysisWindowENDCLASS_t {
    uint offsetsAndSizes[78];
    char stringdata0[19];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[11];
    char stringdata5[47];
    char stringdata6[9];
    char stringdata7[33];
    char stringdata8[11];
    char stringdata9[20];
    char stringdata10[10];
    char stringdata11[37];
    char stringdata12[20];
    char stringdata13[16];
    char stringdata14[40];
    char stringdata15[27];
    char stringdata16[17];
    char stringdata17[18];
    char stringdata18[18];
    char stringdata19[17];
    char stringdata20[16];
    char stringdata21[21];
    char stringdata22[19];
    char stringdata23[30];
    char stringdata24[23];
    char stringdata25[11];
    char stringdata26[21];
    char stringdata27[10];
    char stringdata28[26];
    char stringdata29[11];
    char stringdata30[30];
    char stringdata31[23];
    char stringdata32[20];
    char stringdata33[20];
    char stringdata34[32];
    char stringdata35[20];
    char stringdata36[27];
    char stringdata37[27];
    char stringdata38[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDataAnalysisWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDataAnalysisWindowENDCLASS_t qt_meta_stringdata_CLASSDataAnalysisWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "DataAnalysisWindow"
        QT_MOC_LITERAL(19, 18),  // "requestAnalyseData"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 12),  // "startTimeSec"
        QT_MOC_LITERAL(52, 10),  // "endTimeSec"
        QT_MOC_LITERAL(63, 46),  // "requestCollectDataForPlotDist..."
        QT_MOC_LITERAL(110, 8),  // "anchorID"
        QT_MOC_LITERAL(119, 32),  // "requestCalculateRollingDeviation"
        QT_MOC_LITERAL(152, 10),  // "windowSize"
        QT_MOC_LITERAL(163, 19),  // "requestSplitDataset"
        QT_MOC_LITERAL(183, 9),  // "threshold"
        QT_MOC_LITERAL(193, 36),  // "requestCalculatePolynomialReg..."
        QT_MOC_LITERAL(230, 19),  // "std::vector<double>"
        QT_MOC_LITERAL(250, 15),  // "referenceValues"
        QT_MOC_LITERAL(266, 39),  // "requestUpdateOriginalWithAdju..."
        QT_MOC_LITERAL(306, 26),  // "requestSegmentFramesExport"
        QT_MOC_LITERAL(333, 16),  // "initDataAnalysis"
        QT_MOC_LITERAL(350, 17),  // "startDataAnalysis"
        QT_MOC_LITERAL(368, 17),  // "showAvailableTags"
        QT_MOC_LITERAL(386, 16),  // "std::vector<int>"
        QT_MOC_LITERAL(403, 15),  // "availableTagIDs"
        QT_MOC_LITERAL(419, 20),  // "showAvailableAnchors"
        QT_MOC_LITERAL(440, 18),  // "availableAnchorIDs"
        QT_MOC_LITERAL(459, 29),  // "showPlotDistancesVsTimestamps"
        QT_MOC_LITERAL(489, 22),  // "std::vector<qlonglong>"
        QT_MOC_LITERAL(512, 10),  // "timestamps"
        QT_MOC_LITERAL(523, 20),  // "std::vector<double*>"
        QT_MOC_LITERAL(544, 9),  // "distances"
        QT_MOC_LITERAL(554, 25),  // "showPlotRollingDeviations"
        QT_MOC_LITERAL(580, 10),  // "deviations"
        QT_MOC_LITERAL(591, 29),  // "validateRollingDeviationInput"
        QT_MOC_LITERAL(621, 22),  // "validateThresholdInput"
        QT_MOC_LITERAL(644, 19),  // "showDatasetSegments"
        QT_MOC_LITERAL(664, 19),  // "datasetSegmentMeans"
        QT_MOC_LITERAL(684, 31),  // "showOriginalVsAdjustedDistances"
        QT_MOC_LITERAL(716, 19),  // "timestampsToAnalyze"
        QT_MOC_LITERAL(736, 26),  // "distancesToAnalyzeOriginal"
        QT_MOC_LITERAL(763, 26),  // "distancesToAnalyzeAdjusted"
        QT_MOC_LITERAL(790, 21)   // "uploadReferenceValues"
    },
    "DataAnalysisWindow",
    "requestAnalyseData",
    "",
    "startTimeSec",
    "endTimeSec",
    "requestCollectDataForPlotDistancesVsTimestamps",
    "anchorID",
    "requestCalculateRollingDeviation",
    "windowSize",
    "requestSplitDataset",
    "threshold",
    "requestCalculatePolynomialRegression",
    "std::vector<double>",
    "referenceValues",
    "requestUpdateOriginalWithAdjustedValues",
    "requestSegmentFramesExport",
    "initDataAnalysis",
    "startDataAnalysis",
    "showAvailableTags",
    "std::vector<int>",
    "availableTagIDs",
    "showAvailableAnchors",
    "availableAnchorIDs",
    "showPlotDistancesVsTimestamps",
    "std::vector<qlonglong>",
    "timestamps",
    "std::vector<double*>",
    "distances",
    "showPlotRollingDeviations",
    "deviations",
    "validateRollingDeviationInput",
    "validateThresholdInput",
    "showDatasetSegments",
    "datasetSegmentMeans",
    "showOriginalVsAdjustedDistances",
    "timestampsToAnalyze",
    "distancesToAnalyzeOriginal",
    "distancesToAnalyzeAdjusted",
    "uploadReferenceValues"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDataAnalysisWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  122,    2, 0x06,    1 /* Public */,
       5,    1,  127,    2, 0x06,    4 /* Public */,
       7,    1,  130,    2, 0x06,    6 /* Public */,
       9,    1,  133,    2, 0x06,    8 /* Public */,
      11,    1,  136,    2, 0x06,   10 /* Public */,
      14,    0,  139,    2, 0x06,   12 /* Public */,
      15,    0,  140,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,  141,    2, 0x0a,   14 /* Public */,
      17,    0,  142,    2, 0x0a,   15 /* Public */,
      18,    1,  143,    2, 0x0a,   16 /* Public */,
      21,    1,  146,    2, 0x0a,   18 /* Public */,
      23,    2,  149,    2, 0x0a,   20 /* Public */,
      28,    2,  154,    2, 0x0a,   23 /* Public */,
      30,    0,  159,    2, 0x0a,   26 /* Public */,
      31,    0,  160,    2, 0x0a,   27 /* Public */,
      32,    1,  161,    2, 0x0a,   28 /* Public */,
      34,    3,  164,    2, 0x0a,   30 /* Public */,
      38,    0,  171,    2, 0x0a,   34 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   22,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26,   25,   27,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 12,   25,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   33,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26, 0x80000000 | 12,   35,   36,   37,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataAnalysisWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDataAnalysisWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDataAnalysisWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDataAnalysisWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataAnalysisWindow, std::true_type>,
        // method 'requestAnalyseData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const long long, std::false_type>,
        QtPrivate::TypeAndForceComplete<const long long, std::false_type>,
        // method 'requestCollectDataForPlotDistancesVsTimestamps'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'requestCalculateRollingDeviation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'requestSplitDataset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double, std::false_type>,
        // method 'requestCalculatePolynomialRegression'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<double> &, std::false_type>,
        // method 'requestUpdateOriginalWithAdjustedValues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestSegmentFramesExport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initDataAnalysis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startDataAnalysis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showAvailableTags'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<int> &, std::false_type>,
        // method 'showAvailableAnchors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<int> &, std::false_type>,
        // method 'showPlotDistancesVsTimestamps'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<long long> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double*>, std::false_type>,
        // method 'showPlotRollingDeviations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<long long> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<double> &, std::false_type>,
        // method 'validateRollingDeviationInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'validateThresholdInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showDatasetSegments'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<double> &, std::false_type>,
        // method 'showOriginalVsAdjustedDistances'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<long long> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<double> &, std::false_type>,
        // method 'uploadReferenceValues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DataAnalysisWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataAnalysisWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestAnalyseData((*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[2]))); break;
        case 1: _t->requestCollectDataForPlotDistancesVsTimestamps((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->requestCalculateRollingDeviation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->requestSplitDataset((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->requestCalculatePolynomialRegression((*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[1]))); break;
        case 5: _t->requestUpdateOriginalWithAdjustedValues(); break;
        case 6: _t->requestSegmentFramesExport(); break;
        case 7: _t->initDataAnalysis(); break;
        case 8: _t->startDataAnalysis(); break;
        case 9: _t->showAvailableTags((*reinterpret_cast< std::add_pointer_t<std::vector<int>>>(_a[1]))); break;
        case 10: _t->showAvailableAnchors((*reinterpret_cast< std::add_pointer_t<std::vector<int>>>(_a[1]))); break;
        case 11: _t->showPlotDistancesVsTimestamps((*reinterpret_cast< std::add_pointer_t<std::vector<qlonglong>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<double*>>>(_a[2]))); break;
        case 12: _t->showPlotRollingDeviations((*reinterpret_cast< std::add_pointer_t<std::vector<qlonglong>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[2]))); break;
        case 13: _t->validateRollingDeviationInput(); break;
        case 14: _t->validateThresholdInput(); break;
        case 15: _t->showDatasetSegments((*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[1]))); break;
        case 16: _t->showOriginalVsAdjustedDistances((*reinterpret_cast< std::add_pointer_t<std::vector<qlonglong>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<double*>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[3]))); break;
        case 17: _t->uploadReferenceValues(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataAnalysisWindow::*)(const long long , const long long );
            if (_t _q_method = &DataAnalysisWindow::requestAnalyseData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataAnalysisWindow::*)(const int );
            if (_t _q_method = &DataAnalysisWindow::requestCollectDataForPlotDistancesVsTimestamps; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataAnalysisWindow::*)(const int );
            if (_t _q_method = &DataAnalysisWindow::requestCalculateRollingDeviation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataAnalysisWindow::*)(const double );
            if (_t _q_method = &DataAnalysisWindow::requestSplitDataset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataAnalysisWindow::*)(const std::vector<double> & );
            if (_t _q_method = &DataAnalysisWindow::requestCalculatePolynomialRegression; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataAnalysisWindow::*)();
            if (_t _q_method = &DataAnalysisWindow::requestUpdateOriginalWithAdjustedValues; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DataAnalysisWindow::*)();
            if (_t _q_method = &DataAnalysisWindow::requestSegmentFramesExport; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *DataAnalysisWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataAnalysisWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDataAnalysisWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DataAnalysisWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void DataAnalysisWindow::requestAnalyseData(const long long _t1, const long long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataAnalysisWindow::requestCollectDataForPlotDistancesVsTimestamps(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataAnalysisWindow::requestCalculateRollingDeviation(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataAnalysisWindow::requestSplitDataset(const double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataAnalysisWindow::requestCalculatePolynomialRegression(const std::vector<double> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataAnalysisWindow::requestUpdateOriginalWithAdjustedValues()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DataAnalysisWindow::requestSegmentFramesExport()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
