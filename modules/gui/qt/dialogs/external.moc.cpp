/****************************************************************************
** Meta object code from reading C++ file 'external.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "external.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'external.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   15,   14,   14, 0x05,
     102,   58,   14,   14, 0x05,
     208,  162,   14,   14, 0x05,
     336,  286,   14,   14, 0x05,
     410,  405,   14,   14, 0x05,
     454,  436,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     500,   15,   14,   14, 0x08,
     530,   58,   14,   14, 0x08,
     588,  162,   14,   14, 0x08,
     664,  286,   14,   14, 0x08,
     731,  405,   14,   14, 0x08,
     754,  436,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogHandler[] = {
    "DialogHandler\0\0title,text\0"
    "errorDisplayed(QString,QString)\0"
    "p_id,title,text,defaultUsername,b_ask_store\0"
    "loginDisplayed(vlc_dialog_id*,QString,QString,QString,bool)\0"
    "p_id,title,text,i_type,cancel,action1,action2\0"
    "questionDisplayed(vlc_dialog_id*,QString,QString,int,QString,QString,Q"
    "String)\0"
    "p_id,title,text,b_indeterminate,f_position,cancel\0"
    "progressDisplayed(vlc_dialog_id*,QString,QString,bool,float,QString)\0"
    "p_id\0cancelled(vlc_dialog_id*)\0"
    "p_id,f_value,text\0"
    "progressUpdated(vlc_dialog_id*,float,QString)\0"
    "displayError(QString,QString)\0"
    "displayLogin(vlc_dialog_id*,QString,QString,QString,bool)\0"
    "displayQuestion(vlc_dialog_id*,QString,QString,int,QString,QString,QSt"
    "ring)\0"
    "displayProgress(vlc_dialog_id*,QString,QString,bool,float,QString)\0"
    "cancel(vlc_dialog_id*)\0"
    "updateProgress(vlc_dialog_id*,float,QString)\0"
};

void DialogHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogHandler *_t = static_cast<DialogHandler *>(_o);
        switch (_id) {
        case 0: _t->errorDisplayed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->loginDisplayed((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 2: _t->questionDisplayed((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 3: _t->progressDisplayed((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 4: _t->cancelled((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1]))); break;
        case 5: _t->progressUpdated((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->displayError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->displayLogin((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 8: _t->displayQuestion((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 9: _t->displayProgress((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 10: _t->cancel((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1]))); break;
        case 11: _t->updateProgress((*reinterpret_cast< vlc_dialog_id*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogHandler,
      qt_meta_data_DialogHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogHandler))
        return static_cast<void*>(const_cast< DialogHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int DialogHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void DialogHandler::errorDisplayed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogHandler::loginDisplayed(vlc_dialog_id * _t1, const QString & _t2, const QString & _t3, const QString & _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DialogHandler::questionDisplayed(vlc_dialog_id * _t1, const QString & _t2, const QString & _t3, int _t4, const QString & _t5, const QString & _t6, const QString & _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DialogHandler::progressDisplayed(vlc_dialog_id * _t1, const QString & _t2, const QString & _t3, bool _t4, float _t5, const QString & _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DialogHandler::cancelled(vlc_dialog_id * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DialogHandler::progressUpdated(vlc_dialog_id * _t1, float _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
static const uint qt_meta_data_DialogWrapper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   15,   14,   14, 0x09,
      34,   14,   14,   14, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_DialogWrapper[] = {
    "DialogWrapper\0\0result\0finish(int)\0"
    "finish()\0"
};

void DialogWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogWrapper *_t = static_cast<DialogWrapper *>(_o);
        switch (_id) {
        case 0: _t->finish((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->finish(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogWrapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogWrapper,
      qt_meta_data_DialogWrapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogWrapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogWrapper))
        return static_cast<void*>(const_cast< DialogWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int DialogWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_LoginDialogWrapper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LoginDialogWrapper[] = {
    "LoginDialogWrapper\0\0accept()\0"
};

void LoginDialogWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoginDialogWrapper *_t = static_cast<LoginDialogWrapper *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LoginDialogWrapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LoginDialogWrapper::staticMetaObject = {
    { &DialogWrapper::staticMetaObject, qt_meta_stringdata_LoginDialogWrapper,
      qt_meta_data_LoginDialogWrapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LoginDialogWrapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LoginDialogWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LoginDialogWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDialogWrapper))
        return static_cast<void*>(const_cast< LoginDialogWrapper*>(this));
    return DialogWrapper::qt_metacast(_clname);
}

int LoginDialogWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DialogWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_QuestionDialogWrapper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuestionDialogWrapper[] = {
    "QuestionDialogWrapper\0\0"
    "buttonClicked(QAbstractButton*)\0"
};

void QuestionDialogWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuestionDialogWrapper *_t = static_cast<QuestionDialogWrapper *>(_o);
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QuestionDialogWrapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuestionDialogWrapper::staticMetaObject = {
    { &DialogWrapper::staticMetaObject, qt_meta_stringdata_QuestionDialogWrapper,
      qt_meta_data_QuestionDialogWrapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuestionDialogWrapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuestionDialogWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuestionDialogWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuestionDialogWrapper))
        return static_cast<void*>(const_cast< QuestionDialogWrapper*>(this));
    return DialogWrapper::qt_metacast(_clname);
}

int QuestionDialogWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DialogWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ProgressDialogWrapper[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_ProgressDialogWrapper[] = {
    "ProgressDialogWrapper\0"
};

void ProgressDialogWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ProgressDialogWrapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProgressDialogWrapper::staticMetaObject = {
    { &DialogWrapper::staticMetaObject, qt_meta_stringdata_ProgressDialogWrapper,
      qt_meta_data_ProgressDialogWrapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProgressDialogWrapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProgressDialogWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProgressDialogWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressDialogWrapper))
        return static_cast<void*>(const_cast< ProgressDialogWrapper*>(this));
    return DialogWrapper::qt_metacast(_clname);
}

int ProgressDialogWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DialogWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
