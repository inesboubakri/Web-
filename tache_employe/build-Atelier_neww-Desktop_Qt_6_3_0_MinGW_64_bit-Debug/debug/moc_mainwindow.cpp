/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Atelier_Connexion/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[42];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 11), // "readarduino"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 22), // "on_confirm_add_clicked"
QT_MOC_LITERAL(47, 17), // "on_delete_clicked"
QT_MOC_LITERAL(65, 15), // "on_edit_clicked"
QT_MOC_LITERAL(81, 23), // "on_confirm_edit_clicked"
QT_MOC_LITERAL(105, 29), // "on_modifierpushbutton_clicked"
QT_MOC_LITERAL(135, 19), // "on_gotoedit_clicked"
QT_MOC_LITERAL(155, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(176, 11), // "QModelIndex"
QT_MOC_LITERAL(188, 5), // "index"
QT_MOC_LITERAL(194, 24), // "on_delete_button_clicked"
QT_MOC_LITERAL(219, 26), // "on_researchcin_textChanged"
QT_MOC_LITERAL(246, 4), // "arg1"
QT_MOC_LITERAL(251, 24), // "on_pushButton_49_clicked"
QT_MOC_LITERAL(276, 24), // "on_pushButton_47_clicked"
QT_MOC_LITERAL(301, 24), // "on_pushButton_50_clicked"
QT_MOC_LITERAL(326, 17), // "on_faceid_clicked"
QT_MOC_LITERAL(344, 18), // "on_capture_clicked"
QT_MOC_LITERAL(363, 24) // "on_pushButton_70_clicked"

    },
    "MainWindow\0readarduino\0\0on_confirm_add_clicked\0"
    "on_delete_clicked\0on_edit_clicked\0"
    "on_confirm_edit_clicked\0"
    "on_modifierpushbutton_clicked\0"
    "on_gotoedit_clicked\0on_tableView_clicked\0"
    "QModelIndex\0index\0on_delete_button_clicked\0"
    "on_researchcin_textChanged\0arg1\0"
    "on_pushButton_49_clicked\0"
    "on_pushButton_47_clicked\0"
    "on_pushButton_50_clicked\0on_faceid_clicked\0"
    "on_capture_clicked\0on_pushButton_70_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x0a,    1 /* Public */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    0,  116,    2, 0x08,    7 /* Private */,
       9,    1,  117,    2, 0x08,    8 /* Private */,
      12,    0,  120,    2, 0x08,   10 /* Private */,
      13,    1,  121,    2, 0x08,   11 /* Private */,
      15,    0,  124,    2, 0x08,   13 /* Private */,
      16,    0,  125,    2, 0x08,   14 /* Private */,
      17,    0,  126,    2, 0x08,   15 /* Private */,
      18,    0,  127,    2, 0x08,   16 /* Private */,
      19,    0,  128,    2, 0x08,   17 /* Private */,
      20,    0,  129,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readarduino(); break;
        case 1: _t->on_confirm_add_clicked(); break;
        case 2: _t->on_delete_clicked(); break;
        case 3: _t->on_edit_clicked(); break;
        case 4: _t->on_confirm_edit_clicked(); break;
        case 5: _t->on_modifierpushbutton_clicked(); break;
        case 6: _t->on_gotoedit_clicked(); break;
        case 7: _t->on_tableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 8: _t->on_delete_button_clicked(); break;
        case 9: _t->on_researchcin_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_pushButton_49_clicked(); break;
        case 11: _t->on_pushButton_47_clicked(); break;
        case 12: _t->on_pushButton_50_clicked(); break;
        case 13: _t->on_faceid_clicked(); break;
        case 14: _t->on_capture_clicked(); break;
        case 15: _t->on_pushButton_70_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
