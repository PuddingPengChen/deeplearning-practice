/****************************************************************************
** Meta object code from reading C++ file 'baomainwindos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BaoBaoSystem/baomainwindos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'baomainwindos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BaoMainwindos_t {
    QByteArrayData data[7];
    char stringdata[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaoMainwindos_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaoMainwindos_t qt_meta_stringdata_BaoMainwindos = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 22),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 21),
QT_MOC_LITERAL(4, 60, 4),
QT_MOC_LITERAL(5, 65, 1),
QT_MOC_LITERAL(6, 67, 5)
    },
    "BaoMainwindos\0on_btnPlayTest_clicked\0"
    "\0on_pushButton_clicked\0rect\0c\0bound"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaoMainwindos[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    2,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QPoint, QMetaType::Float,    5,    6,

       0        // eod
};

void BaoMainwindos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaoMainwindos *_t = static_cast<BaoMainwindos *>(_o);
        switch (_id) {
        case 0: _t->on_btnPlayTest_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: { QString _r = _t->rect((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject BaoMainwindos::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BaoMainwindos.data,
      qt_meta_data_BaoMainwindos,  qt_static_metacall, 0, 0}
};


const QMetaObject *BaoMainwindos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaoMainwindos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BaoMainwindos.stringdata))
        return static_cast<void*>(const_cast< BaoMainwindos*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BaoMainwindos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
