/****************************************************************************
** Meta object code from reading C++ file 'VisiTest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../VisiTest-VS2019-x64-Qt6/VisiTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisiTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisiTest_t {
    const uint offsetsAndSize[28];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_VisiTest_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_VisiTest_t qt_meta_stringdata_VisiTest = {
    {
QT_MOC_LITERAL(0, 8), // "VisiTest"
QT_MOC_LITERAL(9, 11), // "testSuivant"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 8), // "demarrer"
QT_MOC_LITERAL(31, 7), // "arreter"
QT_MOC_LITERAL(39, 5), // "vider"
QT_MOC_LITERAL(45, 8), // "modeFile"
QT_MOC_LITERAL(54, 8), // "modePile"
QT_MOC_LITERAL(63, 7), // "premier"
QT_MOC_LITERAL(71, 7), // "dernier"
QT_MOC_LITERAL(79, 9), // "precedent"
QT_MOC_LITERAL(89, 7), // "suivant"
QT_MOC_LITERAL(97, 11), // "sauvegarder"
QT_MOC_LITERAL(109, 7) // "quitter"

    },
    "VisiTest\0testSuivant\0\0demarrer\0arreter\0"
    "vider\0modeFile\0modePile\0premier\0dernier\0"
    "precedent\0suivant\0sauvegarder\0quitter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisiTest[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    0 /* Public */,
       3,    0,   87,    2, 0x0a,    1 /* Public */,
       4,    0,   88,    2, 0x0a,    2 /* Public */,
       5,    0,   89,    2, 0x0a,    3 /* Public */,
       6,    0,   90,    2, 0x0a,    4 /* Public */,
       7,    0,   91,    2, 0x0a,    5 /* Public */,
       8,    0,   92,    2, 0x0a,    6 /* Public */,
       9,    0,   93,    2, 0x0a,    7 /* Public */,
      10,    0,   94,    2, 0x0a,    8 /* Public */,
      11,    0,   95,    2, 0x0a,    9 /* Public */,
      12,    0,   96,    2, 0x0a,   10 /* Public */,
      13,    0,   97,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void VisiTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisiTest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testSuivant(); break;
        case 1: _t->demarrer(); break;
        case 2: _t->arreter(); break;
        case 3: _t->vider(); break;
        case 4: _t->modeFile(); break;
        case 5: _t->modePile(); break;
        case 6: _t->premier(); break;
        case 7: _t->dernier(); break;
        case 8: _t->precedent(); break;
        case 9: _t->suivant(); break;
        case 10: _t->sauvegarder(); break;
        case 11: _t->quitter(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject VisiTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_VisiTest.offsetsAndSize,
    qt_meta_data_VisiTest,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_VisiTest_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *VisiTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisiTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisiTest.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int VisiTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
