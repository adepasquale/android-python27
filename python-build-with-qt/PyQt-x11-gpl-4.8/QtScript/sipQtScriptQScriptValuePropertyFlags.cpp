/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:36 2012
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

#include "sipAPIQtScript.h"

#line 50 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 39 "sipQtScriptQScriptValuePropertyFlags.cpp"

#line 50 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 43 "sipQtScriptQScriptValuePropertyFlags.cpp"


extern "C" {static int slot_QScriptValue_PropertyFlags___bool__(PyObject *);}
static int slot_QScriptValue_PropertyFlags___bool__(PyObject *sipSelf)
{
    QScriptValue::PropertyFlags *sipCpp = reinterpret_cast<QScriptValue::PropertyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_PropertyFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtScriptQScriptValuePropertyFlags.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptValue::PropertyFlags *sipCpp = reinterpret_cast<QScriptValue::PropertyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_PropertyFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptValue::PropertyFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptValue_PropertyFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtScriptQScriptValuePropertyFlags.cpp"
            sipReleaseType(const_cast<QScriptValue::PropertyFlags *>(a0),sipType_QScriptValue_PropertyFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,ne_slot,sipType_QScriptValue_PropertyFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptValue::PropertyFlags *sipCpp = reinterpret_cast<QScriptValue::PropertyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_PropertyFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptValue::PropertyFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptValue_PropertyFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtScriptQScriptValuePropertyFlags.cpp"
            sipReleaseType(const_cast<QScriptValue::PropertyFlags *>(a0),sipType_QScriptValue_PropertyFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,eq_slot,sipType_QScriptValue_PropertyFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___invert__(PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___invert__(PyObject *sipSelf)
{
    QScriptValue::PropertyFlags *sipCpp = reinterpret_cast<QScriptValue::PropertyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_PropertyFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QScriptValue::PropertyFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::PropertyFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValue::PropertyFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QScriptValue_PropertyFlags, &a0, &a0State, &a1))
        {
            QScriptValue::PropertyFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::PropertyFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_PropertyFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValue::PropertyFlags * a0;
        int a0State = 0;
        QScriptValue::PropertyFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QScriptValue_PropertyFlags, &a0, &a0State, sipType_QScriptValue_PropertyFlags, &a1, &a1State))
        {
            QScriptValue::PropertyFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::PropertyFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_PropertyFlags,a0State);
            sipReleaseType(a1,sipType_QScriptValue_PropertyFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }

    {
        QScriptValue::PropertyFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QScriptValue_PropertyFlags, &a0, &a0State, &a1))
        {
            QScriptValue::PropertyFlags *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QScriptValue::PropertyFlags(*a0 ^ a1);
#line 232 "sipQtScriptQScriptValuePropertyFlags.cpp"
            sipReleaseType(a0,sipType_QScriptValue_PropertyFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValue::PropertyFlags * a0;
        int a0State = 0;
        QScriptValue::PropertyFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QScriptValue_PropertyFlags, &a0, &a0State, sipType_QScriptValue_PropertyFlags, &a1, &a1State))
        {
            QScriptValue::PropertyFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::PropertyFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_PropertyFlags,a0State);
            sipReleaseType(a1,sipType_QScriptValue_PropertyFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }

    {
        QScriptValue::PropertyFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QScriptValue_PropertyFlags, &a0, &a0State, &a1))
        {
            QScriptValue::PropertyFlags *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QScriptValue::PropertyFlags(*a0 | a1);
#line 284 "sipQtScriptQScriptValuePropertyFlags.cpp"
            sipReleaseType(a0,sipType_QScriptValue_PropertyFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___int__(PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___int__(PyObject *sipSelf)
{
    QScriptValue::PropertyFlags *sipCpp = reinterpret_cast<QScriptValue::PropertyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_PropertyFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QScriptValue_PropertyFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QScriptValue::PropertyFlags *sipCpp = reinterpret_cast<QScriptValue::PropertyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_PropertyFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QScriptValue::PropertyFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptValue_PropertyFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QScriptValue::PropertyFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_PropertyFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QScriptValue_PropertyFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QScriptValue::PropertyFlags *sipCpp = reinterpret_cast<QScriptValue::PropertyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_PropertyFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QScriptValue::PropertyFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptValue_PropertyFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QScriptValue::PropertyFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_PropertyFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QScriptValue_PropertyFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_PropertyFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QScriptValue_PropertyFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QScriptValue::PropertyFlags *sipCpp = reinterpret_cast<QScriptValue::PropertyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_PropertyFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QScriptValue::PropertyFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QScriptValue_PropertyFlags(void *, const sipTypeDef *);}
static void *cast_QScriptValue_PropertyFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QScriptValue_PropertyFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptValue_PropertyFlags(void *, int);}
static void release_QScriptValue_PropertyFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QScriptValue::PropertyFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QScriptValue_PropertyFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QScriptValue_PropertyFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QScriptValue::PropertyFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QScriptValue::PropertyFlags *>(sipSrc);
}


extern "C" {static void *array_QScriptValue_PropertyFlags(SIP_SSIZE_T);}
static void *array_QScriptValue_PropertyFlags(SIP_SSIZE_T sipNrElem)
{
    return new QScriptValue::PropertyFlags[sipNrElem];
}


extern "C" {static void *copy_QScriptValue_PropertyFlags(const void *, SIP_SSIZE_T);}
static void *copy_QScriptValue_PropertyFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QScriptValue::PropertyFlags(reinterpret_cast<const QScriptValue::PropertyFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QScriptValue_PropertyFlags(sipSimpleWrapper *);}
static void dealloc_QScriptValue_PropertyFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptValue_PropertyFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QScriptValue_PropertyFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QScriptValue_PropertyFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QScriptValue::PropertyFlags *sipCpp = 0;

    {
        const QScriptValue::PropertyFlags * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QScriptValue_PropertyFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptValue::PropertyFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QScriptValue::PropertyFlags *>(a0),sipType_QScriptValue_PropertyFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptValue::PropertyFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptValue::PropertyFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QScriptValue_PropertyFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QScriptValue_PropertyFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QScriptValue::PropertyFlags **sipCppPtr = reinterpret_cast<QScriptValue::PropertyFlags **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QScriptValue::PropertyFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QScriptValue_PropertyFlag)) ||
            sipCanConvertToType(sipPy, sipType_QScriptValue_PropertyFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QScriptValue_PropertyFlag)))
{
    *sipCppPtr = new QScriptValue::PropertyFlags(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QScriptValue::PropertyFlags *>(sipConvertToType(sipPy, sipType_QScriptValue_PropertyFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 577 "sipQtScriptQScriptValuePropertyFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QScriptValue_PropertyFlags[] = {
    {(void *)slot_QScriptValue_PropertyFlags___bool__, bool_slot},
    {(void *)slot_QScriptValue_PropertyFlags___ne__, ne_slot},
    {(void *)slot_QScriptValue_PropertyFlags___eq__, eq_slot},
    {(void *)slot_QScriptValue_PropertyFlags___invert__, invert_slot},
    {(void *)slot_QScriptValue_PropertyFlags___and__, and_slot},
    {(void *)slot_QScriptValue_PropertyFlags___xor__, xor_slot},
    {(void *)slot_QScriptValue_PropertyFlags___or__, or_slot},
    {(void *)slot_QScriptValue_PropertyFlags___int__, int_slot},
    {(void *)slot_QScriptValue_PropertyFlags___ixor__, ixor_slot},
    {(void *)slot_QScriptValue_PropertyFlags___ior__, ior_slot},
    {(void *)slot_QScriptValue_PropertyFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptValue_PropertyFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptValue__PropertyFlags,
        {0}
    },
    {
        sipNameNr_PropertyFlags,
        {21, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QScriptValue_PropertyFlags,
    init_QScriptValue_PropertyFlags,
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
    dealloc_QScriptValue_PropertyFlags,
    assign_QScriptValue_PropertyFlags,
    array_QScriptValue_PropertyFlags,
    copy_QScriptValue_PropertyFlags,
    release_QScriptValue_PropertyFlags,
    cast_QScriptValue_PropertyFlags,
    convertTo_QScriptValue_PropertyFlags,
    0,
    0
},
    0,
    1,
    0
};
