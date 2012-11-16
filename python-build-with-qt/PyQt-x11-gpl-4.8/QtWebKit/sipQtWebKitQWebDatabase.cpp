/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:59 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtWebKit.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebdatabase.sip"
#include <qwebdatabase.h>
#line 39 "sipQtWebKitQWebDatabase.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebsecurityorigin.sip"
#include <qwebsecurityorigin.h>
#line 43 "sipQtWebKitQWebDatabase.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtWebKitQWebDatabase.cpp"


extern "C" {static PyObject *meth_QWebDatabase_name(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_name, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWebDatabase_displayName(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_displayName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->displayName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_displayName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWebDatabase_expectedSize(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_expectedSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->expectedSize();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_expectedSize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWebDatabase_size(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_size, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWebDatabase_fileName(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_fileName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWebDatabase_origin(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_origin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            QWebSecurityOrigin *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebSecurityOrigin(sipCpp->origin());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebSecurityOrigin,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_origin, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWebDatabase_removeDatabase(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_removeDatabase(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebDatabase * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QWebDatabase, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QWebDatabase::removeDatabase(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_removeDatabase, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWebDatabase_removeAllDatabases(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_removeAllDatabases(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            QWebDatabase::removeAllDatabases();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_removeAllDatabases, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebDatabase(void *, const sipTypeDef *);}
static void *cast_QWebDatabase(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebDatabase)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebDatabase(void *, int);}
static void release_QWebDatabase(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebDatabase *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWebDatabase(sipSimpleWrapper *);}
static void dealloc_QWebDatabase(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebDatabase(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QWebDatabase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWebDatabase(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebDatabase *sipCpp = 0;

    {
        const QWebDatabase * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebDatabase, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebDatabase(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWebDatabase[] = {
    {SIP_MLNAME_CAST(sipName_displayName), meth_QWebDatabase_displayName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_expectedSize), meth_QWebDatabase_expectedSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QWebDatabase_fileName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_QWebDatabase_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_origin), meth_QWebDatabase_origin, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeAllDatabases), meth_QWebDatabase_removeAllDatabases, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeDatabase), meth_QWebDatabase_removeDatabase, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QWebDatabase_size, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebDatabase = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebDatabase,
        {0}
    },
    {
        sipNameNr_QWebDatabase,
        {0, 0, 1},
        8, methods_QWebDatabase,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QWebDatabase,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QWebDatabase,
    0,
    0,
    0,
    release_QWebDatabase,
    cast_QWebDatabase,
    0,
    0,
    0
},
    0,
    0,
    0
};
