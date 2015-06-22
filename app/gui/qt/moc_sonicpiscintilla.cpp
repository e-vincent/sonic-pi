/****************************************************************************
** Meta object code from reading C++ file 'sonicpiscintilla.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sonicpiscintilla.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sonicpiscintilla.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SonicPiScintilla[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      37,   17,   17,   17, 0x0a,
      57,   17,   17,   17, 0x0a,
      74,   17,   17,   17, 0x0a,
      84,   17,   17,   17, 0x0a,
     111,   17,   17,   17, 0x0a,
     123,   17,   17,   17, 0x0a,
     141,   17,   17,   17, 0x0a,
     178,  159,   17,   17, 0x0a,
     233,  203,   17,   17, 0x0a,
     272,  263,   17,   17, 0x0a,
     290,   17,   17,   17, 0x0a,
     308,   17,   17,   17, 0x0a,
     323,  263,   17,   17, 0x0a,
     348,   17,   17,   17, 0x0a,
     372,   17,   17,   17, 0x0a,
     414,  402,  398,   17, 0x0a,
     446,  263,   17,   17, 0x0a,
     461,   17,   17,   17, 0x0a,
     472,   17,   17,   17, 0x0a,
     496,   17,   17,   17, 0x0a,
     522,   17,   17,   17, 0x0a,
     537,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SonicPiScintilla[] = {
    "SonicPiScintilla\0\0cutLineFromPoint()\0"
    "tabCompleteifList()\0transposeChars()\0"
    "setMark()\0escapeAndCancelSelection()\0"
    "copyClear()\0hideLineNumbers()\0"
    "showLineNumbers()\0lineNumber,newLine\0"
    "replaceLine(int,QString)\0"
    "lineStart,lineFinish,newLines\0"
    "replaceLines(int,int,QString)\0numLines\0"
    "forwardLines(int)\0forwardTenLines()\0"
    "backTenLines()\0moveLineOrSelection(int)\0"
    "moveLineOrSelectionUp()\0"
    "moveLineOrSelectionDown()\0int\0linenum,inc\0"
    "incLineNumWithinBounds(int,int)\0"
    "moveLines(int)\0deselect()\0"
    "upcaseWordOrSelection()\0"
    "downcaseWordOrSelection()\0highlightAll()\0"
    "unhighlightAll()\0"
};

void SonicPiScintilla::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SonicPiScintilla *_t = static_cast<SonicPiScintilla *>(_o);
        switch (_id) {
        case 0: _t->cutLineFromPoint(); break;
        case 1: _t->tabCompleteifList(); break;
        case 2: _t->transposeChars(); break;
        case 3: _t->setMark(); break;
        case 4: _t->escapeAndCancelSelection(); break;
        case 5: _t->copyClear(); break;
        case 6: _t->hideLineNumbers(); break;
        case 7: _t->showLineNumbers(); break;
        case 8: _t->replaceLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->replaceLines((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 10: _t->forwardLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->forwardTenLines(); break;
        case 12: _t->backTenLines(); break;
        case 13: _t->moveLineOrSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->moveLineOrSelectionUp(); break;
        case 15: _t->moveLineOrSelectionDown(); break;
        case 16: { int _r = _t->incLineNumWithinBounds((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: _t->moveLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->deselect(); break;
        case 19: _t->upcaseWordOrSelection(); break;
        case 20: _t->downcaseWordOrSelection(); break;
        case 21: _t->highlightAll(); break;
        case 22: _t->unhighlightAll(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SonicPiScintilla::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SonicPiScintilla::staticMetaObject = {
    { &QsciScintilla::staticMetaObject, qt_meta_stringdata_SonicPiScintilla,
      qt_meta_data_SonicPiScintilla, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SonicPiScintilla::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SonicPiScintilla::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SonicPiScintilla::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SonicPiScintilla))
        return static_cast<void*>(const_cast< SonicPiScintilla*>(this));
    return QsciScintilla::qt_metacast(_clname);
}

int SonicPiScintilla::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciScintilla::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
