/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
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

#include "sipAPIQtCore.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qchar.sip"
#include <qchar.h>
#line 39 "sipQtCoreQLatin1Char_0.cpp"



extern "C" {static PyObject *meth_QLatin1Char_0_toLatin1(PyObject *, PyObject *);}
static PyObject *meth_QLatin1Char_0_toLatin1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLatin1Char *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLatin1Char, &sipCpp))
        {
            char sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->toLatin1();
            Py_END_ALLOW_THREADS

            return SIPBytes_FromStringAndSize(&sipRes,1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLatin1Char, sipName_toLatin1, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QLatin1Char_0_unicode(PyObject *, PyObject *);}
static PyObject *meth_QLatin1Char_0_unicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLatin1Char *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLatin1Char, &sipCpp))
        {
            ushort sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->unicode();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLatin1Char, sipName_unicode, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QLatin1Char_0___repr__(PyObject *);}
static PyObject *slot_QLatin1Char_0___repr__(PyObject *sipSelf)
{
    QLatin1Char *sipCpp = reinterpret_cast<QLatin1Char *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLatin1Char));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 52 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qchar.sip"
        char ch = sipCpp->toLatin1();
        PyObject *str = SIPBytes_FromStringAndSize(&ch, 1);
        
        if (str)
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtCore.QLatin1Char(%R)", str);
        #else
            sipRes = PyString_FromString("PyQt4.QtCore.QLatin1Char(");
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(str));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        
            Py_DECREF(str);
        }
#line 126 "sipQtCoreQLatin1Char_0.cpp"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLatin1Char_0(void *, const sipTypeDef *);}
static void *cast_QLatin1Char_0(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QLatin1Char)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLatin1Char_0(void *, int);}
static void release_QLatin1Char_0(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QLatin1Char *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QLatin1Char(void *);}
static PyObject *pickle_QLatin1Char(void *sipCppV)
{
    QLatin1Char *sipCpp = reinterpret_cast<QLatin1Char *>(sipCppV);
    PyObject *sipRes;

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qchar.sip"
    char ch = sipCpp->toLatin1();
    
    sipRes = Py_BuildValue((char *)"(s#)", &ch, 1);
#line 167 "sipQtCoreQLatin1Char_0.cpp"

    return sipRes;
}


extern "C" {static void dealloc_QLatin1Char_0(sipSimpleWrapper *);}
static void dealloc_QLatin1Char_0(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLatin1Char_0(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QLatin1Char_0(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QLatin1Char_0(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLatin1Char *sipCpp = 0;

    {
        char a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "aL", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLatin1Char(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QLatin1Char * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLatin1Char, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLatin1Char(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLatin1Char_0[] = {
    {(void *)slot_QLatin1Char_0___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QLatin1Char_0[] = {
    {SIP_MLNAME_CAST(sipName_toLatin1), meth_QLatin1Char_0_toLatin1, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_unicode), meth_QLatin1Char_0_unicode, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QLatin1Char_0 = {
{
    {
        0,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QLatin1Char,
        {0}
    },
    {
        sipNameNr_QLatin1Char,
        {0, 0, 1},
        2, methods_QLatin1Char_0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QLatin1Char_0,
    init_QLatin1Char_0,
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
    dealloc_QLatin1Char_0,
    0,
    0,
    0,
    release_QLatin1Char_0,
    cast_QLatin1Char_0,
    0,
    0,
    pickle_QLatin1Char
},
    0,
    0,
    0
};
