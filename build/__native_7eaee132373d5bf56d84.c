#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native_7eaee132373d5bf56d84.h"
#include "__native_internal_7eaee132373d5bf56d84.h"
static PyMethodDef eth_eventmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef eth_eventmodule = {
    PyModuleDef_HEAD_INIT,
    "eth_event",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    eth_eventmodule_methods
};

PyObject *CPyInit_eth_event(void)
{
    PyObject* modname = NULL;
    if (CPyModule_eth_event_internal) {
        Py_INCREF(CPyModule_eth_event_internal);
        return CPyModule_eth_event_internal;
    }
    CPyModule_eth_event_internal = PyModule_Create(&eth_eventmodule);
    if (unlikely(CPyModule_eth_event_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_eth_event_internal, "__name__");
    CPyStatic_eth_event___globals = PyModule_GetDict(CPyModule_eth_event_internal);
    if (unlikely(CPyStatic_eth_event___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_eth_event_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_eth_event_internal;
    fail:
    Py_CLEAR(CPyModule_eth_event_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_eth_event_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("eth_event/__init__.py", "<module>", -1, CPyStatic_eth_event___globals);
        goto CPyL5;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[131]; /* ('ABIError', 'EventError', 'StructLogError',
                                   'UnknownEvent', 'decode_log', 'decode_logs',
                                   'decode_traceTransaction', 'get_log_topic',
                                   'get_topic_map') */
    cpy_r_r6 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r7 = CPyStatic_eth_event___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("eth_event/__init__.py", "<module>", 3, CPyStatic_eth_event___globals);
        goto CPyL5;
    }
    CPyModule_eth_event___main = cpy_r_r8;
    CPy_INCREF(CPyModule_eth_event___main);
    CPy_DECREF(cpy_r_r8);
    return 1;
CPyL5: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyMemberDef main___ABIError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef main___ABIError_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef main___ABIError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_main___ABIError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ABIError",
    .tp_getset = main___ABIError_getseters,
    .tp_methods = main___ABIError_methods,
    .tp_members = main___ABIError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_main___ABIError_template = &CPyType_main___ABIError_template_;


PyMemberDef main___EventError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef main___EventError_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef main___EventError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_main___EventError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "EventError",
    .tp_getset = main___EventError_getseters,
    .tp_methods = main___EventError_methods,
    .tp_members = main___EventError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_main___EventError_template = &CPyType_main___EventError_template_;


PyMemberDef main___StructLogError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef main___StructLogError_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef main___StructLogError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_main___StructLogError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "StructLogError",
    .tp_getset = main___StructLogError_getseters,
    .tp_methods = main___StructLogError_methods,
    .tp_members = main___StructLogError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_main___StructLogError_template = &CPyType_main___StructLogError_template_;


PyMemberDef main___UnknownEvent_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef main___UnknownEvent_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef main___UnknownEvent_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_main___UnknownEvent_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "UnknownEvent",
    .tp_getset = main___UnknownEvent_getseters,
    .tp_methods = main___UnknownEvent_methods,
    .tp_members = main___UnknownEvent_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_main___UnknownEvent_template = &CPyType_main___UnknownEvent_template_;

static PyMethodDef mainmodule_methods[] = {
    {"get_log_topic", (PyCFunction)CPyPy_main___get_log_topic, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_topic_map", (PyCFunction)CPyPy_main___get_topic_map, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"decode_log", (PyCFunction)CPyPy_main___decode_log, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"decode_logs", (PyCFunction)CPyPy_main___decode_logs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_append_additional_log_data", (PyCFunction)CPyPy_main____append_additional_log_data, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"decode_traceTransaction", (PyCFunction)CPyPy_main___decode_traceTransaction, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_0xstring", (PyCFunction)CPyPy_main____0xstring, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_params", (PyCFunction)CPyPy_main____params, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_decode", (PyCFunction)CPyPy_main____decode, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mainmodule = {
    PyModuleDef_HEAD_INIT,
    "eth_event.main",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mainmodule_methods
};

PyObject *CPyInit_eth_event___main(void)
{
    PyObject* modname = NULL;
    if (CPyModule_eth_event___main_internal) {
        Py_INCREF(CPyModule_eth_event___main_internal);
        return CPyModule_eth_event___main_internal;
    }
    CPyModule_eth_event___main_internal = PyModule_Create(&mainmodule);
    if (unlikely(CPyModule_eth_event___main_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_eth_event___main_internal, "__name__");
    CPyStatic_main___globals = PyModule_GetDict(CPyModule_eth_event___main_internal);
    if (unlikely(CPyStatic_main___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_main_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_eth_event___main_internal;
    fail:
    Py_CLEAR(CPyModule_eth_event___main_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_main___ADD_LOG_ENTRIES.f0);
    CPy_XDECREF(CPyStatic_main___ADD_LOG_ENTRIES.f1);
    CPy_XDECREF(CPyStatic_main___ADD_LOG_ENTRIES.f2);
    CPyStatic_main___ADD_LOG_ENTRIES = (tuple_T3OOO) { NULL, NULL, NULL };
    CPy_XDECREF(CPyStatic_main___HexBytes);
    CPyStatic_main___HexBytes = NULL;
    CPy_XDECREF(CPyStatic_main___to_checksum_address);
    CPyStatic_main___to_checksum_address = NULL;
    CPy_XDECREF(CPyStatic_main___keccak);
    CPyStatic_main___keccak = NULL;
    CPy_XDECREF(CPyStatic_main___lru_cache);
    CPyStatic_main___lru_cache = NULL;
    CPy_XDECREF(CPyStatic_main____tuple_match);
    CPyStatic_main____tuple_match = NULL;
    Py_CLEAR(CPyType_main___ABIError);
    Py_CLEAR(CPyType_main___EventError);
    Py_CLEAR(CPyType_main___StructLogError);
    Py_CLEAR(CPyType_main___UnknownEvent);
    Py_CLEAR(CPyType_main___DecodedEvent);
    Py_CLEAR(CPyType_main___NonDecodedEvent);
    Py_CLEAR(CPyType_main___TopicMapData);
    Py_CLEAR(CPyType_main____TraceStep);
    return NULL;
}

PyObject *CPyDef_main___get_log_topic(PyObject *cpy_r_event_abi) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = (PyObject *)&PyDict_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_event_abi, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 101, CPyStatic_main___globals);
        goto CPyL30;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL6;
    cpy_r_r4 = CPyStatics[14]; /* "Must be a dictionary of the specific event's ABI" */
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 102, CPyStatic_main___globals);
        goto CPyL30;
    }
    PyObject *cpy_r_r8[1] = {cpy_r_r4};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 102, CPyStatic_main___globals);
        goto CPyL30;
    }
    CPy_Raise(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 102, CPyStatic_main___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r11 = CPyStatics[16]; /* 'anonymous' */
    cpy_r_r12 = CPyDict_GetWithNone(cpy_r_event_abi, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 103, CPyStatic_main___globals);
        goto CPyL30;
    }
    if (PyBool_Check(cpy_r_r12))
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL1;
    if (cpy_r_r12 == Py_None)
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL1;
    CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 103, CPyStatic_main___globals, "bool or None", cpy_r_r12);
    goto CPyL30;
__LL1: ;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 != cpy_r_r14;
    if (!cpy_r_r15) goto CPyL31;
    if (unlikely(!PyBool_Check(cpy_r_r13))) {
        CPy_TypeError("bool", cpy_r_r13); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r13 == Py_True;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 103, CPyStatic_main___globals);
        goto CPyL30;
    }
    if (!cpy_r_r16) goto CPyL15;
    cpy_r_r17 = CPyStatics[17]; /* 'Anonymous events do not have a topic' */
    cpy_r_r18 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r19[1] = {cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 104, CPyStatic_main___globals);
        goto CPyL30;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_main___ABIError))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 104, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r21);
        goto CPyL30;
    }
    CPy_Raise(cpy_r_r22);
    CPy_DECREF_NO_IMM(cpy_r_r22);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 104, CPyStatic_main___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r23 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_event_abi, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 106, CPyStatic_main___globals);
        goto CPyL30;
    }
    if (likely(PyList_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 106, CPyStatic_main___globals, "list", cpy_r_r24);
        goto CPyL30;
    }
    cpy_r_r26 = CPyDef_main____params(cpy_r_r25);
    CPy_DECREF_NO_IMM(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 106, CPyStatic_main___globals);
        goto CPyL30;
    }
    cpy_r_r27 = CPyStatics[19]; /* 'name' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_event_abi, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 107, CPyStatic_main___globals);
        goto CPyL32;
    }
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 107, CPyStatic_main___globals, "str", cpy_r_r28);
        goto CPyL32;
    }
    cpy_r_r30 = CPyStatics[20]; /* '(' */
    cpy_r_r31 = CPyStatics[21]; /* ',' */
    cpy_r_r32 = PyUnicode_Join(cpy_r_r31, cpy_r_r26);
    CPy_DECREF_NO_IMM(cpy_r_r26);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 107, CPyStatic_main___globals);
        goto CPyL33;
    }
    cpy_r_r33 = CPyStatics[22]; /* ')' */
    cpy_r_r34 = CPyStr_Build(4, cpy_r_r29, cpy_r_r30, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 107, CPyStatic_main___globals);
        goto CPyL30;
    }
    cpy_r_r35 = PyUnicode_AsUTF8String(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 107, CPyStatic_main___globals);
        goto CPyL30;
    }
    cpy_r_r36 = CPyStatic_main___keccak;
    if (unlikely(cpy_r_r36 == NULL)) {
        goto CPyL34;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"keccak\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 109, CPyStatic_main___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL26: ;
    PyObject *cpy_r_r38[1] = {cpy_r_r35};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = PyObject_Vectorcall(cpy_r_r36, cpy_r_r39, 1, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 109, CPyStatic_main___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r35);
    if (likely(PyBytes_Check(cpy_r_r40) || PyByteArray_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 109, CPyStatic_main___globals, "bytes", cpy_r_r40);
        goto CPyL30;
    }
    cpy_r_r42 = CPyDef_main____0xstring(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 109, CPyStatic_main___globals);
        goto CPyL30;
    }
    return cpy_r_r42;
CPyL30: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL31: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL15;
CPyL32: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL24;
CPyL35: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL30;
}

PyObject *CPyPy_main___get_log_topic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"event_abi", 0};
    static CPyArg_Parser parser = {"O:get_log_topic", kwlist, 0};
    PyObject *obj_event_abi;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_event_abi)) {
        return NULL;
    }
    PyObject *arg_event_abi;
    if (likely(PyDict_Check(obj_event_abi)))
        arg_event_abi = obj_event_abi;
    else {
        CPy_TypeError("dict", obj_event_abi); 
        goto fail;
    }
    PyObject *retval = CPyDef_main___get_log_topic(arg_event_abi);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "get_log_topic", 87, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main___get_topic_map(PyObject *cpy_r_abi) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    int64_t cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    tuple_T3OOO cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    tuple_T2OO cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 149, CPyStatic_main___globals);
        goto CPyL24;
    }
    cpy_r_r1 = 0;
CPyL3: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_abi)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL23;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r1 >> 1;
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_abi)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r6 * 8;
    cpy_r_r10 = cpy_r_r8 + cpy_r_r9;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    CPy_INCREF(cpy_r_r11);
    if (likely(PyDict_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 149, CPyStatic_main___globals, "dict", cpy_r_r11);
        goto CPyL36;
    }
    cpy_r_r13 = CPyStatics[23]; /* 'type' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 152, CPyStatic_main___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 152, CPyStatic_main___globals, "str", cpy_r_r14);
        goto CPyL37;
    }
    cpy_r_r16 = CPyStatics[24]; /* 'event' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL10;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL10;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 152, CPyStatic_main___globals);
        goto CPyL37;
    }
CPyL10: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    if (cpy_r_r22) goto CPyL12;
    if (cpy_r_r22) {
        goto CPyL16;
    } else
        goto CPyL38;
CPyL12: ;
    cpy_r_r23 = CPyStatics[16]; /* 'anonymous' */
    cpy_r_r24 = CPyDict_GetWithNone(cpy_r_r12, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 152, CPyStatic_main___globals);
        goto CPyL37;
    }
    if (PyBool_Check(cpy_r_r24))
        cpy_r_r25 = cpy_r_r24;
    else {
        cpy_r_r25 = NULL;
    }
    if (cpy_r_r25 != NULL) goto __LL2;
    if (cpy_r_r24 == Py_None)
        cpy_r_r25 = cpy_r_r24;
    else {
        cpy_r_r25 = NULL;
    }
    if (cpy_r_r25 != NULL) goto __LL2;
    CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 152, CPyStatic_main___globals, "bool or None", cpy_r_r24);
    goto CPyL37;
__LL2: ;
    cpy_r_r26 = PyObject_Not(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 152, CPyStatic_main___globals);
        goto CPyL37;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL38;
CPyL16: ;
    cpy_r_r29 = CPyDef_main___get_log_topic(cpy_r_r12);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 150, CPyStatic_main___globals);
        goto CPyL37;
    }
    cpy_r_r30 = CPyStatics[19]; /* 'name' */
    cpy_r_r31 = CPyStatics[19]; /* 'name' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r12, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 150, CPyStatic_main___globals);
        goto CPyL39;
    }
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 150, CPyStatic_main___globals, "str", cpy_r_r32);
        goto CPyL39;
    }
    cpy_r_r34 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r35 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r12, cpy_r_r35);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 150, CPyStatic_main___globals);
        goto CPyL40;
    }
    cpy_r_r37 = CPyDict_Build(2, cpy_r_r30, cpy_r_r33, cpy_r_r34, cpy_r_r36);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 150, CPyStatic_main___globals);
        goto CPyL41;
    }
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r0, cpy_r_r29, cpy_r_r37);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 149, CPyStatic_main___globals);
        goto CPyL36;
    }
CPyL22: ;
    cpy_r_r40 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r40;
    goto CPyL3;
CPyL23: ;
    return cpy_r_r0;
CPyL24: ;
    cpy_r_r41 = CPy_CatchError();
    cpy_r_r42 = CPyModule_builtins;
    cpy_r_r43 = CPyStatics[25]; /* 'KeyError' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 154, CPyStatic_main___globals);
        goto CPyL33;
    }
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 154, CPyStatic_main___globals);
        goto CPyL42;
    }
    cpy_r_r48.f0 = cpy_r_r44;
    cpy_r_r48.f1 = cpy_r_r47;
    cpy_r_r49 = PyTuple_New(2);
    if (unlikely(cpy_r_r49 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = cpy_r_r48.f0;
    PyTuple_SET_ITEM(cpy_r_r49, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r48.f1;
    PyTuple_SET_ITEM(cpy_r_r49, 1, __tmp4);
    cpy_r_r50 = CPy_ExceptionMatches(cpy_r_r49);
    CPy_DecRef(cpy_r_r49);
    if (!cpy_r_r50) goto CPyL31;
    cpy_r_r51 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r51);
    cpy_r_r52 = CPyStatics[26]; /* 'Invalid ABI' */
    cpy_r_r53 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r54[1] = {cpy_r_r52};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 1, 0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 155, CPyStatic_main___globals);
        goto CPyL33;
    }
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_main___ABIError))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 155, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r56);
        goto CPyL33;
    }
    CPy_Raise(cpy_r_r57);
    CPy_DecRef(cpy_r_r57);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 155, CPyStatic_main___globals);
        goto CPyL33;
    } else
        goto CPyL43;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL33;
    } else
        goto CPyL44;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    CPy_RestoreExcInfo(cpy_r_r41);
    CPy_DecRef(cpy_r_r41.f0);
    CPy_DecRef(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r41.f2);
    cpy_r_r58 = CPy_KeepPropagating();
    if (!cpy_r_r58) goto CPyL35;
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL24;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL24;
CPyL38: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL22;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r29);
    goto CPyL24;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    goto CPyL24;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r29);
    goto CPyL24;
CPyL42: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL33;
CPyL43: ;
    CPy_DecRef(cpy_r_r41.f0);
    CPy_DecRef(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r41.f2);
    goto CPyL30;
CPyL44: ;
    CPy_DecRef(cpy_r_r41.f0);
    CPy_DecRef(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r41.f2);
    goto CPyL32;
}

PyObject *CPyPy_main___get_topic_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"abi", 0};
    static CPyArg_Parser parser = {"O:get_topic_map", kwlist, 0};
    PyObject *obj_abi;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_abi)) {
        return NULL;
    }
    PyObject *arg_abi;
    if (likely(PyList_Check(obj_abi)))
        arg_abi = obj_abi;
    else {
        CPy_TypeError("list", obj_abi); 
        goto fail;
    }
    PyObject *retval = CPyDef_main___get_topic_map(arg_abi);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "get_topic_map", 122, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main___decode_log(PyObject *cpy_r_log, PyObject *cpy_r_topic_map, PyObject *cpy_r___checksum_func) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_data_topics;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    if (cpy_r___checksum_func != NULL) goto CPyL53;
    cpy_r_r0 = CPyStatic_main___to_checksum_address;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 161, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r___checksum_func = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = CPyStatics[27]; /* 'topics' */
    cpy_r_r3 = PyObject_GetItem(cpy_r_log, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 202, CPyStatic_main___globals);
        goto CPyL54;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 202, CPyStatic_main___globals);
        goto CPyL55;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) {
        goto CPyL12;
    } else
        goto CPyL56;
CPyL8: ;
    cpy_r_r7 = CPyStatics[28]; /* 'Cannot decode an anonymous event' */
    cpy_r_r8 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r9[1] = {cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 204, CPyStatic_main___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_main___EventError))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 204, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r11);
        goto CPyL52;
    }
    CPy_Raise(cpy_r_r12);
    CPy_DECREF_NO_IMM(cpy_r_r12);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 204, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r13 = PyObject_GetIter(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 206, CPyStatic_main___globals);
        goto CPyL54;
    }
    cpy_r_r14 = PyIter_Next(cpy_r_r13);
    if (cpy_r_r14 == NULL) {
        goto CPyL57;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 206, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r16 = PySequence_List(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 206, CPyStatic_main___globals);
        goto CPyL58;
    }
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r19;
    if (cpy_r_r20) {
        goto CPyL20;
    } else
        goto CPyL59;
CPyL18: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 206, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_data_topics = cpy_r_r16;
    cpy_r_r22 = CPyDef_main____0xstring(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 207, CPyStatic_main___globals);
        goto CPyL60;
    }
    cpy_r_r23 = PySequence_Contains(cpy_r_topic_map, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 208, CPyStatic_main___globals);
        goto CPyL61;
    }
    cpy_r_r25 = cpy_r_r23;
    cpy_r_r26 = cpy_r_r25 ^ 1;
    if (cpy_r_r26) {
        goto CPyL62;
    } else
        goto CPyL27;
CPyL23: ;
    cpy_r_r27 = CPyStatics[29]; /* 'Event topic is not present in given ABI' */
    cpy_r_r28 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r29[1] = {cpy_r_r27};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 209, CPyStatic_main___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_main___UnknownEvent))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 209, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r31);
        goto CPyL52;
    }
    CPy_Raise(cpy_r_r32);
    CPy_DECREF_NO_IMM(cpy_r_r32);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 209, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r33 = PyObject_GetItem(cpy_r_topic_map, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 211, CPyStatic_main___globals);
        goto CPyL60;
    }
    if (likely(PyDict_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 211, CPyStatic_main___globals, "dict", cpy_r_r33);
        goto CPyL60;
    }
    cpy_r_r35 = CPyStatics[19]; /* 'name' */
    cpy_r_r36 = CPyStatics[19]; /* 'name' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 215, CPyStatic_main___globals);
        goto CPyL63;
    }
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 215, CPyStatic_main___globals, "str", cpy_r_r37);
        goto CPyL63;
    }
    cpy_r_r39 = CPyStatics[30]; /* 'data' */
    cpy_r_r40 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r34, cpy_r_r40);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 216, CPyStatic_main___globals);
        goto CPyL64;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 216, CPyStatic_main___globals, "list", cpy_r_r41);
        goto CPyL64;
    }
    cpy_r_r43 = CPyStatics[30]; /* 'data' */
    cpy_r_r44 = PyObject_GetItem(cpy_r_log, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 216, CPyStatic_main___globals);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_data_topics)))
        cpy_r_r45 = cpy_r_data_topics;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 216, CPyStatic_main___globals, "list", cpy_r_data_topics);
        goto CPyL66;
    }
    cpy_r_r46 = CPyDef_main____decode(cpy_r_r42, cpy_r_r45, cpy_r_r44);
    CPy_DECREF_NO_IMM(cpy_r_r42);
    CPy_DECREF_NO_IMM(cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 216, CPyStatic_main___globals);
        goto CPyL67;
    }
    cpy_r_r47 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r48 = CPyStatics[32]; /* 'address' */
    cpy_r_r49 = CPyStatics[32]; /* 'address' */
    cpy_r_r50 = PyObject_GetItem(cpy_r_log, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 218, CPyStatic_main___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_r50};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_Vectorcall(cpy_r___checksum_func, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r___checksum_func);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 218, CPyStatic_main___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r50);
    cpy_r_r54 = 1 ? Py_True : Py_False;
    cpy_r_r55 = CPyDict_Build(4, cpy_r_r35, cpy_r_r38, cpy_r_r39, cpy_r_r46, cpy_r_r47, cpy_r_r54, cpy_r_r48, cpy_r_r53);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF_NO_IMM(cpy_r_r46);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 214, CPyStatic_main___globals);
        goto CPyL42;
    }
    cpy_r_r56 = CPyDef_main____append_additional_log_data(cpy_r_log, cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 220, CPyStatic_main___globals);
        goto CPyL70;
    }
    return cpy_r_r55;
CPyL42: ;
    cpy_r_r57 = CPy_CatchError();
    cpy_r_r58 = CPyModule_builtins;
    cpy_r_r59 = CPyStatics[25]; /* 'KeyError' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 222, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r61 = CPy_ExceptionMatches(cpy_r_r60);
    CPy_DecRef(cpy_r_r60);
    if (!cpy_r_r61) goto CPyL48;
    cpy_r_r62 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r62);
    cpy_r_r63 = CPyStatics[33]; /* 'Invalid event' */
    cpy_r_r64 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r65[1] = {cpy_r_r63};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = PyObject_Vectorcall(cpy_r_r64, cpy_r_r66, 1, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 223, CPyStatic_main___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_main___EventError))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 223, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r67);
        goto CPyL50;
    }
    CPy_Raise(cpy_r_r68);
    CPy_DecRef(cpy_r_r68);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 223, CPyStatic_main___globals);
        goto CPyL50;
    } else
        goto CPyL71;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL50;
    } else
        goto CPyL72;
CPyL49: ;
    CPy_Unreachable();
CPyL50: ;
    CPy_RestoreExcInfo(cpy_r_r57);
    CPy_DecRef(cpy_r_r57.f0);
    CPy_DecRef(cpy_r_r57.f1);
    CPy_DecRef(cpy_r_r57.f2);
    cpy_r_r69 = CPy_KeepPropagating();
    if (!cpy_r_r69) goto CPyL52;
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r70 = NULL;
    return cpy_r_r70;
CPyL53: ;
    CPy_INCREF(cpy_r___checksum_func);
    goto CPyL5;
CPyL54: ;
    CPy_DecRef(cpy_r___checksum_func);
    goto CPyL52;
CPyL55: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r3);
    goto CPyL52;
CPyL56: ;
    CPy_DECREF(cpy_r___checksum_func);
    CPy_DECREF(cpy_r_r3);
    goto CPyL8;
CPyL57: ;
    CPy_DECREF(cpy_r___checksum_func);
    CPy_DECREF(cpy_r_r13);
    goto CPyL14;
CPyL58: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r14);
    goto CPyL52;
CPyL59: ;
    CPy_DECREF(cpy_r___checksum_func);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL18;
CPyL60: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    goto CPyL52;
CPyL61: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    CPy_DecRef(cpy_r_r22);
    goto CPyL52;
CPyL62: ;
    CPy_DECREF(cpy_r___checksum_func);
    CPy_DECREF(cpy_r_data_topics);
    CPy_DECREF(cpy_r_r22);
    goto CPyL23;
CPyL63: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    CPy_DecRef(cpy_r_r34);
    goto CPyL42;
CPyL64: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    CPy_DecRef(cpy_r_r38);
    goto CPyL42;
CPyL65: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    goto CPyL42;
CPyL66: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    goto CPyL42;
CPyL67: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r38);
    goto CPyL42;
CPyL68: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    goto CPyL42;
CPyL69: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r50);
    goto CPyL42;
CPyL70: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL42;
CPyL71: ;
    CPy_DecRef(cpy_r_r57.f0);
    CPy_DecRef(cpy_r_r57.f1);
    CPy_DecRef(cpy_r_r57.f2);
    goto CPyL47;
CPyL72: ;
    CPy_DecRef(cpy_r_r57.f0);
    CPy_DecRef(cpy_r_r57.f1);
    CPy_DecRef(cpy_r_r57.f2);
    goto CPyL49;
}

PyObject *CPyPy_main___decode_log(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"log", "topic_map", "__checksum_func", 0};
    static CPyArg_Parser parser = {"OO|O:decode_log", kwlist, 0};
    PyObject *obj_log;
    PyObject *obj_topic_map;
    PyObject *obj___checksum_func = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_log, &obj_topic_map, &obj___checksum_func)) {
        return NULL;
    }
    PyObject *arg_log = obj_log;
    PyObject *arg_topic_map = obj_topic_map;
    PyObject *arg___checksum_func;
    if (obj___checksum_func == NULL) {
        arg___checksum_func = NULL;
    } else {
        arg___checksum_func = obj___checksum_func; 
    }
    PyObject *retval = CPyDef_main___decode_log(arg_log, arg_topic_map, arg___checksum_func);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "decode_log", 158, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main___decode_logs(PyObject *cpy_r_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    int64_t cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    if (cpy_r_allow_undecoded != 2) goto CPyL2;
    cpy_r_allow_undecoded = 0;
CPyL2: ;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 272, CPyStatic_main___globals);
        goto CPyL39;
    }
    cpy_r_r1 = CPyStatic_main___to_checksum_address;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL40;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 276, CPyStatic_main___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r3 = CPyStatic_main___lru_cache;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL41;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"lru_cache\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 276, CPyStatic_main___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL9: ;
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 1, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 276, CPyStatic_main___globals);
        goto CPyL42;
    }
    cpy_r_r8 = 0;
CPyL11: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_logs)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL43;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r8 >> 1;
    cpy_r_r14 = (CPyPtr)&((PyListObject *)cpy_r_logs)->ob_item;
    cpy_r_r15 = *(CPyPtr *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r13 * 8;
    cpy_r_r17 = cpy_r_r15 + cpy_r_r16;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = PyList_New(0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 279, CPyStatic_main___globals);
        goto CPyL44;
    }
    cpy_r_r20 = CPyStatics[27]; /* 'topics' */
    cpy_r_r21 = PyObject_GetItem(cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 279, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r22 = PyObject_GetIter(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 279, CPyStatic_main___globals);
        goto CPyL45;
    }
CPyL15: ;
    cpy_r_r23 = PyIter_Next(cpy_r_r22);
    if (cpy_r_r23 == NULL) goto CPyL46;
    cpy_r_r24 = CPyDef_main____0xstring(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 279, CPyStatic_main___globals);
        goto CPyL47;
    }
    cpy_r_r25 = PyList_Append(cpy_r_r19, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 279, CPyStatic_main___globals);
        goto CPyL47;
    } else
        goto CPyL15;
CPyL18: ;
    cpy_r_r27 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 279, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = cpy_r_r30 != 0;
    if (!cpy_r_r31) goto CPyL25;
    cpy_r_r32 = CPyList_GetItemShort(cpy_r_r19, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 280, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r33 = PySequence_Contains(cpy_r_topic_map, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 280, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r35 = cpy_r_r33;
    if (cpy_r_r35) {
        goto CPyL49;
    } else
        goto CPyL25;
CPyL23: ;
    cpy_r_r36 = CPyDef_main___decode_log(cpy_r_r18, cpy_r_topic_map, cpy_r_r7);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 281, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r37 = PyList_Append(cpy_r_r0, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 281, CPyStatic_main___globals);
        goto CPyL50;
    } else
        goto CPyL37;
CPyL25: ;
    if (cpy_r_allow_undecoded) {
        goto CPyL30;
    } else
        goto CPyL51;
CPyL26: ;
    cpy_r_r39 = CPyStatics[34]; /* 'Log contains undecodable event' */
    cpy_r_r40 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r41[1] = {cpy_r_r39};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 283, CPyStatic_main___globals);
        goto CPyL39;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_main___UnknownEvent))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_logs", 283, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r43);
        goto CPyL39;
    }
    CPy_Raise(cpy_r_r44);
    CPy_DECREF_NO_IMM(cpy_r_r44);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 283, CPyStatic_main___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r45 = CPyStatics[19]; /* 'name' */
    cpy_r_r46 = CPyStatics[27]; /* 'topics' */
    cpy_r_r47 = CPyStatics[30]; /* 'data' */
    cpy_r_r48 = CPyStatics[30]; /* 'data' */
    cpy_r_r49 = PyObject_GetItem(cpy_r_r18, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 288, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r50 = CPyDef_main____0xstring(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 288, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r51 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r52 = CPyStatics[32]; /* 'address' */
    cpy_r_r53 = CPyStatics[32]; /* 'address' */
    cpy_r_r54 = PyObject_GetItem(cpy_r_r18, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 290, CPyStatic_main___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r55[1] = {cpy_r_r54};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r56, 1, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 290, CPyStatic_main___globals);
        goto CPyL53;
    }
    CPy_DECREF(cpy_r_r54);
    cpy_r_r58 = Py_None;
    cpy_r_r59 = 0 ? Py_True : Py_False;
    cpy_r_r60 = CPyDict_Build(5, cpy_r_r45, cpy_r_r58, cpy_r_r46, cpy_r_r19, cpy_r_r47, cpy_r_r50, cpy_r_r51, cpy_r_r59, cpy_r_r52, cpy_r_r57);
    CPy_DECREF_NO_IMM(cpy_r_r19);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 285, CPyStatic_main___globals);
        goto CPyL44;
    }
    cpy_r_r61 = CPyDef_main____append_additional_log_data(cpy_r_r18, cpy_r_r60);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 292, CPyStatic_main___globals);
        goto CPyL54;
    }
    cpy_r_r62 = PyList_Append(cpy_r_r0, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 293, CPyStatic_main___globals);
        goto CPyL50;
    }
CPyL37: ;
    cpy_r_r64 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r64;
    goto CPyL11;
CPyL38: ;
    return cpy_r_r0;
CPyL39: ;
    cpy_r_r65 = NULL;
    return cpy_r_r65;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL39;
CPyL43: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    goto CPyL39;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL39;
CPyL46: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL18;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r22);
    goto CPyL39;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL39;
CPyL49: ;
    CPy_DECREF_NO_IMM(cpy_r_r19);
    goto CPyL23;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL39;
CPyL51: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF_NO_IMM(cpy_r_r19);
    goto CPyL26;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r50);
    goto CPyL39;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r54);
    goto CPyL39;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r60);
    goto CPyL39;
}

PyObject *CPyPy_main___decode_logs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"logs", "topic_map", "allow_undecoded", 0};
    static CPyArg_Parser parser = {"OO|O:decode_logs", kwlist, 0};
    PyObject *obj_logs;
    PyObject *obj_topic_map;
    PyObject *obj_allow_undecoded = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_logs, &obj_topic_map, &obj_allow_undecoded)) {
        return NULL;
    }
    PyObject *arg_logs;
    if (likely(PyList_Check(obj_logs)))
        arg_logs = obj_logs;
    else {
        CPy_TypeError("list", obj_logs); 
        goto fail;
    }
    PyObject *arg_topic_map = obj_topic_map;
    char arg_allow_undecoded;
    if (obj_allow_undecoded == NULL) {
        arg_allow_undecoded = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_undecoded))) {
        CPy_TypeError("bool", obj_allow_undecoded); goto fail;
    } else
        arg_allow_undecoded = obj_allow_undecoded == Py_True;
    PyObject *retval = CPyDef_main___decode_logs(arg_logs, arg_topic_map, arg_allow_undecoded);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "decode_logs", 238, CPyStatic_main___globals);
    return NULL;
}

char CPyDef_main____append_additional_log_data(PyObject *cpy_r_log, PyObject *cpy_r_event) {
    tuple_T3OOO cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = CPyStatic_main___ADD_LOG_ENTRIES;
    if (likely(cpy_r_r0.f0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"ADD_LOG_ENTRIES\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 299, CPyStatic_main___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_r0.f0);
    CPy_INCREF(cpy_r_r0.f1);
    CPy_INCREF(cpy_r_r0.f2);
    cpy_r_r2 = PyTuple_New(3);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp5);
    PyObject *__tmp6 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp6);
    PyObject *__tmp7 = cpy_r_r0.f2;
    PyTuple_SET_ITEM(cpy_r_r2, 2, __tmp7);
    cpy_r_r3 = PyObject_GetIter(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 299, CPyStatic_main___globals);
        goto CPyL12;
    }
CPyL4: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL13;
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_append_additional_log_data", 299, CPyStatic_main___globals, "str", cpy_r_r4);
        goto CPyL14;
    }
    cpy_r_r6 = PySequence_Contains(cpy_r_log, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 300, CPyStatic_main___globals);
        goto CPyL15;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL16;
    cpy_r_r9 = PyObject_GetItem(cpy_r_log, cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 301, CPyStatic_main___globals);
        goto CPyL15;
    }
    cpy_r_r10 = CPyDict_SetItem(cpy_r_event, cpy_r_r5, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 301, CPyStatic_main___globals);
        goto CPyL14;
    } else
        goto CPyL4;
CPyL10: ;
    cpy_r_r12 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 299, CPyStatic_main___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL13: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL16: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL4;
}

PyObject *CPyPy_main____append_additional_log_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"log", "event", 0};
    static CPyArg_Parser parser = {"OO:_append_additional_log_data", kwlist, 0};
    PyObject *obj_log;
    PyObject *obj_event;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_log, &obj_event)) {
        return NULL;
    }
    PyObject *arg_log = obj_log;
    PyObject *arg_event;
    if (likely(PyDict_Check(obj_event)))
        arg_event = obj_event;
    else {
        CPy_TypeError("dict", obj_event); 
        goto fail;
    }
    char retval = CPyDef_main____append_additional_log_data(arg_log, arg_event);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 298, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main___decode_traceTransaction(PyObject *cpy_r_struct_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded, PyObject *cpy_r_initial_address) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_address_list;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_last_step;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_i;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    int64_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    int64_t cpy_r_r73;
    CPyPtr cpy_r_r74;
    CPyPtr cpy_r_r75;
    int64_t cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyTagged cpy_r_r85;
    int64_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject **cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_address;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject **cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyTagged cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    CPyTagged cpy_r_r132;
    int64_t cpy_r_r133;
    char cpy_r_r134;
    int64_t cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject **cpy_r_r154;
    PyObject *cpy_r_r155;
    CPyTagged cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject **cpy_r_r161;
    PyObject *cpy_r_r162;
    CPyTagged cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    CPyTagged cpy_r_r166;
    CPyTagged cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    CPyPtr cpy_r_r174;
    int64_t cpy_r_r175;
    PyObject *cpy_r_r176;
    CPyTagged cpy_r_r177;
    CPyPtr cpy_r_r178;
    int64_t cpy_r_r179;
    CPyTagged cpy_r_r180;
    char cpy_r_r181;
    int64_t cpy_r_r182;
    CPyPtr cpy_r_r183;
    CPyPtr cpy_r_r184;
    int64_t cpy_r_r185;
    CPyPtr cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    CPyTagged cpy_r_r190;
    tuple_T3OOO cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject **cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    tuple_T2OO cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject **cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    PyObject **cpy_r_r228;
    PyObject *cpy_r_r229;
    CPyTagged cpy_r_r230;
    CPyTagged cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject **cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    tuple_T3OOO cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    tuple_T2OO cpy_r_r250;
    PyObject *cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject **cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    char cpy_r_r260;
    CPyPtr cpy_r_r261;
    int64_t cpy_r_r262;
    CPyTagged cpy_r_r263;
    char cpy_r_r264;
    PyObject *cpy_r_r265;
    int32_t cpy_r_r266;
    char cpy_r_r267;
    char cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject **cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    int32_t cpy_r_r285;
    char cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    CPyPtr cpy_r_r291;
    int64_t cpy_r_r292;
    CPyTagged cpy_r_r293;
    char cpy_r_r294;
    char cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    int32_t cpy_r_r312;
    char cpy_r_r313;
    CPyTagged cpy_r_r314;
    PyObject *cpy_r_r315;
    if (cpy_r_allow_undecoded != 2) goto CPyL2;
    cpy_r_allow_undecoded = 0;
CPyL2: ;
    if (cpy_r_initial_address != NULL) goto CPyL191;
    cpy_r_r0 = Py_None;
    cpy_r_initial_address = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyStatic_main___to_checksum_address;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL192;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 343, CPyStatic_main___globals);
        goto CPyL190;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r3 = CPyStatic_main___lru_cache;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL193;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"lru_cache\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 343, CPyStatic_main___globals);
        goto CPyL190;
    }
    CPy_Unreachable();
CPyL10: ;
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 1, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 343, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 345, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_initial_address != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL17;
    CPy_INCREF(cpy_r_initial_address);
    if (likely(cpy_r_initial_address != Py_None))
        cpy_r_r11 = cpy_r_initial_address;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 347, CPyStatic_main___globals, "str", cpy_r_initial_address);
        goto CPyL196;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_r11};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r13, 1, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 347, CPyStatic_main___globals);
        goto CPyL197;
    }
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = PyList_New(1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 347, CPyStatic_main___globals);
        goto CPyL198;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    *(PyObject * *)cpy_r_r17 = cpy_r_r14;
    cpy_r_address_list = cpy_r_r15;
    goto CPyL19;
CPyL17: ;
    cpy_r_r18 = PyList_New(1);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 349, CPyStatic_main___globals);
        goto CPyL196;
    }
    cpy_r_r19 = Py_None;
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    *(PyObject * *)cpy_r_r21 = cpy_r_r19;
    cpy_r_address_list = cpy_r_r18;
CPyL19: ;
    cpy_r_r22 = CPyList_GetItemShort(cpy_r_struct_logs, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 351, CPyStatic_main___globals);
        goto CPyL199;
    }
    if (likely(PyDict_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 351, CPyStatic_main___globals, "dict", cpy_r_r22);
        goto CPyL199;
    }
    cpy_r_last_step = cpy_r_r23;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_struct_logs)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = 2;
    cpy_r_i = cpy_r_r27;
CPyL22: ;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r27 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r28) goto CPyL200;
    cpy_r_r29 = CPyList_GetItem(cpy_r_struct_logs, cpy_r_i);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 353, CPyStatic_main___globals);
        goto CPyL201;
    }
    if (likely(PyDict_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 353, CPyStatic_main___globals, "dict", cpy_r_r29);
        goto CPyL201;
    }
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_initial_address != cpy_r_r31;
    if (!cpy_r_r32) goto CPyL202;
    cpy_r_r33 = CPyStatics[35]; /* 'depth' */
    cpy_r_r34 = CPyDict_GetItem(cpy_r_r30, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 355, CPyStatic_main___globals);
        goto CPyL203;
    }
    if (likely(PyLong_Check(cpy_r_r34)))
        cpy_r_r35 = CPyTagged_FromObject(cpy_r_r34);
    else {
        CPy_TypeError("int", cpy_r_r34); cpy_r_r35 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 355, CPyStatic_main___globals);
        goto CPyL203;
    }
    cpy_r_r36 = CPyStatics[35]; /* 'depth' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 355, CPyStatic_main___globals);
        goto CPyL204;
    }
    if (likely(PyLong_Check(cpy_r_r37)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_r37);
    else {
        CPy_TypeError("int", cpy_r_r37); cpy_r_r38 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 355, CPyStatic_main___globals);
        goto CPyL204;
    }
    cpy_r_r39 = cpy_r_r35 & 1;
    cpy_r_r40 = cpy_r_r39 != 0;
    if (cpy_r_r40) goto CPyL32;
    cpy_r_r41 = cpy_r_r38 & 1;
    cpy_r_r42 = cpy_r_r41 != 0;
    if (!cpy_r_r42) goto CPyL33;
CPyL32: ;
    cpy_r_r43 = CPyTagged_IsLt_(cpy_r_r38, cpy_r_r35);
    cpy_r_r44 = cpy_r_r43;
    goto CPyL34;
CPyL33: ;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r35 > (Py_ssize_t)cpy_r_r38;
    cpy_r_r44 = cpy_r_r45;
CPyL34: ;
    CPyTagged_DECREF(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r38);
    if (!cpy_r_r44) goto CPyL205;
    cpy_r_r46 = CPyStatics[36]; /* 'op' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 356, CPyStatic_main___globals);
        goto CPyL203;
    }
    if (likely(PyUnicode_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 356, CPyStatic_main___globals, "str", cpy_r_r47);
        goto CPyL203;
    }
    cpy_r_r49 = CPyStatics[37]; /* 'CREATE' */
    cpy_r_r50 = PyUnicode_Compare(cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r51 = cpy_r_r50 == -1;
    if (!cpy_r_r51) goto CPyL40;
    cpy_r_r52 = PyErr_Occurred();
    cpy_r_r53 = cpy_r_r52 != NULL;
    if (!cpy_r_r53) goto CPyL40;
    cpy_r_r54 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", -1, CPyStatic_main___globals);
        goto CPyL203;
    }
CPyL40: ;
    cpy_r_r55 = cpy_r_r50 == 0;
    if (!cpy_r_r55) goto CPyL42;
    if (cpy_r_r55) {
        goto CPyL48;
    } else
        goto CPyL206;
CPyL42: ;
    cpy_r_r56 = CPyStatics[36]; /* 'op' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 356, CPyStatic_main___globals);
        goto CPyL203;
    }
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 356, CPyStatic_main___globals, "str", cpy_r_r57);
        goto CPyL203;
    }
    cpy_r_r59 = CPyStatics[38]; /* 'CREATE2' */
    cpy_r_r60 = PyUnicode_Compare(cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r61 = cpy_r_r60 == -1;
    if (!cpy_r_r61) goto CPyL47;
    cpy_r_r62 = PyErr_Occurred();
    cpy_r_r63 = cpy_r_r62 != NULL;
    if (!cpy_r_r63) goto CPyL47;
    cpy_r_r64 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", -1, CPyStatic_main___globals);
        goto CPyL203;
    }
CPyL47: ;
    cpy_r_r65 = cpy_r_r60 == 0;
    if (!cpy_r_r65) goto CPyL206;
CPyL48: ;
    cpy_r_r66 = CPyList_GetSlice(cpy_r_struct_logs, cpy_r_i, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals);
        goto CPyL207;
    }
    if (likely(PyList_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals, "list", cpy_r_r66);
        goto CPyL207;
    }
    cpy_r_r68 = 0;
CPyL51: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_r67)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL208;
    cpy_r_r73 = (Py_ssize_t)cpy_r_r68 >> 1;
    cpy_r_r74 = (CPyPtr)&((PyListObject *)cpy_r_r67)->ob_item;
    cpy_r_r75 = *(CPyPtr *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r73 * 8;
    cpy_r_r77 = cpy_r_r75 + cpy_r_r76;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    CPy_INCREF(cpy_r_r78);
    if (likely(PyDict_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals, "dict", cpy_r_r78);
        goto CPyL209;
    }
    cpy_r_r80 = CPyStatics[35]; /* 'depth' */
    cpy_r_r81 = CPyDict_GetItem(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals);
        goto CPyL210;
    }
    if (likely(PyLong_Check(cpy_r_r81)))
        cpy_r_r82 = CPyTagged_FromObject(cpy_r_r81);
    else {
        CPy_TypeError("int", cpy_r_r81); cpy_r_r82 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r83 = CPyStatics[35]; /* 'depth' */
    cpy_r_r84 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals);
        goto CPyL211;
    }
    if (likely(PyLong_Check(cpy_r_r84)))
        cpy_r_r85 = CPyTagged_FromObject(cpy_r_r84);
    else {
        CPy_TypeError("int", cpy_r_r84); cpy_r_r85 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r86 = cpy_r_r82 & 1;
    cpy_r_r87 = cpy_r_r86 != 0;
    if (!cpy_r_r87) goto CPyL59;
    cpy_r_r88 = CPyTagged_IsEq_(cpy_r_r82, cpy_r_r85);
    cpy_r_r89 = cpy_r_r88;
    goto CPyL60;
CPyL59: ;
    cpy_r_r90 = cpy_r_r82 == cpy_r_r85;
    cpy_r_r89 = cpy_r_r90;
CPyL60: ;
    CPyTagged_DECREF(cpy_r_r82);
    CPyTagged_DECREF(cpy_r_r85);
    if (cpy_r_r89) {
        goto CPyL212;
    } else
        goto CPyL213;
CPyL61: ;
    goto CPyL65;
CPyL62: ;
    cpy_r_r91 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r91;
    goto CPyL51;
CPyL63: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r92 = 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals);
        goto CPyL190;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r93 = CPyStatics[39]; /* '0x' */
    cpy_r_r94 = CPyStatics[40]; /* 'stack' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r79, cpy_r_r94);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL214;
    }
    if (likely(PyList_Check(cpy_r_r95)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals, "list", cpy_r_r95);
        goto CPyL214;
    }
    cpy_r_r97 = CPyList_GetItemShort(cpy_r_r96, -2);
    CPy_DECREF_NO_IMM(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL214;
    }
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r100 = CPyStatics[125]; /* -40 */
    cpy_r_r101 = PySlice_New(cpy_r_r100, cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL215;
    }
    cpy_r_r102 = PyObject_GetItem(cpy_r_r97, cpy_r_r101);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL214;
    }
    if (likely(PyUnicode_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals, "str", cpy_r_r102);
        goto CPyL214;
    }
    cpy_r_r104 = CPyStr_Build(2, cpy_r_r93, cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL214;
    }
    PyObject *cpy_r_r105[1] = {cpy_r_r104};
    cpy_r_r106 = (PyObject **)&cpy_r_r105;
    cpy_r_r107 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r106, 1, 0);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL216;
    }
    CPy_DECREF(cpy_r_r104);
    cpy_r_address = cpy_r_r107;
    cpy_r_r108 = PyList_Append(cpy_r_address_list, cpy_r_address);
    CPy_DECREF(cpy_r_address);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 359, CPyStatic_main___globals);
        goto CPyL214;
    } else
        goto CPyL93;
CPyL74: ;
    cpy_r_r110 = CPyStatics[39]; /* '0x' */
    cpy_r_r111 = CPyStatics[40]; /* 'stack' */
    cpy_r_r112 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r111);
    CPy_DECREF(cpy_r_last_step);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 361, CPyStatic_main___globals);
        goto CPyL214;
    }
    if (likely(PyList_Check(cpy_r_r112)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 361, CPyStatic_main___globals, "list", cpy_r_r112);
        goto CPyL214;
    }
    cpy_r_r114 = CPyList_GetItemShort(cpy_r_r113, -4);
    CPy_DECREF_NO_IMM(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 361, CPyStatic_main___globals);
        goto CPyL214;
    }
    cpy_r_r115 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r116 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r117 = CPyStatics[125]; /* -40 */
    cpy_r_r118 = PySlice_New(cpy_r_r117, cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 361, CPyStatic_main___globals);
        goto CPyL217;
    }
    cpy_r_r119 = PyObject_GetItem(cpy_r_r114, cpy_r_r118);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 361, CPyStatic_main___globals);
        goto CPyL214;
    }
    if (likely(PyUnicode_Check(cpy_r_r119)))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 361, CPyStatic_main___globals, "str", cpy_r_r119);
        goto CPyL214;
    }
    cpy_r_r121 = CPyStr_Build(2, cpy_r_r110, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 361, CPyStatic_main___globals);
        goto CPyL214;
    }
    PyObject *cpy_r_r122[1] = {cpy_r_r121};
    cpy_r_r123 = (PyObject **)&cpy_r_r122;
    cpy_r_r124 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r123, 1, 0);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 361, CPyStatic_main___globals);
        goto CPyL218;
    }
    CPy_DECREF(cpy_r_r121);
    cpy_r_address = cpy_r_r124;
    cpy_r_r125 = PyList_Append(cpy_r_address_list, cpy_r_address);
    CPy_DECREF(cpy_r_address);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 362, CPyStatic_main___globals);
        goto CPyL214;
    } else
        goto CPyL93;
CPyL83: ;
    cpy_r_r127 = CPyStatics[35]; /* 'depth' */
    cpy_r_r128 = CPyDict_GetItem(cpy_r_r30, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 364, CPyStatic_main___globals);
        goto CPyL207;
    }
    if (likely(PyLong_Check(cpy_r_r128)))
        cpy_r_r129 = CPyTagged_FromObject(cpy_r_r128);
    else {
        CPy_TypeError("int", cpy_r_r128); cpy_r_r129 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 364, CPyStatic_main___globals);
        goto CPyL207;
    }
    cpy_r_r130 = CPyStatics[35]; /* 'depth' */
    cpy_r_r131 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r130);
    CPy_DECREF(cpy_r_last_step);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 364, CPyStatic_main___globals);
        goto CPyL219;
    }
    if (likely(PyLong_Check(cpy_r_r131)))
        cpy_r_r132 = CPyTagged_FromObject(cpy_r_r131);
    else {
        CPy_TypeError("int", cpy_r_r131); cpy_r_r132 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 364, CPyStatic_main___globals);
        goto CPyL219;
    }
    cpy_r_r133 = cpy_r_r129 & 1;
    cpy_r_r134 = cpy_r_r133 != 0;
    if (cpy_r_r134) goto CPyL89;
    cpy_r_r135 = cpy_r_r132 & 1;
    cpy_r_r136 = cpy_r_r135 != 0;
    if (!cpy_r_r136) goto CPyL90;
CPyL89: ;
    cpy_r_r137 = CPyTagged_IsLt_(cpy_r_r129, cpy_r_r132);
    cpy_r_r138 = cpy_r_r137;
    goto CPyL91;
CPyL90: ;
    cpy_r_r139 = (Py_ssize_t)cpy_r_r129 < (Py_ssize_t)cpy_r_r132;
    cpy_r_r138 = cpy_r_r139;
CPyL91: ;
    CPyTagged_DECREF(cpy_r_r129);
    CPyTagged_DECREF(cpy_r_r132);
    if (!cpy_r_r138) goto CPyL93;
    cpy_r_r140 = CPyList_PopLast(cpy_r_address_list);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 365, CPyStatic_main___globals);
        goto CPyL214;
    } else
        goto CPyL220;
CPyL93: ;
    CPy_INCREF(cpy_r_r30);
    cpy_r_last_step = cpy_r_r30;
    cpy_r_r141 = CPyStatics[36]; /* 'op' */
    cpy_r_r142 = CPyDict_GetItem(cpy_r_r30, cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 368, CPyStatic_main___globals);
        goto CPyL207;
    }
    if (likely(PyUnicode_Check(cpy_r_r142)))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 368, CPyStatic_main___globals, "str", cpy_r_r142);
        goto CPyL207;
    }
    cpy_r_r144 = CPyStatics[41]; /* 'LOG' */
    cpy_r_r145 = CPyStr_Startswith(cpy_r_r143, cpy_r_r144);
    cpy_r_r146 = cpy_r_r145;
    if (!cpy_r_r146) goto CPyL221;
    cpy_r_r147 = CPyStatics[40]; /* 'stack' */
    cpy_r_r148 = CPyDict_GetItem(cpy_r_r30, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 373, CPyStatic_main___globals);
        goto CPyL222;
    }
    if (likely(PyList_Check(cpy_r_r148)))
        cpy_r_r149 = cpy_r_r148;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 373, CPyStatic_main___globals, "list", cpy_r_r148);
        goto CPyL222;
    }
    cpy_r_r150 = CPyList_GetItemShort(cpy_r_r149, -2);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL223;
    }
    cpy_r_r151 = (PyObject *)&PyLong_Type;
    cpy_r_r152 = CPyStatics[126]; /* 16 */
    PyObject *cpy_r_r153[2] = {cpy_r_r150, cpy_r_r152};
    cpy_r_r154 = (PyObject **)&cpy_r_r153;
    cpy_r_r155 = PyObject_Vectorcall(cpy_r_r151, cpy_r_r154, 2, 0);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL224;
    }
    CPy_DECREF(cpy_r_r150);
    if (likely(PyLong_Check(cpy_r_r155)))
        cpy_r_r156 = CPyTagged_FromObject(cpy_r_r155);
    else {
        CPy_TypeError("int", cpy_r_r155); cpy_r_r156 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r156 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL223;
    }
    cpy_r_r157 = CPyList_GetItemShort(cpy_r_r149, -4);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 375, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r158 = (PyObject *)&PyLong_Type;
    cpy_r_r159 = CPyStatics[126]; /* 16 */
    PyObject *cpy_r_r160[2] = {cpy_r_r157, cpy_r_r159};
    cpy_r_r161 = (PyObject **)&cpy_r_r160;
    cpy_r_r162 = PyObject_Vectorcall(cpy_r_r158, cpy_r_r161, 2, 0);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 375, CPyStatic_main___globals);
        goto CPyL226;
    }
    CPy_DECREF(cpy_r_r157);
    if (likely(PyLong_Check(cpy_r_r162)))
        cpy_r_r163 = CPyTagged_FromObject(cpy_r_r162);
    else {
        CPy_TypeError("int", cpy_r_r162); cpy_r_r163 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r162);
    if (unlikely(cpy_r_r163 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 375, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r164 = CPyStr_GetItem(cpy_r_r143, -2);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 376, CPyStatic_main___globals);
        goto CPyL227;
    }
    cpy_r_r165 = CPyLong_FromStr(cpy_r_r164);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 376, CPyStatic_main___globals);
        goto CPyL227;
    }
    if (likely(PyLong_Check(cpy_r_r165)))
        cpy_r_r166 = CPyTagged_FromObject(cpy_r_r165);
    else {
        CPy_TypeError("int", cpy_r_r165); cpy_r_r166 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r165);
    if (unlikely(cpy_r_r166 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 376, CPyStatic_main___globals);
        goto CPyL227;
    }
    cpy_r_r167 = CPyTagged_Subtract(-6, cpy_r_r166);
    CPyTagged_DECREF(cpy_r_r166);
    cpy_r_r168 = CPyStatics[127]; /* -3 */
    cpy_r_r169 = CPyTagged_StealAsObject(cpy_r_r167);
    cpy_r_r170 = CPyStatics[128]; /* -1 */
    cpy_r_r171 = PySlice_New(cpy_r_r168, cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals);
        goto CPyL227;
    }
    cpy_r_r172 = PyObject_GetItem(cpy_r_r149, cpy_r_r171);
    CPy_DECREF_NO_IMM(cpy_r_r149);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals);
        goto CPyL228;
    }
    if (likely(PyList_Check(cpy_r_r172)))
        cpy_r_r173 = cpy_r_r172;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals, "list", cpy_r_r172);
        goto CPyL228;
    }
    cpy_r_r174 = (CPyPtr)&((PyVarObject *)cpy_r_r173)->ob_size;
    cpy_r_r175 = *(int64_t *)cpy_r_r174;
    cpy_r_r176 = PyList_New(cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals);
        goto CPyL229;
    }
    cpy_r_r177 = 0;
CPyL112: ;
    cpy_r_r178 = (CPyPtr)&((PyVarObject *)cpy_r_r173)->ob_size;
    cpy_r_r179 = *(int64_t *)cpy_r_r178;
    cpy_r_r180 = cpy_r_r179 << 1;
    cpy_r_r181 = (Py_ssize_t)cpy_r_r177 < (Py_ssize_t)cpy_r_r180;
    if (!cpy_r_r181) goto CPyL230;
    cpy_r_r182 = (Py_ssize_t)cpy_r_r177 >> 1;
    cpy_r_r183 = (CPyPtr)&((PyListObject *)cpy_r_r173)->ob_item;
    cpy_r_r184 = *(CPyPtr *)cpy_r_r183;
    cpy_r_r185 = cpy_r_r182 * 8;
    cpy_r_r186 = cpy_r_r184 + cpy_r_r185;
    cpy_r_r187 = *(PyObject * *)cpy_r_r186;
    CPy_INCREF(cpy_r_r187);
    cpy_r_r188 = CPyDef_main____0xstring(cpy_r_r187);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r189 = CPyList_SetItemUnsafe(cpy_r_r176, cpy_r_r177, cpy_r_r188);
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r190 = cpy_r_r177 + 2;
    cpy_r_r177 = cpy_r_r190;
    goto CPyL112;
CPyL116: ;
    goto CPyL134;
CPyL117: ;
    cpy_r_r191 = CPy_CatchError();
    cpy_r_r192 = CPyModule_builtins;
    cpy_r_r193 = CPyStatics[25]; /* 'KeyError' */
    cpy_r_r194 = CPyObject_GetAttr(cpy_r_r192, cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 378, CPyStatic_main___globals);
        goto CPyL132;
    }
    cpy_r_r195 = CPy_ExceptionMatches(cpy_r_r194);
    CPy_DecRef(cpy_r_r194);
    if (!cpy_r_r195) goto CPyL123;
    cpy_r_r196 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r196;
    CPy_DecRef(cpy_r_e);
    cpy_r_r197 = CPyStatics[42]; /* 'StructLog has no stack' */
    cpy_r_r198 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r199[1] = {cpy_r_r197};
    cpy_r_r200 = (PyObject **)&cpy_r_r199;
    cpy_r_r201 = PyObject_Vectorcall(cpy_r_r198, cpy_r_r200, 1, 0);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 379, CPyStatic_main___globals);
        goto CPyL132;
    }
    if (likely(Py_TYPE(cpy_r_r201) == CPyType_main___StructLogError))
        cpy_r_r202 = cpy_r_r201;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 379, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r201);
        goto CPyL132;
    }
    CPy_Raise(cpy_r_r202);
    CPy_DecRef(cpy_r_r202);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 379, CPyStatic_main___globals);
        goto CPyL132;
    } else
        goto CPyL232;
CPyL122: ;
    CPy_Unreachable();
CPyL123: ;
    cpy_r_r203 = CPyModule_builtins;
    cpy_r_r204 = CPyStatics[43]; /* 'IndexError' */
    cpy_r_r205 = CPyObject_GetAttr(cpy_r_r203, cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 380, CPyStatic_main___globals);
        goto CPyL132;
    }
    cpy_r_r206 = CPyModule_builtins;
    cpy_r_r207 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r208 = CPyObject_GetAttr(cpy_r_r206, cpy_r_r207);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 380, CPyStatic_main___globals);
        goto CPyL233;
    }
    cpy_r_r209.f0 = cpy_r_r205;
    cpy_r_r209.f1 = cpy_r_r208;
    cpy_r_r210 = PyTuple_New(2);
    if (unlikely(cpy_r_r210 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8 = cpy_r_r209.f0;
    PyTuple_SET_ITEM(cpy_r_r210, 0, __tmp8);
    PyObject *__tmp9 = cpy_r_r209.f1;
    PyTuple_SET_ITEM(cpy_r_r210, 1, __tmp9);
    cpy_r_r211 = CPy_ExceptionMatches(cpy_r_r210);
    CPy_DecRef(cpy_r_r210);
    if (!cpy_r_r211) goto CPyL130;
    cpy_r_r212 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r212;
    CPy_DecRef(cpy_r_e);
    cpy_r_r213 = CPyStatics[44]; /* 'Malformed stack' */
    cpy_r_r214 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r215[1] = {cpy_r_r213};
    cpy_r_r216 = (PyObject **)&cpy_r_r215;
    cpy_r_r217 = PyObject_Vectorcall(cpy_r_r214, cpy_r_r216, 1, 0);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 381, CPyStatic_main___globals);
        goto CPyL132;
    }
    if (likely(Py_TYPE(cpy_r_r217) == CPyType_main___StructLogError))
        cpy_r_r218 = cpy_r_r217;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 381, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r217);
        goto CPyL132;
    }
    CPy_Raise(cpy_r_r218);
    CPy_DecRef(cpy_r_r218);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 381, CPyStatic_main___globals);
        goto CPyL132;
    } else
        goto CPyL234;
CPyL129: ;
    CPy_Unreachable();
CPyL130: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL132;
    } else
        goto CPyL235;
CPyL131: ;
    CPy_Unreachable();
CPyL132: ;
    CPy_RestoreExcInfo(cpy_r_r191);
    CPy_DecRef(cpy_r_r191.f0);
    CPy_DecRef(cpy_r_r191.f1);
    CPy_DecRef(cpy_r_r191.f2);
    cpy_r_r219 = CPy_KeepPropagating();
    if (!cpy_r_r219) goto CPyL190;
    CPy_Unreachable();
CPyL134: ;
    cpy_r_r220 = CPyStatics[45]; /* '' */
    cpy_r_r221 = CPyStatics[46]; /* 'memory' */
    cpy_r_r222 = CPyDict_GetItem(cpy_r_r30, cpy_r_r221);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals);
        goto CPyL236;
    }
    if (likely(PyList_Check(cpy_r_r222)))
        cpy_r_r223 = cpy_r_r222;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals, "list", cpy_r_r222);
        goto CPyL236;
    }
    cpy_r_r224 = PyUnicode_Join(cpy_r_r220, cpy_r_r223);
    CPy_DECREF_NO_IMM(cpy_r_r223);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals);
        goto CPyL236;
    }
    cpy_r_r225 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r225 == NULL)) {
        goto CPyL237;
    } else
        goto CPyL140;
CPyL138: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r226 = 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals);
        goto CPyL147;
    }
    CPy_Unreachable();
CPyL140: ;
    PyObject *cpy_r_r227[1] = {cpy_r_r224};
    cpy_r_r228 = (PyObject **)&cpy_r_r227;
    cpy_r_r229 = PyObject_Vectorcall(cpy_r_r225, cpy_r_r228, 1, 0);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals);
        goto CPyL238;
    }
    CPy_DECREF(cpy_r_r224);
    cpy_r_r230 = CPyTagged_Add(cpy_r_r156, cpy_r_r163);
    CPyTagged_DECREF(cpy_r_r230);
    cpy_r_r231 = CPyTagged_Add(cpy_r_r156, cpy_r_r163);
    CPyTagged_DECREF(cpy_r_r163);
    cpy_r_r232 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r233 = CPyTagged_StealAsObject(cpy_r_r156);
    cpy_r_r234 = CPyTagged_StealAsObject(cpy_r_r231);
    cpy_r_r235 = PySlice_New(cpy_r_r233, cpy_r_r234, cpy_r_r232);
    CPy_DECREF(cpy_r_r233);
    CPy_DECREF(cpy_r_r234);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals);
        goto CPyL239;
    }
    cpy_r_r236 = PyObject_GetItem(cpy_r_r229, cpy_r_r235);
    CPy_DECREF(cpy_r_r229);
    CPy_DECREF(cpy_r_r235);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals);
        goto CPyL240;
    }
    cpy_r_r237 = CPyStatics[47]; /* 'hex' */
    PyObject *cpy_r_r238[1] = {cpy_r_r236};
    cpy_r_r239 = (PyObject **)&cpy_r_r238;
    cpy_r_r240 = PyObject_VectorcallMethod(cpy_r_r237, cpy_r_r239, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals);
        goto CPyL241;
    }
    CPy_DECREF(cpy_r_r236);
    if (likely(PyUnicode_Check(cpy_r_r240)))
        cpy_r_r241 = cpy_r_r240;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals, "str", cpy_r_r240);
        goto CPyL240;
    }
    cpy_r_r242 = CPyDef_main____0xstring(cpy_r_r241);
    CPy_DECREF(cpy_r_r241);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals);
        goto CPyL240;
    }
    goto CPyL158;
CPyL147: ;
    cpy_r_r243 = CPy_CatchError();
    cpy_r_r244 = CPyModule_builtins;
    cpy_r_r245 = CPyStatics[25]; /* 'KeyError' */
    cpy_r_r246 = CPyObject_GetAttr(cpy_r_r244, cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 385, CPyStatic_main___globals);
        goto CPyL156;
    }
    cpy_r_r247 = CPyModule_builtins;
    cpy_r_r248 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r249 = CPyObject_GetAttr(cpy_r_r247, cpy_r_r248);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 385, CPyStatic_main___globals);
        goto CPyL242;
    }
    cpy_r_r250.f0 = cpy_r_r246;
    cpy_r_r250.f1 = cpy_r_r249;
    cpy_r_r251 = PyTuple_New(2);
    if (unlikely(cpy_r_r251 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10 = cpy_r_r250.f0;
    PyTuple_SET_ITEM(cpy_r_r251, 0, __tmp10);
    PyObject *__tmp11 = cpy_r_r250.f1;
    PyTuple_SET_ITEM(cpy_r_r251, 1, __tmp11);
    cpy_r_r252 = CPy_ExceptionMatches(cpy_r_r251);
    CPy_DecRef(cpy_r_r251);
    if (!cpy_r_r252) goto CPyL154;
    cpy_r_r253 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r253;
    CPy_DecRef(cpy_r_e);
    cpy_r_r254 = CPyStatics[48]; /* 'Malformed memory' */
    cpy_r_r255 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r256[1] = {cpy_r_r254};
    cpy_r_r257 = (PyObject **)&cpy_r_r256;
    cpy_r_r258 = PyObject_Vectorcall(cpy_r_r255, cpy_r_r257, 1, 0);
    if (unlikely(cpy_r_r258 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 386, CPyStatic_main___globals);
        goto CPyL156;
    }
    if (likely(Py_TYPE(cpy_r_r258) == CPyType_main___StructLogError))
        cpy_r_r259 = cpy_r_r258;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 386, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r258);
        goto CPyL156;
    }
    CPy_Raise(cpy_r_r259);
    CPy_DecRef(cpy_r_r259);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 386, CPyStatic_main___globals);
        goto CPyL156;
    } else
        goto CPyL243;
CPyL153: ;
    CPy_Unreachable();
CPyL154: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL156;
    } else
        goto CPyL244;
CPyL155: ;
    CPy_Unreachable();
CPyL156: ;
    CPy_RestoreExcInfo(cpy_r_r243);
    CPy_DecRef(cpy_r_r243.f0);
    CPy_DecRef(cpy_r_r243.f1);
    CPy_DecRef(cpy_r_r243.f2);
    cpy_r_r260 = CPy_KeepPropagating();
    if (!cpy_r_r260) goto CPyL190;
    CPy_Unreachable();
CPyL158: ;
    cpy_r_r261 = (CPyPtr)&((PyVarObject *)cpy_r_r176)->ob_size;
    cpy_r_r262 = *(int64_t *)cpy_r_r261;
    cpy_r_r263 = cpy_r_r262 << 1;
    cpy_r_r264 = cpy_r_r263 != 0;
    if (!cpy_r_r264) goto CPyL162;
    cpy_r_r265 = CPyList_GetItemShort(cpy_r_r176, 0);
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 388, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r266 = PySequence_Contains(cpy_r_topic_map, cpy_r_r265);
    CPy_DECREF(cpy_r_r265);
    cpy_r_r267 = cpy_r_r266 >= 0;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 388, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r268 = cpy_r_r266;
    cpy_r_r269 = cpy_r_r268 ^ 1;
    if (!cpy_r_r269) goto CPyL170;
CPyL162: ;
    if (cpy_r_allow_undecoded) {
        goto CPyL167;
    } else
        goto CPyL246;
CPyL163: ;
    cpy_r_r270 = CPyStatics[34]; /* 'Log contains undecodable event' */
    cpy_r_r271 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r272[1] = {cpy_r_r270};
    cpy_r_r273 = (PyObject **)&cpy_r_r272;
    cpy_r_r274 = PyObject_Vectorcall(cpy_r_r271, cpy_r_r273, 1, 0);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 390, CPyStatic_main___globals);
        goto CPyL190;
    }
    if (likely(Py_TYPE(cpy_r_r274) == CPyType_main___UnknownEvent))
        cpy_r_r275 = cpy_r_r274;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 390, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r274);
        goto CPyL190;
    }
    CPy_Raise(cpy_r_r275);
    CPy_DECREF_NO_IMM(cpy_r_r275);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 390, CPyStatic_main___globals);
        goto CPyL190;
    }
    CPy_Unreachable();
CPyL167: ;
    cpy_r_r276 = CPyStatics[19]; /* 'name' */
    cpy_r_r277 = CPyStatics[27]; /* 'topics' */
    cpy_r_r278 = CPyStatics[30]; /* 'data' */
    cpy_r_r279 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r280 = CPyStatics[32]; /* 'address' */
    cpy_r_r281 = CPyList_GetItemShort(cpy_r_address_list, -2);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 396, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r282 = Py_None;
    cpy_r_r283 = 0 ? Py_True : Py_False;
    cpy_r_r284 = CPyDict_Build(5, cpy_r_r276, cpy_r_r282, cpy_r_r277, cpy_r_r176, cpy_r_r278, cpy_r_r242, cpy_r_r279, cpy_r_r283, cpy_r_r280, cpy_r_r281);
    CPy_DECREF_NO_IMM(cpy_r_r176);
    CPy_DECREF(cpy_r_r242);
    CPy_DECREF(cpy_r_r281);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 391, CPyStatic_main___globals);
        goto CPyL247;
    }
    cpy_r_r285 = PyList_Append(cpy_r_r8, cpy_r_r284);
    CPy_DECREF(cpy_r_r284);
    cpy_r_r286 = cpy_r_r285 >= 0;
    if (unlikely(!cpy_r_r286)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 398, CPyStatic_main___globals);
        goto CPyL247;
    } else
        goto CPyL188;
CPyL170: ;
    cpy_r_r287 = PyObject_GetIter(cpy_r_r176);
    CPy_DECREF_NO_IMM(cpy_r_r176);
    if (unlikely(cpy_r_r287 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 400, CPyStatic_main___globals);
        goto CPyL248;
    }
    cpy_r_r288 = PyIter_Next(cpy_r_r287);
    if (cpy_r_r288 == NULL) {
        goto CPyL249;
    } else
        goto CPyL174;
CPyL172: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r289 = 0;
    if (unlikely(!cpy_r_r289)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 400, CPyStatic_main___globals);
        goto CPyL190;
    }
    CPy_Unreachable();
CPyL174: ;
    cpy_r_r290 = PySequence_List(cpy_r_r287);
    CPy_DECREF(cpy_r_r287);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 400, CPyStatic_main___globals);
        goto CPyL250;
    }
    cpy_r_r291 = (CPyPtr)&((PyVarObject *)cpy_r_r290)->ob_size;
    cpy_r_r292 = *(int64_t *)cpy_r_r291;
    cpy_r_r293 = cpy_r_r292 << 1;
    cpy_r_r294 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r293;
    if (cpy_r_r294) {
        goto CPyL178;
    } else
        goto CPyL251;
CPyL176: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r295 = 0;
    if (unlikely(!cpy_r_r295)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 400, CPyStatic_main___globals);
        goto CPyL190;
    }
    CPy_Unreachable();
CPyL178: ;
    cpy_r_r296 = PyObject_GetItem(cpy_r_topic_map, cpy_r_r288);
    CPy_DECREF(cpy_r_r288);
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 401, CPyStatic_main___globals);
        goto CPyL252;
    }
    if (likely(PyDict_Check(cpy_r_r296)))
        cpy_r_r297 = cpy_r_r296;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 401, CPyStatic_main___globals, "dict", cpy_r_r296);
        goto CPyL252;
    }
    cpy_r_r298 = CPyStatics[19]; /* 'name' */
    cpy_r_r299 = CPyStatics[19]; /* 'name' */
    cpy_r_r300 = CPyDict_GetItem(cpy_r_r297, cpy_r_r299);
    if (unlikely(cpy_r_r300 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 403, CPyStatic_main___globals);
        goto CPyL253;
    }
    if (likely(PyUnicode_Check(cpy_r_r300)))
        cpy_r_r301 = cpy_r_r300;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 403, CPyStatic_main___globals, "str", cpy_r_r300);
        goto CPyL253;
    }
    cpy_r_r302 = CPyStatics[30]; /* 'data' */
    cpy_r_r303 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r304 = CPyDict_GetItem(cpy_r_r297, cpy_r_r303);
    CPy_DECREF(cpy_r_r297);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 404, CPyStatic_main___globals);
        goto CPyL254;
    }
    if (likely(PyList_Check(cpy_r_r304)))
        cpy_r_r305 = cpy_r_r304;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 404, CPyStatic_main___globals, "list", cpy_r_r304);
        goto CPyL254;
    }
    cpy_r_r306 = CPyDef_main____decode(cpy_r_r305, cpy_r_r290, cpy_r_r242);
    CPy_DECREF_NO_IMM(cpy_r_r305);
    CPy_DECREF_NO_IMM(cpy_r_r290);
    CPy_DECREF(cpy_r_r242);
    if (unlikely(cpy_r_r306 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 404, CPyStatic_main___globals);
        goto CPyL255;
    }
    cpy_r_r307 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r308 = CPyStatics[32]; /* 'address' */
    cpy_r_r309 = CPyList_GetItemShort(cpy_r_address_list, -2);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 406, CPyStatic_main___globals);
        goto CPyL256;
    }
    cpy_r_r310 = 1 ? Py_True : Py_False;
    cpy_r_r311 = CPyDict_Build(4, cpy_r_r298, cpy_r_r301, cpy_r_r302, cpy_r_r306, cpy_r_r307, cpy_r_r310, cpy_r_r308, cpy_r_r309);
    CPy_DECREF(cpy_r_r301);
    CPy_DECREF_NO_IMM(cpy_r_r306);
    CPy_DECREF(cpy_r_r309);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 402, CPyStatic_main___globals);
        goto CPyL247;
    }
    cpy_r_r312 = PyList_Append(cpy_r_r8, cpy_r_r311);
    CPy_DECREF(cpy_r_r311);
    cpy_r_r313 = cpy_r_r312 >= 0;
    if (unlikely(!cpy_r_r313)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 408, CPyStatic_main___globals);
        goto CPyL247;
    }
CPyL188: ;
    cpy_r_r314 = cpy_r_r27 + 2;
    cpy_r_r27 = cpy_r_r314;
    cpy_r_i = cpy_r_r314;
    goto CPyL22;
CPyL189: ;
    return cpy_r_r8;
CPyL190: ;
    cpy_r_r315 = NULL;
    return cpy_r_r315;
CPyL191: ;
    CPy_INCREF(cpy_r_initial_address);
    goto CPyL4;
CPyL192: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL5;
CPyL193: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL8;
CPyL194: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL190;
CPyL195: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    goto CPyL190;
CPyL196: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL190;
CPyL197: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL190;
CPyL198: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    goto CPyL190;
CPyL199: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    goto CPyL190;
CPyL200: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL189;
CPyL201: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL190;
CPyL202: ;
    CPy_DECREF(cpy_r_last_step);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL93;
CPyL203: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r30);
    goto CPyL190;
CPyL204: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r35);
    goto CPyL190;
CPyL205: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL83;
CPyL206: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL74;
CPyL207: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    goto CPyL190;
CPyL208: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF_NO_IMM(cpy_r_r67);
    goto CPyL63;
CPyL209: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r67);
    goto CPyL190;
CPyL210: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r79);
    goto CPyL190;
CPyL211: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r79);
    CPyTagged_DecRef(cpy_r_r82);
    goto CPyL190;
CPyL212: ;
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF_NO_IMM(cpy_r_r67);
    goto CPyL61;
CPyL213: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL62;
CPyL214: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    goto CPyL190;
CPyL215: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r97);
    goto CPyL190;
CPyL216: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r104);
    goto CPyL190;
CPyL217: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r114);
    goto CPyL190;
CPyL218: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r121);
    goto CPyL190;
CPyL219: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r129);
    goto CPyL190;
CPyL220: ;
    CPy_DECREF(cpy_r_r140);
    goto CPyL93;
CPyL221: ;
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r143);
    goto CPyL188;
CPyL222: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r143);
    goto CPyL117;
CPyL223: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r149);
    goto CPyL117;
CPyL224: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r150);
    goto CPyL117;
CPyL225: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r149);
    CPyTagged_DecRef(cpy_r_r156);
    goto CPyL117;
CPyL226: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r149);
    CPyTagged_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r157);
    goto CPyL117;
CPyL227: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r149);
    CPyTagged_DecRef(cpy_r_r156);
    CPyTagged_DecRef(cpy_r_r163);
    goto CPyL117;
CPyL228: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r156);
    CPyTagged_DecRef(cpy_r_r163);
    goto CPyL117;
CPyL229: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r156);
    CPyTagged_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r173);
    goto CPyL117;
CPyL230: ;
    CPy_DECREF_NO_IMM(cpy_r_r173);
    goto CPyL116;
CPyL231: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r156);
    CPyTagged_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r176);
    goto CPyL117;
CPyL232: ;
    CPy_DecRef(cpy_r_r191.f0);
    CPy_DecRef(cpy_r_r191.f1);
    CPy_DecRef(cpy_r_r191.f2);
    goto CPyL122;
CPyL233: ;
    CPy_DecRef(cpy_r_r205);
    goto CPyL132;
CPyL234: ;
    CPy_DecRef(cpy_r_r191.f0);
    CPy_DecRef(cpy_r_r191.f1);
    CPy_DecRef(cpy_r_r191.f2);
    goto CPyL129;
CPyL235: ;
    CPy_DecRef(cpy_r_r191.f0);
    CPy_DecRef(cpy_r_r191.f1);
    CPy_DecRef(cpy_r_r191.f2);
    goto CPyL131;
CPyL236: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r156);
    CPyTagged_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r176);
    goto CPyL147;
CPyL237: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r156);
    CPyTagged_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r224);
    goto CPyL138;
CPyL238: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r156);
    CPyTagged_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r224);
    goto CPyL147;
CPyL239: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r229);
    goto CPyL147;
CPyL240: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r176);
    goto CPyL147;
CPyL241: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r236);
    goto CPyL147;
CPyL242: ;
    CPy_DecRef(cpy_r_r246);
    goto CPyL156;
CPyL243: ;
    CPy_DecRef(cpy_r_r243.f0);
    CPy_DecRef(cpy_r_r243.f1);
    CPy_DecRef(cpy_r_r243.f2);
    goto CPyL153;
CPyL244: ;
    CPy_DecRef(cpy_r_r243.f0);
    CPy_DecRef(cpy_r_r243.f1);
    CPy_DecRef(cpy_r_r243.f2);
    goto CPyL155;
CPyL245: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r242);
    goto CPyL190;
CPyL246: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF_NO_IMM(cpy_r_r176);
    CPy_DECREF(cpy_r_r242);
    goto CPyL163;
CPyL247: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    goto CPyL190;
CPyL248: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r242);
    goto CPyL190;
CPyL249: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r242);
    CPy_DECREF(cpy_r_r287);
    goto CPyL172;
CPyL250: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r242);
    CPy_DecRef(cpy_r_r288);
    goto CPyL190;
CPyL251: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r242);
    CPy_DECREF(cpy_r_r288);
    CPy_DECREF_NO_IMM(cpy_r_r290);
    goto CPyL176;
CPyL252: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r242);
    CPy_DecRef(cpy_r_r290);
    goto CPyL190;
CPyL253: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r242);
    CPy_DecRef(cpy_r_r290);
    CPy_DecRef(cpy_r_r297);
    goto CPyL190;
CPyL254: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r242);
    CPy_DecRef(cpy_r_r290);
    CPy_DecRef(cpy_r_r301);
    goto CPyL190;
CPyL255: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r301);
    goto CPyL190;
CPyL256: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r306);
    goto CPyL190;
}

PyObject *CPyPy_main___decode_traceTransaction(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"struct_logs", "topic_map", "allow_undecoded", "initial_address", 0};
    static CPyArg_Parser parser = {"OO|OO:decode_traceTransaction", kwlist, 0};
    PyObject *obj_struct_logs;
    PyObject *obj_topic_map;
    PyObject *obj_allow_undecoded = NULL;
    PyObject *obj_initial_address = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_struct_logs, &obj_topic_map, &obj_allow_undecoded, &obj_initial_address)) {
        return NULL;
    }
    PyObject *arg_struct_logs;
    if (likely(PyList_Check(obj_struct_logs)))
        arg_struct_logs = obj_struct_logs;
    else {
        CPy_TypeError("list", obj_struct_logs); 
        goto fail;
    }
    PyObject *arg_topic_map = obj_topic_map;
    char arg_allow_undecoded;
    if (obj_allow_undecoded == NULL) {
        arg_allow_undecoded = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_undecoded))) {
        CPy_TypeError("bool", obj_allow_undecoded); goto fail;
    } else
        arg_allow_undecoded = obj_allow_undecoded == Py_True;
    PyObject *arg_initial_address;
    if (obj_initial_address == NULL) {
        arg_initial_address = NULL;
        goto __LL12;
    }
    if (PyUnicode_Check(obj_initial_address))
        arg_initial_address = obj_initial_address;
    else {
        arg_initial_address = NULL;
    }
    if (arg_initial_address != NULL) goto __LL12;
    if (obj_initial_address == Py_None)
        arg_initial_address = obj_initial_address;
    else {
        arg_initial_address = NULL;
    }
    if (arg_initial_address != NULL) goto __LL12;
    CPy_TypeError("str or None", obj_initial_address); 
    goto fail;
__LL12: ;
    PyObject *retval = CPyDef_main___decode_traceTransaction(arg_struct_logs, arg_topic_map, arg_allow_undecoded, arg_initial_address);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 311, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main____0xstring(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = CPyStatics[39]; /* '0x' */
    cpy_r_r1 = CPyStatic_main___HexBytes;
    if (likely(cpy_r_r1 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 414, CPyStatic_main___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL3: ;
    PyObject *cpy_r_r3[1] = {cpy_r_value};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_Vectorcall(cpy_r_r1, cpy_r_r4, 1, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 414, CPyStatic_main___globals);
        goto CPyL8;
    }
    cpy_r_r6 = CPyStatics[47]; /* 'hex' */
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 414, CPyStatic_main___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_0xstring", 414, CPyStatic_main___globals, "str", cpy_r_r9);
        goto CPyL8;
    }
    cpy_r_r11 = CPyStr_Build(2, cpy_r_r0, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 414, CPyStatic_main___globals);
        goto CPyL8;
    }
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL9: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
}

PyObject *CPyPy_main____0xstring(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:_0xstring", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    PyObject *retval = CPyDef_main____0xstring(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "_0xstring", 413, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main____params(PyObject *cpy_r_abi_params) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    int64_t cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_tuple_match;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r__array;
    PyObject *cpy_r__size;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_tuple_type_tail;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    int64_t cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 418, CPyStatic_main___globals);
        goto CPyL37;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_abi_params)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL36;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r1 >> 1;
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_abi_params)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r6 * 8;
    cpy_r_r10 = cpy_r_r8 + cpy_r_r9;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    CPy_INCREF(cpy_r_r11);
    if (likely(PyDict_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 422, CPyStatic_main___globals, "dict", cpy_r_r11);
        goto CPyL38;
    }
    cpy_r_r13 = CPyStatics[23]; /* 'type' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 423, CPyStatic_main___globals);
        goto CPyL39;
    }
    cpy_r_r15 = CPyStatic_main____tuple_match;
    if (unlikely(cpy_r_r15 == NULL)) {
        goto CPyL40;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_tuple_match\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 424, CPyStatic_main___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL8: ;
    PyObject *cpy_r_r17[1] = {cpy_r_r14};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_Vectorcall(cpy_r_r15, cpy_r_r18, 1, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 424, CPyStatic_main___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r19);
    cpy_r_tuple_match = cpy_r_r19;
    cpy_r_r20 = PyObject_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 424, CPyStatic_main___globals);
        goto CPyL42;
    }
    cpy_r_r22 = cpy_r_r20;
    if (cpy_r_r22) {
        goto CPyL43;
    } else
        goto CPyL44;
CPyL11: ;
    cpy_r_r23 = cpy_r_tuple_match;
    cpy_r_r24 = CPyStatics[49]; /* 'group' */
    cpy_r_r25 = CPyStatics[129]; /* 1 */
    cpy_r_r26 = CPyStatics[130]; /* 2 */
    PyObject *cpy_r_r27[3] = {cpy_r_r23, cpy_r_r25, cpy_r_r26};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r24, cpy_r_r28, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 425, CPyStatic_main___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r23);
    if (likely(PyTuple_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 425, CPyStatic_main___globals, "tuple", cpy_r_r29);
        goto CPyL39;
    }
    cpy_r_r31 = CPySequence_CheckUnpackCount(cpy_r_r30, 2);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 425, CPyStatic_main___globals);
        goto CPyL46;
    }
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_r30, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 425, CPyStatic_main___globals);
        goto CPyL46;
    }
    cpy_r_r34 = CPySequenceTuple_GetItem(cpy_r_r30, 2);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 425, CPyStatic_main___globals);
        goto CPyL47;
    }
    cpy_r__array = cpy_r_r33;
    cpy_r__size = cpy_r_r34;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r__array != cpy_r_r35;
    CPy_DECREF(cpy_r__array);
    if (!cpy_r_r36) goto CPyL48;
    cpy_r_r37 = CPyStatics[50]; /* '[' */
    cpy_r_r38 = PyObject_Str(cpy_r__size);
    CPy_DECREF(cpy_r__size);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 426, CPyStatic_main___globals);
        goto CPyL39;
    }
    cpy_r_r39 = CPyStatics[51]; /* ']' */
    cpy_r_r40 = CPyStr_Build(3, cpy_r_r37, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 426, CPyStatic_main___globals);
        goto CPyL39;
    }
    cpy_r_r41 = cpy_r_r40;
    goto CPyL22;
CPyL21: ;
    cpy_r_r42 = CPyStatics[45]; /* '' */
    CPy_INCREF(cpy_r_r42);
    cpy_r_r41 = cpy_r_r42;
CPyL22: ;
    cpy_r_tuple_type_tail = cpy_r_r41;
    cpy_r_r43 = CPyStatics[20]; /* '(' */
    cpy_r_r44 = CPyStatics[21]; /* ',' */
    cpy_r_r45 = CPyStatics[52]; /* 'components' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r12, cpy_r_r45);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 427, CPyStatic_main___globals);
        goto CPyL49;
    }
    if (likely(PyList_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 427, CPyStatic_main___globals, "list", cpy_r_r46);
        goto CPyL49;
    }
    cpy_r_r48 = CPyDef_main____params(cpy_r_r47);
    CPy_DECREF_NO_IMM(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 427, CPyStatic_main___globals);
        goto CPyL49;
    }
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_r48)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = PyList_New(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 427, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r52 = 0;
CPyL27: ;
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_r48)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = (Py_ssize_t)cpy_r_r52 < (Py_ssize_t)cpy_r_r55;
    if (!cpy_r_r56) goto CPyL51;
    cpy_r_r57 = (Py_ssize_t)cpy_r_r52 >> 1;
    cpy_r_r58 = (CPyPtr)&((PyListObject *)cpy_r_r48)->ob_item;
    cpy_r_r59 = *(CPyPtr *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r57 * 8;
    cpy_r_r61 = cpy_r_r59 + cpy_r_r60;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    CPy_INCREF(cpy_r_r62);
    if (likely(PyUnicode_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 427, CPyStatic_main___globals, "str", cpy_r_r62);
        goto CPyL52;
    }
    cpy_r_r64 = CPyList_SetItemUnsafe(cpy_r_r51, cpy_r_r52, cpy_r_r63);
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 427, CPyStatic_main___globals);
        goto CPyL52;
    }
    cpy_r_r65 = cpy_r_r52 + 2;
    cpy_r_r52 = cpy_r_r65;
    goto CPyL27;
CPyL31: ;
    cpy_r_r66 = PyUnicode_Join(cpy_r_r44, cpy_r_r51);
    CPy_DECREF_NO_IMM(cpy_r_r51);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 427, CPyStatic_main___globals);
        goto CPyL49;
    }
    cpy_r_r67 = CPyStatics[22]; /* ')' */
    cpy_r_r68 = CPyStr_Build(4, cpy_r_r43, cpy_r_r66, cpy_r_r67, cpy_r_tuple_type_tail);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_tuple_type_tail);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 427, CPyStatic_main___globals);
        goto CPyL38;
    }
    cpy_r_r69 = PyList_Append(cpy_r_r0, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 427, CPyStatic_main___globals);
        goto CPyL38;
    } else
        goto CPyL35;
CPyL34: ;
    cpy_r_r71 = PyList_Append(cpy_r_r0, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 429, CPyStatic_main___globals);
        goto CPyL38;
    }
CPyL35: ;
    cpy_r_r73 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r73;
    goto CPyL2;
CPyL36: ;
    return cpy_r_r0;
CPyL37: ;
    cpy_r_r74 = NULL;
    return cpy_r_r74;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL37;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL6;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_tuple_match);
    goto CPyL37;
CPyL43: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL11;
CPyL44: ;
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_tuple_match);
    goto CPyL34;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r23);
    goto CPyL37;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r30);
    goto CPyL37;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r33);
    goto CPyL37;
CPyL48: ;
    CPy_DECREF(cpy_r__size);
    goto CPyL21;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_tuple_type_tail);
    goto CPyL37;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_tuple_type_tail);
    CPy_DecRef(cpy_r_r48);
    goto CPyL37;
CPyL51: ;
    CPy_DECREF_NO_IMM(cpy_r_r48);
    goto CPyL31;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_tuple_type_tail);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r51);
    goto CPyL37;
}

PyObject *CPyPy_main____params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"abi_params", 0};
    static CPyArg_Parser parser = {"O:_params", kwlist, 0};
    PyObject *obj_abi_params;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_abi_params)) {
        return NULL;
    }
    PyObject *arg_abi_params;
    if (likely(PyList_Check(obj_abi_params)))
        arg_abi_params = obj_abi_params;
    else {
        CPy_TypeError("list", obj_abi_params); 
        goto fail;
    }
    PyObject *retval = CPyDef_main____params(arg_abi_params);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "_params", 417, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main____decode(PyObject *cpy_r_inputs, PyObject *cpy_r_topics, PyObject *cpy_r_data) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_unindexed_types;
    CPyTagged cpy_r_indexed_count;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    int64_t cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    int64_t cpy_r_r32;
    char cpy_r_r33;
    int64_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    tuple_T2OO cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    CPyPtr cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject **cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    tuple_T3OOO cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject **cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject **cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    CPyTagged cpy_r_r154;
    CPyPtr cpy_r_r155;
    int64_t cpy_r_r156;
    CPyTagged cpy_r_r157;
    char cpy_r_r158;
    int64_t cpy_r_r159;
    CPyPtr cpy_r_r160;
    CPyPtr cpy_r_r161;
    int64_t cpy_r_r162;
    CPyPtr cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_element;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    CPyPtr cpy_r_r188;
    int64_t cpy_r_r189;
    CPyTagged cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject **cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    CPyPtr cpy_r_r202;
    CPyPtr cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject **cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_value;
    tuple_T3OOO cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    tuple_T4OOOO cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    int32_t cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    int32_t cpy_r_r234;
    char cpy_r_r235;
    int32_t cpy_r_r236;
    char cpy_r_r237;
    char cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    int32_t cpy_r_r241;
    char cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    int32_t cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    int32_t cpy_r_r251;
    char cpy_r_r252;
    int32_t cpy_r_r253;
    char cpy_r_r254;
    CPyTagged cpy_r_r255;
    PyObject *cpy_r_r256;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 435, CPyStatic_main___globals);
        goto CPyL149;
    }
    cpy_r_unindexed_types = cpy_r_r0;
    cpy_r_indexed_count = 0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_inputs)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r1 >> 1;
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_inputs)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r6 * 8;
    cpy_r_r10 = cpy_r_r8 + cpy_r_r9;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    CPy_INCREF(cpy_r_r11);
    if (likely(PyDict_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 437, CPyStatic_main___globals, "dict", cpy_r_r11);
        goto CPyL150;
    }
    cpy_r_i = cpy_r_r12;
    cpy_r_r13 = CPyStatics[53]; /* 'indexed' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_i, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 438, CPyStatic_main___globals);
        goto CPyL151;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 438, CPyStatic_main___globals);
        goto CPyL151;
    }
    if (cpy_r_r15) {
        goto CPyL152;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r16 = CPyTagged_Add(cpy_r_indexed_count, 2);
    CPyTagged_DECREF(cpy_r_indexed_count);
    cpy_r_indexed_count = cpy_r_r16;
    goto CPyL9;
CPyL8: ;
    cpy_r_r17 = PyList_Append(cpy_r_unindexed_types, cpy_r_i);
    CPy_DECREF(cpy_r_i);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 441, CPyStatic_main___globals);
        goto CPyL150;
    }
CPyL9: ;
    cpy_r_r19 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r19;
    goto CPyL2;
CPyL10: ;
    cpy_r_r20 = cpy_r_indexed_count != 0;
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = cpy_r_r23 != 0;
    if (cpy_r_r24) {
        goto CPyL13;
    } else
        goto CPyL153;
CPyL12: ;
    CPy_INCREF_NO_IMM(cpy_r_inputs);
    cpy_r_unindexed_types = cpy_r_inputs;
    goto CPyL27;
CPyL13: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = cpy_r_indexed_count == cpy_r_r27;
    if (cpy_r_r28) {
        goto CPyL154;
    } else
        goto CPyL155;
CPyL14: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = cpy_r_indexed_count & 1;
    cpy_r_r33 = cpy_r_r32 != 0;
    if (cpy_r_r33) goto CPyL16;
    cpy_r_r34 = cpy_r_r31 & 1;
    cpy_r_r35 = cpy_r_r34 != 0;
    if (!cpy_r_r35) goto CPyL17;
CPyL16: ;
    cpy_r_r36 = CPyTagged_IsLt_(cpy_r_indexed_count, cpy_r_r31);
    cpy_r_r37 = cpy_r_r36;
    goto CPyL18;
CPyL17: ;
    cpy_r_r38 = (Py_ssize_t)cpy_r_indexed_count < (Py_ssize_t)cpy_r_r31;
    cpy_r_r37 = cpy_r_r38;
CPyL18: ;
    CPyTagged_DECREF(cpy_r_indexed_count);
    if (!cpy_r_r37) goto CPyL23;
    cpy_r_r39 = CPyStatics[54]; /* ('Event log does not contain enough topics for the given '
                                   'ABI - this is usually because an event argument is not '
                                   'marked as indexed') */
    cpy_r_r40 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r41[1] = {cpy_r_r39};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 451, CPyStatic_main___globals);
        goto CPyL149;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_main___EventError))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 451, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r43);
        goto CPyL149;
    }
    CPy_Raise(cpy_r_r44);
    CPy_DECREF_NO_IMM(cpy_r_r44);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 451, CPyStatic_main___globals);
        goto CPyL149;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r45 = CPyStatics[55]; /* ('Event log contains more topics than expected for the '
                                   'given ABI - this is usually because an event argument '
                                   'is incorrectly marked as indexed') */
    cpy_r_r46 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r47[1] = {cpy_r_r45};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = PyObject_Vectorcall(cpy_r_r46, cpy_r_r48, 1, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 456, CPyStatic_main___globals);
        goto CPyL149;
    }
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_main___EventError))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 456, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r49);
        goto CPyL149;
    }
    CPy_Raise(cpy_r_r50);
    CPy_DECREF_NO_IMM(cpy_r_r50);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 456, CPyStatic_main___globals);
        goto CPyL149;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r51 = CPyDef_main____params(cpy_r_unindexed_types);
    CPy_DECREF_NO_IMM(cpy_r_unindexed_types);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 463, CPyStatic_main___globals);
        goto CPyL29;
    }
    goto CPyL40;
CPyL29: ;
    cpy_r_r52 = CPy_CatchError();
    cpy_r_r53 = CPyModule_builtins;
    cpy_r_r54 = CPyStatics[25]; /* 'KeyError' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 464, CPyStatic_main___globals);
        goto CPyL38;
    }
    cpy_r_r56 = CPyModule_builtins;
    cpy_r_r57 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 464, CPyStatic_main___globals);
        goto CPyL156;
    }
    cpy_r_r59.f0 = cpy_r_r55;
    cpy_r_r59.f1 = cpy_r_r58;
    cpy_r_r60 = PyTuple_New(2);
    if (unlikely(cpy_r_r60 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp13 = cpy_r_r59.f0;
    PyTuple_SET_ITEM(cpy_r_r60, 0, __tmp13);
    PyObject *__tmp14 = cpy_r_r59.f1;
    PyTuple_SET_ITEM(cpy_r_r60, 1, __tmp14);
    cpy_r_r61 = CPy_ExceptionMatches(cpy_r_r60);
    CPy_DecRef(cpy_r_r60);
    if (!cpy_r_r61) goto CPyL36;
    cpy_r_r62 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r62;
    CPy_DecRef(cpy_r_e);
    cpy_r_r63 = CPyStatics[26]; /* 'Invalid ABI' */
    cpy_r_r64 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r65[1] = {cpy_r_r63};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = PyObject_Vectorcall(cpy_r_r64, cpy_r_r66, 1, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 465, CPyStatic_main___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_main___ABIError))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 465, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r67);
        goto CPyL38;
    }
    CPy_Raise(cpy_r_r68);
    CPy_DecRef(cpy_r_r68);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 465, CPyStatic_main___globals);
        goto CPyL38;
    } else
        goto CPyL157;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL38;
    } else
        goto CPyL158;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r52);
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    cpy_r_r69 = CPy_KeepPropagating();
    if (!cpy_r_r69) goto CPyL149;
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_r51)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = cpy_r_r72 != 0;
    if (!cpy_r_r73) goto CPyL159;
    cpy_r_r74 = CPyStatics[39]; /* '0x' */
    cpy_r_r75 = PyObject_RichCompare(cpy_r_data, cpy_r_r74, 2);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 467, CPyStatic_main___globals);
        goto CPyL160;
    }
    cpy_r_r76 = PyObject_IsTrue(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 467, CPyStatic_main___globals);
        goto CPyL160;
    }
    cpy_r_r78 = cpy_r_r76;
    if (!cpy_r_r78) goto CPyL159;
    cpy_r_r79 = (CPyPtr)&((PyVarObject *)cpy_r_r51)->ob_size;
    cpy_r_r80 = *(int64_t *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = CPyTagged_Multiply(cpy_r_r81, 64);
    cpy_r_r83 = CPyTagged_StealAsObject(cpy_r_r82);
    cpy_r_r84 = CPyDef_main____0xstring(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 469, CPyStatic_main___globals);
        goto CPyL160;
    }
    cpy_r_data = cpy_r_r84;
CPyL46: ;
    cpy_r_r85 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r85 == NULL)) {
        goto CPyL161;
    } else
        goto CPyL49;
CPyL47: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r86 = 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL49: ;
    PyObject *cpy_r_r87[1] = {cpy_r_data};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = PyObject_Vectorcall(cpy_r_r85, cpy_r_r88, 1, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals);
        goto CPyL162;
    }
    CPy_DECREF(cpy_r_data);
    cpy_r_r90 = CPyModule_eth_abi;
    cpy_r_r91 = CPyStatics[56]; /* 'decode' */
    cpy_r_r92 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals);
        goto CPyL163;
    }
    PyObject *cpy_r_r93[2] = {cpy_r_r51, cpy_r_r89};
    cpy_r_r94 = (PyObject **)&cpy_r_r93;
    cpy_r_r95 = PyObject_Vectorcall(cpy_r_r92, cpy_r_r94, 2, 0);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals);
        goto CPyL163;
    }
    CPy_DECREF_NO_IMM(cpy_r_r51);
    CPy_DECREF(cpy_r_r89);
    if (likely(PyTuple_Check(cpy_r_r95)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals, "tuple", cpy_r_r95);
        goto CPyL58;
    }
    cpy_r_r97 = PySequence_List(cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals);
        goto CPyL58;
    }
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r100 = CPyStatics[128]; /* -1 */
    cpy_r_r101 = PySlice_New(cpy_r_r98, cpy_r_r99, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals);
        goto CPyL164;
    }
    cpy_r_r102 = PyObject_GetItem(cpy_r_r97, cpy_r_r101);
    CPy_DECREF_NO_IMM(cpy_r_r97);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals, "list", cpy_r_r102);
        goto CPyL58;
    }
    goto CPyL87;
CPyL58: ;
    cpy_r_r104 = CPy_CatchError();
    cpy_r_r105 = CPyStatic_main___globals;
    cpy_r_r106 = CPyStatics[57]; /* 'InsufficientDataBytes' */
    cpy_r_r107 = CPyDict_GetItem(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 473, CPyStatic_main___globals);
        goto CPyL85;
    }
    cpy_r_r108 = CPy_ExceptionMatches(cpy_r_r107);
    CPy_DecRef(cpy_r_r107);
    if (!cpy_r_r108) goto CPyL64;
    cpy_r_r109 = CPyStatics[58]; /* 'Event data has insufficient length' */
    cpy_r_r110 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r111[1] = {cpy_r_r109};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = PyObject_Vectorcall(cpy_r_r110, cpy_r_r112, 1, 0);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 474, CPyStatic_main___globals);
        goto CPyL85;
    }
    if (likely(Py_TYPE(cpy_r_r113) == CPyType_main___EventError))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 474, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r113);
        goto CPyL85;
    }
    CPy_Raise(cpy_r_r114);
    CPy_DecRef(cpy_r_r114);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 474, CPyStatic_main___globals);
        goto CPyL85;
    } else
        goto CPyL165;
CPyL63: ;
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r115 = CPyStatic_main___globals;
    cpy_r_r116 = CPyStatics[59]; /* 'NonEmptyPaddingBytes' */
    cpy_r_r117 = CPyDict_GetItem(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 475, CPyStatic_main___globals);
        goto CPyL85;
    }
    cpy_r_r118 = CPy_ExceptionMatches(cpy_r_r117);
    CPy_DecRef(cpy_r_r117);
    if (!cpy_r_r118) goto CPyL70;
    cpy_r_r119 = CPyStatics[60]; /* 'Malformed data field in event log' */
    cpy_r_r120 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r121[1] = {cpy_r_r119};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = PyObject_Vectorcall(cpy_r_r120, cpy_r_r122, 1, 0);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 476, CPyStatic_main___globals);
        goto CPyL85;
    }
    if (likely(Py_TYPE(cpy_r_r123) == CPyType_main___EventError))
        cpy_r_r124 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 476, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r123);
        goto CPyL85;
    }
    CPy_Raise(cpy_r_r124);
    CPy_DecRef(cpy_r_r124);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 476, CPyStatic_main___globals);
        goto CPyL85;
    } else
        goto CPyL166;
CPyL69: ;
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r125 = CPyStatic_main___globals;
    cpy_r_r126 = CPyStatics[61]; /* 'InvalidPointer' */
    cpy_r_r127 = CPyDict_GetItem(cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 477, CPyStatic_main___globals);
        goto CPyL85;
    }
    cpy_r_r128 = CPy_ExceptionMatches(cpy_r_r127);
    CPy_DecRef(cpy_r_r127);
    if (!cpy_r_r128) goto CPyL77;
    cpy_r_r129 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r129;
    cpy_r_r130 = PyObject_Str(cpy_r_e);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals);
        goto CPyL85;
    }
    cpy_r_r131 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r132[1] = {cpy_r_r130};
    cpy_r_r133 = (PyObject **)&cpy_r_r132;
    cpy_r_r134 = PyObject_Vectorcall(cpy_r_r131, cpy_r_r133, 1, 0);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals);
        goto CPyL167;
    }
    CPy_DecRef(cpy_r_r130);
    if (likely(Py_TYPE(cpy_r_r134) == CPyType_main___EventError))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r134);
        goto CPyL85;
    }
    CPy_Raise(cpy_r_r135);
    CPy_DecRef(cpy_r_r135);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals);
        goto CPyL85;
    } else
        goto CPyL168;
CPyL76: ;
    CPy_Unreachable();
CPyL77: ;
    cpy_r_r136 = CPyModule_builtins;
    cpy_r_r137 = CPyStatics[62]; /* 'OverflowError' */
    cpy_r_r138 = CPyObject_GetAttr(cpy_r_r136, cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 479, CPyStatic_main___globals);
        goto CPyL85;
    }
    cpy_r_r139 = CPy_ExceptionMatches(cpy_r_r138);
    CPy_DecRef(cpy_r_r138);
    if (!cpy_r_r139) goto CPyL83;
    cpy_r_r140 = CPyStatics[63]; /* 'Cannot decode event due to overflow error' */
    cpy_r_r141 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r142[1] = {cpy_r_r140};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = PyObject_Vectorcall(cpy_r_r141, cpy_r_r143, 1, 0);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 480, CPyStatic_main___globals);
        goto CPyL85;
    }
    if (likely(Py_TYPE(cpy_r_r144) == CPyType_main___EventError))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 480, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r144);
        goto CPyL85;
    }
    CPy_Raise(cpy_r_r145);
    CPy_DecRef(cpy_r_r145);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 480, CPyStatic_main___globals);
        goto CPyL85;
    } else
        goto CPyL169;
CPyL82: ;
    CPy_Unreachable();
CPyL83: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL85;
    } else
        goto CPyL170;
CPyL84: ;
    CPy_Unreachable();
CPyL85: ;
    CPy_RestoreExcInfo(cpy_r_r104);
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    cpy_r_r146 = CPy_KeepPropagating();
    if (!cpy_r_r146) goto CPyL149;
    CPy_Unreachable();
CPyL87: ;
    cpy_r_r147 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r148 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r149 = CPyStatics[128]; /* -1 */
    cpy_r_r150 = PySlice_New(cpy_r_r147, cpy_r_r148, cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 483, CPyStatic_main___globals);
        goto CPyL171;
    }
    cpy_r_r151 = PyObject_GetItem(cpy_r_topics, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 483, CPyStatic_main___globals);
        goto CPyL171;
    }
    if (likely(PyList_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 483, CPyStatic_main___globals, "list", cpy_r_r151);
        goto CPyL171;
    }
    cpy_r_topics = cpy_r_r152;
    cpy_r_r153 = PyList_New(0);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 484, CPyStatic_main___globals);
        goto CPyL172;
    }
    cpy_r_r154 = 0;
CPyL92: ;
    cpy_r_r155 = (CPyPtr)&((PyVarObject *)cpy_r_inputs)->ob_size;
    cpy_r_r156 = *(int64_t *)cpy_r_r155;
    cpy_r_r157 = cpy_r_r156 << 1;
    cpy_r_r158 = (Py_ssize_t)cpy_r_r154 < (Py_ssize_t)cpy_r_r157;
    if (!cpy_r_r158) goto CPyL173;
    cpy_r_r159 = (Py_ssize_t)cpy_r_r154 >> 1;
    cpy_r_r160 = (CPyPtr)&((PyListObject *)cpy_r_inputs)->ob_item;
    cpy_r_r161 = *(CPyPtr *)cpy_r_r160;
    cpy_r_r162 = cpy_r_r159 * 8;
    cpy_r_r163 = cpy_r_r161 + cpy_r_r162;
    cpy_r_r164 = *(PyObject * *)cpy_r_r163;
    CPy_INCREF(cpy_r_r164);
    if (likely(PyDict_Check(cpy_r_r164)))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 486, CPyStatic_main___globals, "dict", cpy_r_r164);
        goto CPyL174;
    }
    cpy_r_i = cpy_r_r165;
    cpy_r_r166 = CPyStatics[23]; /* 'type' */
    cpy_r_r167 = CPyDict_GetItem(cpy_r_i, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 487, CPyStatic_main___globals);
        goto CPyL175;
    }
    if (likely(PyUnicode_Check(cpy_r_r167)))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 487, CPyStatic_main___globals, "str", cpy_r_r167);
        goto CPyL175;
    }
    cpy_r_r169 = CPyStatics[52]; /* 'components' */
    cpy_r_r170 = PyDict_Contains(cpy_r_i, cpy_r_r169);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 489, CPyStatic_main___globals);
        goto CPyL176;
    }
    cpy_r_r172 = cpy_r_r170;
    if (!cpy_r_r172) goto CPyL103;
    cpy_r_r173 = CPyStatics[19]; /* 'name' */
    cpy_r_r174 = CPyStatics[19]; /* 'name' */
    cpy_r_r175 = CPyDict_GetItem(cpy_r_i, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 490, CPyStatic_main___globals);
        goto CPyL176;
    }
    if (likely(PyUnicode_Check(cpy_r_r175)))
        cpy_r_r176 = cpy_r_r175;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 490, CPyStatic_main___globals, "str", cpy_r_r175);
        goto CPyL176;
    }
    cpy_r_r177 = CPyStatics[23]; /* 'type' */
    cpy_r_r178 = CPyStatics[52]; /* 'components' */
    cpy_r_r179 = CPyStatics[52]; /* 'components' */
    cpy_r_r180 = CPyDict_GetItem(cpy_r_i, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 490, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r181 = CPyDict_Build(3, cpy_r_r173, cpy_r_r176, cpy_r_r177, cpy_r_r168, cpy_r_r178, cpy_r_r180);
    CPy_DECREF(cpy_r_r176);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 490, CPyStatic_main___globals);
        goto CPyL176;
    }
    cpy_r_element = cpy_r_r181;
    goto CPyL107;
CPyL103: ;
    cpy_r_r182 = CPyStatics[19]; /* 'name' */
    cpy_r_r183 = CPyStatics[19]; /* 'name' */
    cpy_r_r184 = CPyDict_GetItem(cpy_r_i, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 492, CPyStatic_main___globals);
        goto CPyL176;
    }
    if (likely(PyUnicode_Check(cpy_r_r184)))
        cpy_r_r185 = cpy_r_r184;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 492, CPyStatic_main___globals, "str", cpy_r_r184);
        goto CPyL176;
    }
    cpy_r_r186 = CPyStatics[23]; /* 'type' */
    cpy_r_r187 = CPyDict_Build(2, cpy_r_r182, cpy_r_r185, cpy_r_r186, cpy_r_r168);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 492, CPyStatic_main___globals);
        goto CPyL176;
    }
    cpy_r_element = cpy_r_r187;
CPyL107: ;
    cpy_r_r188 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r189 = *(int64_t *)cpy_r_r188;
    cpy_r_r190 = cpy_r_r189 << 1;
    cpy_r_r191 = cpy_r_r190 != 0;
    if (!cpy_r_r191) goto CPyL178;
    cpy_r_r192 = CPyStatics[53]; /* 'indexed' */
    cpy_r_r193 = CPyDict_GetItem(cpy_r_i, cpy_r_r192);
    CPy_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 494, CPyStatic_main___globals);
        goto CPyL179;
    }
    if (unlikely(!PyBool_Check(cpy_r_r193))) {
        CPy_TypeError("bool", cpy_r_r193); cpy_r_r194 = 2;
    } else
        cpy_r_r194 = cpy_r_r193 == Py_True;
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r194 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 494, CPyStatic_main___globals);
        goto CPyL179;
    }
    if (!cpy_r_r194) goto CPyL180;
    cpy_r_r195 = CPyList_PopLast(cpy_r_topics);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 495, CPyStatic_main___globals);
        goto CPyL179;
    }
    cpy_r_r196 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r196 == NULL)) {
        goto CPyL181;
    } else
        goto CPyL115;
CPyL113: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r197 = 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 495, CPyStatic_main___globals);
        goto CPyL149;
    }
    CPy_Unreachable();
CPyL115: ;
    PyObject *cpy_r_r198[1] = {cpy_r_r195};
    cpy_r_r199 = (PyObject **)&cpy_r_r198;
    cpy_r_r200 = PyObject_Vectorcall(cpy_r_r196, cpy_r_r199, 1, 0);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 495, CPyStatic_main___globals);
        goto CPyL182;
    }
    CPy_DECREF(cpy_r_r195);
    cpy_r_r201 = PyList_New(1);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 497, CPyStatic_main___globals);
        goto CPyL183;
    }
    cpy_r_r202 = (CPyPtr)&((PyListObject *)cpy_r_r201)->ob_item;
    cpy_r_r203 = *(CPyPtr *)cpy_r_r202;
    *(PyObject * *)cpy_r_r203 = cpy_r_r168;
    cpy_r_r204 = CPyModule_eth_abi;
    cpy_r_r205 = CPyStatics[56]; /* 'decode' */
    cpy_r_r206 = CPyObject_GetAttr(cpy_r_r204, cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 497, CPyStatic_main___globals);
        goto CPyL184;
    }
    PyObject *cpy_r_r207[2] = {cpy_r_r201, cpy_r_r200};
    cpy_r_r208 = (PyObject **)&cpy_r_r207;
    cpy_r_r209 = PyObject_Vectorcall(cpy_r_r206, cpy_r_r208, 2, 0);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 497, CPyStatic_main___globals);
        goto CPyL184;
    }
    CPy_DECREF_NO_IMM(cpy_r_r201);
    if (likely(PyTuple_Check(cpy_r_r209)))
        cpy_r_r210 = cpy_r_r209;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 497, CPyStatic_main___globals, "tuple", cpy_r_r209);
        goto CPyL123;
    }
    cpy_r_r211 = CPySequenceTuple_GetItem(cpy_r_r210, 0);
    CPy_DECREF(cpy_r_r210);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 497, CPyStatic_main___globals);
        goto CPyL123;
    } else
        goto CPyL185;
CPyL122: ;
    cpy_r_value = cpy_r_r211;
    goto CPyL139;
CPyL123: ;
    cpy_r_r212 = CPy_CatchError();
    cpy_r_r213 = CPyStatic_main___globals;
    cpy_r_r214 = CPyStatics[57]; /* 'InsufficientDataBytes' */
    cpy_r_r215 = CPyDict_GetItem(cpy_r_r213, cpy_r_r214);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 498, CPyStatic_main___globals);
        goto CPyL186;
    }
    cpy_r_r216 = CPyStatic_main___globals;
    cpy_r_r217 = CPyStatics[64]; /* 'NoEntriesFound' */
    cpy_r_r218 = CPyDict_GetItem(cpy_r_r216, cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 498, CPyStatic_main___globals);
        goto CPyL187;
    }
    cpy_r_r219 = CPyModule_builtins;
    cpy_r_r220 = CPyStatics[62]; /* 'OverflowError' */
    cpy_r_r221 = CPyObject_GetAttr(cpy_r_r219, cpy_r_r220);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 498, CPyStatic_main___globals);
        goto CPyL188;
    }
    cpy_r_r222 = CPyStatic_main___globals;
    cpy_r_r223 = CPyStatics[61]; /* 'InvalidPointer' */
    cpy_r_r224 = CPyDict_GetItem(cpy_r_r222, cpy_r_r223);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 498, CPyStatic_main___globals);
        goto CPyL189;
    }
    cpy_r_r225.f0 = cpy_r_r215;
    cpy_r_r225.f1 = cpy_r_r218;
    cpy_r_r225.f2 = cpy_r_r221;
    cpy_r_r225.f3 = cpy_r_r224;
    cpy_r_r226 = PyTuple_New(4);
    if (unlikely(cpy_r_r226 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp15 = cpy_r_r225.f0;
    PyTuple_SET_ITEM(cpy_r_r226, 0, __tmp15);
    PyObject *__tmp16 = cpy_r_r225.f1;
    PyTuple_SET_ITEM(cpy_r_r226, 1, __tmp16);
    PyObject *__tmp17 = cpy_r_r225.f2;
    PyTuple_SET_ITEM(cpy_r_r226, 2, __tmp17);
    PyObject *__tmp18 = cpy_r_r225.f3;
    PyTuple_SET_ITEM(cpy_r_r226, 3, __tmp18);
    cpy_r_r227 = CPy_ExceptionMatches(cpy_r_r226);
    CPy_DecRef(cpy_r_r226);
    if (!cpy_r_r227) goto CPyL190;
    cpy_r_r228 = CPyDef_main____0xstring(cpy_r_r200);
    CPy_DecRef(cpy_r_r200);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 500, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r229 = CPyStatics[65]; /* 'value' */
    cpy_r_r230 = CPyDict_SetItem(cpy_r_element, cpy_r_r229, cpy_r_r228);
    CPy_DecRef(cpy_r_r228);
    cpy_r_r231 = cpy_r_r230 >= 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 500, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r232 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r233 = 0 ? Py_True : Py_False;
    cpy_r_r234 = CPyDict_SetItem(cpy_r_element, cpy_r_r232, cpy_r_r233);
    cpy_r_r235 = cpy_r_r234 >= 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 501, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r236 = PyList_Append(cpy_r_r153, cpy_r_element);
    CPy_DecRef(cpy_r_element);
    cpy_r_r237 = cpy_r_r236 >= 0;
    if (unlikely(!cpy_r_r237)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 502, CPyStatic_main___globals);
        goto CPyL192;
    }
    CPy_RestoreExcInfo(cpy_r_r212);
    CPy_DecRef(cpy_r_r212.f0);
    CPy_DecRef(cpy_r_r212.f1);
    CPy_DecRef(cpy_r_r212.f2);
    goto CPyL147;
CPyL133: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL135;
    } else
        goto CPyL193;
CPyL134: ;
    CPy_Unreachable();
CPyL135: ;
    CPy_RestoreExcInfo(cpy_r_r212);
    CPy_DecRef(cpy_r_r212.f0);
    CPy_DecRef(cpy_r_r212.f1);
    CPy_DecRef(cpy_r_r212.f2);
    cpy_r_r238 = CPy_KeepPropagating();
    if (!cpy_r_r238) goto CPyL149;
    CPy_Unreachable();
CPyL137: ;
    cpy_r_r239 = CPyList_PopLast(cpy_r_r103);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 505, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_value = cpy_r_r239;
CPyL139: ;
    cpy_r_r240 = (PyObject *)&PyBytes_Type;
    cpy_r_r241 = PyObject_IsInstance(cpy_r_value, cpy_r_r240);
    cpy_r_r242 = cpy_r_r241 >= 0;
    if (unlikely(!cpy_r_r242)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 507, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r243 = cpy_r_r241;
    if (!cpy_r_r243) goto CPyL144;
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r244 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 508, CPyStatic_main___globals, "bytes", cpy_r_value);
        goto CPyL194;
    }
    cpy_r_r245 = CPyDef_main____0xstring(cpy_r_r244);
    CPy_DECREF(cpy_r_r244);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 508, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_value = cpy_r_r245;
CPyL144: ;
    cpy_r_r246 = CPyStatics[65]; /* 'value' */
    cpy_r_r247 = CPyDict_SetItem(cpy_r_element, cpy_r_r246, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    cpy_r_r248 = cpy_r_r247 >= 0;
    if (unlikely(!cpy_r_r248)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 510, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_r249 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r250 = 1 ? Py_True : Py_False;
    cpy_r_r251 = CPyDict_SetItem(cpy_r_element, cpy_r_r249, cpy_r_r250);
    cpy_r_r252 = cpy_r_r251 >= 0;
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 511, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_r253 = PyList_Append(cpy_r_r153, cpy_r_element);
    CPy_DECREF(cpy_r_element);
    cpy_r_r254 = cpy_r_r253 >= 0;
    if (unlikely(!cpy_r_r254)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 512, CPyStatic_main___globals);
        goto CPyL174;
    }
CPyL147: ;
    cpy_r_r255 = cpy_r_r154 + 2;
    cpy_r_r154 = cpy_r_r255;
    goto CPyL92;
CPyL148: ;
    return cpy_r_r153;
CPyL149: ;
    cpy_r_r256 = NULL;
    return cpy_r_r256;
CPyL150: ;
    CPy_DecRef(cpy_r_unindexed_types);
    CPyTagged_DecRef(cpy_r_indexed_count);
    goto CPyL149;
CPyL151: ;
    CPy_DecRef(cpy_r_unindexed_types);
    CPyTagged_DecRef(cpy_r_indexed_count);
    CPy_DecRef(cpy_r_i);
    goto CPyL149;
CPyL152: ;
    CPy_DECREF(cpy_r_i);
    goto CPyL7;
CPyL153: ;
    CPy_DECREF_NO_IMM(cpy_r_unindexed_types);
    CPyTagged_DECREF(cpy_r_indexed_count);
    goto CPyL12;
CPyL154: ;
    CPyTagged_DECREF(cpy_r_indexed_count);
    goto CPyL27;
CPyL155: ;
    CPy_DECREF_NO_IMM(cpy_r_unindexed_types);
    goto CPyL14;
CPyL156: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL38;
CPyL157: ;
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    goto CPyL35;
CPyL158: ;
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    goto CPyL37;
CPyL159: ;
    CPy_INCREF(cpy_r_data);
    goto CPyL46;
CPyL160: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL149;
CPyL161: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r51);
    goto CPyL47;
CPyL162: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r51);
    goto CPyL58;
CPyL163: ;
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r89);
    goto CPyL58;
CPyL164: ;
    CPy_DecRef(cpy_r_r97);
    goto CPyL58;
CPyL165: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL63;
CPyL166: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL69;
CPyL167: ;
    CPy_DecRef(cpy_r_r130);
    goto CPyL85;
CPyL168: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL76;
CPyL169: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL82;
CPyL170: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL84;
CPyL171: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL149;
CPyL172: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    goto CPyL149;
CPyL173: ;
    CPy_DECREF_NO_IMM(cpy_r_topics);
    CPy_DECREF_NO_IMM(cpy_r_r103);
    goto CPyL148;
CPyL174: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    goto CPyL149;
CPyL175: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    goto CPyL149;
CPyL176: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    goto CPyL149;
CPyL177: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_r176);
    goto CPyL149;
CPyL178: ;
    CPy_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r168);
    goto CPyL137;
CPyL179: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_element);
    goto CPyL149;
CPyL180: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL137;
CPyL181: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r195);
    goto CPyL113;
CPyL182: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r195);
    goto CPyL149;
CPyL183: ;
    CPy_DecRef(cpy_r_r168);
    goto CPyL123;
CPyL184: ;
    CPy_DecRef(cpy_r_r201);
    goto CPyL123;
CPyL185: ;
    CPy_DECREF(cpy_r_r200);
    goto CPyL122;
CPyL186: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    goto CPyL135;
CPyL187: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_r215);
    goto CPyL135;
CPyL188: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_r215);
    CPy_DecRef(cpy_r_r218);
    goto CPyL135;
CPyL189: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_r215);
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r221);
    goto CPyL135;
CPyL190: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    goto CPyL133;
CPyL191: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    goto CPyL135;
CPyL192: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    goto CPyL135;
CPyL193: ;
    CPy_DecRef(cpy_r_r212.f0);
    CPy_DecRef(cpy_r_r212.f1);
    CPy_DecRef(cpy_r_r212.f2);
    goto CPyL134;
CPyL194: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    goto CPyL149;
CPyL195: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_value);
    goto CPyL149;
}

PyObject *CPyPy_main____decode(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"inputs", "topics", "data", 0};
    static CPyArg_Parser parser = {"OOO:_decode", kwlist, 0};
    PyObject *obj_inputs;
    PyObject *obj_topics;
    PyObject *obj_data;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_inputs, &obj_topics, &obj_data)) {
        return NULL;
    }
    PyObject *arg_inputs;
    if (likely(PyList_Check(obj_inputs)))
        arg_inputs = obj_inputs;
    else {
        CPy_TypeError("list", obj_inputs); 
        goto fail;
    }
    PyObject *arg_topics;
    if (likely(PyList_Check(obj_topics)))
        arg_topics = obj_topics;
    else {
        CPy_TypeError("list", obj_topics); 
        goto fail;
    }
    PyObject *arg_data = obj_data;
    PyObject *retval = CPyDef_main____decode(arg_inputs, arg_topics, arg_data);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "_decode", 434, CPyStatic_main___globals);
    return NULL;
}

char CPyDef_main_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    void *cpy_r_r8;
    void *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r20;
    PyObject **cpy_r_r21;
    PyObject **cpy_r_r22;
    void *cpy_r_r24;
    void *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject **cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    int32_t cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    int32_t cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    int32_t cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    int32_t cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    int32_t cpy_r_r173;
    char cpy_r_r174;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject **cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    int32_t cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject **cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    int32_t cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    int32_t cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    int32_t cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    int32_t cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    int32_t cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    int32_t cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    int32_t cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    PyObject **cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject **cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    int32_t cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    tuple_T2OO cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    int32_t cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    tuple_T3OOO cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    int32_t cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    int32_t cpy_r_r302;
    char cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    int32_t cpy_r_r309;
    char cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    int32_t cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    int32_t cpy_r_r325;
    char cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject **cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    int32_t cpy_r_r338;
    char cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    char cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    char cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject **cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    int32_t cpy_r_r375;
    char cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    int32_t cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    int32_t cpy_r_r383;
    char cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    int32_t cpy_r_r387;
    char cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    int32_t cpy_r_r391;
    char cpy_r_r392;
    PyObject **cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    int32_t cpy_r_r398;
    char cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    tuple_T2OO cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    int32_t cpy_r_r415;
    char cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    char cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    char cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    char cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    PyObject **cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    int32_t cpy_r_r452;
    char cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    int32_t cpy_r_r456;
    char cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    int32_t cpy_r_r460;
    char cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    int32_t cpy_r_r464;
    char cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject *cpy_r_r467;
    int32_t cpy_r_r468;
    char cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    int32_t cpy_r_r472;
    char cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    int32_t cpy_r_r476;
    char cpy_r_r477;
    PyObject **cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    int32_t cpy_r_r483;
    char cpy_r_r484;
    PyObject *cpy_r_r485;
    char cpy_r_r486;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", -1, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_functools;
    cpy_r_r6 = (PyObject **)&CPyModule_re;
    PyObject **cpy_r_r7[2] = {cpy_r_r5, cpy_r_r6};
    cpy_r_r8 = (void *)&cpy_r_r7;
    int64_t cpy_r_r9[2] = {3, 4};
    cpy_r_r10 = (void *)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[134]; /* (('functools', 'functools', 'functools'),
                                    ('re', 're', 're')) */
    cpy_r_r12 = CPyStatic_main___globals;
    cpy_r_r13 = CPyStatics[68]; /* 'eth_event/main.py' */
    cpy_r_r14 = CPyStatics[69]; /* '<module>' */
    cpy_r_r15 = CPyImport_ImportMany(cpy_r_r11, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r10);
    if (!cpy_r_r15) goto CPyL177;
    cpy_r_r16 = CPyStatics[135]; /* ('Any', 'Callable', 'Dict', 'Final', 'List', 'Literal',
                                    'Mapping', 'Optional', 'TypedDict', 'Union', 'final',
                                    'overload') */
    cpy_r_r17 = CPyStatics[82]; /* 'typing' */
    cpy_r_r18 = CPyStatic_main___globals;
    cpy_r_r19 = CPyImport_ImportFromMany(cpy_r_r17, cpy_r_r16, cpy_r_r16, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 5, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_typing = cpy_r_r19;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r20 = (PyObject **)&CPyModule_cchecksum;
    cpy_r_r21 = (PyObject **)&CPyModule_eth_abi;
    cpy_r_r22 = (PyObject **)&CPyModule_hexbytes;
    PyObject **cpy_r_r23[3] = {cpy_r_r20, cpy_r_r21, cpy_r_r22};
    cpy_r_r24 = (void *)&cpy_r_r23;
    int64_t cpy_r_r25[3] = {20, 21, 22};
    cpy_r_r26 = (void *)&cpy_r_r25;
    cpy_r_r27 = CPyStatics[139]; /* (('cchecksum', 'cchecksum', 'cchecksum'),
                                    ('eth_abi', 'eth_abi', 'eth_abi'),
                                    ('hexbytes', 'hexbytes', 'hexbytes')) */
    cpy_r_r28 = CPyStatic_main___globals;
    cpy_r_r29 = CPyStatics[68]; /* 'eth_event/main.py' */
    cpy_r_r30 = CPyStatics[69]; /* '<module>' */
    cpy_r_r31 = CPyImport_ImportMany(cpy_r_r27, cpy_r_r24, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r26);
    if (!cpy_r_r31) goto CPyL177;
    cpy_r_r32 = CPyStatics[140]; /* ('InsufficientDataBytes', 'NoEntriesFound',
                                    'NonEmptyPaddingBytes') */
    cpy_r_r33 = CPyStatics[86]; /* 'eth_abi.exceptions' */
    cpy_r_r34 = CPyStatic_main___globals;
    cpy_r_r35 = CPyImport_ImportFromMany(cpy_r_r33, cpy_r_r32, cpy_r_r32, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 23, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_eth_abi___exceptions = cpy_r_r35;
    CPy_INCREF(CPyModule_eth_abi___exceptions);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r36 = CPyStatics[141]; /* ('auto',) */
    cpy_r_r37 = CPyStatics[88]; /* 'eth_hash' */
    cpy_r_r38 = CPyStatic_main___globals;
    cpy_r_r39 = CPyImport_ImportFromMany(cpy_r_r37, cpy_r_r36, cpy_r_r36, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 24, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_eth_hash = cpy_r_r39;
    CPy_INCREF(CPyModule_eth_hash);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r40 = CPyStatics[142]; /* ('ABIComponentIndexed', 'ABIElement', 'ABIEvent',
                                    'ChecksumAddress', 'HexAddress', 'HexStr') */
    cpy_r_r41 = CPyStatics[95]; /* 'eth_typing' */
    cpy_r_r42 = CPyStatic_main___globals;
    cpy_r_r43 = CPyImport_ImportFromMany(cpy_r_r41, cpy_r_r40, cpy_r_r40, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 25, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_eth_typing = cpy_r_r43;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r44 = CPyStatics[143]; /* ('InvalidPointer',) */
    cpy_r_r45 = CPyStatics[96]; /* 'eth_event.conditional_imports' */
    cpy_r_r46 = CPyStatic_main___globals;
    cpy_r_r47 = CPyImport_ImportFromMany(cpy_r_r45, cpy_r_r44, cpy_r_r44, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 34, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_eth_event___conditional_imports = cpy_r_r47;
    CPy_INCREF(CPyModule_eth_event___conditional_imports);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r48 = CPyModule_builtins;
    cpy_r_r49 = CPyStatics[97]; /* 'Exception' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 38, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r51 = PyTuple_Pack(1, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 38, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r52 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r53 = (PyObject *)CPyType_main___ABIError_template;
    cpy_r_r54 = CPyType_FromTemplate(cpy_r_r53, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 38, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r55 = CPyStatics[98]; /* '__mypyc_attrs__' */
    cpy_r_r56 = CPyStatics[99]; /* '__dict__' */
    cpy_r_r57 = PyTuple_Pack(1, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 38, CPyStatic_main___globals);
        goto CPyL178;
    }
    cpy_r_r58 = PyObject_SetAttr(cpy_r_r54, cpy_r_r55, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 38, CPyStatic_main___globals);
        goto CPyL178;
    }
    CPyType_main___ABIError = (PyTypeObject *)cpy_r_r54;
    CPy_INCREF(CPyType_main___ABIError);
    cpy_r_r60 = CPyStatic_main___globals;
    cpy_r_r61 = CPyStatics[4]; /* 'ABIError' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 38, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r64 = CPyModule_builtins;
    cpy_r_r65 = CPyStatics[97]; /* 'Exception' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 43, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r67 = PyTuple_Pack(1, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 43, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r68 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r69 = (PyObject *)CPyType_main___EventError_template;
    cpy_r_r70 = CPyType_FromTemplate(cpy_r_r69, cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 43, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r71 = CPyStatics[98]; /* '__mypyc_attrs__' */
    cpy_r_r72 = CPyStatics[99]; /* '__dict__' */
    cpy_r_r73 = PyTuple_Pack(1, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 43, CPyStatic_main___globals);
        goto CPyL179;
    }
    cpy_r_r74 = PyObject_SetAttr(cpy_r_r70, cpy_r_r71, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 43, CPyStatic_main___globals);
        goto CPyL179;
    }
    CPyType_main___EventError = (PyTypeObject *)cpy_r_r70;
    CPy_INCREF(CPyType_main___EventError);
    cpy_r_r76 = CPyStatic_main___globals;
    cpy_r_r77 = CPyStatics[5]; /* 'EventError' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 43, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r80 = CPyModule_builtins;
    cpy_r_r81 = CPyStatics[97]; /* 'Exception' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 48, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r83 = PyTuple_Pack(1, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 48, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r84 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r85 = (PyObject *)CPyType_main___StructLogError_template;
    cpy_r_r86 = CPyType_FromTemplate(cpy_r_r85, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 48, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r87 = CPyStatics[98]; /* '__mypyc_attrs__' */
    cpy_r_r88 = CPyStatics[99]; /* '__dict__' */
    cpy_r_r89 = PyTuple_Pack(1, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 48, CPyStatic_main___globals);
        goto CPyL180;
    }
    cpy_r_r90 = PyObject_SetAttr(cpy_r_r86, cpy_r_r87, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 48, CPyStatic_main___globals);
        goto CPyL180;
    }
    CPyType_main___StructLogError = (PyTypeObject *)cpy_r_r86;
    CPy_INCREF(CPyType_main___StructLogError);
    cpy_r_r92 = CPyStatic_main___globals;
    cpy_r_r93 = CPyStatics[6]; /* 'StructLogError' */
    cpy_r_r94 = CPyDict_SetItem(cpy_r_r92, cpy_r_r93, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 48, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r96 = CPyModule_builtins;
    cpy_r_r97 = CPyStatics[97]; /* 'Exception' */
    cpy_r_r98 = CPyObject_GetAttr(cpy_r_r96, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 53, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r99 = PyTuple_Pack(1, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 53, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r100 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r101 = (PyObject *)CPyType_main___UnknownEvent_template;
    cpy_r_r102 = CPyType_FromTemplate(cpy_r_r101, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 53, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r103 = CPyStatics[98]; /* '__mypyc_attrs__' */
    cpy_r_r104 = CPyStatics[99]; /* '__dict__' */
    cpy_r_r105 = PyTuple_Pack(1, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 53, CPyStatic_main___globals);
        goto CPyL181;
    }
    cpy_r_r106 = PyObject_SetAttr(cpy_r_r102, cpy_r_r103, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 53, CPyStatic_main___globals);
        goto CPyL181;
    }
    CPyType_main___UnknownEvent = (PyTypeObject *)cpy_r_r102;
    CPy_INCREF(CPyType_main___UnknownEvent);
    cpy_r_r108 = CPyStatic_main___globals;
    cpy_r_r109 = CPyStatics[7]; /* 'UnknownEvent' */
    cpy_r_r110 = CPyDict_SetItem(cpy_r_r108, cpy_r_r109, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 53, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r112 = CPyModule_typing;
    cpy_r_r113 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r114 = cpy_r_r112 != cpy_r_r113;
    if (cpy_r_r114) goto CPyL37;
    cpy_r_r115 = CPyStatics[82]; /* 'typing' */
    cpy_r_r116 = PyImport_Import(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_typing = cpy_r_r116;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r116);
CPyL37: ;
    cpy_r_r117 = PyImport_GetModuleDict();
    cpy_r_r118 = CPyStatics[82]; /* 'typing' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r120 = CPyStatics[100]; /* '_TypedDict' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r122 = PyTuple_Pack(1, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r123 = CPyModule_typing;
    cpy_r_r124 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r125 = cpy_r_r123 != cpy_r_r124;
    if (cpy_r_r125) goto CPyL43;
    cpy_r_r126 = CPyStatics[82]; /* 'typing' */
    cpy_r_r127 = PyImport_Import(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL182;
    }
    CPyModule_typing = cpy_r_r127;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r127);
CPyL43: ;
    cpy_r_r128 = PyImport_GetModuleDict();
    cpy_r_r129 = CPyStatics[82]; /* 'typing' */
    cpy_r_r130 = CPyDict_GetItem(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL182;
    }
    cpy_r_r131 = CPyStatics[101]; /* '_TypedDictMeta' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL182;
    }
    cpy_r_r133 = CPyStatics[102]; /* '__prepare__' */
    cpy_r_r134 = PyObject_HasAttr(cpy_r_r132, cpy_r_r133);
    if (!cpy_r_r134) goto CPyL50;
    cpy_r_r135 = CPyStatics[103]; /* 'DecodedEvent' */
    cpy_r_r136 = CPyStatics[102]; /* '__prepare__' */
    cpy_r_r137 = CPyObject_GetAttr(cpy_r_r132, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL183;
    }
    PyObject *cpy_r_r138[2] = {cpy_r_r135, cpy_r_r122};
    cpy_r_r139 = (PyObject **)&cpy_r_r138;
    cpy_r_r140 = PyObject_Vectorcall(cpy_r_r137, cpy_r_r139, 2, 0);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL183;
    }
    if (likely(PyDict_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals, "dict", cpy_r_r140);
        goto CPyL183;
    }
    cpy_r_r142 = cpy_r_r141;
    goto CPyL52;
CPyL50: ;
    cpy_r_r143 = PyDict_New();
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL183;
    }
    cpy_r_r142 = cpy_r_r143;
CPyL52: ;
    cpy_r_r144 = PyDict_New();
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL184;
    }
    cpy_r_r145 = (PyObject *)&PyUnicode_Type;
    cpy_r_r146 = CPyStatics[19]; /* 'name' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r144, cpy_r_r146, cpy_r_r145);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL185;
    }
    cpy_r_r149 = (PyObject *)&PyList_Type;
    cpy_r_r150 = CPyStatics[30]; /* 'data' */
    cpy_r_r151 = CPyDict_SetItem(cpy_r_r144, cpy_r_r150, cpy_r_r149);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 60, CPyStatic_main___globals);
        goto CPyL185;
    }
    cpy_r_r153 = (PyObject *)&PyType_Type;
    cpy_r_r154 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r155 = CPyDict_SetItem(cpy_r_r144, cpy_r_r154, cpy_r_r153);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 61, CPyStatic_main___globals);
        goto CPyL185;
    }
    cpy_r_r157 = CPyStatic_main___globals;
    cpy_r_r158 = CPyStatics[92]; /* 'ChecksumAddress' */
    cpy_r_r159 = CPyDict_GetItem(cpy_r_r157, cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL185;
    }
    cpy_r_r160 = CPyStatics[32]; /* 'address' */
    cpy_r_r161 = CPyDict_SetItem(cpy_r_r144, cpy_r_r160, cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL185;
    }
    cpy_r_r163 = CPyStatics[103]; /* 'DecodedEvent' */
    cpy_r_r164 = CPyStatics[104]; /* '__annotations__' */
    cpy_r_r165 = CPyDict_SetItem(cpy_r_r142, cpy_r_r164, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r166 = cpy_r_r165 >= 0;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL184;
    }
    cpy_r_r167 = CPyStatics[105]; /* 'mypyc filler docstring' */
    cpy_r_r168 = CPyStatics[106]; /* '__doc__' */
    cpy_r_r169 = CPyDict_SetItem(cpy_r_r142, cpy_r_r168, cpy_r_r167);
    cpy_r_r170 = cpy_r_r169 >= 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL184;
    }
    cpy_r_r171 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r172 = CPyStatics[107]; /* '__module__' */
    cpy_r_r173 = CPyDict_SetItem(cpy_r_r142, cpy_r_r172, cpy_r_r171);
    cpy_r_r174 = cpy_r_r173 >= 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL184;
    }
    PyObject *cpy_r_r175[3] = {cpy_r_r163, cpy_r_r122, cpy_r_r142};
    cpy_r_r176 = (PyObject **)&cpy_r_r175;
    cpy_r_r177 = PyObject_Vectorcall(cpy_r_r132, cpy_r_r176, 3, 0);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL186;
    }
    CPy_DECREF(cpy_r_r122);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r178 = CPyStatic_main___globals;
    cpy_r_r179 = CPyStatics[80]; /* 'final' */
    cpy_r_r180 = CPyDict_GetItem(cpy_r_r178, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 57, CPyStatic_main___globals);
        goto CPyL187;
    }
    PyObject *cpy_r_r181[1] = {cpy_r_r177};
    cpy_r_r182 = (PyObject **)&cpy_r_r181;
    cpy_r_r183 = PyObject_Vectorcall(cpy_r_r180, cpy_r_r182, 1, 0);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL187;
    }
    CPy_DECREF(cpy_r_r177);
    CPyType_main___DecodedEvent = (PyTypeObject *)cpy_r_r183;
    CPy_INCREF(CPyType_main___DecodedEvent);
    cpy_r_r184 = CPyStatic_main___globals;
    cpy_r_r185 = CPyStatics[103]; /* 'DecodedEvent' */
    cpy_r_r186 = CPyDict_SetItem(cpy_r_r184, cpy_r_r185, cpy_r_r183);
    CPy_DECREF(cpy_r_r183);
    cpy_r_r187 = cpy_r_r186 >= 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r188 = (PyObject *)CPyType_main___DecodedEvent;
    cpy_r_r189 = CPyModule_typing;
    cpy_r_r190 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r191 = cpy_r_r189 != cpy_r_r190;
    if (cpy_r_r191) goto CPyL68;
    cpy_r_r192 = CPyStatics[82]; /* 'typing' */
    cpy_r_r193 = PyImport_Import(cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_typing = cpy_r_r193;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r193);
CPyL68: ;
    cpy_r_r194 = PyImport_GetModuleDict();
    cpy_r_r195 = CPyStatics[82]; /* 'typing' */
    cpy_r_r196 = CPyDict_GetItem(cpy_r_r194, cpy_r_r195);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r197 = CPyStatics[100]; /* '_TypedDict' */
    cpy_r_r198 = CPyObject_GetAttr(cpy_r_r196, cpy_r_r197);
    CPy_DECREF(cpy_r_r196);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r199 = PyTuple_Pack(1, cpy_r_r198);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r200 = CPyModule_typing;
    cpy_r_r201 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r202 = cpy_r_r200 != cpy_r_r201;
    if (cpy_r_r202) goto CPyL74;
    cpy_r_r203 = CPyStatics[82]; /* 'typing' */
    cpy_r_r204 = PyImport_Import(cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL188;
    }
    CPyModule_typing = cpy_r_r204;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r204);
CPyL74: ;
    cpy_r_r205 = PyImport_GetModuleDict();
    cpy_r_r206 = CPyStatics[82]; /* 'typing' */
    cpy_r_r207 = CPyDict_GetItem(cpy_r_r205, cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL188;
    }
    cpy_r_r208 = CPyStatics[101]; /* '_TypedDictMeta' */
    cpy_r_r209 = CPyObject_GetAttr(cpy_r_r207, cpy_r_r208);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL188;
    }
    cpy_r_r210 = CPyStatics[102]; /* '__prepare__' */
    cpy_r_r211 = PyObject_HasAttr(cpy_r_r209, cpy_r_r210);
    if (!cpy_r_r211) goto CPyL81;
    cpy_r_r212 = CPyStatics[108]; /* 'NonDecodedEvent' */
    cpy_r_r213 = CPyStatics[102]; /* '__prepare__' */
    cpy_r_r214 = CPyObject_GetAttr(cpy_r_r209, cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL189;
    }
    PyObject *cpy_r_r215[2] = {cpy_r_r212, cpy_r_r199};
    cpy_r_r216 = (PyObject **)&cpy_r_r215;
    cpy_r_r217 = PyObject_Vectorcall(cpy_r_r214, cpy_r_r216, 2, 0);
    CPy_DECREF(cpy_r_r214);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL189;
    }
    if (likely(PyDict_Check(cpy_r_r217)))
        cpy_r_r218 = cpy_r_r217;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals, "dict", cpy_r_r217);
        goto CPyL189;
    }
    cpy_r_r219 = cpy_r_r218;
    goto CPyL83;
CPyL81: ;
    cpy_r_r220 = PyDict_New();
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL189;
    }
    cpy_r_r219 = cpy_r_r220;
CPyL83: ;
    cpy_r_r221 = PyDict_New();
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r222 = (PyObject *)&PyType_Type;
    cpy_r_r223 = CPyStatics[19]; /* 'name' */
    cpy_r_r224 = CPyDict_SetItem(cpy_r_r221, cpy_r_r223, cpy_r_r222);
    cpy_r_r225 = cpy_r_r224 >= 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 67, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r226 = (PyObject *)&PyList_Type;
    cpy_r_r227 = CPyStatics[27]; /* 'topics' */
    cpy_r_r228 = CPyDict_SetItem(cpy_r_r221, cpy_r_r227, cpy_r_r226);
    cpy_r_r229 = cpy_r_r228 >= 0;
    if (unlikely(!cpy_r_r229)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 68, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r230 = CPyStatic_main___globals;
    cpy_r_r231 = CPyStatics[94]; /* 'HexStr' */
    cpy_r_r232 = CPyDict_GetItem(cpy_r_r230, cpy_r_r231);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 69, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r233 = CPyStatics[30]; /* 'data' */
    cpy_r_r234 = CPyDict_SetItem(cpy_r_r221, cpy_r_r233, cpy_r_r232);
    CPy_DECREF(cpy_r_r232);
    cpy_r_r235 = cpy_r_r234 >= 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 69, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r236 = (PyObject *)&PyType_Type;
    cpy_r_r237 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r238 = CPyDict_SetItem(cpy_r_r221, cpy_r_r237, cpy_r_r236);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 70, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r240 = CPyStatic_main___globals;
    cpy_r_r241 = CPyStatics[92]; /* 'ChecksumAddress' */
    cpy_r_r242 = CPyDict_GetItem(cpy_r_r240, cpy_r_r241);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r243 = CPyStatics[32]; /* 'address' */
    cpy_r_r244 = CPyDict_SetItem(cpy_r_r221, cpy_r_r243, cpy_r_r242);
    CPy_DECREF(cpy_r_r242);
    cpy_r_r245 = cpy_r_r244 >= 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r246 = CPyStatics[108]; /* 'NonDecodedEvent' */
    cpy_r_r247 = CPyStatics[104]; /* '__annotations__' */
    cpy_r_r248 = CPyDict_SetItem(cpy_r_r219, cpy_r_r247, cpy_r_r221);
    CPy_DECREF(cpy_r_r221);
    cpy_r_r249 = cpy_r_r248 >= 0;
    if (unlikely(!cpy_r_r249)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r250 = CPyStatics[105]; /* 'mypyc filler docstring' */
    cpy_r_r251 = CPyStatics[106]; /* '__doc__' */
    cpy_r_r252 = CPyDict_SetItem(cpy_r_r219, cpy_r_r251, cpy_r_r250);
    cpy_r_r253 = cpy_r_r252 >= 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r254 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r255 = CPyStatics[107]; /* '__module__' */
    cpy_r_r256 = CPyDict_SetItem(cpy_r_r219, cpy_r_r255, cpy_r_r254);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL190;
    }
    PyObject *cpy_r_r258[3] = {cpy_r_r246, cpy_r_r199, cpy_r_r219};
    cpy_r_r259 = (PyObject **)&cpy_r_r258;
    cpy_r_r260 = PyObject_Vectorcall(cpy_r_r209, cpy_r_r259, 3, 0);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL192;
    }
    CPy_DECREF(cpy_r_r199);
    CPy_DECREF(cpy_r_r219);
    cpy_r_r261 = CPyStatic_main___globals;
    cpy_r_r262 = CPyStatics[80]; /* 'final' */
    cpy_r_r263 = CPyDict_GetItem(cpy_r_r261, cpy_r_r262);
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 65, CPyStatic_main___globals);
        goto CPyL193;
    }
    PyObject *cpy_r_r264[1] = {cpy_r_r260};
    cpy_r_r265 = (PyObject **)&cpy_r_r264;
    cpy_r_r266 = PyObject_Vectorcall(cpy_r_r263, cpy_r_r265, 1, 0);
    CPy_DECREF(cpy_r_r263);
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL193;
    }
    CPy_DECREF(cpy_r_r260);
    CPyType_main___NonDecodedEvent = (PyTypeObject *)cpy_r_r266;
    CPy_INCREF(CPyType_main___NonDecodedEvent);
    cpy_r_r267 = CPyStatic_main___globals;
    cpy_r_r268 = CPyStatics[108]; /* 'NonDecodedEvent' */
    cpy_r_r269 = CPyDict_SetItem(cpy_r_r267, cpy_r_r268, cpy_r_r266);
    CPy_DECREF(cpy_r_r266);
    cpy_r_r270 = cpy_r_r269 >= 0;
    if (unlikely(!cpy_r_r270)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r271 = (PyObject *)CPyType_main___NonDecodedEvent;
    cpy_r_r272 = CPyStatic_main___globals;
    cpy_r_r273 = CPyStatics[79]; /* 'Union' */
    cpy_r_r274 = CPyDict_GetItem(cpy_r_r272, cpy_r_r273);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r275 = CPyStatic_main___globals;
    cpy_r_r276 = CPyStatics[103]; /* 'DecodedEvent' */
    cpy_r_r277 = CPyDict_GetItem(cpy_r_r275, cpy_r_r276);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_r278 = CPyStatic_main___globals;
    cpy_r_r279 = CPyStatics[108]; /* 'NonDecodedEvent' */
    cpy_r_r280 = CPyDict_GetItem(cpy_r_r278, cpy_r_r279);
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r281.f0 = cpy_r_r277;
    cpy_r_r281.f1 = cpy_r_r280;
    cpy_r_r282 = PyTuple_New(2);
    if (unlikely(cpy_r_r282 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp19 = cpy_r_r281.f0;
    PyTuple_SET_ITEM(cpy_r_r282, 0, __tmp19);
    PyObject *__tmp20 = cpy_r_r281.f1;
    PyTuple_SET_ITEM(cpy_r_r282, 1, __tmp20);
    cpy_r_r283 = PyObject_GetItem(cpy_r_r274, cpy_r_r282);
    CPy_DECREF(cpy_r_r274);
    CPy_DECREF(cpy_r_r282);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r284 = CPyStatic_main___globals;
    cpy_r_r285 = CPyStatics[109]; /* 'Event' */
    cpy_r_r286 = CPyDict_SetItem(cpy_r_r284, cpy_r_r285, cpy_r_r283);
    CPy_DECREF(cpy_r_r283);
    cpy_r_r287 = cpy_r_r286 >= 0;
    if (unlikely(!cpy_r_r287)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r288 = CPyStatics[110]; /* 'logIndex' */
    cpy_r_r289 = CPyStatics[111]; /* 'blockNumber' */
    cpy_r_r290 = CPyStatics[112]; /* 'transactionIndex' */
    CPy_INCREF(cpy_r_r288);
    CPy_INCREF(cpy_r_r289);
    CPy_INCREF(cpy_r_r290);
    cpy_r_r291.f0 = cpy_r_r288;
    cpy_r_r291.f1 = cpy_r_r289;
    cpy_r_r291.f2 = cpy_r_r290;
    CPyStatic_main___ADD_LOG_ENTRIES = cpy_r_r291;
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f0);
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f1);
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f2);
    cpy_r_r292 = CPyStatic_main___globals;
    cpy_r_r293 = CPyStatics[113]; /* 'ADD_LOG_ENTRIES' */
    cpy_r_r294 = PyTuple_New(3);
    if (unlikely(cpy_r_r294 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp21 = cpy_r_r291.f0;
    PyTuple_SET_ITEM(cpy_r_r294, 0, __tmp21);
    PyObject *__tmp22 = cpy_r_r291.f1;
    PyTuple_SET_ITEM(cpy_r_r294, 1, __tmp22);
    PyObject *__tmp23 = cpy_r_r291.f2;
    PyTuple_SET_ITEM(cpy_r_r294, 2, __tmp23);
    cpy_r_r295 = CPyDict_SetItem(cpy_r_r292, cpy_r_r293, cpy_r_r294);
    CPy_DECREF(cpy_r_r294);
    cpy_r_r296 = cpy_r_r295 >= 0;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 77, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r297 = CPyModule_hexbytes;
    cpy_r_r298 = CPyStatics[114]; /* 'HexBytes' */
    cpy_r_r299 = CPyObject_GetAttr(cpy_r_r297, cpy_r_r298);
    if (unlikely(cpy_r_r299 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyStatic_main___HexBytes = cpy_r_r299;
    CPy_INCREF(CPyStatic_main___HexBytes);
    cpy_r_r300 = CPyStatic_main___globals;
    cpy_r_r301 = CPyStatics[114]; /* 'HexBytes' */
    cpy_r_r302 = CPyDict_SetItem(cpy_r_r300, cpy_r_r301, cpy_r_r299);
    CPy_DECREF(cpy_r_r299);
    cpy_r_r303 = cpy_r_r302 >= 0;
    if (unlikely(!cpy_r_r303)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r304 = CPyModule_cchecksum;
    cpy_r_r305 = CPyStatics[115]; /* 'to_checksum_address' */
    cpy_r_r306 = CPyObject_GetAttr(cpy_r_r304, cpy_r_r305);
    if (unlikely(cpy_r_r306 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 81, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyStatic_main___to_checksum_address = cpy_r_r306;
    CPy_INCREF(CPyStatic_main___to_checksum_address);
    cpy_r_r307 = CPyStatic_main___globals;
    cpy_r_r308 = CPyStatics[115]; /* 'to_checksum_address' */
    cpy_r_r309 = CPyDict_SetItem(cpy_r_r307, cpy_r_r308, cpy_r_r306);
    CPy_DECREF(cpy_r_r306);
    cpy_r_r310 = cpy_r_r309 >= 0;
    if (unlikely(!cpy_r_r310)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 81, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r311 = CPyStatic_main___globals;
    cpy_r_r312 = CPyStatics[87]; /* 'auto' */
    cpy_r_r313 = CPyDict_GetItem(cpy_r_r311, cpy_r_r312);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 82, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r314 = CPyStatics[116]; /* 'keccak' */
    cpy_r_r315 = CPyObject_GetAttr(cpy_r_r313, cpy_r_r314);
    CPy_DECREF(cpy_r_r313);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 82, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyStatic_main___keccak = cpy_r_r315;
    CPy_INCREF(CPyStatic_main___keccak);
    cpy_r_r316 = CPyStatic_main___globals;
    cpy_r_r317 = CPyStatics[116]; /* 'keccak' */
    cpy_r_r318 = CPyDict_SetItem(cpy_r_r316, cpy_r_r317, cpy_r_r315);
    CPy_DECREF(cpy_r_r315);
    cpy_r_r319 = cpy_r_r318 >= 0;
    if (unlikely(!cpy_r_r319)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 82, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r320 = CPyModule_functools;
    cpy_r_r321 = CPyStatics[117]; /* 'lru_cache' */
    cpy_r_r322 = CPyObject_GetAttr(cpy_r_r320, cpy_r_r321);
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 83, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyStatic_main___lru_cache = cpy_r_r322;
    CPy_INCREF(CPyStatic_main___lru_cache);
    cpy_r_r323 = CPyStatic_main___globals;
    cpy_r_r324 = CPyStatics[117]; /* 'lru_cache' */
    cpy_r_r325 = CPyDict_SetItem(cpy_r_r323, cpy_r_r324, cpy_r_r322);
    CPy_DECREF(cpy_r_r322);
    cpy_r_r326 = cpy_r_r325 >= 0;
    if (unlikely(!cpy_r_r326)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 83, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r327 = CPyStatics[118]; /* 'tuple(\\[(\\d*)\\])?' */
    cpy_r_r328 = CPyModule_re;
    cpy_r_r329 = CPyStatics[119]; /* 'compile' */
    cpy_r_r330 = CPyObject_GetAttr(cpy_r_r328, cpy_r_r329);
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 84, CPyStatic_main___globals);
        goto CPyL177;
    }
    PyObject *cpy_r_r331[1] = {cpy_r_r327};
    cpy_r_r332 = (PyObject **)&cpy_r_r331;
    cpy_r_r333 = PyObject_Vectorcall(cpy_r_r330, cpy_r_r332, 1, 0);
    CPy_DECREF(cpy_r_r330);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 84, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r334 = CPyStatics[120]; /* 'match' */
    cpy_r_r335 = CPyObject_GetAttr(cpy_r_r333, cpy_r_r334);
    CPy_DECREF(cpy_r_r333);
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 84, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyStatic_main____tuple_match = cpy_r_r335;
    CPy_INCREF(CPyStatic_main____tuple_match);
    cpy_r_r336 = CPyStatic_main___globals;
    cpy_r_r337 = CPyStatics[121]; /* '_tuple_match' */
    cpy_r_r338 = CPyDict_SetItem(cpy_r_r336, cpy_r_r337, cpy_r_r335);
    CPy_DECREF(cpy_r_r335);
    cpy_r_r339 = cpy_r_r338 >= 0;
    if (unlikely(!cpy_r_r339)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 84, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r340 = CPyModule_typing;
    cpy_r_r341 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r342 = cpy_r_r340 != cpy_r_r341;
    if (cpy_r_r342) goto CPyL120;
    cpy_r_r343 = CPyStatics[82]; /* 'typing' */
    cpy_r_r344 = PyImport_Import(cpy_r_r343);
    if (unlikely(cpy_r_r344 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_typing = cpy_r_r344;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r344);
CPyL120: ;
    cpy_r_r345 = PyImport_GetModuleDict();
    cpy_r_r346 = CPyStatics[82]; /* 'typing' */
    cpy_r_r347 = CPyDict_GetItem(cpy_r_r345, cpy_r_r346);
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r348 = CPyStatics[100]; /* '_TypedDict' */
    cpy_r_r349 = CPyObject_GetAttr(cpy_r_r347, cpy_r_r348);
    CPy_DECREF(cpy_r_r347);
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r350 = PyTuple_Pack(1, cpy_r_r349);
    CPy_DECREF(cpy_r_r349);
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r351 = CPyModule_typing;
    cpy_r_r352 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r353 = cpy_r_r351 != cpy_r_r352;
    if (cpy_r_r353) goto CPyL126;
    cpy_r_r354 = CPyStatics[82]; /* 'typing' */
    cpy_r_r355 = PyImport_Import(cpy_r_r354);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL196;
    }
    CPyModule_typing = cpy_r_r355;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r355);
CPyL126: ;
    cpy_r_r356 = PyImport_GetModuleDict();
    cpy_r_r357 = CPyStatics[82]; /* 'typing' */
    cpy_r_r358 = CPyDict_GetItem(cpy_r_r356, cpy_r_r357);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL196;
    }
    cpy_r_r359 = CPyStatics[101]; /* '_TypedDictMeta' */
    cpy_r_r360 = CPyObject_GetAttr(cpy_r_r358, cpy_r_r359);
    CPy_DECREF(cpy_r_r358);
    if (unlikely(cpy_r_r360 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL196;
    }
    cpy_r_r361 = CPyStatics[102]; /* '__prepare__' */
    cpy_r_r362 = PyObject_HasAttr(cpy_r_r360, cpy_r_r361);
    if (!cpy_r_r362) goto CPyL133;
    cpy_r_r363 = CPyStatics[122]; /* 'TopicMapData' */
    cpy_r_r364 = CPyStatics[102]; /* '__prepare__' */
    cpy_r_r365 = CPyObject_GetAttr(cpy_r_r360, cpy_r_r364);
    if (unlikely(cpy_r_r365 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL197;
    }
    PyObject *cpy_r_r366[2] = {cpy_r_r363, cpy_r_r350};
    cpy_r_r367 = (PyObject **)&cpy_r_r366;
    cpy_r_r368 = PyObject_Vectorcall(cpy_r_r365, cpy_r_r367, 2, 0);
    CPy_DECREF(cpy_r_r365);
    if (unlikely(cpy_r_r368 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL197;
    }
    if (likely(PyDict_Check(cpy_r_r368)))
        cpy_r_r369 = cpy_r_r368;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals, "dict", cpy_r_r368);
        goto CPyL197;
    }
    cpy_r_r370 = cpy_r_r369;
    goto CPyL135;
CPyL133: ;
    cpy_r_r371 = PyDict_New();
    if (unlikely(cpy_r_r371 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL197;
    }
    cpy_r_r370 = cpy_r_r371;
CPyL135: ;
    cpy_r_r372 = PyDict_New();
    if (unlikely(cpy_r_r372 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL198;
    }
    cpy_r_r373 = (PyObject *)&PyUnicode_Type;
    cpy_r_r374 = CPyStatics[19]; /* 'name' */
    cpy_r_r375 = CPyDict_SetItem(cpy_r_r372, cpy_r_r374, cpy_r_r373);
    cpy_r_r376 = cpy_r_r375 >= 0;
    if (unlikely(!cpy_r_r376)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 113, CPyStatic_main___globals);
        goto CPyL199;
    }
    cpy_r_r377 = (PyObject *)&PyList_Type;
    cpy_r_r378 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r379 = CPyDict_SetItem(cpy_r_r372, cpy_r_r378, cpy_r_r377);
    cpy_r_r380 = cpy_r_r379 >= 0;
    if (unlikely(!cpy_r_r380)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 114, CPyStatic_main___globals);
        goto CPyL199;
    }
    cpy_r_r381 = CPyStatics[122]; /* 'TopicMapData' */
    cpy_r_r382 = CPyStatics[104]; /* '__annotations__' */
    cpy_r_r383 = CPyDict_SetItem(cpy_r_r370, cpy_r_r382, cpy_r_r372);
    CPy_DECREF(cpy_r_r372);
    cpy_r_r384 = cpy_r_r383 >= 0;
    if (unlikely(!cpy_r_r384)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL198;
    }
    cpy_r_r385 = CPyStatics[105]; /* 'mypyc filler docstring' */
    cpy_r_r386 = CPyStatics[106]; /* '__doc__' */
    cpy_r_r387 = CPyDict_SetItem(cpy_r_r370, cpy_r_r386, cpy_r_r385);
    cpy_r_r388 = cpy_r_r387 >= 0;
    if (unlikely(!cpy_r_r388)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL198;
    }
    cpy_r_r389 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r390 = CPyStatics[107]; /* '__module__' */
    cpy_r_r391 = CPyDict_SetItem(cpy_r_r370, cpy_r_r390, cpy_r_r389);
    cpy_r_r392 = cpy_r_r391 >= 0;
    if (unlikely(!cpy_r_r392)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL198;
    }
    PyObject *cpy_r_r393[3] = {cpy_r_r381, cpy_r_r350, cpy_r_r370};
    cpy_r_r394 = (PyObject **)&cpy_r_r393;
    cpy_r_r395 = PyObject_Vectorcall(cpy_r_r360, cpy_r_r394, 3, 0);
    CPy_DECREF(cpy_r_r360);
    if (unlikely(cpy_r_r395 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL200;
    }
    CPy_DECREF(cpy_r_r350);
    CPy_DECREF(cpy_r_r370);
    CPyType_main___TopicMapData = (PyTypeObject *)cpy_r_r395;
    CPy_INCREF(CPyType_main___TopicMapData);
    cpy_r_r396 = CPyStatic_main___globals;
    cpy_r_r397 = CPyStatics[122]; /* 'TopicMapData' */
    cpy_r_r398 = CPyDict_SetItem(cpy_r_r396, cpy_r_r397, cpy_r_r395);
    CPy_DECREF(cpy_r_r395);
    cpy_r_r399 = cpy_r_r398 >= 0;
    if (unlikely(!cpy_r_r399)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 112, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r400 = (PyObject *)CPyType_main___TopicMapData;
    cpy_r_r401 = CPyStatic_main___globals;
    cpy_r_r402 = CPyStatics[76]; /* 'Mapping' */
    cpy_r_r403 = CPyDict_GetItem(cpy_r_r401, cpy_r_r402);
    if (unlikely(cpy_r_r403 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 117, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r404 = CPyStatic_main___globals;
    cpy_r_r405 = CPyStatics[94]; /* 'HexStr' */
    cpy_r_r406 = CPyDict_GetItem(cpy_r_r404, cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 117, CPyStatic_main___globals);
        goto CPyL201;
    }
    cpy_r_r407 = CPyStatic_main___globals;
    cpy_r_r408 = CPyStatics[122]; /* 'TopicMapData' */
    cpy_r_r409 = CPyDict_GetItem(cpy_r_r407, cpy_r_r408);
    if (unlikely(cpy_r_r409 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 117, CPyStatic_main___globals);
        goto CPyL202;
    }
    cpy_r_r410.f0 = cpy_r_r406;
    cpy_r_r410.f1 = cpy_r_r409;
    cpy_r_r411 = PyTuple_New(2);
    if (unlikely(cpy_r_r411 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp24 = cpy_r_r410.f0;
    PyTuple_SET_ITEM(cpy_r_r411, 0, __tmp24);
    PyObject *__tmp25 = cpy_r_r410.f1;
    PyTuple_SET_ITEM(cpy_r_r411, 1, __tmp25);
    cpy_r_r412 = PyObject_GetItem(cpy_r_r403, cpy_r_r411);
    CPy_DECREF(cpy_r_r403);
    CPy_DECREF(cpy_r_r411);
    if (unlikely(cpy_r_r412 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 117, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r413 = CPyStatic_main___globals;
    cpy_r_r414 = CPyStatics[123]; /* 'TopicMap' */
    cpy_r_r415 = CPyDict_SetItem(cpy_r_r413, cpy_r_r414, cpy_r_r412);
    CPy_DECREF(cpy_r_r412);
    cpy_r_r416 = cpy_r_r415 >= 0;
    if (unlikely(!cpy_r_r416)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 117, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r417 = CPyModule_typing;
    cpy_r_r418 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r419 = cpy_r_r417 != cpy_r_r418;
    if (cpy_r_r419) goto CPyL151;
    cpy_r_r420 = CPyStatics[82]; /* 'typing' */
    cpy_r_r421 = PyImport_Import(cpy_r_r420);
    if (unlikely(cpy_r_r421 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL177;
    }
    CPyModule_typing = cpy_r_r421;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r421);
CPyL151: ;
    cpy_r_r422 = PyImport_GetModuleDict();
    cpy_r_r423 = CPyStatics[82]; /* 'typing' */
    cpy_r_r424 = CPyDict_GetItem(cpy_r_r422, cpy_r_r423);
    if (unlikely(cpy_r_r424 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r425 = CPyStatics[100]; /* '_TypedDict' */
    cpy_r_r426 = CPyObject_GetAttr(cpy_r_r424, cpy_r_r425);
    CPy_DECREF(cpy_r_r424);
    if (unlikely(cpy_r_r426 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r427 = PyTuple_Pack(1, cpy_r_r426);
    CPy_DECREF(cpy_r_r426);
    if (unlikely(cpy_r_r427 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r428 = CPyModule_typing;
    cpy_r_r429 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r430 = cpy_r_r428 != cpy_r_r429;
    if (cpy_r_r430) goto CPyL157;
    cpy_r_r431 = CPyStatics[82]; /* 'typing' */
    cpy_r_r432 = PyImport_Import(cpy_r_r431);
    if (unlikely(cpy_r_r432 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL203;
    }
    CPyModule_typing = cpy_r_r432;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r432);
CPyL157: ;
    cpy_r_r433 = PyImport_GetModuleDict();
    cpy_r_r434 = CPyStatics[82]; /* 'typing' */
    cpy_r_r435 = CPyDict_GetItem(cpy_r_r433, cpy_r_r434);
    if (unlikely(cpy_r_r435 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL203;
    }
    cpy_r_r436 = CPyStatics[101]; /* '_TypedDictMeta' */
    cpy_r_r437 = CPyObject_GetAttr(cpy_r_r435, cpy_r_r436);
    CPy_DECREF(cpy_r_r435);
    if (unlikely(cpy_r_r437 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL203;
    }
    cpy_r_r438 = CPyStatics[102]; /* '__prepare__' */
    cpy_r_r439 = PyObject_HasAttr(cpy_r_r437, cpy_r_r438);
    if (!cpy_r_r439) goto CPyL164;
    cpy_r_r440 = CPyStatics[124]; /* '_TraceStep' */
    cpy_r_r441 = CPyStatics[102]; /* '__prepare__' */
    cpy_r_r442 = CPyObject_GetAttr(cpy_r_r437, cpy_r_r441);
    if (unlikely(cpy_r_r442 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL204;
    }
    PyObject *cpy_r_r443[2] = {cpy_r_r440, cpy_r_r427};
    cpy_r_r444 = (PyObject **)&cpy_r_r443;
    cpy_r_r445 = PyObject_Vectorcall(cpy_r_r442, cpy_r_r444, 2, 0);
    CPy_DECREF(cpy_r_r442);
    if (unlikely(cpy_r_r445 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL204;
    }
    if (likely(PyDict_Check(cpy_r_r445)))
        cpy_r_r446 = cpy_r_r445;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals, "dict", cpy_r_r445);
        goto CPyL204;
    }
    cpy_r_r447 = cpy_r_r446;
    goto CPyL166;
CPyL164: ;
    cpy_r_r448 = PyDict_New();
    if (unlikely(cpy_r_r448 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL204;
    }
    cpy_r_r447 = cpy_r_r448;
CPyL166: ;
    cpy_r_r449 = PyDict_New();
    if (unlikely(cpy_r_r449 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL205;
    }
    cpy_r_r450 = (PyObject *)&PyLong_Type;
    cpy_r_r451 = CPyStatics[35]; /* 'depth' */
    cpy_r_r452 = CPyDict_SetItem(cpy_r_r449, cpy_r_r451, cpy_r_r450);
    cpy_r_r453 = cpy_r_r452 >= 0;
    if (unlikely(!cpy_r_r453)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 305, CPyStatic_main___globals);
        goto CPyL206;
    }
    cpy_r_r454 = (PyObject *)&PyUnicode_Type;
    cpy_r_r455 = CPyStatics[36]; /* 'op' */
    cpy_r_r456 = CPyDict_SetItem(cpy_r_r449, cpy_r_r455, cpy_r_r454);
    cpy_r_r457 = cpy_r_r456 >= 0;
    if (unlikely(!cpy_r_r457)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 306, CPyStatic_main___globals);
        goto CPyL206;
    }
    cpy_r_r458 = (PyObject *)&PyList_Type;
    cpy_r_r459 = CPyStatics[40]; /* 'stack' */
    cpy_r_r460 = CPyDict_SetItem(cpy_r_r449, cpy_r_r459, cpy_r_r458);
    cpy_r_r461 = cpy_r_r460 >= 0;
    if (unlikely(!cpy_r_r461)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 307, CPyStatic_main___globals);
        goto CPyL206;
    }
    cpy_r_r462 = (PyObject *)&PyList_Type;
    cpy_r_r463 = CPyStatics[46]; /* 'memory' */
    cpy_r_r464 = CPyDict_SetItem(cpy_r_r449, cpy_r_r463, cpy_r_r462);
    cpy_r_r465 = cpy_r_r464 >= 0;
    if (unlikely(!cpy_r_r465)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 308, CPyStatic_main___globals);
        goto CPyL206;
    }
    cpy_r_r466 = CPyStatics[124]; /* '_TraceStep' */
    cpy_r_r467 = CPyStatics[104]; /* '__annotations__' */
    cpy_r_r468 = CPyDict_SetItem(cpy_r_r447, cpy_r_r467, cpy_r_r449);
    CPy_DECREF(cpy_r_r449);
    cpy_r_r469 = cpy_r_r468 >= 0;
    if (unlikely(!cpy_r_r469)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL205;
    }
    cpy_r_r470 = CPyStatics[105]; /* 'mypyc filler docstring' */
    cpy_r_r471 = CPyStatics[106]; /* '__doc__' */
    cpy_r_r472 = CPyDict_SetItem(cpy_r_r447, cpy_r_r471, cpy_r_r470);
    cpy_r_r473 = cpy_r_r472 >= 0;
    if (unlikely(!cpy_r_r473)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL205;
    }
    cpy_r_r474 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r475 = CPyStatics[107]; /* '__module__' */
    cpy_r_r476 = CPyDict_SetItem(cpy_r_r447, cpy_r_r475, cpy_r_r474);
    cpy_r_r477 = cpy_r_r476 >= 0;
    if (unlikely(!cpy_r_r477)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL205;
    }
    PyObject *cpy_r_r478[3] = {cpy_r_r466, cpy_r_r427, cpy_r_r447};
    cpy_r_r479 = (PyObject **)&cpy_r_r478;
    cpy_r_r480 = PyObject_Vectorcall(cpy_r_r437, cpy_r_r479, 3, 0);
    CPy_DECREF(cpy_r_r437);
    if (unlikely(cpy_r_r480 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL207;
    }
    CPy_DECREF(cpy_r_r427);
    CPy_DECREF(cpy_r_r447);
    CPyType_main____TraceStep = (PyTypeObject *)cpy_r_r480;
    CPy_INCREF(CPyType_main____TraceStep);
    cpy_r_r481 = CPyStatic_main___globals;
    cpy_r_r482 = CPyStatics[124]; /* '_TraceStep' */
    cpy_r_r483 = CPyDict_SetItem(cpy_r_r481, cpy_r_r482, cpy_r_r480);
    CPy_DECREF(cpy_r_r480);
    cpy_r_r484 = cpy_r_r483 >= 0;
    if (unlikely(!cpy_r_r484)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 304, CPyStatic_main___globals);
        goto CPyL177;
    }
    cpy_r_r485 = (PyObject *)CPyType_main____TraceStep;
    return 1;
CPyL177: ;
    cpy_r_r486 = 2;
    return cpy_r_r486;
CPyL178: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL177;
CPyL179: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL177;
CPyL180: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL177;
CPyL181: ;
    CPy_DecRef(cpy_r_r102);
    goto CPyL177;
CPyL182: ;
    CPy_DecRef(cpy_r_r122);
    goto CPyL177;
CPyL183: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r132);
    goto CPyL177;
CPyL184: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r142);
    goto CPyL177;
CPyL185: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r144);
    goto CPyL177;
CPyL186: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r142);
    goto CPyL177;
CPyL187: ;
    CPy_DecRef(cpy_r_r177);
    goto CPyL177;
CPyL188: ;
    CPy_DecRef(cpy_r_r199);
    goto CPyL177;
CPyL189: ;
    CPy_DecRef(cpy_r_r199);
    CPy_DecRef(cpy_r_r209);
    goto CPyL177;
CPyL190: ;
    CPy_DecRef(cpy_r_r199);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r219);
    goto CPyL177;
CPyL191: ;
    CPy_DecRef(cpy_r_r199);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r219);
    CPy_DecRef(cpy_r_r221);
    goto CPyL177;
CPyL192: ;
    CPy_DecRef(cpy_r_r199);
    CPy_DecRef(cpy_r_r219);
    goto CPyL177;
CPyL193: ;
    CPy_DecRef(cpy_r_r260);
    goto CPyL177;
CPyL194: ;
    CPy_DecRef(cpy_r_r274);
    goto CPyL177;
CPyL195: ;
    CPy_DecRef(cpy_r_r274);
    CPy_DecRef(cpy_r_r277);
    goto CPyL177;
CPyL196: ;
    CPy_DecRef(cpy_r_r350);
    goto CPyL177;
CPyL197: ;
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r360);
    goto CPyL177;
CPyL198: ;
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r360);
    CPy_DecRef(cpy_r_r370);
    goto CPyL177;
CPyL199: ;
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r360);
    CPy_DecRef(cpy_r_r370);
    CPy_DecRef(cpy_r_r372);
    goto CPyL177;
CPyL200: ;
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r370);
    goto CPyL177;
CPyL201: ;
    CPy_DecRef(cpy_r_r403);
    goto CPyL177;
CPyL202: ;
    CPy_DecRef(cpy_r_r403);
    CPy_DecRef(cpy_r_r406);
    goto CPyL177;
CPyL203: ;
    CPy_DecRef(cpy_r_r427);
    goto CPyL177;
CPyL204: ;
    CPy_DecRef(cpy_r_r427);
    CPy_DecRef(cpy_r_r437);
    goto CPyL177;
CPyL205: ;
    CPy_DecRef(cpy_r_r427);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r447);
    goto CPyL177;
CPyL206: ;
    CPy_DecRef(cpy_r_r427);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r447);
    CPy_DecRef(cpy_r_r449);
    goto CPyL177;
CPyL207: ;
    CPy_DecRef(cpy_r_r427);
    CPy_DecRef(cpy_r_r447);
    goto CPyL177;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_eth_event = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_eth_event___main = Py_None;
    CPyModule_eth_event___main = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_functools = Py_None;
    CPyModule_re = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_cchecksum = Py_None;
    CPyModule_eth_abi = Py_None;
    CPyModule_hexbytes = Py_None;
    CPyModule_eth_abi___exceptions = Py_None;
    CPyModule_eth_hash = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_eth_event___conditional_imports = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[144];
const char * const CPyLit_Str[] = {
    "\006\bbuiltins\bABIError\nEventError\016StructLogError\fUnknownEvent\ndecode_log",
    "\004\vdecode_logs\027decode_traceTransaction\rget_log_topic\rget_topic_map",
    "\002\016eth_event.main0Must be a dictionary of the specific event\'s ABI",
    "\005\tTypeError\tanonymous$Anonymous events do not have a topic\006inputs\004name",
    "\b\001(\001,\001)\004type\005event\bKeyError\vInvalid ABI\006topics",
    "\001 Cannot decode an anonymous event",
    "\004\'Event topic is not present in given ABI\004data\adecoded\aaddress",
    "\006\rInvalid event\036Log contains undecodable event\005depth\002op\006CREATE\aCREATE2",
    "\a\0020x\005stack\003LOG\026StructLog has no stack\nIndexError\017Malformed stack\000",
    "\b\006memory\003hex\020Malformed memory\005group\001[\001]\ncomponents\aindexed",
    "\001\177Event log does not contain enough topics for the given ABI - this is usually because an event argument is not marked as indexed",
    "\001\201\vEvent log contains more topics than expected for the given ABI - this is usually because an event argument is incorrectly marked as indexed",
    "\003\006decode\025InsufficientDataBytes\"Event data has insufficient length",
    "\003\024NonEmptyPaddingBytes!Malformed data field in event log\016InvalidPointer",
    "\002\rOverflowError)Cannot decode event due to overflow error",
    "\a\016NoEntriesFound\005value\tfunctools\002re\021eth_event/main.py\b<module>\003Any",
    "\t\bCallable\004Dict\005Final\004List\aLiteral\aMapping\bOptional\tTypedDict\005Union",
    "\a\005final\boverload\006typing\tcchecksum\aeth_abi\bhexbytes\022eth_abi.exceptions",
    "\006\004auto\beth_hash\023ABIComponentIndexed\nABIElement\bABIEvent\017ChecksumAddress",
    "\005\nHexAddress\006HexStr\neth_typing\035eth_event.conditional_imports\tException",
    "\005\017__mypyc_attrs__\b__dict__\n_TypedDict\016_TypedDictMeta\v__prepare__",
    "\004\fDecodedEvent\017__annotations__\026mypyc filler docstring\a__doc__",
    "\005\n__module__\017NonDecodedEvent\005Event\blogIndex\vblockNumber",
    "\005\020transactionIndex\017ADD_LOG_ENTRIES\bHexBytes\023to_checksum_address\006keccak",
    "\006\tlru_cache\021tuple(\\[(\\d*)\\])\?\acompile\005match\f_tuple_match\fTopicMapData",
    "\002\bTopicMap\n_TraceStep",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\006-40\00016\000-3\000-1\0001\0002",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    13, 9, 4, 5, 6, 7, 8, 9, 10, 11, 12, 3, 66, 66, 66, 3, 67, 67, 67,
    2, 132, 133, 12, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 3,
    83, 83, 83, 3, 84, 84, 84, 3, 85, 85, 85, 3, 136, 137, 138, 3, 57, 64,
    59, 1, 87, 6, 89, 90, 91, 92, 93, 94, 1, 61
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_eth_event_internal = NULL;
CPyModule *CPyModule_eth_event;
PyObject *CPyStatic_eth_event___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_eth_event___main_internal = NULL;
CPyModule *CPyModule_eth_event___main;
PyObject *CPyStatic_main___globals;
CPyModule *CPyModule_functools;
CPyModule *CPyModule_re;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_cchecksum;
CPyModule *CPyModule_eth_abi;
CPyModule *CPyModule_hexbytes;
CPyModule *CPyModule_eth_abi___exceptions;
CPyModule *CPyModule_eth_hash;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_eth_event___conditional_imports;
char CPyDef_eth_event_____top_level__(void);
tuple_T3OOO CPyStatic_main___ADD_LOG_ENTRIES = { NULL, NULL, NULL };
PyObject *CPyStatic_main___HexBytes = NULL;
PyObject *CPyStatic_main___to_checksum_address = NULL;
PyObject *CPyStatic_main___keccak = NULL;
PyObject *CPyStatic_main___lru_cache = NULL;
PyObject *CPyStatic_main____tuple_match = NULL;
PyTypeObject *CPyType_main___ABIError;
PyTypeObject *CPyType_main___EventError;
PyTypeObject *CPyType_main___StructLogError;
PyTypeObject *CPyType_main___UnknownEvent;
PyTypeObject *CPyType_main___DecodedEvent;
PyTypeObject *CPyType_main___NonDecodedEvent;
PyTypeObject *CPyType_main___TopicMapData;
PyTypeObject *CPyType_main____TraceStep;
PyObject *CPyDef_main___get_log_topic(PyObject *cpy_r_event_abi);
PyObject *CPyPy_main___get_log_topic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main___get_topic_map(PyObject *cpy_r_abi);
PyObject *CPyPy_main___get_topic_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main___decode_log(PyObject *cpy_r_log, PyObject *cpy_r_topic_map, PyObject *cpy_r___checksum_func);
PyObject *CPyPy_main___decode_log(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main___decode_logs(PyObject *cpy_r_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded);
PyObject *CPyPy_main___decode_logs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_main____append_additional_log_data(PyObject *cpy_r_log, PyObject *cpy_r_event);
PyObject *CPyPy_main____append_additional_log_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main___decode_traceTransaction(PyObject *cpy_r_struct_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded, PyObject *cpy_r_initial_address);
PyObject *CPyPy_main___decode_traceTransaction(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main____0xstring(PyObject *cpy_r_value);
PyObject *CPyPy_main____0xstring(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main____params(PyObject *cpy_r_abi_params);
PyObject *CPyPy_main____params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main____decode(PyObject *cpy_r_inputs, PyObject *cpy_r_topics, PyObject *cpy_r_data);
PyObject *CPyPy_main____decode(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_main_____top_level__(void);

static struct export_table_7eaee132373d5bf56d84 exports = {
    &CPyDef_eth_event_____top_level__,
    &CPyStatic_main___ADD_LOG_ENTRIES,
    &CPyStatic_main___HexBytes,
    &CPyStatic_main___to_checksum_address,
    &CPyStatic_main___keccak,
    &CPyStatic_main___lru_cache,
    &CPyStatic_main____tuple_match,
    &CPyType_main___ABIError,
    &CPyType_main___EventError,
    &CPyType_main___StructLogError,
    &CPyType_main___UnknownEvent,
    &CPyType_main___DecodedEvent,
    &CPyType_main___NonDecodedEvent,
    &CPyType_main___TopicMapData,
    &CPyType_main____TraceStep,
    &CPyDef_main___get_log_topic,
    &CPyDef_main___get_topic_map,
    &CPyDef_main___decode_log,
    &CPyDef_main___decode_logs,
    &CPyDef_main____append_additional_log_data,
    &CPyDef_main___decode_traceTransaction,
    &CPyDef_main____0xstring,
    &CPyDef_main____params,
    &CPyDef_main____decode,
    &CPyDef_main_____top_level__,
};

PyMODINIT_FUNC PyInit_7eaee132373d5bf56d84__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "7eaee132373d5bf56d84__mypyc", NULL, -1, NULL, NULL };
    int res;
    PyObject *capsule;
    PyObject *tmp;
    static PyObject *module;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&def);
    if (!module) {
        goto fail;
    }
    
    capsule = PyCapsule_New(&exports, "7eaee132373d5bf56d84__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_eth_event(void);
    capsule = PyCapsule_New((void *)CPyInit_eth_event, "7eaee132373d5bf56d84__mypyc.init_eth_event", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_eth_event", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_eth_event___main(void);
    capsule = PyCapsule_New((void *)CPyInit_eth_event___main, "7eaee132373d5bf56d84__mypyc.init_eth_event___main", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_eth_event___main", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
