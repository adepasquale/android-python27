/*
 * Composite module code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:18 2012
 */

#include <Python.h>


static void sip_import_component_module(PyObject *d, const char *name)
{
#if PY_VERSION_HEX >= 0x02050000
    PyObject *mod = PyImport_ImportModule(name);
#else
    PyObject *mod = PyImport_ImportModule((char *)name);
#endif

    /*
     * Note that we don't complain if the module can't be imported.  This
     * is a favour to Linux distro packagers who like to split PyQt into
     * different sub-packages.
     */
    if (mod)
    {
        PyDict_Merge(d, PyModule_GetDict(mod), 0);
        Py_DECREF(mod);
    }
}


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_Qt
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQt
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt4.Qt",
        NULL,
        -1,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;

#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#else
    sipModule = Py_InitModule("PyQt4.Qt", 0);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    sip_import_component_module(sipModuleDict, "PyQt4.QtCore");
    sip_import_component_module(sipModuleDict, "PyQt4.QtGui");
    sip_import_component_module(sipModuleDict, "PyQt4.QtNetwork");
    sip_import_component_module(sipModuleDict, "PyQt4.QtDeclarative");
    sip_import_component_module(sipModuleDict, "PyQt4.QtOpenGL");
    sip_import_component_module(sipModuleDict, "PyQt4.QtScript");
    sip_import_component_module(sipModuleDict, "PyQt4.QtScriptTools");
    sip_import_component_module(sipModuleDict, "PyQt4.QtSql");
    sip_import_component_module(sipModuleDict, "PyQt4.QtSvg");
    sip_import_component_module(sipModuleDict, "PyQt4.QtTest");
    sip_import_component_module(sipModuleDict, "PyQt4.QtWebKit");
    sip_import_component_module(sipModuleDict, "PyQt4.QtXml");
    sip_import_component_module(sipModuleDict, "PyQt4.QtXmlPatterns");

    PyErr_Clear();

    SIP_MODULE_RETURN(sipModule);
}
