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

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qelapsedtimer.sip"
#include <qelapsedtimer.h>
#line 39 "sipQtCoreQElapsedTimer.cpp"



extern "C" {static PyObject *meth_QElapsedTimer_clockType(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_clockType(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QElapsedTimer::ClockType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QElapsedTimer::clockType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QElapsedTimer_ClockType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_clockType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_isMonotonic(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_isMonotonic(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QElapsedTimer::isMonotonic();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_isMonotonic, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_start(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_start, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_restart(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_restart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->restart();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_restart, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->invalidate();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_invalidate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_isValid(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_elapsed(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_elapsed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->elapsed();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_elapsed, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_hasExpired(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_hasExpired(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        QElapsedTimer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_timeout,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bn", &sipSelf, sipType_QElapsedTimer, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasExpired(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_hasExpired, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_msecsSinceReference(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_msecsSinceReference(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->msecsSinceReference();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_msecsSinceReference, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_msecsTo(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_msecsTo(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer * a0;
        QElapsedTimer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_other,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_QElapsedTimer, &sipCpp, sipType_QElapsedTimer, &a0))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->msecsTo(*a0);
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_msecsTo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QElapsedTimer_secsTo(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_secsTo(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer * a0;
        QElapsedTimer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_other,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_QElapsedTimer, &sipCpp, sipType_QElapsedTimer, &a0))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->secsTo(*a0);
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_secsTo, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QElapsedTimer___ge__(PyObject *,PyObject *);}
static PyObject *slot_QElapsedTimer___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QElapsedTimer *sipCpp = reinterpret_cast<QElapsedTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QElapsedTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QElapsedTimer, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !operator<((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ge_slot,sipType_QElapsedTimer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QElapsedTimer___lt__(PyObject *,PyObject *);}
static PyObject *slot_QElapsedTimer___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QElapsedTimer *sipCpp = reinterpret_cast<QElapsedTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QElapsedTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QElapsedTimer, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator<((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,lt_slot,sipType_QElapsedTimer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QElapsedTimer___ne__(PyObject *,PyObject *);}
static PyObject *slot_QElapsedTimer___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QElapsedTimer *sipCpp = reinterpret_cast<QElapsedTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QElapsedTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QElapsedTimer, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QElapsedTimer::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QElapsedTimer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QElapsedTimer___eq__(PyObject *,PyObject *);}
static PyObject *slot_QElapsedTimer___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QElapsedTimer *sipCpp = reinterpret_cast<QElapsedTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QElapsedTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QElapsedTimer, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QElapsedTimer::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QElapsedTimer,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QElapsedTimer(void *, const sipTypeDef *);}
static void *cast_QElapsedTimer(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QElapsedTimer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QElapsedTimer(void *, int);}
static void release_QElapsedTimer(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QElapsedTimer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QElapsedTimer(void *, SIP_SSIZE_T, const void *);}
static void assign_QElapsedTimer(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QElapsedTimer *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QElapsedTimer *>(sipSrc);
}


extern "C" {static void *array_QElapsedTimer(SIP_SSIZE_T);}
static void *array_QElapsedTimer(SIP_SSIZE_T sipNrElem)
{
    return new QElapsedTimer[sipNrElem];
}


extern "C" {static void *copy_QElapsedTimer(const void *, SIP_SSIZE_T);}
static void *copy_QElapsedTimer(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QElapsedTimer(reinterpret_cast<const QElapsedTimer *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QElapsedTimer(sipSimpleWrapper *);}
static void dealloc_QElapsedTimer(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QElapsedTimer(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QElapsedTimer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QElapsedTimer(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QElapsedTimer *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QElapsedTimer();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QElapsedTimer * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QElapsedTimer, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QElapsedTimer(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QElapsedTimer[] = {
    {(void *)slot_QElapsedTimer___ge__, ge_slot},
    {(void *)slot_QElapsedTimer___lt__, lt_slot},
    {(void *)slot_QElapsedTimer___ne__, ne_slot},
    {(void *)slot_QElapsedTimer___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QElapsedTimer[] = {
    {SIP_MLNAME_CAST(sipName_clockType), meth_QElapsedTimer_clockType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_elapsed), meth_QElapsedTimer_elapsed, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasExpired), (PyCFunction)meth_QElapsedTimer_hasExpired, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QElapsedTimer_invalidate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isMonotonic), meth_QElapsedTimer_isMonotonic, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QElapsedTimer_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_msecsSinceReference), meth_QElapsedTimer_msecsSinceReference, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_msecsTo), (PyCFunction)meth_QElapsedTimer_msecsTo, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_restart), meth_QElapsedTimer_restart, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_secsTo), (PyCFunction)meth_QElapsedTimer_secsTo, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_start), meth_QElapsedTimer_start, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QElapsedTimer[] = {
    {sipName_MachAbsoluteTime, QElapsedTimer::MachAbsoluteTime, 57},
    {sipName_MonotonicClock, QElapsedTimer::MonotonicClock, 57},
    {sipName_SystemTime, QElapsedTimer::SystemTime, 57},
    {sipName_TickCounter, QElapsedTimer::TickCounter, 57},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QElapsedTimer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QElapsedTimer,
        {0}
    },
    {
        sipNameNr_QElapsedTimer,
        {0, 0, 1},
        11, methods_QElapsedTimer,
        4, enummembers_QElapsedTimer,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QElapsedTimer,
    init_QElapsedTimer,
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
    dealloc_QElapsedTimer,
    assign_QElapsedTimer,
    array_QElapsedTimer,
    copy_QElapsedTimer,
    release_QElapsedTimer,
    cast_QElapsedTimer,
    0,
    0,
    0
},
    0,
    0,
    0
};
