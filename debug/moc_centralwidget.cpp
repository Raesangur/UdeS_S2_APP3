/****************************************************************************
** Meta object code from reading C++ file 'centralwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../VisiTest/centralwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centralwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DonneeWidget_t {
    const uint offsetsAndSize[2];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DonneeWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DonneeWidget_t qt_meta_stringdata_DonneeWidget = {
    {
QT_MOC_LITERAL(0, 12) // "DonneeWidget"

    },
    "DonneeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DonneeWidget[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DonneeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject DonneeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DonneeWidget.offsetsAndSize,
    qt_meta_data_DonneeWidget,
    qt_static_metacall,
    nullptr,
    nullptr,
    nullptr
} };


const QMetaObject *DonneeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DonneeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DonneeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DonneeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TestWidget_t {
    const uint offsetsAndSize[8];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TestWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TestWidget_t qt_meta_stringdata_TestWidget = {
    {
QT_MOC_LITERAL(0, 10), // "TestWidget"
QT_MOC_LITERAL(11, 17), // "testButtonClicked"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 11) // "testClicked"

    },
    "TestWidget\0testButtonClicked\0\0testClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestWidget[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   27,    2, 0x08,    1 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TestWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testButtonClicked(); break;
        case 1: _t->testClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TestWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWidget::testButtonClicked)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject TestWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TestWidget.offsetsAndSize,
    qt_meta_data_TestWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TestWidget_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TestWidget::testButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ArchiveWidget_t {
    const uint offsetsAndSize[20];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ArchiveWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ArchiveWidget_t qt_meta_stringdata_ArchiveWidget = {
    {
QT_MOC_LITERAL(0, 13), // "ArchiveWidget"
QT_MOC_LITERAL(14, 19), // "firstArchiveClicked"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 18), // "lastArchiveClicked"
QT_MOC_LITERAL(54, 22), // "previousArchiveClicked"
QT_MOC_LITERAL(77, 18), // "nextArchiveClicked"
QT_MOC_LITERAL(96, 12), // "firstClicked"
QT_MOC_LITERAL(109, 11), // "lastClicked"
QT_MOC_LITERAL(121, 15), // "previousClicked"
QT_MOC_LITERAL(137, 11) // "nextClicked"

    },
    "ArchiveWidget\0firstArchiveClicked\0\0"
    "lastArchiveClicked\0previousArchiveClicked\0"
    "nextArchiveClicked\0firstClicked\0"
    "lastClicked\0previousClicked\0nextClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArchiveWidget[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    0 /* Public */,
       3,    0,   63,    2, 0x06,    1 /* Public */,
       4,    0,   64,    2, 0x06,    2 /* Public */,
       5,    0,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   66,    2, 0x08,    4 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    0,   69,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ArchiveWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArchiveWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->firstArchiveClicked(); break;
        case 1: _t->lastArchiveClicked(); break;
        case 2: _t->previousArchiveClicked(); break;
        case 3: _t->nextArchiveClicked(); break;
        case 4: _t->firstClicked(); break;
        case 5: _t->lastClicked(); break;
        case 6: _t->previousClicked(); break;
        case 7: _t->nextClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ArchiveWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArchiveWidget::firstArchiveClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ArchiveWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArchiveWidget::lastArchiveClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ArchiveWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArchiveWidget::previousArchiveClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ArchiveWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArchiveWidget::nextArchiveClicked)) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject ArchiveWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ArchiveWidget.offsetsAndSize,
    qt_meta_data_ArchiveWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ArchiveWidget_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ArchiveWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArchiveWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArchiveWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ArchiveWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ArchiveWidget::firstArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ArchiveWidget::lastArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ArchiveWidget::previousArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ArchiveWidget::nextArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_CentralWidget_t {
    const uint offsetsAndSize[24];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CentralWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CentralWidget_t qt_meta_stringdata_CentralWidget = {
    {
QT_MOC_LITERAL(0, 13), // "CentralWidget"
QT_MOC_LITERAL(14, 19), // "firstArchiveClicked"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 18), // "lastArchiveClicked"
QT_MOC_LITERAL(54, 22), // "previousArchiveClicked"
QT_MOC_LITERAL(77, 18), // "nextArchiveClicked"
QT_MOC_LITERAL(96, 17), // "testButtonClicked"
QT_MOC_LITERAL(114, 12), // "firstClicked"
QT_MOC_LITERAL(127, 11), // "lastClicked"
QT_MOC_LITERAL(139, 15), // "previousClicked"
QT_MOC_LITERAL(155, 11), // "nextClicked"
QT_MOC_LITERAL(167, 11) // "testClicked"

    },
    "CentralWidget\0firstArchiveClicked\0\0"
    "lastArchiveClicked\0previousArchiveClicked\0"
    "nextArchiveClicked\0testButtonClicked\0"
    "firstClicked\0lastClicked\0previousClicked\0"
    "nextClicked\0testClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CentralWidget[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    0 /* Public */,
       3,    0,   75,    2, 0x06,    1 /* Public */,
       4,    0,   76,    2, 0x06,    2 /* Public */,
       5,    0,   77,    2, 0x06,    3 /* Public */,
       6,    0,   78,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   79,    2, 0x08,    5 /* Private */,
       8,    0,   80,    2, 0x08,    6 /* Private */,
       9,    0,   81,    2, 0x08,    7 /* Private */,
      10,    0,   82,    2, 0x08,    8 /* Private */,
      11,    0,   83,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CentralWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CentralWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->firstArchiveClicked(); break;
        case 1: _t->lastArchiveClicked(); break;
        case 2: _t->previousArchiveClicked(); break;
        case 3: _t->nextArchiveClicked(); break;
        case 4: _t->testButtonClicked(); break;
        case 5: _t->firstClicked(); break;
        case 6: _t->lastClicked(); break;
        case 7: _t->previousClicked(); break;
        case 8: _t->nextClicked(); break;
        case 9: _t->testClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::firstArchiveClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::lastArchiveClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::previousArchiveClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::nextArchiveClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CentralWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::testButtonClicked)) {
                *result = 4;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject CentralWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CentralWidget.offsetsAndSize,
    qt_meta_data_CentralWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CentralWidget_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CentralWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CentralWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CentralWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CentralWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CentralWidget::firstArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CentralWidget::lastArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CentralWidget::previousArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CentralWidget::nextArchiveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CentralWidget::testButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
