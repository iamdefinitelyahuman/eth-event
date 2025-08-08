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
static int eth_event_exec(PyObject *module)
{
    PyObject* modname = NULL;
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
    return 0;
    fail:
    Py_CLEAR(CPyModule_eth_event_internal);
    Py_CLEAR(modname);
    return -1;
}
static PyMethodDef eth_eventmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef eth_eventmodule = {
    PyModuleDef_HEAD_INIT,
    "eth_event",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    eth_eventmodule_methods,
    NULL,
};

PyObject *CPyInit_eth_event(void)
{
    if (CPyModule_eth_event_internal) {
        Py_INCREF(CPyModule_eth_event_internal);
        return CPyModule_eth_event_internal;
    }
    CPyModule_eth_event_internal = PyModule_Create(&eth_eventmodule);
    if (unlikely(CPyModule_eth_event_internal == NULL))
        goto fail;
    if (eth_event_exec(CPyModule_eth_event_internal) != 0)
        goto fail;
    return CPyModule_eth_event_internal;
    fail:
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
    cpy_r_r5 = CPyStatics[138]; /* ('ABIError', 'EventError', 'StructLogError',
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

static int main_exec(PyObject *module)
{
    PyObject* modname = NULL;
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
    return 0;
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
    Py_CLEAR(CPyType_main___EventData);
    Py_CLEAR(CPyType_main___DecodedEvent);
    Py_CLEAR(CPyType_main___NonDecodedEvent);
    Py_CLEAR(CPyType_main___TopicMapData);
    Py_CLEAR(CPyType_main____TraceStep);
    return -1;
}
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
    0,       /* size of per-interpreter state of the module */
    mainmodule_methods,
    NULL,
};

PyObject *CPyInit_eth_event___main(void)
{
    if (CPyModule_eth_event___main_internal) {
        Py_INCREF(CPyModule_eth_event___main_internal);
        return CPyModule_eth_event___main_internal;
    }
    CPyModule_eth_event___main_internal = PyModule_Create(&mainmodule);
    if (unlikely(CPyModule_eth_event___main_internal == NULL))
        goto fail;
    if (main_exec(CPyModule_eth_event___main_internal) != 0)
        goto fail;
    return CPyModule_eth_event___main_internal;
    fail:
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
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 114, CPyStatic_main___globals);
        goto CPyL30;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL6;
    cpy_r_r4 = CPyStatics[14]; /* "Must be a dictionary of the specific event's ABI" */
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 115, CPyStatic_main___globals);
        goto CPyL30;
    }
    PyObject *cpy_r_r8[1] = {cpy_r_r4};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 115, CPyStatic_main___globals);
        goto CPyL30;
    }
    CPy_Raise(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 115, CPyStatic_main___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r11 = CPyStatics[16]; /* 'anonymous' */
    cpy_r_r12 = CPyDict_GetWithNone(cpy_r_event_abi, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 116, CPyStatic_main___globals);
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
    CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 116, CPyStatic_main___globals, "bool or None", cpy_r_r12);
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
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 116, CPyStatic_main___globals);
        goto CPyL30;
    }
    if (!cpy_r_r16) goto CPyL15;
    cpy_r_r17 = CPyStatics[17]; /* 'Anonymous events do not have a topic' */
    cpy_r_r18 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r19[1] = {cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 117, CPyStatic_main___globals);
        goto CPyL30;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_main___ABIError))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 117, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r21);
        goto CPyL30;
    }
    CPy_Raise(cpy_r_r22);
    CPy_DECREF_NO_IMM(cpy_r_r22);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 117, CPyStatic_main___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r23 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_event_abi, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 119, CPyStatic_main___globals);
        goto CPyL30;
    }
    if (likely(PyList_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 119, CPyStatic_main___globals, "list", cpy_r_r24);
        goto CPyL30;
    }
    cpy_r_r26 = CPyDef_main____params(cpy_r_r25);
    CPy_DECREF_NO_IMM(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 119, CPyStatic_main___globals);
        goto CPyL30;
    }
    cpy_r_r27 = CPyStatics[19]; /* 'name' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_event_abi, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 120, CPyStatic_main___globals);
        goto CPyL32;
    }
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 120, CPyStatic_main___globals, "str", cpy_r_r28);
        goto CPyL32;
    }
    cpy_r_r30 = CPyStatics[20]; /* '(' */
    cpy_r_r31 = CPyStatics[21]; /* ',' */
    cpy_r_r32 = PyUnicode_Join(cpy_r_r31, cpy_r_r26);
    CPy_DECREF_NO_IMM(cpy_r_r26);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 120, CPyStatic_main___globals);
        goto CPyL33;
    }
    cpy_r_r33 = CPyStatics[22]; /* ')' */
    cpy_r_r34 = CPyStr_Build(4, cpy_r_r29, cpy_r_r30, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 120, CPyStatic_main___globals);
        goto CPyL30;
    }
    cpy_r_r35 = PyUnicode_AsUTF8String(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 120, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 122, CPyStatic_main___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL26: ;
    PyObject *cpy_r_r38[1] = {cpy_r_r35};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = PyObject_Vectorcall(cpy_r_r36, cpy_r_r39, 1, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 122, CPyStatic_main___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r35);
    if (likely(PyBytes_Check(cpy_r_r40) || PyByteArray_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 122, CPyStatic_main___globals, "bytes", cpy_r_r40);
        goto CPyL30;
    }
    cpy_r_r42 = CPyDef_main____0xstring(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 122, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "get_log_topic", 100, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 162, CPyStatic_main___globals);
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
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 162, CPyStatic_main___globals, "dict", cpy_r_r11);
        goto CPyL36;
    }
    cpy_r_r13 = CPyStatics[23]; /* 'type' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 165, CPyStatic_main___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 165, CPyStatic_main___globals, "str", cpy_r_r14);
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
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 165, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 165, CPyStatic_main___globals);
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
    CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 165, CPyStatic_main___globals, "bool or None", cpy_r_r24);
    goto CPyL37;
__LL2: ;
    cpy_r_r26 = PyObject_Not(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 165, CPyStatic_main___globals);
        goto CPyL37;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL38;
CPyL16: ;
    cpy_r_r29 = CPyDef_main___get_log_topic(cpy_r_r12);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 163, CPyStatic_main___globals);
        goto CPyL37;
    }
    cpy_r_r30 = CPyStatics[19]; /* 'name' */
    cpy_r_r31 = CPyStatics[19]; /* 'name' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r12, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 163, CPyStatic_main___globals);
        goto CPyL39;
    }
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 163, CPyStatic_main___globals, "str", cpy_r_r32);
        goto CPyL39;
    }
    cpy_r_r34 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r35 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r12, cpy_r_r35);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 163, CPyStatic_main___globals);
        goto CPyL40;
    }
    cpy_r_r37 = CPyDict_Build(2, cpy_r_r30, cpy_r_r33, cpy_r_r34, cpy_r_r36);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 163, CPyStatic_main___globals);
        goto CPyL41;
    }
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r0, cpy_r_r29, cpy_r_r37);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 162, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 167, CPyStatic_main___globals);
        goto CPyL33;
    }
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 167, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 168, CPyStatic_main___globals);
        goto CPyL33;
    }
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_main___ABIError))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 168, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r56);
        goto CPyL33;
    }
    CPy_Raise(cpy_r_r57);
    CPy_DecRef(cpy_r_r57);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 168, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "get_topic_map", 135, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 174, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 215, CPyStatic_main___globals);
        goto CPyL54;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 215, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 217, CPyStatic_main___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_main___EventError))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 217, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r11);
        goto CPyL52;
    }
    CPy_Raise(cpy_r_r12);
    CPy_DECREF_NO_IMM(cpy_r_r12);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 217, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r13 = PyObject_GetIter(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 219, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 219, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r16 = PySequence_List(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 219, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 219, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_data_topics = cpy_r_r16;
    cpy_r_r22 = CPyDef_main____0xstring(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 220, CPyStatic_main___globals);
        goto CPyL60;
    }
    cpy_r_r23 = PySequence_Contains(cpy_r_topic_map, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 221, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 222, CPyStatic_main___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_main___UnknownEvent))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 222, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r31);
        goto CPyL52;
    }
    CPy_Raise(cpy_r_r32);
    CPy_DECREF_NO_IMM(cpy_r_r32);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 222, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r33 = PyObject_GetItem(cpy_r_topic_map, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 224, CPyStatic_main___globals);
        goto CPyL60;
    }
    if (likely(PyDict_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 224, CPyStatic_main___globals, "dict", cpy_r_r33);
        goto CPyL60;
    }
    cpy_r_r35 = CPyStatics[19]; /* 'name' */
    cpy_r_r36 = CPyStatics[19]; /* 'name' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 228, CPyStatic_main___globals);
        goto CPyL63;
    }
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 228, CPyStatic_main___globals, "str", cpy_r_r37);
        goto CPyL63;
    }
    cpy_r_r39 = CPyStatics[30]; /* 'data' */
    cpy_r_r40 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r34, cpy_r_r40);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 229, CPyStatic_main___globals);
        goto CPyL64;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 229, CPyStatic_main___globals, "list", cpy_r_r41);
        goto CPyL64;
    }
    cpy_r_r43 = CPyStatics[30]; /* 'data' */
    cpy_r_r44 = PyObject_GetItem(cpy_r_log, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 229, CPyStatic_main___globals);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_data_topics)))
        cpy_r_r45 = cpy_r_data_topics;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 229, CPyStatic_main___globals, "list", cpy_r_data_topics);
        goto CPyL66;
    }
    cpy_r_r46 = CPyDef_main____decode(cpy_r_r42, cpy_r_r45, cpy_r_r44);
    CPy_DECREF_NO_IMM(cpy_r_r42);
    CPy_DECREF_NO_IMM(cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 229, CPyStatic_main___globals);
        goto CPyL67;
    }
    cpy_r_r47 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r48 = CPyStatics[32]; /* 'address' */
    cpy_r_r49 = CPyStatics[32]; /* 'address' */
    cpy_r_r50 = PyObject_GetItem(cpy_r_log, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 231, CPyStatic_main___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_r50};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_Vectorcall(cpy_r___checksum_func, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r___checksum_func);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 231, CPyStatic_main___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r50);
    cpy_r_r54 = 1 ? Py_True : Py_False;
    cpy_r_r55 = CPyDict_Build(4, cpy_r_r35, cpy_r_r38, cpy_r_r39, cpy_r_r46, cpy_r_r47, cpy_r_r54, cpy_r_r48, cpy_r_r53);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF_NO_IMM(cpy_r_r46);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 227, CPyStatic_main___globals);
        goto CPyL42;
    }
    cpy_r_r56 = CPyDef_main____append_additional_log_data(cpy_r_log, cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 233, CPyStatic_main___globals);
        goto CPyL70;
    }
    return cpy_r_r55;
CPyL42: ;
    cpy_r_r57 = CPy_CatchError();
    cpy_r_r58 = CPyModule_builtins;
    cpy_r_r59 = CPyStatics[25]; /* 'KeyError' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 235, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 236, CPyStatic_main___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_main___EventError))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 236, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r67);
        goto CPyL50;
    }
    CPy_Raise(cpy_r_r68);
    CPy_DecRef(cpy_r_r68);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 236, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "decode_log", 171, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 285, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 289, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 289, CPyStatic_main___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL9: ;
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 1, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 289, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 292, CPyStatic_main___globals);
        goto CPyL44;
    }
    cpy_r_r20 = CPyStatics[27]; /* 'topics' */
    cpy_r_r21 = PyObject_GetItem(cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 292, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r22 = PyObject_GetIter(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 292, CPyStatic_main___globals);
        goto CPyL45;
    }
CPyL15: ;
    cpy_r_r23 = PyIter_Next(cpy_r_r22);
    if (cpy_r_r23 == NULL) goto CPyL46;
    cpy_r_r24 = CPyDef_main____0xstring(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 292, CPyStatic_main___globals);
        goto CPyL47;
    }
    cpy_r_r25 = PyList_Append(cpy_r_r19, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 292, CPyStatic_main___globals);
        goto CPyL47;
    } else
        goto CPyL15;
CPyL18: ;
    cpy_r_r27 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 292, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = cpy_r_r30 != 0;
    if (!cpy_r_r31) goto CPyL25;
    cpy_r_r32 = CPyList_GetItemShort(cpy_r_r19, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 293, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r33 = PySequence_Contains(cpy_r_topic_map, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 293, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 294, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r37 = PyList_Append(cpy_r_r0, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 294, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 296, CPyStatic_main___globals);
        goto CPyL39;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_main___UnknownEvent))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_logs", 296, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r43);
        goto CPyL39;
    }
    CPy_Raise(cpy_r_r44);
    CPy_DECREF_NO_IMM(cpy_r_r44);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 296, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 301, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r50 = CPyDef_main____0xstring(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 301, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r51 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r52 = CPyStatics[32]; /* 'address' */
    cpy_r_r53 = CPyStatics[32]; /* 'address' */
    cpy_r_r54 = PyObject_GetItem(cpy_r_r18, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 303, CPyStatic_main___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r55[1] = {cpy_r_r54};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r56, 1, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 303, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 298, CPyStatic_main___globals);
        goto CPyL44;
    }
    cpy_r_r61 = CPyDef_main____append_additional_log_data(cpy_r_r18, cpy_r_r60);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 305, CPyStatic_main___globals);
        goto CPyL54;
    }
    cpy_r_r62 = PyList_Append(cpy_r_r0, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 306, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "decode_logs", 251, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 312, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 312, CPyStatic_main___globals);
        goto CPyL12;
    }
CPyL4: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL13;
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_append_additional_log_data", 312, CPyStatic_main___globals, "str", cpy_r_r4);
        goto CPyL14;
    }
    cpy_r_r6 = PySequence_Contains(cpy_r_log, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 313, CPyStatic_main___globals);
        goto CPyL15;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL16;
    cpy_r_r9 = PyObject_GetItem(cpy_r_log, cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 314, CPyStatic_main___globals);
        goto CPyL15;
    }
    cpy_r_r10 = CPyDict_SetItem(cpy_r_event, cpy_r_r5, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 314, CPyStatic_main___globals);
        goto CPyL14;
    } else
        goto CPyL4;
CPyL10: ;
    cpy_r_r12 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 312, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 311, CPyStatic_main___globals);
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
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_address_list;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_last_step;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_i;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    int64_t cpy_r_r38;
    char cpy_r_r39;
    int64_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyPtr cpy_r_r68;
    int64_t cpy_r_r69;
    CPyTagged cpy_r_r70;
    char cpy_r_r71;
    int64_t cpy_r_r72;
    CPyPtr cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyTagged cpy_r_r84;
    int64_t cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    CPyTagged cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
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
    PyObject **cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_address;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
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
    PyObject **cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyTagged cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    CPyTagged cpy_r_r131;
    int64_t cpy_r_r132;
    char cpy_r_r133;
    int64_t cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject **cpy_r_r153;
    PyObject *cpy_r_r154;
    CPyTagged cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject **cpy_r_r160;
    PyObject *cpy_r_r161;
    CPyTagged cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    CPyTagged cpy_r_r165;
    CPyTagged cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    CPyPtr cpy_r_r173;
    int64_t cpy_r_r174;
    PyObject *cpy_r_r175;
    CPyTagged cpy_r_r176;
    CPyPtr cpy_r_r177;
    int64_t cpy_r_r178;
    CPyTagged cpy_r_r179;
    char cpy_r_r180;
    int64_t cpy_r_r181;
    CPyPtr cpy_r_r182;
    CPyPtr cpy_r_r183;
    int64_t cpy_r_r184;
    CPyPtr cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    CPyTagged cpy_r_r189;
    tuple_T3OOO cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject **cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    tuple_T2OO cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject **cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    PyObject **cpy_r_r227;
    PyObject *cpy_r_r228;
    CPyTagged cpy_r_r229;
    CPyTagged cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject **cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    tuple_T3OOO cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    tuple_T2OO cpy_r_r249;
    PyObject *cpy_r_r250;
    char cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject **cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    char cpy_r_r259;
    CPyPtr cpy_r_r260;
    int64_t cpy_r_r261;
    CPyTagged cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    int32_t cpy_r_r265;
    char cpy_r_r266;
    char cpy_r_r267;
    char cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject **cpy_r_r272;
    PyObject *cpy_r_r273;
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
    int32_t cpy_r_r284;
    char cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    char cpy_r_r288;
    PyObject *cpy_r_r289;
    CPyPtr cpy_r_r290;
    int64_t cpy_r_r291;
    CPyTagged cpy_r_r292;
    char cpy_r_r293;
    char cpy_r_r294;
    PyObject *cpy_r_r295;
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
    int32_t cpy_r_r311;
    char cpy_r_r312;
    CPyTagged cpy_r_r313;
    PyObject *cpy_r_r314;
    if (cpy_r_allow_undecoded != 2) goto CPyL2;
    cpy_r_allow_undecoded = 0;
CPyL2: ;
    if (cpy_r_initial_address != NULL) goto CPyL190;
    cpy_r_r0 = Py_None;
    cpy_r_initial_address = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyStatic_main___to_checksum_address;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL191;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 356, CPyStatic_main___globals);
        goto CPyL189;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r3 = CPyStatic_main___lru_cache;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL192;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"lru_cache\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 356, CPyStatic_main___globals);
        goto CPyL189;
    }
    CPy_Unreachable();
CPyL10: ;
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 1, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 356, CPyStatic_main___globals);
        goto CPyL193;
    }
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_initial_address != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL16;
    PyObject *cpy_r_r11[1] = {cpy_r_initial_address};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r12, 1, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 360, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r14 = PyList_New(1);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 360, CPyStatic_main___globals);
        goto CPyL196;
    }
    cpy_r_r15 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r16 = *(CPyPtr *)cpy_r_r15;
    *(PyObject * *)cpy_r_r16 = cpy_r_r13;
    cpy_r_address_list = cpy_r_r14;
    goto CPyL18;
CPyL16: ;
    cpy_r_r17 = PyList_New(1);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 362, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r18 = Py_None;
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r17)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    *(PyObject * *)cpy_r_r20 = cpy_r_r18;
    cpy_r_address_list = cpy_r_r17;
CPyL18: ;
    cpy_r_r21 = CPyList_GetItemShort(cpy_r_struct_logs, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 364, CPyStatic_main___globals);
        goto CPyL197;
    }
    if (likely(PyDict_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 364, CPyStatic_main___globals, "dict", cpy_r_r21);
        goto CPyL197;
    }
    cpy_r_last_step = cpy_r_r22;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_struct_logs)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = 2;
    cpy_r_i = cpy_r_r26;
CPyL21: ;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r27) goto CPyL198;
    cpy_r_r28 = CPyList_GetItem(cpy_r_struct_logs, cpy_r_i);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 366, CPyStatic_main___globals);
        goto CPyL199;
    }
    if (likely(PyDict_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 366, CPyStatic_main___globals, "dict", cpy_r_r28);
        goto CPyL199;
    }
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_initial_address != cpy_r_r30;
    if (!cpy_r_r31) goto CPyL200;
    cpy_r_r32 = CPyStatics[35]; /* 'depth' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r29, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 368, CPyStatic_main___globals);
        goto CPyL201;
    }
    if (likely(PyLong_Check(cpy_r_r33)))
        cpy_r_r34 = CPyTagged_FromObject(cpy_r_r33);
    else {
        CPy_TypeError("int", cpy_r_r33); cpy_r_r34 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 368, CPyStatic_main___globals);
        goto CPyL201;
    }
    cpy_r_r35 = CPyStatics[35]; /* 'depth' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 368, CPyStatic_main___globals);
        goto CPyL202;
    }
    if (likely(PyLong_Check(cpy_r_r36)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_r36);
    else {
        CPy_TypeError("int", cpy_r_r36); cpy_r_r37 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 368, CPyStatic_main___globals);
        goto CPyL202;
    }
    cpy_r_r38 = cpy_r_r34 & 1;
    cpy_r_r39 = cpy_r_r38 != 0;
    if (cpy_r_r39) goto CPyL31;
    cpy_r_r40 = cpy_r_r37 & 1;
    cpy_r_r41 = cpy_r_r40 != 0;
    if (!cpy_r_r41) goto CPyL32;
CPyL31: ;
    cpy_r_r42 = CPyTagged_IsLt_(cpy_r_r37, cpy_r_r34);
    cpy_r_r43 = cpy_r_r42;
    goto CPyL33;
CPyL32: ;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r34 > (Py_ssize_t)cpy_r_r37;
    cpy_r_r43 = cpy_r_r44;
CPyL33: ;
    CPyTagged_DECREF(cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r37);
    if (!cpy_r_r43) goto CPyL203;
    cpy_r_r45 = CPyStatics[36]; /* 'op' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 369, CPyStatic_main___globals);
        goto CPyL201;
    }
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 369, CPyStatic_main___globals, "str", cpy_r_r46);
        goto CPyL201;
    }
    cpy_r_r48 = CPyStatics[37]; /* 'CREATE' */
    cpy_r_r49 = PyUnicode_Compare(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r50 = cpy_r_r49 == -1;
    if (!cpy_r_r50) goto CPyL39;
    cpy_r_r51 = PyErr_Occurred();
    cpy_r_r52 = cpy_r_r51 != NULL;
    if (!cpy_r_r52) goto CPyL39;
    cpy_r_r53 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", -1, CPyStatic_main___globals);
        goto CPyL201;
    }
CPyL39: ;
    cpy_r_r54 = cpy_r_r49 == 0;
    if (!cpy_r_r54) goto CPyL41;
    if (cpy_r_r54) {
        goto CPyL47;
    } else
        goto CPyL204;
CPyL41: ;
    cpy_r_r55 = CPyStatics[36]; /* 'op' */
    cpy_r_r56 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 369, CPyStatic_main___globals);
        goto CPyL201;
    }
    if (likely(PyUnicode_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 369, CPyStatic_main___globals, "str", cpy_r_r56);
        goto CPyL201;
    }
    cpy_r_r58 = CPyStatics[38]; /* 'CREATE2' */
    cpy_r_r59 = PyUnicode_Compare(cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r60 = cpy_r_r59 == -1;
    if (!cpy_r_r60) goto CPyL46;
    cpy_r_r61 = PyErr_Occurred();
    cpy_r_r62 = cpy_r_r61 != NULL;
    if (!cpy_r_r62) goto CPyL46;
    cpy_r_r63 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", -1, CPyStatic_main___globals);
        goto CPyL201;
    }
CPyL46: ;
    cpy_r_r64 = cpy_r_r59 == 0;
    if (!cpy_r_r64) goto CPyL204;
CPyL47: ;
    cpy_r_r65 = CPyList_GetSlice(cpy_r_struct_logs, cpy_r_i, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 370, CPyStatic_main___globals);
        goto CPyL205;
    }
    if (likely(PyList_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 370, CPyStatic_main___globals, "list", cpy_r_r65);
        goto CPyL205;
    }
    cpy_r_r67 = 0;
CPyL50: ;
    cpy_r_r68 = (CPyPtr)&((PyVarObject *)cpy_r_r66)->ob_size;
    cpy_r_r69 = *(int64_t *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 << 1;
    cpy_r_r71 = (Py_ssize_t)cpy_r_r67 < (Py_ssize_t)cpy_r_r70;
    if (!cpy_r_r71) goto CPyL206;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r67 >> 1;
    cpy_r_r73 = (CPyPtr)&((PyListObject *)cpy_r_r66)->ob_item;
    cpy_r_r74 = *(CPyPtr *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r72 * 8;
    cpy_r_r76 = cpy_r_r74 + cpy_r_r75;
    cpy_r_r77 = *(PyObject * *)cpy_r_r76;
    CPy_INCREF(cpy_r_r77);
    if (likely(PyDict_Check(cpy_r_r77)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 370, CPyStatic_main___globals, "dict", cpy_r_r77);
        goto CPyL207;
    }
    cpy_r_r79 = CPyStatics[35]; /* 'depth' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 370, CPyStatic_main___globals);
        goto CPyL208;
    }
    if (likely(PyLong_Check(cpy_r_r80)))
        cpy_r_r81 = CPyTagged_FromObject(cpy_r_r80);
    else {
        CPy_TypeError("int", cpy_r_r80); cpy_r_r81 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 370, CPyStatic_main___globals);
        goto CPyL208;
    }
    cpy_r_r82 = CPyStatics[35]; /* 'depth' */
    cpy_r_r83 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 370, CPyStatic_main___globals);
        goto CPyL209;
    }
    if (likely(PyLong_Check(cpy_r_r83)))
        cpy_r_r84 = CPyTagged_FromObject(cpy_r_r83);
    else {
        CPy_TypeError("int", cpy_r_r83); cpy_r_r84 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 370, CPyStatic_main___globals);
        goto CPyL209;
    }
    cpy_r_r85 = cpy_r_r81 & 1;
    cpy_r_r86 = cpy_r_r85 != 0;
    if (!cpy_r_r86) goto CPyL58;
    cpy_r_r87 = CPyTagged_IsEq_(cpy_r_r81, cpy_r_r84);
    cpy_r_r88 = cpy_r_r87;
    goto CPyL59;
CPyL58: ;
    cpy_r_r89 = cpy_r_r81 == cpy_r_r84;
    cpy_r_r88 = cpy_r_r89;
CPyL59: ;
    CPyTagged_DECREF(cpy_r_r81);
    CPyTagged_DECREF(cpy_r_r84);
    if (cpy_r_r88) {
        goto CPyL210;
    } else
        goto CPyL211;
CPyL60: ;
    goto CPyL64;
CPyL61: ;
    cpy_r_r90 = cpy_r_r67 + 2;
    cpy_r_r67 = cpy_r_r90;
    goto CPyL50;
CPyL62: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r91 = 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 370, CPyStatic_main___globals);
        goto CPyL189;
    }
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r92 = CPyStatics[39]; /* '0x' */
    cpy_r_r93 = CPyStatics[40]; /* 'stack' */
    cpy_r_r94 = CPyDict_GetItem(cpy_r_r78, cpy_r_r93);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals);
        goto CPyL212;
    }
    if (likely(PyList_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals, "list", cpy_r_r94);
        goto CPyL212;
    }
    cpy_r_r96 = CPyList_GetItemShort(cpy_r_r95, -2);
    CPy_DECREF_NO_IMM(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals);
        goto CPyL212;
    }
    cpy_r_r97 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = CPyStatics[131]; /* -40 */
    cpy_r_r100 = PySlice_New(cpy_r_r99, cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals);
        goto CPyL213;
    }
    cpy_r_r101 = PyObject_GetItem(cpy_r_r96, cpy_r_r100);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals);
        goto CPyL212;
    }
    if (likely(PyUnicode_Check(cpy_r_r101)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals, "str", cpy_r_r101);
        goto CPyL212;
    }
    cpy_r_r103 = CPyStr_Build(2, cpy_r_r92, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals);
        goto CPyL212;
    }
    PyObject *cpy_r_r104[1] = {cpy_r_r103};
    cpy_r_r105 = (PyObject **)&cpy_r_r104;
    cpy_r_r106 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r105, 1, 0);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals);
        goto CPyL214;
    }
    CPy_DECREF(cpy_r_r103);
    cpy_r_address = cpy_r_r106;
    cpy_r_r107 = PyList_Append(cpy_r_address_list, cpy_r_address);
    CPy_DECREF(cpy_r_address);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 372, CPyStatic_main___globals);
        goto CPyL212;
    } else
        goto CPyL92;
CPyL73: ;
    cpy_r_r109 = CPyStatics[39]; /* '0x' */
    cpy_r_r110 = CPyStatics[40]; /* 'stack' */
    cpy_r_r111 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r110);
    CPy_DECREF(cpy_r_last_step);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL212;
    }
    if (likely(PyList_Check(cpy_r_r111)))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals, "list", cpy_r_r111);
        goto CPyL212;
    }
    cpy_r_r113 = CPyList_GetItemShort(cpy_r_r112, -4);
    CPy_DECREF_NO_IMM(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL212;
    }
    cpy_r_r114 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r115 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r116 = CPyStatics[131]; /* -40 */
    cpy_r_r117 = PySlice_New(cpy_r_r116, cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL215;
    }
    cpy_r_r118 = PyObject_GetItem(cpy_r_r113, cpy_r_r117);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL212;
    }
    if (likely(PyUnicode_Check(cpy_r_r118)))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals, "str", cpy_r_r118);
        goto CPyL212;
    }
    cpy_r_r120 = CPyStr_Build(2, cpy_r_r109, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL212;
    }
    PyObject *cpy_r_r121[1] = {cpy_r_r120};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r122, 1, 0);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL216;
    }
    CPy_DECREF(cpy_r_r120);
    cpy_r_address = cpy_r_r123;
    cpy_r_r124 = PyList_Append(cpy_r_address_list, cpy_r_address);
    CPy_DECREF(cpy_r_address);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 375, CPyStatic_main___globals);
        goto CPyL212;
    } else
        goto CPyL92;
CPyL82: ;
    cpy_r_r126 = CPyStatics[35]; /* 'depth' */
    cpy_r_r127 = CPyDict_GetItem(cpy_r_r29, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals);
        goto CPyL205;
    }
    if (likely(PyLong_Check(cpy_r_r127)))
        cpy_r_r128 = CPyTagged_FromObject(cpy_r_r127);
    else {
        CPy_TypeError("int", cpy_r_r127); cpy_r_r128 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals);
        goto CPyL205;
    }
    cpy_r_r129 = CPyStatics[35]; /* 'depth' */
    cpy_r_r130 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r129);
    CPy_DECREF(cpy_r_last_step);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals);
        goto CPyL217;
    }
    if (likely(PyLong_Check(cpy_r_r130)))
        cpy_r_r131 = CPyTagged_FromObject(cpy_r_r130);
    else {
        CPy_TypeError("int", cpy_r_r130); cpy_r_r131 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r131 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals);
        goto CPyL217;
    }
    cpy_r_r132 = cpy_r_r128 & 1;
    cpy_r_r133 = cpy_r_r132 != 0;
    if (cpy_r_r133) goto CPyL88;
    cpy_r_r134 = cpy_r_r131 & 1;
    cpy_r_r135 = cpy_r_r134 != 0;
    if (!cpy_r_r135) goto CPyL89;
CPyL88: ;
    cpy_r_r136 = CPyTagged_IsLt_(cpy_r_r128, cpy_r_r131);
    cpy_r_r137 = cpy_r_r136;
    goto CPyL90;
CPyL89: ;
    cpy_r_r138 = (Py_ssize_t)cpy_r_r128 < (Py_ssize_t)cpy_r_r131;
    cpy_r_r137 = cpy_r_r138;
CPyL90: ;
    CPyTagged_DECREF(cpy_r_r128);
    CPyTagged_DECREF(cpy_r_r131);
    if (!cpy_r_r137) goto CPyL92;
    cpy_r_r139 = CPyList_PopLast(cpy_r_address_list);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 378, CPyStatic_main___globals);
        goto CPyL212;
    } else
        goto CPyL218;
CPyL92: ;
    CPy_INCREF(cpy_r_r29);
    cpy_r_last_step = cpy_r_r29;
    cpy_r_r140 = CPyStatics[36]; /* 'op' */
    cpy_r_r141 = CPyDict_GetItem(cpy_r_r29, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 381, CPyStatic_main___globals);
        goto CPyL205;
    }
    if (likely(PyUnicode_Check(cpy_r_r141)))
        cpy_r_r142 = cpy_r_r141;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 381, CPyStatic_main___globals, "str", cpy_r_r141);
        goto CPyL205;
    }
    cpy_r_r143 = CPyStatics[41]; /* 'LOG' */
    cpy_r_r144 = CPyStr_Startswith(cpy_r_r142, cpy_r_r143);
    cpy_r_r145 = cpy_r_r144;
    if (!cpy_r_r145) goto CPyL219;
    cpy_r_r146 = CPyStatics[40]; /* 'stack' */
    cpy_r_r147 = CPyDict_GetItem(cpy_r_r29, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 386, CPyStatic_main___globals);
        goto CPyL220;
    }
    if (likely(PyList_Check(cpy_r_r147)))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 386, CPyStatic_main___globals, "list", cpy_r_r147);
        goto CPyL220;
    }
    cpy_r_r149 = CPyList_GetItemShort(cpy_r_r148, -2);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 387, CPyStatic_main___globals);
        goto CPyL221;
    }
    cpy_r_r150 = (PyObject *)&PyLong_Type;
    cpy_r_r151 = CPyStatics[132]; /* 16 */
    PyObject *cpy_r_r152[2] = {cpy_r_r149, cpy_r_r151};
    cpy_r_r153 = (PyObject **)&cpy_r_r152;
    cpy_r_r154 = PyObject_Vectorcall(cpy_r_r150, cpy_r_r153, 2, 0);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 387, CPyStatic_main___globals);
        goto CPyL222;
    }
    CPy_DECREF(cpy_r_r149);
    if (likely(PyLong_Check(cpy_r_r154)))
        cpy_r_r155 = CPyTagged_FromObject(cpy_r_r154);
    else {
        CPy_TypeError("int", cpy_r_r154); cpy_r_r155 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r155 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 387, CPyStatic_main___globals);
        goto CPyL221;
    }
    cpy_r_r156 = CPyList_GetItemShort(cpy_r_r148, -4);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 388, CPyStatic_main___globals);
        goto CPyL223;
    }
    cpy_r_r157 = (PyObject *)&PyLong_Type;
    cpy_r_r158 = CPyStatics[132]; /* 16 */
    PyObject *cpy_r_r159[2] = {cpy_r_r156, cpy_r_r158};
    cpy_r_r160 = (PyObject **)&cpy_r_r159;
    cpy_r_r161 = PyObject_Vectorcall(cpy_r_r157, cpy_r_r160, 2, 0);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 388, CPyStatic_main___globals);
        goto CPyL224;
    }
    CPy_DECREF(cpy_r_r156);
    if (likely(PyLong_Check(cpy_r_r161)))
        cpy_r_r162 = CPyTagged_FromObject(cpy_r_r161);
    else {
        CPy_TypeError("int", cpy_r_r161); cpy_r_r162 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 388, CPyStatic_main___globals);
        goto CPyL223;
    }
    cpy_r_r163 = CPyStr_GetItem(cpy_r_r142, -2);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 389, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r164 = CPyLong_FromStr(cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 389, CPyStatic_main___globals);
        goto CPyL225;
    }
    if (likely(PyLong_Check(cpy_r_r164)))
        cpy_r_r165 = CPyTagged_FromObject(cpy_r_r164);
    else {
        CPy_TypeError("int", cpy_r_r164); cpy_r_r165 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r165 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 389, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r166 = CPyTagged_Subtract(-6, cpy_r_r165);
    CPyTagged_DECREF(cpy_r_r165);
    cpy_r_r167 = CPyStatics[133]; /* -3 */
    cpy_r_r168 = CPyTagged_StealAsObject(cpy_r_r166);
    cpy_r_r169 = CPyStatics[134]; /* -1 */
    cpy_r_r170 = PySlice_New(cpy_r_r167, cpy_r_r168, cpy_r_r169);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 390, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r171 = PyObject_GetItem(cpy_r_r148, cpy_r_r170);
    CPy_DECREF_NO_IMM(cpy_r_r148);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 390, CPyStatic_main___globals);
        goto CPyL226;
    }
    if (likely(PyList_Check(cpy_r_r171)))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 390, CPyStatic_main___globals, "list", cpy_r_r171);
        goto CPyL226;
    }
    cpy_r_r173 = (CPyPtr)&((PyVarObject *)cpy_r_r172)->ob_size;
    cpy_r_r174 = *(int64_t *)cpy_r_r173;
    cpy_r_r175 = PyList_New(cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 390, CPyStatic_main___globals);
        goto CPyL227;
    }
    cpy_r_r176 = 0;
CPyL111: ;
    cpy_r_r177 = (CPyPtr)&((PyVarObject *)cpy_r_r172)->ob_size;
    cpy_r_r178 = *(int64_t *)cpy_r_r177;
    cpy_r_r179 = cpy_r_r178 << 1;
    cpy_r_r180 = (Py_ssize_t)cpy_r_r176 < (Py_ssize_t)cpy_r_r179;
    if (!cpy_r_r180) goto CPyL228;
    cpy_r_r181 = (Py_ssize_t)cpy_r_r176 >> 1;
    cpy_r_r182 = (CPyPtr)&((PyListObject *)cpy_r_r172)->ob_item;
    cpy_r_r183 = *(CPyPtr *)cpy_r_r182;
    cpy_r_r184 = cpy_r_r181 * 8;
    cpy_r_r185 = cpy_r_r183 + cpy_r_r184;
    cpy_r_r186 = *(PyObject * *)cpy_r_r185;
    CPy_INCREF(cpy_r_r186);
    cpy_r_r187 = CPyDef_main____0xstring(cpy_r_r186);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 390, CPyStatic_main___globals);
        goto CPyL229;
    }
    cpy_r_r188 = CPyList_SetItemUnsafe(cpy_r_r175, cpy_r_r176, cpy_r_r187);
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 390, CPyStatic_main___globals);
        goto CPyL229;
    }
    cpy_r_r189 = cpy_r_r176 + 2;
    cpy_r_r176 = cpy_r_r189;
    goto CPyL111;
CPyL115: ;
    goto CPyL133;
CPyL116: ;
    cpy_r_r190 = CPy_CatchError();
    cpy_r_r191 = CPyModule_builtins;
    cpy_r_r192 = CPyStatics[25]; /* 'KeyError' */
    cpy_r_r193 = CPyObject_GetAttr(cpy_r_r191, cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 391, CPyStatic_main___globals);
        goto CPyL131;
    }
    cpy_r_r194 = CPy_ExceptionMatches(cpy_r_r193);
    CPy_DecRef(cpy_r_r193);
    if (!cpy_r_r194) goto CPyL122;
    cpy_r_r195 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r195;
    CPy_DecRef(cpy_r_e);
    cpy_r_r196 = CPyStatics[42]; /* 'StructLog has no stack' */
    cpy_r_r197 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r198[1] = {cpy_r_r196};
    cpy_r_r199 = (PyObject **)&cpy_r_r198;
    cpy_r_r200 = PyObject_Vectorcall(cpy_r_r197, cpy_r_r199, 1, 0);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 392, CPyStatic_main___globals);
        goto CPyL131;
    }
    if (likely(Py_TYPE(cpy_r_r200) == CPyType_main___StructLogError))
        cpy_r_r201 = cpy_r_r200;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 392, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r200);
        goto CPyL131;
    }
    CPy_Raise(cpy_r_r201);
    CPy_DecRef(cpy_r_r201);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 392, CPyStatic_main___globals);
        goto CPyL131;
    } else
        goto CPyL230;
CPyL121: ;
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r202 = CPyModule_builtins;
    cpy_r_r203 = CPyStatics[43]; /* 'IndexError' */
    cpy_r_r204 = CPyObject_GetAttr(cpy_r_r202, cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 393, CPyStatic_main___globals);
        goto CPyL131;
    }
    cpy_r_r205 = CPyModule_builtins;
    cpy_r_r206 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r207 = CPyObject_GetAttr(cpy_r_r205, cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 393, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r208.f0 = cpy_r_r204;
    cpy_r_r208.f1 = cpy_r_r207;
    cpy_r_r209 = PyTuple_New(2);
    if (unlikely(cpy_r_r209 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8 = cpy_r_r208.f0;
    PyTuple_SET_ITEM(cpy_r_r209, 0, __tmp8);
    PyObject *__tmp9 = cpy_r_r208.f1;
    PyTuple_SET_ITEM(cpy_r_r209, 1, __tmp9);
    cpy_r_r210 = CPy_ExceptionMatches(cpy_r_r209);
    CPy_DecRef(cpy_r_r209);
    if (!cpy_r_r210) goto CPyL129;
    cpy_r_r211 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r211;
    CPy_DecRef(cpy_r_e);
    cpy_r_r212 = CPyStatics[44]; /* 'Malformed stack' */
    cpy_r_r213 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r214[1] = {cpy_r_r212};
    cpy_r_r215 = (PyObject **)&cpy_r_r214;
    cpy_r_r216 = PyObject_Vectorcall(cpy_r_r213, cpy_r_r215, 1, 0);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 394, CPyStatic_main___globals);
        goto CPyL131;
    }
    if (likely(Py_TYPE(cpy_r_r216) == CPyType_main___StructLogError))
        cpy_r_r217 = cpy_r_r216;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 394, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r216);
        goto CPyL131;
    }
    CPy_Raise(cpy_r_r217);
    CPy_DecRef(cpy_r_r217);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 394, CPyStatic_main___globals);
        goto CPyL131;
    } else
        goto CPyL232;
CPyL128: ;
    CPy_Unreachable();
CPyL129: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL131;
    } else
        goto CPyL233;
CPyL130: ;
    CPy_Unreachable();
CPyL131: ;
    CPy_RestoreExcInfo(cpy_r_r190);
    CPy_DecRef(cpy_r_r190.f0);
    CPy_DecRef(cpy_r_r190.f1);
    CPy_DecRef(cpy_r_r190.f2);
    cpy_r_r218 = CPy_KeepPropagating();
    if (!cpy_r_r218) goto CPyL189;
    CPy_Unreachable();
CPyL133: ;
    cpy_r_r219 = CPyStatics[45]; /* '' */
    cpy_r_r220 = CPyStatics[46]; /* 'memory' */
    cpy_r_r221 = CPyDict_GetItem(cpy_r_r29, cpy_r_r220);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals);
        goto CPyL234;
    }
    if (likely(PyList_Check(cpy_r_r221)))
        cpy_r_r222 = cpy_r_r221;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals, "list", cpy_r_r221);
        goto CPyL234;
    }
    cpy_r_r223 = PyUnicode_Join(cpy_r_r219, cpy_r_r222);
    CPy_DECREF_NO_IMM(cpy_r_r222);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals);
        goto CPyL234;
    }
    cpy_r_r224 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r224 == NULL)) {
        goto CPyL235;
    } else
        goto CPyL139;
CPyL137: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r225 = 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals);
        goto CPyL146;
    }
    CPy_Unreachable();
CPyL139: ;
    PyObject *cpy_r_r226[1] = {cpy_r_r223};
    cpy_r_r227 = (PyObject **)&cpy_r_r226;
    cpy_r_r228 = PyObject_Vectorcall(cpy_r_r224, cpy_r_r227, 1, 0);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals);
        goto CPyL236;
    }
    CPy_DECREF(cpy_r_r223);
    cpy_r_r229 = CPyTagged_Add(cpy_r_r155, cpy_r_r162);
    CPyTagged_DECREF(cpy_r_r229);
    cpy_r_r230 = CPyTagged_Add(cpy_r_r155, cpy_r_r162);
    CPyTagged_DECREF(cpy_r_r162);
    cpy_r_r231 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r232 = CPyTagged_StealAsObject(cpy_r_r155);
    cpy_r_r233 = CPyTagged_StealAsObject(cpy_r_r230);
    cpy_r_r234 = PySlice_New(cpy_r_r232, cpy_r_r233, cpy_r_r231);
    CPy_DECREF(cpy_r_r232);
    CPy_DECREF(cpy_r_r233);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals);
        goto CPyL237;
    }
    cpy_r_r235 = PyObject_GetItem(cpy_r_r228, cpy_r_r234);
    CPy_DECREF(cpy_r_r228);
    CPy_DECREF(cpy_r_r234);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals);
        goto CPyL238;
    }
    cpy_r_r236 = CPyStatics[47]; /* 'hex' */
    PyObject *cpy_r_r237[1] = {cpy_r_r235};
    cpy_r_r238 = (PyObject **)&cpy_r_r237;
    cpy_r_r239 = PyObject_VectorcallMethod(cpy_r_r236, cpy_r_r238, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals);
        goto CPyL239;
    }
    CPy_DECREF(cpy_r_r235);
    if (likely(PyUnicode_Check(cpy_r_r239)))
        cpy_r_r240 = cpy_r_r239;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals, "str", cpy_r_r239);
        goto CPyL238;
    }
    cpy_r_r241 = CPyDef_main____0xstring(cpy_r_r240);
    CPy_DECREF(cpy_r_r240);
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 397, CPyStatic_main___globals);
        goto CPyL238;
    }
    goto CPyL157;
CPyL146: ;
    cpy_r_r242 = CPy_CatchError();
    cpy_r_r243 = CPyModule_builtins;
    cpy_r_r244 = CPyStatics[25]; /* 'KeyError' */
    cpy_r_r245 = CPyObject_GetAttr(cpy_r_r243, cpy_r_r244);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 398, CPyStatic_main___globals);
        goto CPyL155;
    }
    cpy_r_r246 = CPyModule_builtins;
    cpy_r_r247 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r248 = CPyObject_GetAttr(cpy_r_r246, cpy_r_r247);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 398, CPyStatic_main___globals);
        goto CPyL240;
    }
    cpy_r_r249.f0 = cpy_r_r245;
    cpy_r_r249.f1 = cpy_r_r248;
    cpy_r_r250 = PyTuple_New(2);
    if (unlikely(cpy_r_r250 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10 = cpy_r_r249.f0;
    PyTuple_SET_ITEM(cpy_r_r250, 0, __tmp10);
    PyObject *__tmp11 = cpy_r_r249.f1;
    PyTuple_SET_ITEM(cpy_r_r250, 1, __tmp11);
    cpy_r_r251 = CPy_ExceptionMatches(cpy_r_r250);
    CPy_DecRef(cpy_r_r250);
    if (!cpy_r_r251) goto CPyL153;
    cpy_r_r252 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r252;
    CPy_DecRef(cpy_r_e);
    cpy_r_r253 = CPyStatics[48]; /* 'Malformed memory' */
    cpy_r_r254 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r255[1] = {cpy_r_r253};
    cpy_r_r256 = (PyObject **)&cpy_r_r255;
    cpy_r_r257 = PyObject_Vectorcall(cpy_r_r254, cpy_r_r256, 1, 0);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 399, CPyStatic_main___globals);
        goto CPyL155;
    }
    if (likely(Py_TYPE(cpy_r_r257) == CPyType_main___StructLogError))
        cpy_r_r258 = cpy_r_r257;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 399, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r257);
        goto CPyL155;
    }
    CPy_Raise(cpy_r_r258);
    CPy_DecRef(cpy_r_r258);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 399, CPyStatic_main___globals);
        goto CPyL155;
    } else
        goto CPyL241;
CPyL152: ;
    CPy_Unreachable();
CPyL153: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL155;
    } else
        goto CPyL242;
CPyL154: ;
    CPy_Unreachable();
CPyL155: ;
    CPy_RestoreExcInfo(cpy_r_r242);
    CPy_DecRef(cpy_r_r242.f0);
    CPy_DecRef(cpy_r_r242.f1);
    CPy_DecRef(cpy_r_r242.f2);
    cpy_r_r259 = CPy_KeepPropagating();
    if (!cpy_r_r259) goto CPyL189;
    CPy_Unreachable();
CPyL157: ;
    cpy_r_r260 = (CPyPtr)&((PyVarObject *)cpy_r_r175)->ob_size;
    cpy_r_r261 = *(int64_t *)cpy_r_r260;
    cpy_r_r262 = cpy_r_r261 << 1;
    cpy_r_r263 = cpy_r_r262 != 0;
    if (!cpy_r_r263) goto CPyL161;
    cpy_r_r264 = CPyList_GetItemShort(cpy_r_r175, 0);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 401, CPyStatic_main___globals);
        goto CPyL243;
    }
    cpy_r_r265 = PySequence_Contains(cpy_r_topic_map, cpy_r_r264);
    CPy_DECREF(cpy_r_r264);
    cpy_r_r266 = cpy_r_r265 >= 0;
    if (unlikely(!cpy_r_r266)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 401, CPyStatic_main___globals);
        goto CPyL243;
    }
    cpy_r_r267 = cpy_r_r265;
    cpy_r_r268 = cpy_r_r267 ^ 1;
    if (!cpy_r_r268) goto CPyL169;
CPyL161: ;
    if (cpy_r_allow_undecoded) {
        goto CPyL166;
    } else
        goto CPyL244;
CPyL162: ;
    cpy_r_r269 = CPyStatics[34]; /* 'Log contains undecodable event' */
    cpy_r_r270 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r271[1] = {cpy_r_r269};
    cpy_r_r272 = (PyObject **)&cpy_r_r271;
    cpy_r_r273 = PyObject_Vectorcall(cpy_r_r270, cpy_r_r272, 1, 0);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 403, CPyStatic_main___globals);
        goto CPyL189;
    }
    if (likely(Py_TYPE(cpy_r_r273) == CPyType_main___UnknownEvent))
        cpy_r_r274 = cpy_r_r273;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 403, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r273);
        goto CPyL189;
    }
    CPy_Raise(cpy_r_r274);
    CPy_DECREF_NO_IMM(cpy_r_r274);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 403, CPyStatic_main___globals);
        goto CPyL189;
    }
    CPy_Unreachable();
CPyL166: ;
    cpy_r_r275 = CPyStatics[19]; /* 'name' */
    cpy_r_r276 = CPyStatics[27]; /* 'topics' */
    cpy_r_r277 = CPyStatics[30]; /* 'data' */
    cpy_r_r278 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r279 = CPyStatics[32]; /* 'address' */
    cpy_r_r280 = CPyList_GetItemShort(cpy_r_address_list, -2);
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 409, CPyStatic_main___globals);
        goto CPyL243;
    }
    cpy_r_r281 = Py_None;
    cpy_r_r282 = 0 ? Py_True : Py_False;
    cpy_r_r283 = CPyDict_Build(5, cpy_r_r275, cpy_r_r281, cpy_r_r276, cpy_r_r175, cpy_r_r277, cpy_r_r241, cpy_r_r278, cpy_r_r282, cpy_r_r279, cpy_r_r280);
    CPy_DECREF_NO_IMM(cpy_r_r175);
    CPy_DECREF(cpy_r_r241);
    CPy_DECREF(cpy_r_r280);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 404, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r284 = PyList_Append(cpy_r_r8, cpy_r_r283);
    CPy_DECREF(cpy_r_r283);
    cpy_r_r285 = cpy_r_r284 >= 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 411, CPyStatic_main___globals);
        goto CPyL245;
    } else
        goto CPyL187;
CPyL169: ;
    cpy_r_r286 = PyObject_GetIter(cpy_r_r175);
    CPy_DECREF_NO_IMM(cpy_r_r175);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 413, CPyStatic_main___globals);
        goto CPyL246;
    }
    cpy_r_r287 = PyIter_Next(cpy_r_r286);
    if (cpy_r_r287 == NULL) {
        goto CPyL247;
    } else
        goto CPyL173;
CPyL171: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r288 = 0;
    if (unlikely(!cpy_r_r288)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 413, CPyStatic_main___globals);
        goto CPyL189;
    }
    CPy_Unreachable();
CPyL173: ;
    cpy_r_r289 = PySequence_List(cpy_r_r286);
    CPy_DECREF(cpy_r_r286);
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 413, CPyStatic_main___globals);
        goto CPyL248;
    }
    cpy_r_r290 = (CPyPtr)&((PyVarObject *)cpy_r_r289)->ob_size;
    cpy_r_r291 = *(int64_t *)cpy_r_r290;
    cpy_r_r292 = cpy_r_r291 << 1;
    cpy_r_r293 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r292;
    if (cpy_r_r293) {
        goto CPyL177;
    } else
        goto CPyL249;
CPyL175: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r294 = 0;
    if (unlikely(!cpy_r_r294)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 413, CPyStatic_main___globals);
        goto CPyL189;
    }
    CPy_Unreachable();
CPyL177: ;
    cpy_r_r295 = PyObject_GetItem(cpy_r_topic_map, cpy_r_r287);
    CPy_DECREF(cpy_r_r287);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 414, CPyStatic_main___globals);
        goto CPyL250;
    }
    if (likely(PyDict_Check(cpy_r_r295)))
        cpy_r_r296 = cpy_r_r295;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 414, CPyStatic_main___globals, "dict", cpy_r_r295);
        goto CPyL250;
    }
    cpy_r_r297 = CPyStatics[19]; /* 'name' */
    cpy_r_r298 = CPyStatics[19]; /* 'name' */
    cpy_r_r299 = CPyDict_GetItem(cpy_r_r296, cpy_r_r298);
    if (unlikely(cpy_r_r299 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 416, CPyStatic_main___globals);
        goto CPyL251;
    }
    if (likely(PyUnicode_Check(cpy_r_r299)))
        cpy_r_r300 = cpy_r_r299;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 416, CPyStatic_main___globals, "str", cpy_r_r299);
        goto CPyL251;
    }
    cpy_r_r301 = CPyStatics[30]; /* 'data' */
    cpy_r_r302 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r303 = CPyDict_GetItem(cpy_r_r296, cpy_r_r302);
    CPy_DECREF(cpy_r_r296);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 417, CPyStatic_main___globals);
        goto CPyL252;
    }
    if (likely(PyList_Check(cpy_r_r303)))
        cpy_r_r304 = cpy_r_r303;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 417, CPyStatic_main___globals, "list", cpy_r_r303);
        goto CPyL252;
    }
    cpy_r_r305 = CPyDef_main____decode(cpy_r_r304, cpy_r_r289, cpy_r_r241);
    CPy_DECREF_NO_IMM(cpy_r_r304);
    CPy_DECREF_NO_IMM(cpy_r_r289);
    CPy_DECREF(cpy_r_r241);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 417, CPyStatic_main___globals);
        goto CPyL253;
    }
    cpy_r_r306 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r307 = CPyStatics[32]; /* 'address' */
    cpy_r_r308 = CPyList_GetItemShort(cpy_r_address_list, -2);
    if (unlikely(cpy_r_r308 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 419, CPyStatic_main___globals);
        goto CPyL254;
    }
    cpy_r_r309 = 1 ? Py_True : Py_False;
    cpy_r_r310 = CPyDict_Build(4, cpy_r_r297, cpy_r_r300, cpy_r_r301, cpy_r_r305, cpy_r_r306, cpy_r_r309, cpy_r_r307, cpy_r_r308);
    CPy_DECREF(cpy_r_r300);
    CPy_DECREF_NO_IMM(cpy_r_r305);
    CPy_DECREF(cpy_r_r308);
    if (unlikely(cpy_r_r310 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 415, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r311 = PyList_Append(cpy_r_r8, cpy_r_r310);
    CPy_DECREF(cpy_r_r310);
    cpy_r_r312 = cpy_r_r311 >= 0;
    if (unlikely(!cpy_r_r312)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 421, CPyStatic_main___globals);
        goto CPyL245;
    }
CPyL187: ;
    cpy_r_r313 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r313;
    cpy_r_i = cpy_r_r313;
    goto CPyL21;
CPyL188: ;
    return cpy_r_r8;
CPyL189: ;
    cpy_r_r314 = NULL;
    return cpy_r_r314;
CPyL190: ;
    CPy_INCREF(cpy_r_initial_address);
    goto CPyL4;
CPyL191: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL5;
CPyL192: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL8;
CPyL193: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL189;
CPyL194: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    goto CPyL189;
CPyL195: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL189;
CPyL196: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r13);
    goto CPyL189;
CPyL197: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    goto CPyL189;
CPyL198: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL188;
CPyL199: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL189;
CPyL200: ;
    CPy_DECREF(cpy_r_last_step);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL92;
CPyL201: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r29);
    goto CPyL189;
CPyL202: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r29);
    CPyTagged_DecRef(cpy_r_r34);
    goto CPyL189;
CPyL203: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL82;
CPyL204: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL73;
CPyL205: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    goto CPyL189;
CPyL206: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF_NO_IMM(cpy_r_r66);
    goto CPyL62;
CPyL207: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r66);
    goto CPyL189;
CPyL208: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r78);
    goto CPyL189;
CPyL209: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r78);
    CPyTagged_DecRef(cpy_r_r81);
    goto CPyL189;
CPyL210: ;
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF_NO_IMM(cpy_r_r66);
    goto CPyL60;
CPyL211: ;
    CPy_DECREF(cpy_r_r78);
    goto CPyL61;
CPyL212: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r29);
    goto CPyL189;
CPyL213: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r96);
    goto CPyL189;
CPyL214: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r103);
    goto CPyL189;
CPyL215: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r113);
    goto CPyL189;
CPyL216: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r120);
    goto CPyL189;
CPyL217: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r29);
    CPyTagged_DecRef(cpy_r_r128);
    goto CPyL189;
CPyL218: ;
    CPy_DECREF(cpy_r_r139);
    goto CPyL92;
CPyL219: ;
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r142);
    goto CPyL187;
CPyL220: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r142);
    goto CPyL116;
CPyL221: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r148);
    goto CPyL116;
CPyL222: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r149);
    goto CPyL116;
CPyL223: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r148);
    CPyTagged_DecRef(cpy_r_r155);
    goto CPyL116;
CPyL224: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r148);
    CPyTagged_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r156);
    goto CPyL116;
CPyL225: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r148);
    CPyTagged_DecRef(cpy_r_r155);
    CPyTagged_DecRef(cpy_r_r162);
    goto CPyL116;
CPyL226: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPyTagged_DecRef(cpy_r_r155);
    CPyTagged_DecRef(cpy_r_r162);
    goto CPyL116;
CPyL227: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPyTagged_DecRef(cpy_r_r155);
    CPyTagged_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_r172);
    goto CPyL116;
CPyL228: ;
    CPy_DECREF_NO_IMM(cpy_r_r172);
    goto CPyL115;
CPyL229: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r29);
    CPyTagged_DecRef(cpy_r_r155);
    CPyTagged_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_r172);
    CPy_DecRef(cpy_r_r175);
    goto CPyL116;
CPyL230: ;
    CPy_DecRef(cpy_r_r190.f0);
    CPy_DecRef(cpy_r_r190.f1);
    CPy_DecRef(cpy_r_r190.f2);
    goto CPyL121;
CPyL231: ;
    CPy_DecRef(cpy_r_r204);
    goto CPyL131;
CPyL232: ;
    CPy_DecRef(cpy_r_r190.f0);
    CPy_DecRef(cpy_r_r190.f1);
    CPy_DecRef(cpy_r_r190.f2);
    goto CPyL128;
CPyL233: ;
    CPy_DecRef(cpy_r_r190.f0);
    CPy_DecRef(cpy_r_r190.f1);
    CPy_DecRef(cpy_r_r190.f2);
    goto CPyL130;
CPyL234: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r155);
    CPyTagged_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_r175);
    goto CPyL146;
CPyL235: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r155);
    CPyTagged_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r223);
    goto CPyL137;
CPyL236: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r155);
    CPyTagged_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r223);
    goto CPyL146;
CPyL237: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r228);
    goto CPyL146;
CPyL238: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r175);
    goto CPyL146;
CPyL239: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r235);
    goto CPyL146;
CPyL240: ;
    CPy_DecRef(cpy_r_r245);
    goto CPyL155;
CPyL241: ;
    CPy_DecRef(cpy_r_r242.f0);
    CPy_DecRef(cpy_r_r242.f1);
    CPy_DecRef(cpy_r_r242.f2);
    goto CPyL152;
CPyL242: ;
    CPy_DecRef(cpy_r_r242.f0);
    CPy_DecRef(cpy_r_r242.f1);
    CPy_DecRef(cpy_r_r242.f2);
    goto CPyL154;
CPyL243: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r241);
    goto CPyL189;
CPyL244: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF_NO_IMM(cpy_r_r175);
    CPy_DECREF(cpy_r_r241);
    goto CPyL162;
CPyL245: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    goto CPyL189;
CPyL246: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r241);
    goto CPyL189;
CPyL247: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r241);
    CPy_DECREF(cpy_r_r286);
    goto CPyL171;
CPyL248: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r241);
    CPy_DecRef(cpy_r_r287);
    goto CPyL189;
CPyL249: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r241);
    CPy_DECREF(cpy_r_r287);
    CPy_DECREF_NO_IMM(cpy_r_r289);
    goto CPyL175;
CPyL250: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r241);
    CPy_DecRef(cpy_r_r289);
    goto CPyL189;
CPyL251: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r241);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r296);
    goto CPyL189;
CPyL252: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r241);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r300);
    goto CPyL189;
CPyL253: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r300);
    goto CPyL189;
CPyL254: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r300);
    CPy_DecRef(cpy_r_r305);
    goto CPyL189;
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
    arg_initial_address = obj_initial_address;
    if (arg_initial_address != NULL) goto __LL12;
    if (obj_initial_address == Py_None)
        arg_initial_address = obj_initial_address;
    else {
        arg_initial_address = NULL;
    }
    if (arg_initial_address != NULL) goto __LL12;
    CPy_TypeError("object or None", obj_initial_address); 
    goto fail;
__LL12: ;
    PyObject *retval = CPyDef_main___decode_traceTransaction(arg_struct_logs, arg_topic_map, arg_allow_undecoded, arg_initial_address);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 324, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 427, CPyStatic_main___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL3: ;
    PyObject *cpy_r_r3[1] = {cpy_r_value};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_Vectorcall(cpy_r_r1, cpy_r_r4, 1, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 427, CPyStatic_main___globals);
        goto CPyL8;
    }
    cpy_r_r6 = CPyStatics[47]; /* 'hex' */
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 427, CPyStatic_main___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_0xstring", 427, CPyStatic_main___globals, "str", cpy_r_r9);
        goto CPyL8;
    }
    cpy_r_r11 = CPyStr_Build(2, cpy_r_r0, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 427, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "_0xstring", 426, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_params", 431, CPyStatic_main___globals);
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
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 435, CPyStatic_main___globals, "dict", cpy_r_r11);
        goto CPyL38;
    }
    cpy_r_r13 = CPyStatics[23]; /* 'type' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 436, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_params", 437, CPyStatic_main___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL8: ;
    PyObject *cpy_r_r17[1] = {cpy_r_r14};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_Vectorcall(cpy_r_r15, cpy_r_r18, 1, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 437, CPyStatic_main___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r19);
    cpy_r_tuple_match = cpy_r_r19;
    cpy_r_r20 = PyObject_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 437, CPyStatic_main___globals);
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
    cpy_r_r25 = CPyStatics[135]; /* 1 */
    cpy_r_r26 = CPyStatics[136]; /* 2 */
    PyObject *cpy_r_r27[3] = {cpy_r_r23, cpy_r_r25, cpy_r_r26};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r24, cpy_r_r28, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 438, CPyStatic_main___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r23);
    if (likely(PyTuple_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 438, CPyStatic_main___globals, "tuple", cpy_r_r29);
        goto CPyL39;
    }
    cpy_r_r31 = CPySequence_CheckUnpackCount(cpy_r_r30, 2);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 438, CPyStatic_main___globals);
        goto CPyL46;
    }
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_r30, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 438, CPyStatic_main___globals);
        goto CPyL46;
    }
    cpy_r_r34 = CPySequenceTuple_GetItem(cpy_r_r30, 2);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 438, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_params", 439, CPyStatic_main___globals);
        goto CPyL39;
    }
    cpy_r_r39 = CPyStatics[51]; /* ']' */
    cpy_r_r40 = CPyStr_Build(3, cpy_r_r37, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 439, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_params", 440, CPyStatic_main___globals);
        goto CPyL49;
    }
    if (likely(PyList_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 440, CPyStatic_main___globals, "list", cpy_r_r46);
        goto CPyL49;
    }
    cpy_r_r48 = CPyDef_main____params(cpy_r_r47);
    CPy_DECREF_NO_IMM(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 440, CPyStatic_main___globals);
        goto CPyL49;
    }
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_r48)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = PyList_New(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 440, CPyStatic_main___globals);
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
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 440, CPyStatic_main___globals, "str", cpy_r_r62);
        goto CPyL52;
    }
    cpy_r_r64 = CPyList_SetItemUnsafe(cpy_r_r51, cpy_r_r52, cpy_r_r63);
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 440, CPyStatic_main___globals);
        goto CPyL52;
    }
    cpy_r_r65 = cpy_r_r52 + 2;
    cpy_r_r52 = cpy_r_r65;
    goto CPyL27;
CPyL31: ;
    cpy_r_r66 = PyUnicode_Join(cpy_r_r44, cpy_r_r51);
    CPy_DECREF_NO_IMM(cpy_r_r51);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 440, CPyStatic_main___globals);
        goto CPyL49;
    }
    cpy_r_r67 = CPyStatics[22]; /* ')' */
    cpy_r_r68 = CPyStr_Build(4, cpy_r_r43, cpy_r_r66, cpy_r_r67, cpy_r_tuple_type_tail);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_tuple_type_tail);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 440, CPyStatic_main___globals);
        goto CPyL38;
    }
    cpy_r_r69 = PyList_Append(cpy_r_r0, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 440, CPyStatic_main___globals);
        goto CPyL38;
    } else
        goto CPyL35;
CPyL34: ;
    cpy_r_r71 = PyList_Append(cpy_r_r0, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 442, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "_params", 430, CPyStatic_main___globals);
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
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject **cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject **cpy_r_r95;
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
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    CPyPtr cpy_r_r205;
    CPyPtr cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject **cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_value;
    tuple_T3OOO cpy_r_r213;
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
    PyObject *cpy_r_r225;
    tuple_T4OOOO cpy_r_r226;
    PyObject *cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    int32_t cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    int32_t cpy_r_r235;
    char cpy_r_r236;
    int32_t cpy_r_r237;
    char cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    int32_t cpy_r_r242;
    char cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    int32_t cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    int32_t cpy_r_r252;
    char cpy_r_r253;
    int32_t cpy_r_r254;
    char cpy_r_r255;
    CPyTagged cpy_r_r256;
    PyObject *cpy_r_r257;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 448, CPyStatic_main___globals);
        goto CPyL147;
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
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 450, CPyStatic_main___globals, "dict", cpy_r_r11);
        goto CPyL148;
    }
    cpy_r_i = cpy_r_r12;
    cpy_r_r13 = CPyStatics[53]; /* 'indexed' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_i, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 451, CPyStatic_main___globals);
        goto CPyL149;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 451, CPyStatic_main___globals);
        goto CPyL149;
    }
    if (cpy_r_r15) {
        goto CPyL150;
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
        CPy_AddTraceback("eth_event/main.py", "_decode", 454, CPyStatic_main___globals);
        goto CPyL148;
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
        goto CPyL151;
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
        goto CPyL152;
    } else
        goto CPyL153;
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
        CPy_AddTraceback("eth_event/main.py", "_decode", 464, CPyStatic_main___globals);
        goto CPyL147;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_main___EventError))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 464, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r43);
        goto CPyL147;
    }
    CPy_Raise(cpy_r_r44);
    CPy_DECREF_NO_IMM(cpy_r_r44);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 464, CPyStatic_main___globals);
        goto CPyL147;
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
        CPy_AddTraceback("eth_event/main.py", "_decode", 469, CPyStatic_main___globals);
        goto CPyL147;
    }
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_main___EventError))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 469, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r49);
        goto CPyL147;
    }
    CPy_Raise(cpy_r_r50);
    CPy_DECREF_NO_IMM(cpy_r_r50);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 469, CPyStatic_main___globals);
        goto CPyL147;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r51 = CPyDef_main____params(cpy_r_unindexed_types);
    CPy_DECREF_NO_IMM(cpy_r_unindexed_types);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 476, CPyStatic_main___globals);
        goto CPyL29;
    }
    goto CPyL40;
CPyL29: ;
    cpy_r_r52 = CPy_CatchError();
    cpy_r_r53 = CPyModule_builtins;
    cpy_r_r54 = CPyStatics[25]; /* 'KeyError' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 477, CPyStatic_main___globals);
        goto CPyL38;
    }
    cpy_r_r56 = CPyModule_builtins;
    cpy_r_r57 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 477, CPyStatic_main___globals);
        goto CPyL154;
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
        CPy_AddTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_main___ABIError))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r67);
        goto CPyL38;
    }
    CPy_Raise(cpy_r_r68);
    CPy_DecRef(cpy_r_r68);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals);
        goto CPyL38;
    } else
        goto CPyL155;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL38;
    } else
        goto CPyL156;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r52);
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    cpy_r_r69 = CPy_KeepPropagating();
    if (!cpy_r_r69) goto CPyL147;
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_r51)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = cpy_r_r72 != 0;
    if (!cpy_r_r73) goto CPyL157;
    cpy_r_r74 = CPyStatics[39]; /* '0x' */
    cpy_r_r75 = PyObject_RichCompare(cpy_r_data, cpy_r_r74, 2);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 480, CPyStatic_main___globals);
        goto CPyL158;
    }
    cpy_r_r76 = PyObject_IsTrue(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 480, CPyStatic_main___globals);
        goto CPyL158;
    }
    cpy_r_r78 = cpy_r_r76;
    if (!cpy_r_r78) goto CPyL157;
    cpy_r_r79 = (CPyPtr)&((PyVarObject *)cpy_r_r51)->ob_size;
    cpy_r_r80 = *(int64_t *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = CPyTagged_Multiply(cpy_r_r81, 64);
    cpy_r_r83 = CPyTagged_StealAsObject(cpy_r_r82);
    cpy_r_r84 = CPyDef_main____0xstring(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 482, CPyStatic_main___globals);
        goto CPyL158;
    }
    cpy_r_data = cpy_r_r84;
CPyL46: ;
    cpy_r_r85 = CPyStatic_main___globals;
    cpy_r_r86 = CPyStatics[56]; /* 'eth_abi' */
    cpy_r_r87 = CPyDict_GetItem(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 485, CPyStatic_main___globals);
        goto CPyL159;
    }
    cpy_r_r88 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r88 == NULL)) {
        goto CPyL160;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r89 = 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 485, CPyStatic_main___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL50: ;
    PyObject *cpy_r_r90[1] = {cpy_r_data};
    cpy_r_r91 = (PyObject **)&cpy_r_r90;
    cpy_r_r92 = PyObject_Vectorcall(cpy_r_r88, cpy_r_r91, 1, 0);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 485, CPyStatic_main___globals);
        goto CPyL161;
    }
    CPy_DECREF(cpy_r_data);
    cpy_r_r93 = CPyStatics[57]; /* 'decode' */
    PyObject *cpy_r_r94[3] = {cpy_r_r87, cpy_r_r51, cpy_r_r92};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = PyObject_VectorcallMethod(cpy_r_r93, cpy_r_r95, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 485, CPyStatic_main___globals);
        goto CPyL162;
    }
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF_NO_IMM(cpy_r_r51);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r97 = PySequence_List(cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 485, CPyStatic_main___globals);
        goto CPyL57;
    }
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r100 = CPyStatics[134]; /* -1 */
    cpy_r_r101 = PySlice_New(cpy_r_r98, cpy_r_r99, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 485, CPyStatic_main___globals);
        goto CPyL163;
    }
    cpy_r_r102 = PyObject_GetItem(cpy_r_r97, cpy_r_r101);
    CPy_DECREF_NO_IMM(cpy_r_r97);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 485, CPyStatic_main___globals);
        goto CPyL57;
    }
    if (likely(PyList_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 485, CPyStatic_main___globals, "list", cpy_r_r102);
        goto CPyL57;
    }
    goto CPyL86;
CPyL57: ;
    cpy_r_r104 = CPy_CatchError();
    cpy_r_r105 = CPyStatic_main___globals;
    cpy_r_r106 = CPyStatics[58]; /* 'InsufficientDataBytes' */
    cpy_r_r107 = CPyDict_GetItem(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 486, CPyStatic_main___globals);
        goto CPyL84;
    }
    cpy_r_r108 = CPy_ExceptionMatches(cpy_r_r107);
    CPy_DecRef(cpy_r_r107);
    if (!cpy_r_r108) goto CPyL63;
    cpy_r_r109 = CPyStatics[59]; /* 'Event data has insufficient length' */
    cpy_r_r110 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r111[1] = {cpy_r_r109};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = PyObject_Vectorcall(cpy_r_r110, cpy_r_r112, 1, 0);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 487, CPyStatic_main___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r113) == CPyType_main___EventError))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 487, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r113);
        goto CPyL84;
    }
    CPy_Raise(cpy_r_r114);
    CPy_DecRef(cpy_r_r114);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 487, CPyStatic_main___globals);
        goto CPyL84;
    } else
        goto CPyL164;
CPyL62: ;
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r115 = CPyStatic_main___globals;
    cpy_r_r116 = CPyStatics[60]; /* 'NonEmptyPaddingBytes' */
    cpy_r_r117 = CPyDict_GetItem(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 488, CPyStatic_main___globals);
        goto CPyL84;
    }
    cpy_r_r118 = CPy_ExceptionMatches(cpy_r_r117);
    CPy_DecRef(cpy_r_r117);
    if (!cpy_r_r118) goto CPyL69;
    cpy_r_r119 = CPyStatics[61]; /* 'Malformed data field in event log' */
    cpy_r_r120 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r121[1] = {cpy_r_r119};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = PyObject_Vectorcall(cpy_r_r120, cpy_r_r122, 1, 0);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 489, CPyStatic_main___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r123) == CPyType_main___EventError))
        cpy_r_r124 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 489, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r123);
        goto CPyL84;
    }
    CPy_Raise(cpy_r_r124);
    CPy_DecRef(cpy_r_r124);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 489, CPyStatic_main___globals);
        goto CPyL84;
    } else
        goto CPyL165;
CPyL68: ;
    CPy_Unreachable();
CPyL69: ;
    cpy_r_r125 = CPyStatic_main___globals;
    cpy_r_r126 = CPyStatics[62]; /* 'InvalidPointer' */
    cpy_r_r127 = CPyDict_GetItem(cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 490, CPyStatic_main___globals);
        goto CPyL84;
    }
    cpy_r_r128 = CPy_ExceptionMatches(cpy_r_r127);
    CPy_DecRef(cpy_r_r127);
    if (!cpy_r_r128) goto CPyL76;
    cpy_r_r129 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r129;
    cpy_r_r130 = PyObject_Str(cpy_r_e);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 491, CPyStatic_main___globals);
        goto CPyL84;
    }
    cpy_r_r131 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r132[1] = {cpy_r_r130};
    cpy_r_r133 = (PyObject **)&cpy_r_r132;
    cpy_r_r134 = PyObject_Vectorcall(cpy_r_r131, cpy_r_r133, 1, 0);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 491, CPyStatic_main___globals);
        goto CPyL166;
    }
    CPy_DecRef(cpy_r_r130);
    if (likely(Py_TYPE(cpy_r_r134) == CPyType_main___EventError))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 491, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r134);
        goto CPyL84;
    }
    CPy_Raise(cpy_r_r135);
    CPy_DecRef(cpy_r_r135);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 491, CPyStatic_main___globals);
        goto CPyL84;
    } else
        goto CPyL167;
CPyL75: ;
    CPy_Unreachable();
CPyL76: ;
    cpy_r_r136 = CPyModule_builtins;
    cpy_r_r137 = CPyStatics[63]; /* 'OverflowError' */
    cpy_r_r138 = CPyObject_GetAttr(cpy_r_r136, cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 492, CPyStatic_main___globals);
        goto CPyL84;
    }
    cpy_r_r139 = CPy_ExceptionMatches(cpy_r_r138);
    CPy_DecRef(cpy_r_r138);
    if (!cpy_r_r139) goto CPyL82;
    cpy_r_r140 = CPyStatics[64]; /* 'Cannot decode event due to overflow error' */
    cpy_r_r141 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r142[1] = {cpy_r_r140};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = PyObject_Vectorcall(cpy_r_r141, cpy_r_r143, 1, 0);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 493, CPyStatic_main___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r144) == CPyType_main___EventError))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 493, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r144);
        goto CPyL84;
    }
    CPy_Raise(cpy_r_r145);
    CPy_DecRef(cpy_r_r145);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 493, CPyStatic_main___globals);
        goto CPyL84;
    } else
        goto CPyL168;
CPyL81: ;
    CPy_Unreachable();
CPyL82: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL84;
    } else
        goto CPyL169;
CPyL83: ;
    CPy_Unreachable();
CPyL84: ;
    CPy_RestoreExcInfo(cpy_r_r104);
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    cpy_r_r146 = CPy_KeepPropagating();
    if (!cpy_r_r146) goto CPyL147;
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r147 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r148 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r149 = CPyStatics[134]; /* -1 */
    cpy_r_r150 = PySlice_New(cpy_r_r147, cpy_r_r148, cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 496, CPyStatic_main___globals);
        goto CPyL170;
    }
    cpy_r_r151 = PyObject_GetItem(cpy_r_topics, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 496, CPyStatic_main___globals);
        goto CPyL170;
    }
    if (likely(PyList_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 496, CPyStatic_main___globals, "list", cpy_r_r151);
        goto CPyL170;
    }
    cpy_r_topics = cpy_r_r152;
    cpy_r_r153 = PyList_New(0);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 497, CPyStatic_main___globals);
        goto CPyL171;
    }
    cpy_r_r154 = 0;
CPyL91: ;
    cpy_r_r155 = (CPyPtr)&((PyVarObject *)cpy_r_inputs)->ob_size;
    cpy_r_r156 = *(int64_t *)cpy_r_r155;
    cpy_r_r157 = cpy_r_r156 << 1;
    cpy_r_r158 = (Py_ssize_t)cpy_r_r154 < (Py_ssize_t)cpy_r_r157;
    if (!cpy_r_r158) goto CPyL172;
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
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 499, CPyStatic_main___globals, "dict", cpy_r_r164);
        goto CPyL173;
    }
    cpy_r_i = cpy_r_r165;
    cpy_r_r166 = CPyStatics[23]; /* 'type' */
    cpy_r_r167 = CPyDict_GetItem(cpy_r_i, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 500, CPyStatic_main___globals);
        goto CPyL174;
    }
    if (likely(PyUnicode_Check(cpy_r_r167)))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 500, CPyStatic_main___globals, "str", cpy_r_r167);
        goto CPyL174;
    }
    cpy_r_r169 = CPyStatics[52]; /* 'components' */
    cpy_r_r170 = PyDict_Contains(cpy_r_i, cpy_r_r169);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 502, CPyStatic_main___globals);
        goto CPyL175;
    }
    cpy_r_r172 = cpy_r_r170;
    if (!cpy_r_r172) goto CPyL102;
    cpy_r_r173 = CPyStatics[19]; /* 'name' */
    cpy_r_r174 = CPyStatics[19]; /* 'name' */
    cpy_r_r175 = CPyDict_GetItem(cpy_r_i, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 503, CPyStatic_main___globals);
        goto CPyL175;
    }
    if (likely(PyUnicode_Check(cpy_r_r175)))
        cpy_r_r176 = cpy_r_r175;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 503, CPyStatic_main___globals, "str", cpy_r_r175);
        goto CPyL175;
    }
    cpy_r_r177 = CPyStatics[23]; /* 'type' */
    cpy_r_r178 = CPyStatics[52]; /* 'components' */
    cpy_r_r179 = CPyStatics[52]; /* 'components' */
    cpy_r_r180 = CPyDict_GetItem(cpy_r_i, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 503, CPyStatic_main___globals);
        goto CPyL176;
    }
    cpy_r_r181 = CPyDict_Build(3, cpy_r_r173, cpy_r_r176, cpy_r_r177, cpy_r_r168, cpy_r_r178, cpy_r_r180);
    CPy_DECREF(cpy_r_r176);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 503, CPyStatic_main___globals);
        goto CPyL175;
    }
    cpy_r_element = cpy_r_r181;
    goto CPyL106;
CPyL102: ;
    cpy_r_r182 = CPyStatics[19]; /* 'name' */
    cpy_r_r183 = CPyStatics[19]; /* 'name' */
    cpy_r_r184 = CPyDict_GetItem(cpy_r_i, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 505, CPyStatic_main___globals);
        goto CPyL175;
    }
    if (likely(PyUnicode_Check(cpy_r_r184)))
        cpy_r_r185 = cpy_r_r184;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 505, CPyStatic_main___globals, "str", cpy_r_r184);
        goto CPyL175;
    }
    cpy_r_r186 = CPyStatics[23]; /* 'type' */
    cpy_r_r187 = CPyDict_Build(2, cpy_r_r182, cpy_r_r185, cpy_r_r186, cpy_r_r168);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 505, CPyStatic_main___globals);
        goto CPyL175;
    }
    cpy_r_element = cpy_r_r187;
CPyL106: ;
    cpy_r_r188 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r189 = *(int64_t *)cpy_r_r188;
    cpy_r_r190 = cpy_r_r189 << 1;
    cpy_r_r191 = cpy_r_r190 != 0;
    if (!cpy_r_r191) goto CPyL177;
    cpy_r_r192 = CPyStatics[53]; /* 'indexed' */
    cpy_r_r193 = CPyDict_GetItem(cpy_r_i, cpy_r_r192);
    CPy_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 507, CPyStatic_main___globals);
        goto CPyL178;
    }
    if (unlikely(!PyBool_Check(cpy_r_r193))) {
        CPy_TypeError("bool", cpy_r_r193); cpy_r_r194 = 2;
    } else
        cpy_r_r194 = cpy_r_r193 == Py_True;
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r194 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 507, CPyStatic_main___globals);
        goto CPyL178;
    }
    if (!cpy_r_r194) goto CPyL179;
    cpy_r_r195 = CPyList_PopLast(cpy_r_topics);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 508, CPyStatic_main___globals);
        goto CPyL178;
    }
    cpy_r_r196 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r196 == NULL)) {
        goto CPyL180;
    } else
        goto CPyL114;
CPyL112: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r197 = 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 508, CPyStatic_main___globals);
        goto CPyL147;
    }
    CPy_Unreachable();
CPyL114: ;
    PyObject *cpy_r_r198[1] = {cpy_r_r195};
    cpy_r_r199 = (PyObject **)&cpy_r_r198;
    cpy_r_r200 = PyObject_Vectorcall(cpy_r_r196, cpy_r_r199, 1, 0);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 508, CPyStatic_main___globals);
        goto CPyL181;
    }
    CPy_DECREF(cpy_r_r195);
    cpy_r_r201 = CPyStatic_main___globals;
    cpy_r_r202 = CPyStatics[56]; /* 'eth_abi' */
    cpy_r_r203 = CPyDict_GetItem(cpy_r_r201, cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 510, CPyStatic_main___globals);
        goto CPyL182;
    }
    cpy_r_r204 = PyList_New(1);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 510, CPyStatic_main___globals);
        goto CPyL183;
    }
    cpy_r_r205 = (CPyPtr)&((PyListObject *)cpy_r_r204)->ob_item;
    cpy_r_r206 = *(CPyPtr *)cpy_r_r205;
    *(PyObject * *)cpy_r_r206 = cpy_r_r168;
    cpy_r_r207 = CPyStatics[57]; /* 'decode' */
    PyObject *cpy_r_r208[3] = {cpy_r_r203, cpy_r_r204, cpy_r_r200};
    cpy_r_r209 = (PyObject **)&cpy_r_r208;
    cpy_r_r210 = PyObject_VectorcallMethod(cpy_r_r207, cpy_r_r209, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 510, CPyStatic_main___globals);
        goto CPyL184;
    }
    CPy_DECREF(cpy_r_r203);
    CPy_DECREF_NO_IMM(cpy_r_r204);
    cpy_r_r211 = CPyStatics[137]; /* 0 */
    cpy_r_r212 = PyObject_GetItem(cpy_r_r210, cpy_r_r211);
    CPy_DECREF(cpy_r_r210);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 510, CPyStatic_main___globals);
        goto CPyL121;
    } else
        goto CPyL185;
CPyL120: ;
    cpy_r_value = cpy_r_r212;
    goto CPyL137;
CPyL121: ;
    cpy_r_r213 = CPy_CatchError();
    cpy_r_r214 = CPyStatic_main___globals;
    cpy_r_r215 = CPyStatics[58]; /* 'InsufficientDataBytes' */
    cpy_r_r216 = CPyDict_GetItem(cpy_r_r214, cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 511, CPyStatic_main___globals);
        goto CPyL186;
    }
    cpy_r_r217 = CPyStatic_main___globals;
    cpy_r_r218 = CPyStatics[65]; /* 'NoEntriesFound' */
    cpy_r_r219 = CPyDict_GetItem(cpy_r_r217, cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 511, CPyStatic_main___globals);
        goto CPyL187;
    }
    cpy_r_r220 = CPyModule_builtins;
    cpy_r_r221 = CPyStatics[63]; /* 'OverflowError' */
    cpy_r_r222 = CPyObject_GetAttr(cpy_r_r220, cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 511, CPyStatic_main___globals);
        goto CPyL188;
    }
    cpy_r_r223 = CPyStatic_main___globals;
    cpy_r_r224 = CPyStatics[62]; /* 'InvalidPointer' */
    cpy_r_r225 = CPyDict_GetItem(cpy_r_r223, cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 511, CPyStatic_main___globals);
        goto CPyL189;
    }
    cpy_r_r226.f0 = cpy_r_r216;
    cpy_r_r226.f1 = cpy_r_r219;
    cpy_r_r226.f2 = cpy_r_r222;
    cpy_r_r226.f3 = cpy_r_r225;
    cpy_r_r227 = PyTuple_New(4);
    if (unlikely(cpy_r_r227 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp15 = cpy_r_r226.f0;
    PyTuple_SET_ITEM(cpy_r_r227, 0, __tmp15);
    PyObject *__tmp16 = cpy_r_r226.f1;
    PyTuple_SET_ITEM(cpy_r_r227, 1, __tmp16);
    PyObject *__tmp17 = cpy_r_r226.f2;
    PyTuple_SET_ITEM(cpy_r_r227, 2, __tmp17);
    PyObject *__tmp18 = cpy_r_r226.f3;
    PyTuple_SET_ITEM(cpy_r_r227, 3, __tmp18);
    cpy_r_r228 = CPy_ExceptionMatches(cpy_r_r227);
    CPy_DecRef(cpy_r_r227);
    if (!cpy_r_r228) goto CPyL190;
    cpy_r_r229 = CPyDef_main____0xstring(cpy_r_r200);
    CPy_DecRef(cpy_r_r200);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 513, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r230 = CPyStatics[66]; /* 'value' */
    cpy_r_r231 = CPyDict_SetItem(cpy_r_element, cpy_r_r230, cpy_r_r229);
    CPy_DecRef(cpy_r_r229);
    cpy_r_r232 = cpy_r_r231 >= 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 513, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r233 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r234 = 0 ? Py_True : Py_False;
    cpy_r_r235 = CPyDict_SetItem(cpy_r_element, cpy_r_r233, cpy_r_r234);
    cpy_r_r236 = cpy_r_r235 >= 0;
    if (unlikely(!cpy_r_r236)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 514, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r237 = PyList_Append(cpy_r_r153, cpy_r_element);
    CPy_DecRef(cpy_r_element);
    cpy_r_r238 = cpy_r_r237 >= 0;
    if (unlikely(!cpy_r_r238)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 515, CPyStatic_main___globals);
        goto CPyL192;
    }
    CPy_RestoreExcInfo(cpy_r_r213);
    CPy_DecRef(cpy_r_r213.f0);
    CPy_DecRef(cpy_r_r213.f1);
    CPy_DecRef(cpy_r_r213.f2);
    goto CPyL145;
CPyL131: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL133;
    } else
        goto CPyL193;
CPyL132: ;
    CPy_Unreachable();
CPyL133: ;
    CPy_RestoreExcInfo(cpy_r_r213);
    CPy_DecRef(cpy_r_r213.f0);
    CPy_DecRef(cpy_r_r213.f1);
    CPy_DecRef(cpy_r_r213.f2);
    cpy_r_r239 = CPy_KeepPropagating();
    if (!cpy_r_r239) goto CPyL147;
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r240 = CPyList_PopLast(cpy_r_r103);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 518, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_value = cpy_r_r240;
CPyL137: ;
    cpy_r_r241 = (PyObject *)&PyBytes_Type;
    cpy_r_r242 = PyObject_IsInstance(cpy_r_value, cpy_r_r241);
    cpy_r_r243 = cpy_r_r242 >= 0;
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 520, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r244 = cpy_r_r242;
    if (!cpy_r_r244) goto CPyL142;
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r245 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 521, CPyStatic_main___globals, "bytes", cpy_r_value);
        goto CPyL194;
    }
    cpy_r_r246 = CPyDef_main____0xstring(cpy_r_r245);
    CPy_DECREF(cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 521, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_value = cpy_r_r246;
CPyL142: ;
    cpy_r_r247 = CPyStatics[66]; /* 'value' */
    cpy_r_r248 = CPyDict_SetItem(cpy_r_element, cpy_r_r247, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    cpy_r_r249 = cpy_r_r248 >= 0;
    if (unlikely(!cpy_r_r249)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 523, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_r250 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r251 = 1 ? Py_True : Py_False;
    cpy_r_r252 = CPyDict_SetItem(cpy_r_element, cpy_r_r250, cpy_r_r251);
    cpy_r_r253 = cpy_r_r252 >= 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 524, CPyStatic_main___globals);
        goto CPyL194;
    }
    cpy_r_r254 = PyList_Append(cpy_r_r153, cpy_r_element);
    CPy_DECREF(cpy_r_element);
    cpy_r_r255 = cpy_r_r254 >= 0;
    if (unlikely(!cpy_r_r255)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 525, CPyStatic_main___globals);
        goto CPyL173;
    }
CPyL145: ;
    cpy_r_r256 = cpy_r_r154 + 2;
    cpy_r_r154 = cpy_r_r256;
    goto CPyL91;
CPyL146: ;
    return cpy_r_r153;
CPyL147: ;
    cpy_r_r257 = NULL;
    return cpy_r_r257;
CPyL148: ;
    CPy_DecRef(cpy_r_unindexed_types);
    CPyTagged_DecRef(cpy_r_indexed_count);
    goto CPyL147;
CPyL149: ;
    CPy_DecRef(cpy_r_unindexed_types);
    CPyTagged_DecRef(cpy_r_indexed_count);
    CPy_DecRef(cpy_r_i);
    goto CPyL147;
CPyL150: ;
    CPy_DECREF(cpy_r_i);
    goto CPyL7;
CPyL151: ;
    CPy_DECREF_NO_IMM(cpy_r_unindexed_types);
    CPyTagged_DECREF(cpy_r_indexed_count);
    goto CPyL12;
CPyL152: ;
    CPyTagged_DECREF(cpy_r_indexed_count);
    goto CPyL27;
CPyL153: ;
    CPy_DECREF_NO_IMM(cpy_r_unindexed_types);
    goto CPyL14;
CPyL154: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL38;
CPyL155: ;
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    goto CPyL35;
CPyL156: ;
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    goto CPyL37;
CPyL157: ;
    CPy_INCREF(cpy_r_data);
    goto CPyL46;
CPyL158: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL147;
CPyL159: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r51);
    goto CPyL57;
CPyL160: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r87);
    goto CPyL48;
CPyL161: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r87);
    goto CPyL57;
CPyL162: ;
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r92);
    goto CPyL57;
CPyL163: ;
    CPy_DecRef(cpy_r_r97);
    goto CPyL57;
CPyL164: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL62;
CPyL165: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL68;
CPyL166: ;
    CPy_DecRef(cpy_r_r130);
    goto CPyL84;
CPyL167: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL75;
CPyL168: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL81;
CPyL169: ;
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL83;
CPyL170: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL147;
CPyL171: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    goto CPyL147;
CPyL172: ;
    CPy_DECREF_NO_IMM(cpy_r_topics);
    CPy_DECREF_NO_IMM(cpy_r_r103);
    goto CPyL146;
CPyL173: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    goto CPyL147;
CPyL174: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    goto CPyL147;
CPyL175: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    goto CPyL147;
CPyL176: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_r176);
    goto CPyL147;
CPyL177: ;
    CPy_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r168);
    goto CPyL135;
CPyL178: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_element);
    goto CPyL147;
CPyL179: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL135;
CPyL180: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r195);
    goto CPyL112;
CPyL181: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r195);
    goto CPyL147;
CPyL182: ;
    CPy_DecRef(cpy_r_r168);
    goto CPyL121;
CPyL183: ;
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_r203);
    goto CPyL121;
CPyL184: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r204);
    goto CPyL121;
CPyL185: ;
    CPy_DECREF(cpy_r_r200);
    goto CPyL120;
CPyL186: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    goto CPyL133;
CPyL187: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_r216);
    goto CPyL133;
CPyL188: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r219);
    goto CPyL133;
CPyL189: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r219);
    CPy_DecRef(cpy_r_r222);
    goto CPyL133;
CPyL190: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r200);
    goto CPyL131;
CPyL191: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    goto CPyL133;
CPyL192: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    goto CPyL133;
CPyL193: ;
    CPy_DecRef(cpy_r_r213.f0);
    CPy_DecRef(cpy_r_r213.f1);
    CPy_DecRef(cpy_r_r213.f2);
    goto CPyL132;
CPyL194: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    goto CPyL147;
CPyL195: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_value);
    goto CPyL147;
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
    CPy_AddTraceback("eth_event/main.py", "_decode", 447, CPyStatic_main___globals);
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
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
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
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    PyObject **cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject **cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    int32_t cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject **cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
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
    int32_t cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
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
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    int32_t cpy_r_r260;
    char cpy_r_r261;
    PyObject **cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject **cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    int32_t cpy_r_r273;
    char cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject **cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    int32_t cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    int32_t cpy_r_r315;
    char cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    int32_t cpy_r_r321;
    char cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    int32_t cpy_r_r325;
    char cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    int32_t cpy_r_r331;
    char cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    int32_t cpy_r_r335;
    char cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    int32_t cpy_r_r339;
    char cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    int32_t cpy_r_r343;
    char cpy_r_r344;
    PyObject **cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject **cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    int32_t cpy_r_r356;
    char cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    tuple_T2OO cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    int32_t cpy_r_r373;
    char cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    tuple_T3OOO cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    int32_t cpy_r_r382;
    char cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    int32_t cpy_r_r389;
    char cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    int32_t cpy_r_r396;
    char cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    int32_t cpy_r_r405;
    char cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    int32_t cpy_r_r412;
    char cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject **cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    int32_t cpy_r_r425;
    char cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    char cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    char cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    char cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject **cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject *cpy_r_r460;
    PyObject *cpy_r_r461;
    int32_t cpy_r_r462;
    char cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    int32_t cpy_r_r466;
    char cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    int32_t cpy_r_r470;
    char cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    int32_t cpy_r_r474;
    char cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    int32_t cpy_r_r478;
    char cpy_r_r479;
    PyObject **cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    int32_t cpy_r_r485;
    char cpy_r_r486;
    PyObject *cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject *cpy_r_r493;
    PyObject *cpy_r_r494;
    PyObject *cpy_r_r495;
    PyObject *cpy_r_r496;
    tuple_T2OO cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    int32_t cpy_r_r502;
    char cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    char cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject *cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    PyObject *cpy_r_r515;
    PyObject *cpy_r_r516;
    char cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    char cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject **cpy_r_r531;
    PyObject *cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    int32_t cpy_r_r539;
    char cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    int32_t cpy_r_r543;
    char cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    int32_t cpy_r_r547;
    char cpy_r_r548;
    PyObject *cpy_r_r549;
    PyObject *cpy_r_r550;
    int32_t cpy_r_r551;
    char cpy_r_r552;
    PyObject *cpy_r_r553;
    PyObject *cpy_r_r554;
    int32_t cpy_r_r555;
    char cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    int32_t cpy_r_r559;
    char cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    int32_t cpy_r_r563;
    char cpy_r_r564;
    PyObject **cpy_r_r566;
    PyObject *cpy_r_r567;
    PyObject *cpy_r_r568;
    PyObject *cpy_r_r569;
    int32_t cpy_r_r570;
    char cpy_r_r571;
    PyObject *cpy_r_r572;
    char cpy_r_r573;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", -1, CPyStatic_main___globals);
        goto CPyL211;
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
    cpy_r_r11 = CPyStatics[141]; /* (('functools', 'functools', 'functools'),
                                    ('re', 're', 're')) */
    cpy_r_r12 = CPyStatic_main___globals;
    cpy_r_r13 = CPyStatics[69]; /* 'eth_event/main.py' */
    cpy_r_r14 = CPyStatics[70]; /* '<module>' */
    cpy_r_r15 = CPyImport_ImportMany(cpy_r_r11, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r10);
    if (!cpy_r_r15) goto CPyL211;
    cpy_r_r16 = CPyStatics[142]; /* ('Any', 'Callable', 'Dict', 'Final', 'List', 'Literal',
                                    'Mapping', 'Optional', 'Sequence', 'TypedDict', 'Union',
                                    'final', 'overload') */
    cpy_r_r17 = CPyStatics[84]; /* 'typing' */
    cpy_r_r18 = CPyStatic_main___globals;
    cpy_r_r19 = CPyImport_ImportFromMany(cpy_r_r17, cpy_r_r16, cpy_r_r16, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 5, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_typing = cpy_r_r19;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r20 = (PyObject **)&CPyModule_cchecksum;
    cpy_r_r21 = (PyObject **)&CPyModule_eth_abi;
    cpy_r_r22 = (PyObject **)&CPyModule_hexbytes;
    PyObject **cpy_r_r23[3] = {cpy_r_r20, cpy_r_r21, cpy_r_r22};
    cpy_r_r24 = (void *)&cpy_r_r23;
    int64_t cpy_r_r25[3] = {21, 22, 23};
    cpy_r_r26 = (void *)&cpy_r_r25;
    cpy_r_r27 = CPyStatics[146]; /* (('cchecksum', 'cchecksum', 'cchecksum'),
                                    ('eth_abi', 'eth_abi', 'eth_abi'),
                                    ('hexbytes', 'hexbytes', 'hexbytes')) */
    cpy_r_r28 = CPyStatic_main___globals;
    cpy_r_r29 = CPyStatics[69]; /* 'eth_event/main.py' */
    cpy_r_r30 = CPyStatics[70]; /* '<module>' */
    cpy_r_r31 = CPyImport_ImportMany(cpy_r_r27, cpy_r_r24, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r26);
    if (!cpy_r_r31) goto CPyL211;
    cpy_r_r32 = CPyStatics[147]; /* ('InsufficientDataBytes', 'NoEntriesFound',
                                    'NonEmptyPaddingBytes') */
    cpy_r_r33 = CPyStatics[87]; /* 'eth_abi.exceptions' */
    cpy_r_r34 = CPyStatic_main___globals;
    cpy_r_r35 = CPyImport_ImportFromMany(cpy_r_r33, cpy_r_r32, cpy_r_r32, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 24, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_eth_abi___exceptions = cpy_r_r35;
    CPy_INCREF(CPyModule_eth_abi___exceptions);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r36 = CPyStatics[148]; /* ('auto',) */
    cpy_r_r37 = CPyStatics[89]; /* 'eth_hash' */
    cpy_r_r38 = CPyStatic_main___globals;
    cpy_r_r39 = CPyImport_ImportFromMany(cpy_r_r37, cpy_r_r36, cpy_r_r36, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 25, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_eth_hash = cpy_r_r39;
    CPy_INCREF(CPyModule_eth_hash);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r40 = CPyStatics[149]; /* ('ABIComponent', 'ABIComponentIndexed', 'ABIElement',
                                    'ABIEvent', 'AnyAddress', 'ChecksumAddress',
                                    'HexAddress', 'HexStr') */
    cpy_r_r41 = CPyStatics[98]; /* 'eth_typing' */
    cpy_r_r42 = CPyStatic_main___globals;
    cpy_r_r43 = CPyImport_ImportFromMany(cpy_r_r41, cpy_r_r40, cpy_r_r40, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 26, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_eth_typing = cpy_r_r43;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r44 = CPyStatics[150]; /* ('NotRequired',) */
    cpy_r_r45 = CPyStatics[100]; /* 'typing_extensions' */
    cpy_r_r46 = CPyStatic_main___globals;
    cpy_r_r47 = CPyImport_ImportFromMany(cpy_r_r45, cpy_r_r44, cpy_r_r44, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 36, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_typing_extensions = cpy_r_r47;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r48 = CPyStatics[151]; /* ('InvalidPointer',) */
    cpy_r_r49 = CPyStatics[101]; /* 'eth_event.conditional_imports' */
    cpy_r_r50 = CPyStatic_main___globals;
    cpy_r_r51 = CPyImport_ImportFromMany(cpy_r_r49, cpy_r_r48, cpy_r_r48, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 38, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_eth_event___conditional_imports = cpy_r_r51;
    CPy_INCREF(CPyModule_eth_event___conditional_imports);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r52 = CPyModule_builtins;
    cpy_r_r53 = CPyStatics[102]; /* 'Exception' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 42, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r55 = PyTuple_Pack(1, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 42, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r56 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r57 = (PyObject *)CPyType_main___ABIError_template;
    cpy_r_r58 = CPyType_FromTemplate(cpy_r_r57, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 42, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r59 = CPyStatics[103]; /* '__mypyc_attrs__' */
    cpy_r_r60 = CPyStatics[104]; /* '__dict__' */
    cpy_r_r61 = PyTuple_Pack(1, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 42, CPyStatic_main___globals);
        goto CPyL212;
    }
    cpy_r_r62 = PyObject_SetAttr(cpy_r_r58, cpy_r_r59, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 42, CPyStatic_main___globals);
        goto CPyL212;
    }
    CPyType_main___ABIError = (PyTypeObject *)cpy_r_r58;
    CPy_INCREF(CPyType_main___ABIError);
    cpy_r_r64 = CPyStatic_main___globals;
    cpy_r_r65 = CPyStatics[4]; /* 'ABIError' */
    cpy_r_r66 = CPyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 42, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r68 = CPyModule_builtins;
    cpy_r_r69 = CPyStatics[102]; /* 'Exception' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 47, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r71 = PyTuple_Pack(1, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 47, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r72 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r73 = (PyObject *)CPyType_main___EventError_template;
    cpy_r_r74 = CPyType_FromTemplate(cpy_r_r73, cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 47, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r75 = CPyStatics[103]; /* '__mypyc_attrs__' */
    cpy_r_r76 = CPyStatics[104]; /* '__dict__' */
    cpy_r_r77 = PyTuple_Pack(1, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 47, CPyStatic_main___globals);
        goto CPyL213;
    }
    cpy_r_r78 = PyObject_SetAttr(cpy_r_r74, cpy_r_r75, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 47, CPyStatic_main___globals);
        goto CPyL213;
    }
    CPyType_main___EventError = (PyTypeObject *)cpy_r_r74;
    CPy_INCREF(CPyType_main___EventError);
    cpy_r_r80 = CPyStatic_main___globals;
    cpy_r_r81 = CPyStatics[5]; /* 'EventError' */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 47, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r84 = CPyModule_builtins;
    cpy_r_r85 = CPyStatics[102]; /* 'Exception' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 52, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r87 = PyTuple_Pack(1, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 52, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r88 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r89 = (PyObject *)CPyType_main___StructLogError_template;
    cpy_r_r90 = CPyType_FromTemplate(cpy_r_r89, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 52, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r91 = CPyStatics[103]; /* '__mypyc_attrs__' */
    cpy_r_r92 = CPyStatics[104]; /* '__dict__' */
    cpy_r_r93 = PyTuple_Pack(1, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 52, CPyStatic_main___globals);
        goto CPyL214;
    }
    cpy_r_r94 = PyObject_SetAttr(cpy_r_r90, cpy_r_r91, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 52, CPyStatic_main___globals);
        goto CPyL214;
    }
    CPyType_main___StructLogError = (PyTypeObject *)cpy_r_r90;
    CPy_INCREF(CPyType_main___StructLogError);
    cpy_r_r96 = CPyStatic_main___globals;
    cpy_r_r97 = CPyStatics[6]; /* 'StructLogError' */
    cpy_r_r98 = CPyDict_SetItem(cpy_r_r96, cpy_r_r97, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 52, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r100 = CPyModule_builtins;
    cpy_r_r101 = CPyStatics[102]; /* 'Exception' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 57, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r103 = PyTuple_Pack(1, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 57, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r104 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r105 = (PyObject *)CPyType_main___UnknownEvent_template;
    cpy_r_r106 = CPyType_FromTemplate(cpy_r_r105, cpy_r_r103, cpy_r_r104);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 57, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r107 = CPyStatics[103]; /* '__mypyc_attrs__' */
    cpy_r_r108 = CPyStatics[104]; /* '__dict__' */
    cpy_r_r109 = PyTuple_Pack(1, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 57, CPyStatic_main___globals);
        goto CPyL215;
    }
    cpy_r_r110 = PyObject_SetAttr(cpy_r_r106, cpy_r_r107, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 57, CPyStatic_main___globals);
        goto CPyL215;
    }
    CPyType_main___UnknownEvent = (PyTypeObject *)cpy_r_r106;
    CPy_INCREF(CPyType_main___UnknownEvent);
    cpy_r_r112 = CPyStatic_main___globals;
    cpy_r_r113 = CPyStatics[7]; /* 'UnknownEvent' */
    cpy_r_r114 = CPyDict_SetItem(cpy_r_r112, cpy_r_r113, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 57, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r116 = CPyModule_typing;
    cpy_r_r117 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r118 = cpy_r_r116 != cpy_r_r117;
    if (cpy_r_r118) goto CPyL38;
    cpy_r_r119 = CPyStatics[84]; /* 'typing' */
    cpy_r_r120 = PyImport_Import(cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_typing = cpy_r_r120;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r120);
CPyL38: ;
    cpy_r_r121 = PyImport_GetModuleDict();
    cpy_r_r122 = CPyStatics[84]; /* 'typing' */
    cpy_r_r123 = CPyDict_GetItem(cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r124 = CPyStatics[105]; /* '_TypedDict' */
    cpy_r_r125 = CPyObject_GetAttr(cpy_r_r123, cpy_r_r124);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r126 = PyTuple_Pack(1, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r127 = CPyModule_typing;
    cpy_r_r128 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r129 = cpy_r_r127 != cpy_r_r128;
    if (cpy_r_r129) goto CPyL44;
    cpy_r_r130 = CPyStatics[84]; /* 'typing' */
    cpy_r_r131 = PyImport_Import(cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL216;
    }
    CPyModule_typing = cpy_r_r131;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r131);
CPyL44: ;
    cpy_r_r132 = PyImport_GetModuleDict();
    cpy_r_r133 = CPyStatics[84]; /* 'typing' */
    cpy_r_r134 = CPyDict_GetItem(cpy_r_r132, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL216;
    }
    cpy_r_r135 = CPyStatics[106]; /* '_TypedDictMeta' */
    cpy_r_r136 = CPyObject_GetAttr(cpy_r_r134, cpy_r_r135);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL216;
    }
    cpy_r_r137 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r138 = PyObject_HasAttr(cpy_r_r136, cpy_r_r137);
    if (!cpy_r_r138) goto CPyL51;
    cpy_r_r139 = CPyStatics[108]; /* 'EventData' */
    cpy_r_r140 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r141 = CPyObject_GetAttr(cpy_r_r136, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL217;
    }
    PyObject *cpy_r_r142[2] = {cpy_r_r139, cpy_r_r126};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = PyObject_Vectorcall(cpy_r_r141, cpy_r_r143, 2, 0);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL217;
    }
    if (likely(PyDict_Check(cpy_r_r144)))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals, "dict", cpy_r_r144);
        goto CPyL217;
    }
    cpy_r_r146 = cpy_r_r145;
    goto CPyL53;
CPyL51: ;
    cpy_r_r147 = PyDict_New();
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL217;
    }
    cpy_r_r146 = cpy_r_r147;
CPyL53: ;
    cpy_r_r148 = PyDict_New();
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r149 = (PyObject *)&PyUnicode_Type;
    cpy_r_r150 = CPyStatics[19]; /* 'name' */
    cpy_r_r151 = CPyDict_SetItem(cpy_r_r148, cpy_r_r150, cpy_r_r149);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 63, CPyStatic_main___globals);
        goto CPyL219;
    }
    cpy_r_r153 = (PyObject *)&PyUnicode_Type;
    cpy_r_r154 = CPyStatics[23]; /* 'type' */
    cpy_r_r155 = CPyDict_SetItem(cpy_r_r148, cpy_r_r154, cpy_r_r153);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 64, CPyStatic_main___globals);
        goto CPyL219;
    }
    cpy_r_r157 = CPyStatic_main___globals;
    cpy_r_r158 = CPyStatics[79]; /* 'Sequence' */
    cpy_r_r159 = CPyDict_GetItem(cpy_r_r157, cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 65, CPyStatic_main___globals);
        goto CPyL219;
    }
    cpy_r_r160 = CPyStatics[52]; /* 'components' */
    cpy_r_r161 = CPyDict_SetItem(cpy_r_r148, cpy_r_r160, cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 65, CPyStatic_main___globals);
        goto CPyL219;
    }
    cpy_r_r163 = CPyStatic_main___globals;
    cpy_r_r164 = CPyStatics[97]; /* 'HexStr' */
    cpy_r_r165 = CPyDict_GetItem(cpy_r_r163, cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL219;
    }
    cpy_r_r166 = CPyStatics[66]; /* 'value' */
    cpy_r_r167 = CPyDict_SetItem(cpy_r_r148, cpy_r_r166, cpy_r_r165);
    CPy_DECREF(cpy_r_r165);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 66, CPyStatic_main___globals);
        goto CPyL219;
    }
    cpy_r_r169 = (PyObject *)&PyBool_Type;
    cpy_r_r170 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r171 = CPyDict_SetItem(cpy_r_r148, cpy_r_r170, cpy_r_r169);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 67, CPyStatic_main___globals);
        goto CPyL219;
    }
    cpy_r_r173 = CPyStatics[108]; /* 'EventData' */
    cpy_r_r174 = CPyStatics[109]; /* '__annotations__' */
    cpy_r_r175 = CPyDict_SetItem(cpy_r_r146, cpy_r_r174, cpy_r_r148);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r177 = CPyStatics[110]; /* 'mypyc filler docstring' */
    cpy_r_r178 = CPyStatics[111]; /* '__doc__' */
    cpy_r_r179 = CPyDict_SetItem(cpy_r_r146, cpy_r_r178, cpy_r_r177);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r181 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r182 = CPyStatics[112]; /* '__module__' */
    cpy_r_r183 = CPyDict_SetItem(cpy_r_r146, cpy_r_r182, cpy_r_r181);
    cpy_r_r184 = cpy_r_r183 >= 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL218;
    }
    PyObject *cpy_r_r185[3] = {cpy_r_r173, cpy_r_r126, cpy_r_r146};
    cpy_r_r186 = (PyObject **)&cpy_r_r185;
    cpy_r_r187 = PyObject_Vectorcall(cpy_r_r136, cpy_r_r186, 3, 0);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL220;
    }
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r146);
    cpy_r_r188 = CPyStatic_main___globals;
    cpy_r_r189 = CPyStatics[82]; /* 'final' */
    cpy_r_r190 = CPyDict_GetItem(cpy_r_r188, cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 61, CPyStatic_main___globals);
        goto CPyL221;
    }
    PyObject *cpy_r_r191[1] = {cpy_r_r187};
    cpy_r_r192 = (PyObject **)&cpy_r_r191;
    cpy_r_r193 = PyObject_Vectorcall(cpy_r_r190, cpy_r_r192, 1, 0);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL221;
    }
    CPy_DECREF(cpy_r_r187);
    CPyType_main___EventData = (PyTypeObject *)cpy_r_r193;
    CPy_INCREF(CPyType_main___EventData);
    cpy_r_r194 = CPyStatic_main___globals;
    cpy_r_r195 = CPyStatics[108]; /* 'EventData' */
    cpy_r_r196 = CPyDict_SetItem(cpy_r_r194, cpy_r_r195, cpy_r_r193);
    CPy_DECREF(cpy_r_r193);
    cpy_r_r197 = cpy_r_r196 >= 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r198 = (PyObject *)CPyType_main___EventData;
    cpy_r_r199 = CPyModule_typing;
    cpy_r_r200 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r201 = cpy_r_r199 != cpy_r_r200;
    if (cpy_r_r201) goto CPyL71;
    cpy_r_r202 = CPyStatics[84]; /* 'typing' */
    cpy_r_r203 = PyImport_Import(cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_typing = cpy_r_r203;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r203);
CPyL71: ;
    cpy_r_r204 = PyImport_GetModuleDict();
    cpy_r_r205 = CPyStatics[84]; /* 'typing' */
    cpy_r_r206 = CPyDict_GetItem(cpy_r_r204, cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r207 = CPyStatics[105]; /* '_TypedDict' */
    cpy_r_r208 = CPyObject_GetAttr(cpy_r_r206, cpy_r_r207);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r209 = PyTuple_Pack(1, cpy_r_r208);
    CPy_DECREF(cpy_r_r208);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r210 = CPyModule_typing;
    cpy_r_r211 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r212 = cpy_r_r210 != cpy_r_r211;
    if (cpy_r_r212) goto CPyL77;
    cpy_r_r213 = CPyStatics[84]; /* 'typing' */
    cpy_r_r214 = PyImport_Import(cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL222;
    }
    CPyModule_typing = cpy_r_r214;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r214);
CPyL77: ;
    cpy_r_r215 = PyImport_GetModuleDict();
    cpy_r_r216 = CPyStatics[84]; /* 'typing' */
    cpy_r_r217 = CPyDict_GetItem(cpy_r_r215, cpy_r_r216);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL222;
    }
    cpy_r_r218 = CPyStatics[106]; /* '_TypedDictMeta' */
    cpy_r_r219 = CPyObject_GetAttr(cpy_r_r217, cpy_r_r218);
    CPy_DECREF(cpy_r_r217);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL222;
    }
    cpy_r_r220 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r221 = PyObject_HasAttr(cpy_r_r219, cpy_r_r220);
    if (!cpy_r_r221) goto CPyL84;
    cpy_r_r222 = CPyStatics[113]; /* 'DecodedEvent' */
    cpy_r_r223 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r224 = CPyObject_GetAttr(cpy_r_r219, cpy_r_r223);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL223;
    }
    PyObject *cpy_r_r225[2] = {cpy_r_r222, cpy_r_r209};
    cpy_r_r226 = (PyObject **)&cpy_r_r225;
    cpy_r_r227 = PyObject_Vectorcall(cpy_r_r224, cpy_r_r226, 2, 0);
    CPy_DECREF(cpy_r_r224);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL223;
    }
    if (likely(PyDict_Check(cpy_r_r227)))
        cpy_r_r228 = cpy_r_r227;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals, "dict", cpy_r_r227);
        goto CPyL223;
    }
    cpy_r_r229 = cpy_r_r228;
    goto CPyL86;
CPyL84: ;
    cpy_r_r230 = PyDict_New();
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL223;
    }
    cpy_r_r229 = cpy_r_r230;
CPyL86: ;
    cpy_r_r231 = PyDict_New();
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r232 = (PyObject *)&PyUnicode_Type;
    cpy_r_r233 = CPyStatics[19]; /* 'name' */
    cpy_r_r234 = CPyDict_SetItem(cpy_r_r231, cpy_r_r233, cpy_r_r232);
    cpy_r_r235 = cpy_r_r234 >= 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 72, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r236 = (PyObject *)&PyList_Type;
    cpy_r_r237 = CPyStatics[30]; /* 'data' */
    cpy_r_r238 = CPyDict_SetItem(cpy_r_r231, cpy_r_r237, cpy_r_r236);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 73, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r240 = (PyObject *)&PyType_Type;
    cpy_r_r241 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r242 = CPyDict_SetItem(cpy_r_r231, cpy_r_r241, cpy_r_r240);
    cpy_r_r243 = cpy_r_r242 >= 0;
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r244 = CPyStatic_main___globals;
    cpy_r_r245 = CPyStatics[95]; /* 'ChecksumAddress' */
    cpy_r_r246 = CPyDict_GetItem(cpy_r_r244, cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 75, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r247 = CPyStatics[32]; /* 'address' */
    cpy_r_r248 = CPyDict_SetItem(cpy_r_r231, cpy_r_r247, cpy_r_r246);
    CPy_DECREF(cpy_r_r246);
    cpy_r_r249 = cpy_r_r248 >= 0;
    if (unlikely(!cpy_r_r249)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 75, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r250 = CPyStatics[113]; /* 'DecodedEvent' */
    cpy_r_r251 = CPyStatics[109]; /* '__annotations__' */
    cpy_r_r252 = CPyDict_SetItem(cpy_r_r229, cpy_r_r251, cpy_r_r231);
    CPy_DECREF(cpy_r_r231);
    cpy_r_r253 = cpy_r_r252 >= 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r254 = CPyStatics[110]; /* 'mypyc filler docstring' */
    cpy_r_r255 = CPyStatics[111]; /* '__doc__' */
    cpy_r_r256 = CPyDict_SetItem(cpy_r_r229, cpy_r_r255, cpy_r_r254);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r258 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r259 = CPyStatics[112]; /* '__module__' */
    cpy_r_r260 = CPyDict_SetItem(cpy_r_r229, cpy_r_r259, cpy_r_r258);
    cpy_r_r261 = cpy_r_r260 >= 0;
    if (unlikely(!cpy_r_r261)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL224;
    }
    PyObject *cpy_r_r262[3] = {cpy_r_r250, cpy_r_r209, cpy_r_r229};
    cpy_r_r263 = (PyObject **)&cpy_r_r262;
    cpy_r_r264 = PyObject_Vectorcall(cpy_r_r219, cpy_r_r263, 3, 0);
    CPy_DECREF(cpy_r_r219);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL226;
    }
    CPy_DECREF(cpy_r_r209);
    CPy_DECREF(cpy_r_r229);
    cpy_r_r265 = CPyStatic_main___globals;
    cpy_r_r266 = CPyStatics[82]; /* 'final' */
    cpy_r_r267 = CPyDict_GetItem(cpy_r_r265, cpy_r_r266);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 70, CPyStatic_main___globals);
        goto CPyL227;
    }
    PyObject *cpy_r_r268[1] = {cpy_r_r264};
    cpy_r_r269 = (PyObject **)&cpy_r_r268;
    cpy_r_r270 = PyObject_Vectorcall(cpy_r_r267, cpy_r_r269, 1, 0);
    CPy_DECREF(cpy_r_r267);
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL227;
    }
    CPy_DECREF(cpy_r_r264);
    CPyType_main___DecodedEvent = (PyTypeObject *)cpy_r_r270;
    CPy_INCREF(CPyType_main___DecodedEvent);
    cpy_r_r271 = CPyStatic_main___globals;
    cpy_r_r272 = CPyStatics[113]; /* 'DecodedEvent' */
    cpy_r_r273 = CPyDict_SetItem(cpy_r_r271, cpy_r_r272, cpy_r_r270);
    CPy_DECREF(cpy_r_r270);
    cpy_r_r274 = cpy_r_r273 >= 0;
    if (unlikely(!cpy_r_r274)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r275 = (PyObject *)CPyType_main___DecodedEvent;
    cpy_r_r276 = CPyModule_typing;
    cpy_r_r277 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r278 = cpy_r_r276 != cpy_r_r277;
    if (cpy_r_r278) goto CPyL102;
    cpy_r_r279 = CPyStatics[84]; /* 'typing' */
    cpy_r_r280 = PyImport_Import(cpy_r_r279);
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_typing = cpy_r_r280;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r280);
CPyL102: ;
    cpy_r_r281 = PyImport_GetModuleDict();
    cpy_r_r282 = CPyStatics[84]; /* 'typing' */
    cpy_r_r283 = CPyDict_GetItem(cpy_r_r281, cpy_r_r282);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r284 = CPyStatics[105]; /* '_TypedDict' */
    cpy_r_r285 = CPyObject_GetAttr(cpy_r_r283, cpy_r_r284);
    CPy_DECREF(cpy_r_r283);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r286 = PyTuple_Pack(1, cpy_r_r285);
    CPy_DECREF(cpy_r_r285);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r287 = CPyModule_typing;
    cpy_r_r288 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r289 = cpy_r_r287 != cpy_r_r288;
    if (cpy_r_r289) goto CPyL108;
    cpy_r_r290 = CPyStatics[84]; /* 'typing' */
    cpy_r_r291 = PyImport_Import(cpy_r_r290);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL228;
    }
    CPyModule_typing = cpy_r_r291;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r291);
CPyL108: ;
    cpy_r_r292 = PyImport_GetModuleDict();
    cpy_r_r293 = CPyStatics[84]; /* 'typing' */
    cpy_r_r294 = CPyDict_GetItem(cpy_r_r292, cpy_r_r293);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL228;
    }
    cpy_r_r295 = CPyStatics[106]; /* '_TypedDictMeta' */
    cpy_r_r296 = CPyObject_GetAttr(cpy_r_r294, cpy_r_r295);
    CPy_DECREF(cpy_r_r294);
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL228;
    }
    cpy_r_r297 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r298 = PyObject_HasAttr(cpy_r_r296, cpy_r_r297);
    if (!cpy_r_r298) goto CPyL115;
    cpy_r_r299 = CPyStatics[114]; /* 'NonDecodedEvent' */
    cpy_r_r300 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r301 = CPyObject_GetAttr(cpy_r_r296, cpy_r_r300);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL229;
    }
    PyObject *cpy_r_r302[2] = {cpy_r_r299, cpy_r_r286};
    cpy_r_r303 = (PyObject **)&cpy_r_r302;
    cpy_r_r304 = PyObject_Vectorcall(cpy_r_r301, cpy_r_r303, 2, 0);
    CPy_DECREF(cpy_r_r301);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL229;
    }
    if (likely(PyDict_Check(cpy_r_r304)))
        cpy_r_r305 = cpy_r_r304;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals, "dict", cpy_r_r304);
        goto CPyL229;
    }
    cpy_r_r306 = cpy_r_r305;
    goto CPyL117;
CPyL115: ;
    cpy_r_r307 = PyDict_New();
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL229;
    }
    cpy_r_r306 = cpy_r_r307;
CPyL117: ;
    cpy_r_r308 = PyDict_New();
    if (unlikely(cpy_r_r308 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r309 = (PyObject *)&PyType_Type;
    cpy_r_r310 = CPyStatics[19]; /* 'name' */
    cpy_r_r311 = CPyDict_SetItem(cpy_r_r308, cpy_r_r310, cpy_r_r309);
    cpy_r_r312 = cpy_r_r311 >= 0;
    if (unlikely(!cpy_r_r312)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 80, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r313 = (PyObject *)&PyList_Type;
    cpy_r_r314 = CPyStatics[27]; /* 'topics' */
    cpy_r_r315 = CPyDict_SetItem(cpy_r_r308, cpy_r_r314, cpy_r_r313);
    cpy_r_r316 = cpy_r_r315 >= 0;
    if (unlikely(!cpy_r_r316)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 81, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r317 = CPyStatic_main___globals;
    cpy_r_r318 = CPyStatics[97]; /* 'HexStr' */
    cpy_r_r319 = CPyDict_GetItem(cpy_r_r317, cpy_r_r318);
    if (unlikely(cpy_r_r319 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 82, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r320 = CPyStatics[30]; /* 'data' */
    cpy_r_r321 = CPyDict_SetItem(cpy_r_r308, cpy_r_r320, cpy_r_r319);
    CPy_DECREF(cpy_r_r319);
    cpy_r_r322 = cpy_r_r321 >= 0;
    if (unlikely(!cpy_r_r322)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 82, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r323 = (PyObject *)&PyType_Type;
    cpy_r_r324 = CPyStatics[31]; /* 'decoded' */
    cpy_r_r325 = CPyDict_SetItem(cpy_r_r308, cpy_r_r324, cpy_r_r323);
    cpy_r_r326 = cpy_r_r325 >= 0;
    if (unlikely(!cpy_r_r326)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 83, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r327 = CPyStatic_main___globals;
    cpy_r_r328 = CPyStatics[95]; /* 'ChecksumAddress' */
    cpy_r_r329 = CPyDict_GetItem(cpy_r_r327, cpy_r_r328);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 84, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r330 = CPyStatics[32]; /* 'address' */
    cpy_r_r331 = CPyDict_SetItem(cpy_r_r308, cpy_r_r330, cpy_r_r329);
    CPy_DECREF(cpy_r_r329);
    cpy_r_r332 = cpy_r_r331 >= 0;
    if (unlikely(!cpy_r_r332)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 84, CPyStatic_main___globals);
        goto CPyL231;
    }
    cpy_r_r333 = CPyStatics[114]; /* 'NonDecodedEvent' */
    cpy_r_r334 = CPyStatics[109]; /* '__annotations__' */
    cpy_r_r335 = CPyDict_SetItem(cpy_r_r306, cpy_r_r334, cpy_r_r308);
    CPy_DECREF(cpy_r_r308);
    cpy_r_r336 = cpy_r_r335 >= 0;
    if (unlikely(!cpy_r_r336)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r337 = CPyStatics[110]; /* 'mypyc filler docstring' */
    cpy_r_r338 = CPyStatics[111]; /* '__doc__' */
    cpy_r_r339 = CPyDict_SetItem(cpy_r_r306, cpy_r_r338, cpy_r_r337);
    cpy_r_r340 = cpy_r_r339 >= 0;
    if (unlikely(!cpy_r_r340)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r341 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r342 = CPyStatics[112]; /* '__module__' */
    cpy_r_r343 = CPyDict_SetItem(cpy_r_r306, cpy_r_r342, cpy_r_r341);
    cpy_r_r344 = cpy_r_r343 >= 0;
    if (unlikely(!cpy_r_r344)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL230;
    }
    PyObject *cpy_r_r345[3] = {cpy_r_r333, cpy_r_r286, cpy_r_r306};
    cpy_r_r346 = (PyObject **)&cpy_r_r345;
    cpy_r_r347 = PyObject_Vectorcall(cpy_r_r296, cpy_r_r346, 3, 0);
    CPy_DECREF(cpy_r_r296);
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL232;
    }
    CPy_DECREF(cpy_r_r286);
    CPy_DECREF(cpy_r_r306);
    cpy_r_r348 = CPyStatic_main___globals;
    cpy_r_r349 = CPyStatics[82]; /* 'final' */
    cpy_r_r350 = CPyDict_GetItem(cpy_r_r348, cpy_r_r349);
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 78, CPyStatic_main___globals);
        goto CPyL233;
    }
    PyObject *cpy_r_r351[1] = {cpy_r_r347};
    cpy_r_r352 = (PyObject **)&cpy_r_r351;
    cpy_r_r353 = PyObject_Vectorcall(cpy_r_r350, cpy_r_r352, 1, 0);
    CPy_DECREF(cpy_r_r350);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL233;
    }
    CPy_DECREF(cpy_r_r347);
    CPyType_main___NonDecodedEvent = (PyTypeObject *)cpy_r_r353;
    CPy_INCREF(CPyType_main___NonDecodedEvent);
    cpy_r_r354 = CPyStatic_main___globals;
    cpy_r_r355 = CPyStatics[114]; /* 'NonDecodedEvent' */
    cpy_r_r356 = CPyDict_SetItem(cpy_r_r354, cpy_r_r355, cpy_r_r353);
    CPy_DECREF(cpy_r_r353);
    cpy_r_r357 = cpy_r_r356 >= 0;
    if (unlikely(!cpy_r_r357)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 79, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r358 = (PyObject *)CPyType_main___NonDecodedEvent;
    cpy_r_r359 = CPyStatic_main___globals;
    cpy_r_r360 = CPyStatics[81]; /* 'Union' */
    cpy_r_r361 = CPyDict_GetItem(cpy_r_r359, cpy_r_r360);
    if (unlikely(cpy_r_r361 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 87, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r362 = CPyStatic_main___globals;
    cpy_r_r363 = CPyStatics[113]; /* 'DecodedEvent' */
    cpy_r_r364 = CPyDict_GetItem(cpy_r_r362, cpy_r_r363);
    if (unlikely(cpy_r_r364 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 87, CPyStatic_main___globals);
        goto CPyL234;
    }
    cpy_r_r365 = CPyStatic_main___globals;
    cpy_r_r366 = CPyStatics[114]; /* 'NonDecodedEvent' */
    cpy_r_r367 = CPyDict_GetItem(cpy_r_r365, cpy_r_r366);
    if (unlikely(cpy_r_r367 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 87, CPyStatic_main___globals);
        goto CPyL235;
    }
    cpy_r_r368.f0 = cpy_r_r364;
    cpy_r_r368.f1 = cpy_r_r367;
    cpy_r_r369 = PyTuple_New(2);
    if (unlikely(cpy_r_r369 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp19 = cpy_r_r368.f0;
    PyTuple_SET_ITEM(cpy_r_r369, 0, __tmp19);
    PyObject *__tmp20 = cpy_r_r368.f1;
    PyTuple_SET_ITEM(cpy_r_r369, 1, __tmp20);
    cpy_r_r370 = PyObject_GetItem(cpy_r_r361, cpy_r_r369);
    CPy_DECREF(cpy_r_r361);
    CPy_DECREF(cpy_r_r369);
    if (unlikely(cpy_r_r370 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 87, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r371 = CPyStatic_main___globals;
    cpy_r_r372 = CPyStatics[115]; /* 'Event' */
    cpy_r_r373 = CPyDict_SetItem(cpy_r_r371, cpy_r_r372, cpy_r_r370);
    CPy_DECREF(cpy_r_r370);
    cpy_r_r374 = cpy_r_r373 >= 0;
    if (unlikely(!cpy_r_r374)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 87, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r375 = CPyStatics[116]; /* 'logIndex' */
    cpy_r_r376 = CPyStatics[117]; /* 'blockNumber' */
    cpy_r_r377 = CPyStatics[118]; /* 'transactionIndex' */
    CPy_INCREF(cpy_r_r375);
    CPy_INCREF(cpy_r_r376);
    CPy_INCREF(cpy_r_r377);
    cpy_r_r378.f0 = cpy_r_r375;
    cpy_r_r378.f1 = cpy_r_r376;
    cpy_r_r378.f2 = cpy_r_r377;
    CPyStatic_main___ADD_LOG_ENTRIES = cpy_r_r378;
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f0);
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f1);
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f2);
    cpy_r_r379 = CPyStatic_main___globals;
    cpy_r_r380 = CPyStatics[119]; /* 'ADD_LOG_ENTRIES' */
    cpy_r_r381 = PyTuple_New(3);
    if (unlikely(cpy_r_r381 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp21 = cpy_r_r378.f0;
    PyTuple_SET_ITEM(cpy_r_r381, 0, __tmp21);
    PyObject *__tmp22 = cpy_r_r378.f1;
    PyTuple_SET_ITEM(cpy_r_r381, 1, __tmp22);
    PyObject *__tmp23 = cpy_r_r378.f2;
    PyTuple_SET_ITEM(cpy_r_r381, 2, __tmp23);
    cpy_r_r382 = CPyDict_SetItem(cpy_r_r379, cpy_r_r380, cpy_r_r381);
    CPy_DECREF(cpy_r_r381);
    cpy_r_r383 = cpy_r_r382 >= 0;
    if (unlikely(!cpy_r_r383)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 90, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r384 = CPyModule_hexbytes;
    cpy_r_r385 = CPyStatics[120]; /* 'HexBytes' */
    cpy_r_r386 = CPyObject_GetAttr(cpy_r_r384, cpy_r_r385);
    if (unlikely(cpy_r_r386 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 92, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyStatic_main___HexBytes = cpy_r_r386;
    CPy_INCREF(CPyStatic_main___HexBytes);
    cpy_r_r387 = CPyStatic_main___globals;
    cpy_r_r388 = CPyStatics[120]; /* 'HexBytes' */
    cpy_r_r389 = CPyDict_SetItem(cpy_r_r387, cpy_r_r388, cpy_r_r386);
    CPy_DECREF(cpy_r_r386);
    cpy_r_r390 = cpy_r_r389 >= 0;
    if (unlikely(!cpy_r_r390)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 92, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r391 = CPyModule_cchecksum;
    cpy_r_r392 = CPyStatics[121]; /* 'to_checksum_address' */
    cpy_r_r393 = CPyObject_GetAttr(cpy_r_r391, cpy_r_r392);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 94, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyStatic_main___to_checksum_address = cpy_r_r393;
    CPy_INCREF(CPyStatic_main___to_checksum_address);
    cpy_r_r394 = CPyStatic_main___globals;
    cpy_r_r395 = CPyStatics[121]; /* 'to_checksum_address' */
    cpy_r_r396 = CPyDict_SetItem(cpy_r_r394, cpy_r_r395, cpy_r_r393);
    CPy_DECREF(cpy_r_r393);
    cpy_r_r397 = cpy_r_r396 >= 0;
    if (unlikely(!cpy_r_r397)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 94, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r398 = CPyStatic_main___globals;
    cpy_r_r399 = CPyStatics[88]; /* 'auto' */
    cpy_r_r400 = CPyDict_GetItem(cpy_r_r398, cpy_r_r399);
    if (unlikely(cpy_r_r400 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 95, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r401 = CPyStatics[122]; /* 'keccak' */
    cpy_r_r402 = CPyObject_GetAttr(cpy_r_r400, cpy_r_r401);
    CPy_DECREF(cpy_r_r400);
    if (unlikely(cpy_r_r402 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 95, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyStatic_main___keccak = cpy_r_r402;
    CPy_INCREF(CPyStatic_main___keccak);
    cpy_r_r403 = CPyStatic_main___globals;
    cpy_r_r404 = CPyStatics[122]; /* 'keccak' */
    cpy_r_r405 = CPyDict_SetItem(cpy_r_r403, cpy_r_r404, cpy_r_r402);
    CPy_DECREF(cpy_r_r402);
    cpy_r_r406 = cpy_r_r405 >= 0;
    if (unlikely(!cpy_r_r406)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 95, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r407 = CPyModule_functools;
    cpy_r_r408 = CPyStatics[123]; /* 'lru_cache' */
    cpy_r_r409 = CPyObject_GetAttr(cpy_r_r407, cpy_r_r408);
    if (unlikely(cpy_r_r409 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 96, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyStatic_main___lru_cache = cpy_r_r409;
    CPy_INCREF(CPyStatic_main___lru_cache);
    cpy_r_r410 = CPyStatic_main___globals;
    cpy_r_r411 = CPyStatics[123]; /* 'lru_cache' */
    cpy_r_r412 = CPyDict_SetItem(cpy_r_r410, cpy_r_r411, cpy_r_r409);
    CPy_DECREF(cpy_r_r409);
    cpy_r_r413 = cpy_r_r412 >= 0;
    if (unlikely(!cpy_r_r413)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 96, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r414 = CPyStatics[124]; /* 'tuple(\\[(\\d*)\\])?' */
    cpy_r_r415 = CPyModule_re;
    cpy_r_r416 = CPyStatics[125]; /* 'compile' */
    cpy_r_r417 = CPyObject_GetAttr(cpy_r_r415, cpy_r_r416);
    if (unlikely(cpy_r_r417 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 97, CPyStatic_main___globals);
        goto CPyL211;
    }
    PyObject *cpy_r_r418[1] = {cpy_r_r414};
    cpy_r_r419 = (PyObject **)&cpy_r_r418;
    cpy_r_r420 = PyObject_Vectorcall(cpy_r_r417, cpy_r_r419, 1, 0);
    CPy_DECREF(cpy_r_r417);
    if (unlikely(cpy_r_r420 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 97, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r421 = CPyStatics[126]; /* 'match' */
    cpy_r_r422 = CPyObject_GetAttr(cpy_r_r420, cpy_r_r421);
    CPy_DECREF(cpy_r_r420);
    if (unlikely(cpy_r_r422 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 97, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyStatic_main____tuple_match = cpy_r_r422;
    CPy_INCREF(CPyStatic_main____tuple_match);
    cpy_r_r423 = CPyStatic_main___globals;
    cpy_r_r424 = CPyStatics[127]; /* '_tuple_match' */
    cpy_r_r425 = CPyDict_SetItem(cpy_r_r423, cpy_r_r424, cpy_r_r422);
    CPy_DECREF(cpy_r_r422);
    cpy_r_r426 = cpy_r_r425 >= 0;
    if (unlikely(!cpy_r_r426)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 97, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r427 = CPyModule_typing;
    cpy_r_r428 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r429 = cpy_r_r427 != cpy_r_r428;
    if (cpy_r_r429) goto CPyL154;
    cpy_r_r430 = CPyStatics[84]; /* 'typing' */
    cpy_r_r431 = PyImport_Import(cpy_r_r430);
    if (unlikely(cpy_r_r431 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_typing = cpy_r_r431;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r431);
CPyL154: ;
    cpy_r_r432 = PyImport_GetModuleDict();
    cpy_r_r433 = CPyStatics[84]; /* 'typing' */
    cpy_r_r434 = CPyDict_GetItem(cpy_r_r432, cpy_r_r433);
    if (unlikely(cpy_r_r434 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r435 = CPyStatics[105]; /* '_TypedDict' */
    cpy_r_r436 = CPyObject_GetAttr(cpy_r_r434, cpy_r_r435);
    CPy_DECREF(cpy_r_r434);
    if (unlikely(cpy_r_r436 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r437 = PyTuple_Pack(1, cpy_r_r436);
    CPy_DECREF(cpy_r_r436);
    if (unlikely(cpy_r_r437 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r438 = CPyModule_typing;
    cpy_r_r439 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r440 = cpy_r_r438 != cpy_r_r439;
    if (cpy_r_r440) goto CPyL160;
    cpy_r_r441 = CPyStatics[84]; /* 'typing' */
    cpy_r_r442 = PyImport_Import(cpy_r_r441);
    if (unlikely(cpy_r_r442 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL236;
    }
    CPyModule_typing = cpy_r_r442;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r442);
CPyL160: ;
    cpy_r_r443 = PyImport_GetModuleDict();
    cpy_r_r444 = CPyStatics[84]; /* 'typing' */
    cpy_r_r445 = CPyDict_GetItem(cpy_r_r443, cpy_r_r444);
    if (unlikely(cpy_r_r445 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL236;
    }
    cpy_r_r446 = CPyStatics[106]; /* '_TypedDictMeta' */
    cpy_r_r447 = CPyObject_GetAttr(cpy_r_r445, cpy_r_r446);
    CPy_DECREF(cpy_r_r445);
    if (unlikely(cpy_r_r447 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL236;
    }
    cpy_r_r448 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r449 = PyObject_HasAttr(cpy_r_r447, cpy_r_r448);
    if (!cpy_r_r449) goto CPyL167;
    cpy_r_r450 = CPyStatics[128]; /* 'TopicMapData' */
    cpy_r_r451 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r452 = CPyObject_GetAttr(cpy_r_r447, cpy_r_r451);
    if (unlikely(cpy_r_r452 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL237;
    }
    PyObject *cpy_r_r453[2] = {cpy_r_r450, cpy_r_r437};
    cpy_r_r454 = (PyObject **)&cpy_r_r453;
    cpy_r_r455 = PyObject_Vectorcall(cpy_r_r452, cpy_r_r454, 2, 0);
    CPy_DECREF(cpy_r_r452);
    if (unlikely(cpy_r_r455 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL237;
    }
    if (likely(PyDict_Check(cpy_r_r455)))
        cpy_r_r456 = cpy_r_r455;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals, "dict", cpy_r_r455);
        goto CPyL237;
    }
    cpy_r_r457 = cpy_r_r456;
    goto CPyL169;
CPyL167: ;
    cpy_r_r458 = PyDict_New();
    if (unlikely(cpy_r_r458 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL237;
    }
    cpy_r_r457 = cpy_r_r458;
CPyL169: ;
    cpy_r_r459 = PyDict_New();
    if (unlikely(cpy_r_r459 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL238;
    }
    cpy_r_r460 = (PyObject *)&PyUnicode_Type;
    cpy_r_r461 = CPyStatics[19]; /* 'name' */
    cpy_r_r462 = CPyDict_SetItem(cpy_r_r459, cpy_r_r461, cpy_r_r460);
    cpy_r_r463 = cpy_r_r462 >= 0;
    if (unlikely(!cpy_r_r463)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 126, CPyStatic_main___globals);
        goto CPyL239;
    }
    cpy_r_r464 = (PyObject *)&PyList_Type;
    cpy_r_r465 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r466 = CPyDict_SetItem(cpy_r_r459, cpy_r_r465, cpy_r_r464);
    cpy_r_r467 = cpy_r_r466 >= 0;
    if (unlikely(!cpy_r_r467)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 127, CPyStatic_main___globals);
        goto CPyL239;
    }
    cpy_r_r468 = CPyStatics[128]; /* 'TopicMapData' */
    cpy_r_r469 = CPyStatics[109]; /* '__annotations__' */
    cpy_r_r470 = CPyDict_SetItem(cpy_r_r457, cpy_r_r469, cpy_r_r459);
    CPy_DECREF(cpy_r_r459);
    cpy_r_r471 = cpy_r_r470 >= 0;
    if (unlikely(!cpy_r_r471)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL238;
    }
    cpy_r_r472 = CPyStatics[110]; /* 'mypyc filler docstring' */
    cpy_r_r473 = CPyStatics[111]; /* '__doc__' */
    cpy_r_r474 = CPyDict_SetItem(cpy_r_r457, cpy_r_r473, cpy_r_r472);
    cpy_r_r475 = cpy_r_r474 >= 0;
    if (unlikely(!cpy_r_r475)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL238;
    }
    cpy_r_r476 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r477 = CPyStatics[112]; /* '__module__' */
    cpy_r_r478 = CPyDict_SetItem(cpy_r_r457, cpy_r_r477, cpy_r_r476);
    cpy_r_r479 = cpy_r_r478 >= 0;
    if (unlikely(!cpy_r_r479)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL238;
    }
    PyObject *cpy_r_r480[3] = {cpy_r_r468, cpy_r_r437, cpy_r_r457};
    cpy_r_r481 = (PyObject **)&cpy_r_r480;
    cpy_r_r482 = PyObject_Vectorcall(cpy_r_r447, cpy_r_r481, 3, 0);
    CPy_DECREF(cpy_r_r447);
    if (unlikely(cpy_r_r482 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL240;
    }
    CPy_DECREF(cpy_r_r437);
    CPy_DECREF(cpy_r_r457);
    CPyType_main___TopicMapData = (PyTypeObject *)cpy_r_r482;
    CPy_INCREF(CPyType_main___TopicMapData);
    cpy_r_r483 = CPyStatic_main___globals;
    cpy_r_r484 = CPyStatics[128]; /* 'TopicMapData' */
    cpy_r_r485 = CPyDict_SetItem(cpy_r_r483, cpy_r_r484, cpy_r_r482);
    CPy_DECREF(cpy_r_r482);
    cpy_r_r486 = cpy_r_r485 >= 0;
    if (unlikely(!cpy_r_r486)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 125, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r487 = (PyObject *)CPyType_main___TopicMapData;
    cpy_r_r488 = CPyStatic_main___globals;
    cpy_r_r489 = CPyStatics[77]; /* 'Mapping' */
    cpy_r_r490 = CPyDict_GetItem(cpy_r_r488, cpy_r_r489);
    if (unlikely(cpy_r_r490 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 130, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r491 = CPyStatic_main___globals;
    cpy_r_r492 = CPyStatics[97]; /* 'HexStr' */
    cpy_r_r493 = CPyDict_GetItem(cpy_r_r491, cpy_r_r492);
    if (unlikely(cpy_r_r493 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 130, CPyStatic_main___globals);
        goto CPyL241;
    }
    cpy_r_r494 = CPyStatic_main___globals;
    cpy_r_r495 = CPyStatics[128]; /* 'TopicMapData' */
    cpy_r_r496 = CPyDict_GetItem(cpy_r_r494, cpy_r_r495);
    if (unlikely(cpy_r_r496 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 130, CPyStatic_main___globals);
        goto CPyL242;
    }
    cpy_r_r497.f0 = cpy_r_r493;
    cpy_r_r497.f1 = cpy_r_r496;
    cpy_r_r498 = PyTuple_New(2);
    if (unlikely(cpy_r_r498 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp24 = cpy_r_r497.f0;
    PyTuple_SET_ITEM(cpy_r_r498, 0, __tmp24);
    PyObject *__tmp25 = cpy_r_r497.f1;
    PyTuple_SET_ITEM(cpy_r_r498, 1, __tmp25);
    cpy_r_r499 = PyObject_GetItem(cpy_r_r490, cpy_r_r498);
    CPy_DECREF(cpy_r_r490);
    CPy_DECREF(cpy_r_r498);
    if (unlikely(cpy_r_r499 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 130, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r500 = CPyStatic_main___globals;
    cpy_r_r501 = CPyStatics[129]; /* 'TopicMap' */
    cpy_r_r502 = CPyDict_SetItem(cpy_r_r500, cpy_r_r501, cpy_r_r499);
    CPy_DECREF(cpy_r_r499);
    cpy_r_r503 = cpy_r_r502 >= 0;
    if (unlikely(!cpy_r_r503)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 130, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r504 = CPyModule_typing;
    cpy_r_r505 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r506 = cpy_r_r504 != cpy_r_r505;
    if (cpy_r_r506) goto CPyL185;
    cpy_r_r507 = CPyStatics[84]; /* 'typing' */
    cpy_r_r508 = PyImport_Import(cpy_r_r507);
    if (unlikely(cpy_r_r508 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyModule_typing = cpy_r_r508;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r508);
CPyL185: ;
    cpy_r_r509 = PyImport_GetModuleDict();
    cpy_r_r510 = CPyStatics[84]; /* 'typing' */
    cpy_r_r511 = CPyDict_GetItem(cpy_r_r509, cpy_r_r510);
    if (unlikely(cpy_r_r511 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r512 = CPyStatics[105]; /* '_TypedDict' */
    cpy_r_r513 = CPyObject_GetAttr(cpy_r_r511, cpy_r_r512);
    CPy_DECREF(cpy_r_r511);
    if (unlikely(cpy_r_r513 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r514 = PyTuple_Pack(1, cpy_r_r513);
    CPy_DECREF(cpy_r_r513);
    if (unlikely(cpy_r_r514 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r515 = CPyModule_typing;
    cpy_r_r516 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r517 = cpy_r_r515 != cpy_r_r516;
    if (cpy_r_r517) goto CPyL191;
    cpy_r_r518 = CPyStatics[84]; /* 'typing' */
    cpy_r_r519 = PyImport_Import(cpy_r_r518);
    if (unlikely(cpy_r_r519 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL243;
    }
    CPyModule_typing = cpy_r_r519;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r519);
CPyL191: ;
    cpy_r_r520 = PyImport_GetModuleDict();
    cpy_r_r521 = CPyStatics[84]; /* 'typing' */
    cpy_r_r522 = CPyDict_GetItem(cpy_r_r520, cpy_r_r521);
    if (unlikely(cpy_r_r522 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL243;
    }
    cpy_r_r523 = CPyStatics[106]; /* '_TypedDictMeta' */
    cpy_r_r524 = CPyObject_GetAttr(cpy_r_r522, cpy_r_r523);
    CPy_DECREF(cpy_r_r522);
    if (unlikely(cpy_r_r524 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL243;
    }
    cpy_r_r525 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r526 = PyObject_HasAttr(cpy_r_r524, cpy_r_r525);
    if (!cpy_r_r526) goto CPyL198;
    cpy_r_r527 = CPyStatics[130]; /* '_TraceStep' */
    cpy_r_r528 = CPyStatics[107]; /* '__prepare__' */
    cpy_r_r529 = CPyObject_GetAttr(cpy_r_r524, cpy_r_r528);
    if (unlikely(cpy_r_r529 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL244;
    }
    PyObject *cpy_r_r530[2] = {cpy_r_r527, cpy_r_r514};
    cpy_r_r531 = (PyObject **)&cpy_r_r530;
    cpy_r_r532 = PyObject_Vectorcall(cpy_r_r529, cpy_r_r531, 2, 0);
    CPy_DECREF(cpy_r_r529);
    if (unlikely(cpy_r_r532 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL244;
    }
    if (likely(PyDict_Check(cpy_r_r532)))
        cpy_r_r533 = cpy_r_r532;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals, "dict", cpy_r_r532);
        goto CPyL244;
    }
    cpy_r_r534 = cpy_r_r533;
    goto CPyL200;
CPyL198: ;
    cpy_r_r535 = PyDict_New();
    if (unlikely(cpy_r_r535 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL244;
    }
    cpy_r_r534 = cpy_r_r535;
CPyL200: ;
    cpy_r_r536 = PyDict_New();
    if (unlikely(cpy_r_r536 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r537 = (PyObject *)&PyLong_Type;
    cpy_r_r538 = CPyStatics[35]; /* 'depth' */
    cpy_r_r539 = CPyDict_SetItem(cpy_r_r536, cpy_r_r538, cpy_r_r537);
    cpy_r_r540 = cpy_r_r539 >= 0;
    if (unlikely(!cpy_r_r540)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 318, CPyStatic_main___globals);
        goto CPyL246;
    }
    cpy_r_r541 = (PyObject *)&PyUnicode_Type;
    cpy_r_r542 = CPyStatics[36]; /* 'op' */
    cpy_r_r543 = CPyDict_SetItem(cpy_r_r536, cpy_r_r542, cpy_r_r541);
    cpy_r_r544 = cpy_r_r543 >= 0;
    if (unlikely(!cpy_r_r544)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 319, CPyStatic_main___globals);
        goto CPyL246;
    }
    cpy_r_r545 = (PyObject *)&PyList_Type;
    cpy_r_r546 = CPyStatics[40]; /* 'stack' */
    cpy_r_r547 = CPyDict_SetItem(cpy_r_r536, cpy_r_r546, cpy_r_r545);
    cpy_r_r548 = cpy_r_r547 >= 0;
    if (unlikely(!cpy_r_r548)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 320, CPyStatic_main___globals);
        goto CPyL246;
    }
    cpy_r_r549 = (PyObject *)&PyList_Type;
    cpy_r_r550 = CPyStatics[46]; /* 'memory' */
    cpy_r_r551 = CPyDict_SetItem(cpy_r_r536, cpy_r_r550, cpy_r_r549);
    cpy_r_r552 = cpy_r_r551 >= 0;
    if (unlikely(!cpy_r_r552)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 321, CPyStatic_main___globals);
        goto CPyL246;
    }
    cpy_r_r553 = CPyStatics[130]; /* '_TraceStep' */
    cpy_r_r554 = CPyStatics[109]; /* '__annotations__' */
    cpy_r_r555 = CPyDict_SetItem(cpy_r_r534, cpy_r_r554, cpy_r_r536);
    CPy_DECREF(cpy_r_r536);
    cpy_r_r556 = cpy_r_r555 >= 0;
    if (unlikely(!cpy_r_r556)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r557 = CPyStatics[110]; /* 'mypyc filler docstring' */
    cpy_r_r558 = CPyStatics[111]; /* '__doc__' */
    cpy_r_r559 = CPyDict_SetItem(cpy_r_r534, cpy_r_r558, cpy_r_r557);
    cpy_r_r560 = cpy_r_r559 >= 0;
    if (unlikely(!cpy_r_r560)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r561 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r562 = CPyStatics[112]; /* '__module__' */
    cpy_r_r563 = CPyDict_SetItem(cpy_r_r534, cpy_r_r562, cpy_r_r561);
    cpy_r_r564 = cpy_r_r563 >= 0;
    if (unlikely(!cpy_r_r564)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL245;
    }
    PyObject *cpy_r_r565[3] = {cpy_r_r553, cpy_r_r514, cpy_r_r534};
    cpy_r_r566 = (PyObject **)&cpy_r_r565;
    cpy_r_r567 = PyObject_Vectorcall(cpy_r_r524, cpy_r_r566, 3, 0);
    CPy_DECREF(cpy_r_r524);
    if (unlikely(cpy_r_r567 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL247;
    }
    CPy_DECREF(cpy_r_r514);
    CPy_DECREF(cpy_r_r534);
    CPyType_main____TraceStep = (PyTypeObject *)cpy_r_r567;
    CPy_INCREF(CPyType_main____TraceStep);
    cpy_r_r568 = CPyStatic_main___globals;
    cpy_r_r569 = CPyStatics[130]; /* '_TraceStep' */
    cpy_r_r570 = CPyDict_SetItem(cpy_r_r568, cpy_r_r569, cpy_r_r567);
    CPy_DECREF(cpy_r_r567);
    cpy_r_r571 = cpy_r_r570 >= 0;
    if (unlikely(!cpy_r_r571)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 317, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r572 = (PyObject *)CPyType_main____TraceStep;
    return 1;
CPyL211: ;
    cpy_r_r573 = 2;
    return cpy_r_r573;
CPyL212: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL211;
CPyL213: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL211;
CPyL214: ;
    CPy_DecRef(cpy_r_r90);
    goto CPyL211;
CPyL215: ;
    CPy_DecRef(cpy_r_r106);
    goto CPyL211;
CPyL216: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL211;
CPyL217: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r136);
    goto CPyL211;
CPyL218: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r146);
    goto CPyL211;
CPyL219: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    goto CPyL211;
CPyL220: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r146);
    goto CPyL211;
CPyL221: ;
    CPy_DecRef(cpy_r_r187);
    goto CPyL211;
CPyL222: ;
    CPy_DecRef(cpy_r_r209);
    goto CPyL211;
CPyL223: ;
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r219);
    goto CPyL211;
CPyL224: ;
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r219);
    CPy_DecRef(cpy_r_r229);
    goto CPyL211;
CPyL225: ;
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r219);
    CPy_DecRef(cpy_r_r229);
    CPy_DecRef(cpy_r_r231);
    goto CPyL211;
CPyL226: ;
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r229);
    goto CPyL211;
CPyL227: ;
    CPy_DecRef(cpy_r_r264);
    goto CPyL211;
CPyL228: ;
    CPy_DecRef(cpy_r_r286);
    goto CPyL211;
CPyL229: ;
    CPy_DecRef(cpy_r_r286);
    CPy_DecRef(cpy_r_r296);
    goto CPyL211;
CPyL230: ;
    CPy_DecRef(cpy_r_r286);
    CPy_DecRef(cpy_r_r296);
    CPy_DecRef(cpy_r_r306);
    goto CPyL211;
CPyL231: ;
    CPy_DecRef(cpy_r_r286);
    CPy_DecRef(cpy_r_r296);
    CPy_DecRef(cpy_r_r306);
    CPy_DecRef(cpy_r_r308);
    goto CPyL211;
CPyL232: ;
    CPy_DecRef(cpy_r_r286);
    CPy_DecRef(cpy_r_r306);
    goto CPyL211;
CPyL233: ;
    CPy_DecRef(cpy_r_r347);
    goto CPyL211;
CPyL234: ;
    CPy_DecRef(cpy_r_r361);
    goto CPyL211;
CPyL235: ;
    CPy_DecRef(cpy_r_r361);
    CPy_DecRef(cpy_r_r364);
    goto CPyL211;
CPyL236: ;
    CPy_DecRef(cpy_r_r437);
    goto CPyL211;
CPyL237: ;
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r447);
    goto CPyL211;
CPyL238: ;
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r447);
    CPy_DecRef(cpy_r_r457);
    goto CPyL211;
CPyL239: ;
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r447);
    CPy_DecRef(cpy_r_r457);
    CPy_DecRef(cpy_r_r459);
    goto CPyL211;
CPyL240: ;
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r457);
    goto CPyL211;
CPyL241: ;
    CPy_DecRef(cpy_r_r490);
    goto CPyL211;
CPyL242: ;
    CPy_DecRef(cpy_r_r490);
    CPy_DecRef(cpy_r_r493);
    goto CPyL211;
CPyL243: ;
    CPy_DecRef(cpy_r_r514);
    goto CPyL211;
CPyL244: ;
    CPy_DecRef(cpy_r_r514);
    CPy_DecRef(cpy_r_r524);
    goto CPyL211;
CPyL245: ;
    CPy_DecRef(cpy_r_r514);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r534);
    goto CPyL211;
CPyL246: ;
    CPy_DecRef(cpy_r_r514);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r534);
    CPy_DecRef(cpy_r_r536);
    goto CPyL211;
CPyL247: ;
    CPy_DecRef(cpy_r_r514);
    CPy_DecRef(cpy_r_r534);
    goto CPyL211;
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
    CPyModule_typing_extensions = Py_None;
    CPyModule_eth_event___conditional_imports = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[152];
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
    "\003\aeth_abi\006decode\025InsufficientDataBytes",
    "\002\"Event data has insufficient length\024NonEmptyPaddingBytes",
    "\003!Malformed data field in event log\016InvalidPointer\rOverflowError",
    "\003)Cannot decode event due to overflow error\016NoEntriesFound\005value",
    "\t\tfunctools\002re\021eth_event/main.py\b<module>\003Any\bCallable\004Dict\005Final\004List",
    "\b\aLiteral\aMapping\bOptional\bSequence\tTypedDict\005Union\005final\boverload",
    "\006\006typing\tcchecksum\bhexbytes\022eth_abi.exceptions\004auto\beth_hash",
    "\005\fABIComponent\023ABIComponentIndexed\nABIElement\bABIEvent\nAnyAddress",
    "\005\017ChecksumAddress\nHexAddress\006HexStr\neth_typing\vNotRequired",
    "\003\021typing_extensions\035eth_event.conditional_imports\tException",
    "\005\017__mypyc_attrs__\b__dict__\n_TypedDict\016_TypedDictMeta\v__prepare__",
    "\005\tEventData\017__annotations__\026mypyc filler docstring\a__doc__\n__module__",
    "\005\fDecodedEvent\017NonDecodedEvent\005Event\blogIndex\vblockNumber",
    "\005\020transactionIndex\017ADD_LOG_ENTRIES\bHexBytes\023to_checksum_address\006keccak",
    "\006\tlru_cache\021tuple(\\[(\\d*)\\])\?\acompile\005match\f_tuple_match\fTopicMapData",
    "\002\bTopicMap\n_TraceStep",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\a-40\00016\000-3\000-1\0001\0002\0000",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    14, 9, 4, 5, 6, 7, 8, 9, 10, 11, 12, 3, 67, 67, 67, 3, 68, 68, 68,
    2, 139, 140, 13, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
    3, 85, 85, 85, 3, 56, 56, 56, 3, 86, 86, 86, 3, 143, 144, 145, 3, 58,
    65, 60, 1, 88, 8, 90, 91, 92, 93, 94, 95, 96, 97, 1, 99, 1, 62
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
CPyModule *CPyModule_typing_extensions;
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
PyTypeObject *CPyType_main___EventData;
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
    &CPyType_main___EventData,
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
