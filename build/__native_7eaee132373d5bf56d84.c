#ifndef DIFFCHECK_PLACEHOLDER
#define DIFFCHECK_PLACEHOLDER 0
#endif
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

int CPyExec_eth_event(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_eth_event__internal, "__name__");
    CPyStatic_eth_event___globals = PyModule_GetDict(CPyModule_eth_event__internal);
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
    Py_CLEAR(CPyModule_eth_event__internal);
    Py_CLEAR(modname);
    return -1;
}
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
    if (CPyModule_eth_event__internal) {
        Py_INCREF(CPyModule_eth_event__internal);
        return CPyModule_eth_event__internal;
    }
    CPyModule_eth_event__internal = PyModule_Create(&eth_eventmodule);
    if (unlikely(CPyModule_eth_event__internal == NULL))
        goto fail;
    if (CPyExec_eth_event(CPyModule_eth_event__internal) != 0)
        goto fail;
    return CPyModule_eth_event__internal;
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
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("eth_event/__init__.py", "<module>", -1, CPyStatic_eth_event___globals);
        goto CPyL5;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('ABIError', 'EventError', 'StructLogError',
                                   'UnknownEvent', 'decode_log', 'decode_logs',
                                   'decode_traceTransaction', 'get_log_topic',
                                   'get_topic_map') */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r7 = CPyStatic_eth_event___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("eth_event/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_eth_event___globals);
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
    .tp_doc = PyDoc_STR("ABIError()\n--\n\n"),
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
    .tp_doc = PyDoc_STR("EventError()\n--\n\n"),
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
    .tp_doc = PyDoc_STR("StructLogError()\n--\n\n"),
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
    .tp_doc = PyDoc_STR("UnknownEvent()\n--\n\n"),
};
static PyTypeObject *CPyType_main___UnknownEvent_template = &CPyType_main___UnknownEvent_template_;

static PyMethodDef mainmodule_methods[] = {
    {"get_log_topic", (PyCFunction)CPyPy_main___get_log_topic, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_log_topic(event_abi)\n--\n\n") /* docstring */},
    {"get_topic_map", (PyCFunction)CPyPy_main___get_topic_map, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_topic_map(abi)\n--\n\n") /* docstring */},
    {"decode_log", (PyCFunction)CPyPy_main___decode_log, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL) /* docstring */},
    {"decode_logs", (PyCFunction)CPyPy_main___decode_logs, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("decode_logs(logs, topic_map, allow_undecoded=False)\n--\n\n") /* docstring */},
    {"_append_additional_log_data", (PyCFunction)CPyPy_main____append_additional_log_data, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_append_additional_log_data(log, event)\n--\n\n") /* docstring */},
    {"decode_traceTransaction", (PyCFunction)CPyPy_main___decode_traceTransaction, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("decode_traceTransaction(struct_logs, topic_map, allow_undecoded=False, initial_address=None)\n--\n\n") /* docstring */},
    {"_0xstring", (PyCFunction)CPyPy_main____0xstring, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_0xstring(value)\n--\n\n") /* docstring */},
    {"_params", (PyCFunction)CPyPy_main____params, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_params(abi_params)\n--\n\n") /* docstring */},
    {"_decode", (PyCFunction)CPyPy_main____decode, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_decode(inputs, topics, data)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_eth_event___main(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_eth_event___main__internal, "__name__");
    CPyStatic_main___globals = PyModule_GetDict(CPyModule_eth_event___main__internal);
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
    Py_CLEAR(CPyModule_eth_event___main__internal);
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
    if (CPyModule_eth_event___main__internal) {
        Py_INCREF(CPyModule_eth_event___main__internal);
        return CPyModule_eth_event___main__internal;
    }
    CPyModule_eth_event___main__internal = PyModule_Create(&mainmodule);
    if (unlikely(CPyModule_eth_event___main__internal == NULL))
        goto fail;
    if (CPyExec_eth_event___main(CPyModule_eth_event___main__internal) != 0)
        goto fail;
    return CPyModule_eth_event___main__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_main___get_log_topic(PyObject *cpy_r_event_abi) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
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
    char cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = PyDict_Check(cpy_r_event_abi);
    if (cpy_r_r0) goto CPyL5;
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* "Must be a dictionary of the specific event's ABI" */
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TypeError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    CPy_Raise(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'anonymous' */
    cpy_r_r9 = CPyDict_GetWithNone(cpy_r_event_abi, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    if (PyBool_Check(cpy_r_r9))
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL1;
    if (cpy_r_r9 == Py_None)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL1;
    CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 119, CPyStatic_main___globals, "bool or None", cpy_r_r9);
    goto CPyL29;
__LL1: ;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL30;
    if (unlikely(!PyBool_Check(cpy_r_r10))) {
        CPy_TypeError("bool", cpy_r_r10); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r10 == Py_True;
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    if (!cpy_r_r13) goto CPyL14;
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Anonymous events do not have a topic' */
    cpy_r_r15 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r16[1] = {cpy_r_r14};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_main___ABIError))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 120, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r18);
        goto CPyL29;
    }
    CPy_Raise(cpy_r_r19);
    CPy_DECREF_NO_IMM(cpy_r_r19);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r20 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'inputs' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_event_abi, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 122, CPyStatic_main___globals, "list", cpy_r_r21);
        goto CPyL29;
    }
    cpy_r_r23 = CPyDef_main____params(cpy_r_r22);
    CPy_DECREF_NO_IMM(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_event_abi, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 123, CPyStatic_main___globals, "str", cpy_r_r25);
        goto CPyL31;
    }
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '(' */
    cpy_r_r28 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ',' */
    cpy_r_r29 = PyUnicode_Join(cpy_r_r28, cpy_r_r23);
    CPy_DECREF_NO_IMM(cpy_r_r23);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL32;
    }
    cpy_r_r30 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ')' */
    cpy_r_r31 = CPyStr_Build(4, cpy_r_r26, cpy_r_r27, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    cpy_r_r32 = PyUnicode_AsUTF8String(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    cpy_r_r33 = CPyStatic_main___keccak;
    if (unlikely(cpy_r_r33 == NULL)) {
        goto CPyL33;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"keccak\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL25: ;
    PyObject *cpy_r_r35[1] = {cpy_r_r32};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = PyObject_Vectorcall(cpy_r_r33, cpy_r_r36, 1, 0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r32);
    if (likely(PyBytes_Check(cpy_r_r37) || PyByteArray_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 125, CPyStatic_main___globals, "bytes", cpy_r_r37);
        goto CPyL29;
    }
    cpy_r_r39 = CPyDef_main____0xstring(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    return cpy_r_r39;
CPyL29: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL30: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL14;
CPyL31: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL23;
CPyL34: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL29;
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
    CPy_AddTraceback("eth_event/main.py", "get_log_topic", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main___get_topic_map(PyObject *cpy_r_abi) {
    PyObject *cpy_r_r0;
    int64_t cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    int64_t cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T2OO cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL21;
    }
    cpy_r_r1 = 0;
CPyL3: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_abi)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r1 < cpy_r_r3;
    if (!cpy_r_r4) goto CPyL20;
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_abi)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r1 * 8;
    cpy_r_r8 = cpy_r_r6 + cpy_r_r7;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    CPy_INCREF(cpy_r_r9);
    if (likely(PyDict_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 165, CPyStatic_main___globals, "dict", cpy_r_r9);
        goto CPyL33;
    }
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'type' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL34;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 171, CPyStatic_main___globals, "str", cpy_r_r12);
        goto CPyL34;
    }
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'event' */
    cpy_r_r15 = CPyStr_Equal(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (cpy_r_r15) goto CPyL9;
    if (cpy_r_r15) {
        goto CPyL13;
    } else
        goto CPyL35;
CPyL9: ;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'anonymous' */
    cpy_r_r17 = CPyDict_GetWithNone(cpy_r_r10, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL34;
    }
    if (PyBool_Check(cpy_r_r17))
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL2;
    if (cpy_r_r17 == Py_None)
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL2;
    CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 171, CPyStatic_main___globals, "bool or None", cpy_r_r17);
    goto CPyL34;
__LL2: ;
    cpy_r_r19 = PyObject_Not(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL34;
    }
    cpy_r_r21 = cpy_r_r19;
    if (!cpy_r_r21) goto CPyL35;
CPyL13: ;
    cpy_r_r22 = CPyDef_main___get_log_topic(cpy_r_r10);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL34;
    }
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r10, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 167, CPyStatic_main___globals, "str", cpy_r_r25);
        goto CPyL36;
    }
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'inputs' */
    cpy_r_r28 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'inputs' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r10, cpy_r_r28);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL37;
    }
    cpy_r_r30 = CPyDict_Build(2, cpy_r_r23, cpy_r_r26, cpy_r_r27, cpy_r_r29);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL38;
    }
    cpy_r_r31 = PyDict_SetItem(cpy_r_r0, cpy_r_r22, cpy_r_r30);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL33;
    }
CPyL19: ;
    cpy_r_r33 = cpy_r_r1 + 1;
    cpy_r_r1 = cpy_r_r33;
    goto CPyL3;
CPyL20: ;
    return cpy_r_r0;
CPyL21: ;
    cpy_r_r34 = CPy_CatchError();
    cpy_r_r35 = CPyModule_builtins;
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'KeyError' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL30;
    }
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TypeError' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL39;
    }
    cpy_r_r41.f0 = cpy_r_r37;
    cpy_r_r41.f1 = cpy_r_r40;
    cpy_r_r42 = PyTuple_New(2);
    if (unlikely(cpy_r_r42 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = cpy_r_r41.f0;
    PyTuple_SET_ITEM(cpy_r_r42, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r41.f1;
    PyTuple_SET_ITEM(cpy_r_r42, 1, __tmp4);
    cpy_r_r43 = CPy_ExceptionMatches(cpy_r_r42);
    CPy_DecRef(cpy_r_r42);
    if (!cpy_r_r43) goto CPyL28;
    cpy_r_r44 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r44);
    cpy_r_r45 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Invalid ABI' */
    cpy_r_r46 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r47[1] = {cpy_r_r45};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = PyObject_Vectorcall(cpy_r_r46, cpy_r_r48, 1, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL30;
    }
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_main___ABIError))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 174, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r49);
        goto CPyL30;
    }
    CPy_Raise(cpy_r_r50);
    CPy_DecRef(cpy_r_r50);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL30;
    } else
        goto CPyL40;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL30;
    } else
        goto CPyL41;
CPyL29: ;
    CPy_Unreachable();
CPyL30: ;
    CPy_RestoreExcInfo(cpy_r_r34);
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    cpy_r_r51 = CPy_KeepPropagating();
    if (!cpy_r_r51) goto CPyL32;
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r52 = NULL;
    return cpy_r_r52;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL21;
CPyL35: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL19;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r22);
    goto CPyL21;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r26);
    goto CPyL21;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r22);
    goto CPyL21;
CPyL39: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL30;
CPyL40: ;
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    goto CPyL27;
CPyL41: ;
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    goto CPyL29;
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
    CPy_AddTraceback("eth_event/main.py", "get_topic_map", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
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
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    if (cpy_r___checksum_func != NULL) goto CPyL54;
    cpy_r_r0 = CPyStatic_main___to_checksum_address;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r___checksum_func = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'topics' */
    cpy_r_r3 = PyObject_GetItem(cpy_r_log, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL55;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL56;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) {
        goto CPyL12;
    } else
        goto CPyL57;
CPyL8: ;
    cpy_r_r7 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Cannot decode an anonymous event' */
    cpy_r_r8 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r9[1] = {cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL53;
    }
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_main___EventError))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 223, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r11);
        goto CPyL53;
    }
    CPy_Raise(cpy_r_r12);
    CPy_DECREF_NO_IMM(cpy_r_r12);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r13 = PyObject_GetIter(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL55;
    }
    cpy_r_r14 = PyIter_Next(cpy_r_r13);
    if (cpy_r_r14 == NULL) {
        goto CPyL58;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r16 = PySequence_List(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL59;
    }
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r19;
    if (cpy_r_r20) {
        goto CPyL20;
    } else
        goto CPyL60;
CPyL18: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_data_topics = cpy_r_r16;
    cpy_r_r22 = CPyDef_main____0xstring(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL61;
    }
    cpy_r_r23 = PySequence_Contains(cpy_r_topic_map, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL62;
    }
    cpy_r_r25 = cpy_r_r23;
    cpy_r_r26 = cpy_r_r25 ^ 1;
    if (cpy_r_r26) {
        goto CPyL63;
    } else
        goto CPyL27;
CPyL23: ;
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Event topic is not present in given ABI' */
    cpy_r_r28 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r29[1] = {cpy_r_r27};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL53;
    }
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_main___UnknownEvent))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 228, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r31);
        goto CPyL53;
    }
    CPy_Raise(cpy_r_r32);
    CPy_DECREF_NO_IMM(cpy_r_r32);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r33 = PyObject_GetItem(cpy_r_topic_map, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL61;
    }
    if (likely(PyDict_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 230, CPyStatic_main___globals, "dict", cpy_r_r33);
        goto CPyL61;
    }
    cpy_r_r35 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL64;
    }
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 234, CPyStatic_main___globals, "str", cpy_r_r37);
        goto CPyL64;
    }
    cpy_r_r39 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'data' */
    cpy_r_r40 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'inputs' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r34, cpy_r_r40);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 235, CPyStatic_main___globals, "list", cpy_r_r41);
        goto CPyL65;
    }
    cpy_r_r43 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'data' */
    cpy_r_r44 = PyObject_GetItem(cpy_r_log, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL66;
    }
    if (likely(PyList_Check(cpy_r_data_topics)))
        cpy_r_r45 = cpy_r_data_topics;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 235, CPyStatic_main___globals, "list", cpy_r_data_topics);
        goto CPyL67;
    }
    cpy_r_r46 = CPyDef_main____decode(cpy_r_r42, cpy_r_r45, cpy_r_r44);
    CPy_DECREF_NO_IMM(cpy_r_r42);
    CPy_DECREF_NO_IMM(cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL68;
    }
    cpy_r_r47 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decoded' */
    cpy_r_r48 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r49 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r50 = PyObject_GetItem(cpy_r_log, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_r50};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_Vectorcall(cpy_r___checksum_func, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r___checksum_func);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r50);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 237, CPyStatic_main___globals, "str", cpy_r_r53);
        goto CPyL71;
    }
    cpy_r_r55 = 1 ? Py_True : Py_False;
    cpy_r_r56 = CPyDict_Build(4, cpy_r_r35, cpy_r_r38, cpy_r_r39, cpy_r_r46, cpy_r_r47, cpy_r_r55, cpy_r_r48, cpy_r_r54);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF_NO_IMM(cpy_r_r46);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL43;
    }
    cpy_r_r57 = CPyDef_main____append_additional_log_data(cpy_r_log, cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL72;
    }
    return cpy_r_r56;
CPyL43: ;
    cpy_r_r58 = CPy_CatchError();
    cpy_r_r59 = CPyModule_builtins;
    cpy_r_r60 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'KeyError' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL51;
    }
    cpy_r_r62 = CPy_ExceptionMatches(cpy_r_r61);
    CPy_DecRef(cpy_r_r61);
    if (!cpy_r_r62) goto CPyL49;
    cpy_r_r63 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r63);
    cpy_r_r64 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Invalid event' */
    cpy_r_r65 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r66[1] = {cpy_r_r64};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = PyObject_Vectorcall(cpy_r_r65, cpy_r_r67, 1, 0);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r68) == CPyType_main___EventError))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 242, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r68);
        goto CPyL51;
    }
    CPy_Raise(cpy_r_r69);
    CPy_DecRef(cpy_r_r69);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL51;
    } else
        goto CPyL73;
CPyL48: ;
    CPy_Unreachable();
CPyL49: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL51;
    } else
        goto CPyL74;
CPyL50: ;
    CPy_Unreachable();
CPyL51: ;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    cpy_r_r70 = CPy_KeepPropagating();
    if (!cpy_r_r70) goto CPyL53;
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL54: ;
    CPy_INCREF(cpy_r___checksum_func);
    goto CPyL5;
CPyL55: ;
    CPy_DecRef(cpy_r___checksum_func);
    goto CPyL53;
CPyL56: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r3);
    goto CPyL53;
CPyL57: ;
    CPy_DECREF(cpy_r___checksum_func);
    CPy_DECREF(cpy_r_r3);
    goto CPyL8;
CPyL58: ;
    CPy_DECREF(cpy_r___checksum_func);
    CPy_DECREF(cpy_r_r13);
    goto CPyL14;
CPyL59: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r14);
    goto CPyL53;
CPyL60: ;
    CPy_DECREF(cpy_r___checksum_func);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL18;
CPyL61: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    goto CPyL53;
CPyL62: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    CPy_DecRef(cpy_r_r22);
    goto CPyL53;
CPyL63: ;
    CPy_DECREF(cpy_r___checksum_func);
    CPy_DECREF(cpy_r_data_topics);
    CPy_DECREF(cpy_r_r22);
    goto CPyL23;
CPyL64: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    CPy_DecRef(cpy_r_r34);
    goto CPyL43;
CPyL65: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    CPy_DecRef(cpy_r_r38);
    goto CPyL43;
CPyL66: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_data_topics);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    goto CPyL43;
CPyL67: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    goto CPyL43;
CPyL68: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r38);
    goto CPyL43;
CPyL69: ;
    CPy_DecRef(cpy_r___checksum_func);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    goto CPyL43;
CPyL70: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r50);
    goto CPyL43;
CPyL71: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    goto CPyL43;
CPyL72: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL43;
CPyL73: ;
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    goto CPyL48;
CPyL74: ;
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    goto CPyL50;
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
    CPy_AddTraceback("eth_event/main.py", "decode_log", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
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
    int64_t cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
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
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    int64_t cpy_r_r64;
    PyObject *cpy_r_r65;
    if (cpy_r_allow_undecoded != 2) goto CPyL2;
    cpy_r_allow_undecoded = 0;
CPyL2: ;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL41;
    }
    cpy_r_r1 = CPyStatic_main___to_checksum_address;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL42;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r3 = CPyStatic_main___lru_cache;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL43;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"lru_cache\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL9: ;
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 1, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL44;
    }
    cpy_r_r8 = 0;
CPyL11: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_logs)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r8 < cpy_r_r10;
    if (!cpy_r_r11) goto CPyL45;
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_logs)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r8 * 8;
    cpy_r_r15 = cpy_r_r13 + cpy_r_r14;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL46;
    }
    cpy_r_r18 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'topics' */
    cpy_r_r19 = PyObject_GetItem(cpy_r_r16, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL47;
    }
    cpy_r_r20 = PyObject_GetIter(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL47;
    }
CPyL15: ;
    cpy_r_r21 = PyIter_Next(cpy_r_r20);
    if (cpy_r_r21 == NULL) goto CPyL48;
    cpy_r_r22 = CPyDef_main____0xstring(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL49;
    }
    cpy_r_r23 = PyList_Append(cpy_r_r17, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL49;
    } else
        goto CPyL15;
CPyL18: ;
    cpy_r_r25 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL47;
    }
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = cpy_r_r28 != 0;
    if (!cpy_r_r29) goto CPyL26;
    cpy_r_r30 = CPyList_GetItemShort(cpy_r_r17, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL50;
    }
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_logs", 301, CPyStatic_main___globals, "str", cpy_r_r30);
        goto CPyL50;
    }
    cpy_r_r32 = PySequence_Contains(cpy_r_topic_map, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r34 = cpy_r_r32;
    if (cpy_r_r34) {
        goto CPyL51;
    } else
        goto CPyL26;
CPyL24: ;
    cpy_r_r35 = CPyDef_main___decode_log(cpy_r_r16, cpy_r_topic_map, cpy_r_r7);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL52;
    }
    cpy_r_r36 = PyList_Append(cpy_r_r0, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL52;
    } else
        goto CPyL39;
CPyL26: ;
    if (cpy_r_allow_undecoded) {
        goto CPyL31;
    } else
        goto CPyL53;
CPyL27: ;
    cpy_r_r38 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Log contains undecodable event' */
    cpy_r_r39 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r40[1] = {cpy_r_r38};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_main___UnknownEvent))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_logs", 304, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r42);
        goto CPyL41;
    }
    CPy_Raise(cpy_r_r43);
    CPy_DECREF_NO_IMM(cpy_r_r43);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r44 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r45 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'topics' */
    cpy_r_r46 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'data' */
    cpy_r_r47 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'data' */
    cpy_r_r48 = PyObject_GetItem(cpy_r_r16, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r49 = CPyDef_main____0xstring(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r50 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decoded' */
    cpy_r_r51 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r52 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r53 = PyObject_GetItem(cpy_r_r16, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL54;
    }
    PyObject *cpy_r_r54[1] = {cpy_r_r53};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r55, 1, 0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r53);
    if (likely(PyUnicode_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_logs", 311, CPyStatic_main___globals, "str", cpy_r_r56);
        goto CPyL54;
    }
    cpy_r_r58 = Py_None;
    cpy_r_r59 = 0 ? Py_True : Py_False;
    cpy_r_r60 = CPyDict_Build(5, cpy_r_r44, cpy_r_r58, cpy_r_r45, cpy_r_r17, cpy_r_r46, cpy_r_r49, cpy_r_r50, cpy_r_r59, cpy_r_r51, cpy_r_r57);
    CPy_DECREF_NO_IMM(cpy_r_r17);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL46;
    }
    cpy_r_r61 = CPyDef_main____append_additional_log_data(cpy_r_r16, cpy_r_r60);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL56;
    }
    cpy_r_r62 = PyList_Append(cpy_r_r0, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL52;
    }
CPyL39: ;
    cpy_r_r64 = cpy_r_r8 + 1;
    cpy_r_r8 = cpy_r_r64;
    goto CPyL11;
CPyL40: ;
    return cpy_r_r0;
CPyL41: ;
    cpy_r_r65 = NULL;
    return cpy_r_r65;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL41;
CPyL45: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL40;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r16);
    goto CPyL41;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL41;
CPyL48: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL18;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    goto CPyL41;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL41;
CPyL51: ;
    CPy_DECREF_NO_IMM(cpy_r_r17);
    goto CPyL24;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL41;
CPyL53: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF_NO_IMM(cpy_r_r17);
    goto CPyL27;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r49);
    goto CPyL41;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    goto CPyL41;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r60);
    goto CPyL41;
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
    CPy_AddTraceback("eth_event/main.py", "decode_logs", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL12;
    }
CPyL4: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL13;
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_append_additional_log_data", 320, CPyStatic_main___globals, "str", cpy_r_r4);
        goto CPyL14;
    }
    cpy_r_r6 = PySequence_Contains(cpy_r_log, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL15;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL16;
    cpy_r_r9 = PyObject_GetItem(cpy_r_log, cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL15;
    }
    cpy_r_r10 = CPyDict_SetItem(cpy_r_event, cpy_r_r5, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL14;
    } else
        goto CPyL4;
CPyL10: ;
    cpy_r_r12 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
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
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int64_t cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    char cpy_r_r58;
    CPyPtr cpy_r_r59;
    CPyPtr cpy_r_r60;
    int64_t cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    int64_t cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    int64_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_address;
    int32_t cpy_r_r91;
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
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    CPyTagged cpy_r_r113;
    int64_t cpy_r_r114;
    char cpy_r_r115;
    int64_t cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyTagged cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    CPyTagged cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    CPyTagged cpy_r_r142;
    CPyTagged cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyPtr cpy_r_r150;
    int64_t cpy_r_r151;
    PyObject *cpy_r_r152;
    int64_t cpy_r_r153;
    CPyPtr cpy_r_r154;
    int64_t cpy_r_r155;
    char cpy_r_r156;
    CPyPtr cpy_r_r157;
    CPyPtr cpy_r_r158;
    int64_t cpy_r_r159;
    CPyPtr cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int64_t cpy_r_r164;
    tuple_T3OOO cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject **cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    tuple_T2OO cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject **cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    PyObject **cpy_r_r202;
    PyObject *cpy_r_r203;
    CPyTagged cpy_r_r204;
    CPyTagged cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject **cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    tuple_T3OOO cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    tuple_T2OO cpy_r_r224;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject **cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    CPyPtr cpy_r_r235;
    int64_t cpy_r_r236;
    CPyTagged cpy_r_r237;
    char cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    int32_t cpy_r_r241;
    char cpy_r_r242;
    char cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject **cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    int32_t cpy_r_r261;
    char cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    char cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    CPyPtr cpy_r_r268;
    int64_t cpy_r_r269;
    CPyTagged cpy_r_r270;
    char cpy_r_r271;
    char cpy_r_r272;
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
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    int32_t cpy_r_r290;
    char cpy_r_r291;
    CPyTagged cpy_r_r292;
    PyObject *cpy_r_r293;
    if (cpy_r_allow_undecoded != 2) goto CPyL2;
    cpy_r_allow_undecoded = 0;
CPyL2: ;
    if (cpy_r_initial_address != NULL) goto CPyL194;
    cpy_r_r0 = Py_None;
    cpy_r_initial_address = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyStatic_main___to_checksum_address;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL195;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r3 = CPyStatic_main___lru_cache;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL196;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"lru_cache\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL10: ;
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 1, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL197;
    }
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL198;
    }
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_initial_address != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL17;
    PyObject *cpy_r_r11[1] = {cpy_r_initial_address};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r12, 1, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL199;
    }
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 368, CPyStatic_main___globals, "str", cpy_r_r13);
        goto CPyL199;
    }
    cpy_r_r15 = PyList_New(1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL200;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    *(PyObject * *)cpy_r_r17 = cpy_r_r14;
    cpy_r_address_list = cpy_r_r15;
    goto CPyL19;
CPyL17: ;
    cpy_r_r18 = PyList_New(1);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL199;
    }
    cpy_r_r19 = Py_None;
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    *(PyObject * *)cpy_r_r21 = cpy_r_r19;
    cpy_r_address_list = cpy_r_r18;
CPyL19: ;
    cpy_r_r22 = CPyList_GetItemShort(cpy_r_struct_logs, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL201;
    }
    if (likely(PyDict_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 372, CPyStatic_main___globals, "dict", cpy_r_r22);
        goto CPyL201;
    }
    cpy_r_last_step = cpy_r_r23;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_struct_logs)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = 2;
    cpy_r_i = cpy_r_r27;
CPyL22: ;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r27 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r28) goto CPyL202;
    cpy_r_r29 = CPyList_GetItem(cpy_r_struct_logs, cpy_r_i);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL203;
    }
    if (likely(PyDict_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals, "dict", cpy_r_r29);
        goto CPyL203;
    }
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_initial_address != cpy_r_r31;
    if (!cpy_r_r32) goto CPyL204;
    cpy_r_r33 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'depth' */
    cpy_r_r34 = CPyDict_GetItem(cpy_r_r30, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL205;
    }
    if (likely(PyLong_Check(cpy_r_r34)))
        cpy_r_r35 = CPyTagged_FromObject(cpy_r_r34);
    else {
        CPy_TypeError("int", cpy_r_r34); cpy_r_r35 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL205;
    }
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'depth' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL206;
    }
    if (likely(PyLong_Check(cpy_r_r37)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_r37);
    else {
        CPy_TypeError("int", cpy_r_r37); cpy_r_r38 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL206;
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
    if (!cpy_r_r44) goto CPyL207;
    cpy_r_r46 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'op' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL205;
    }
    if (likely(PyUnicode_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 377, CPyStatic_main___globals, "str", cpy_r_r47);
        goto CPyL205;
    }
    cpy_r_r49 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'CREATE' */
    cpy_r_r50 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'CREATE2' */
    cpy_r_r51 = CPyStr_Equal(cpy_r_r48, cpy_r_r49);
    if (cpy_r_r51) goto CPyL208;
    cpy_r_r52 = CPyStr_Equal(cpy_r_r48, cpy_r_r50);
    CPy_DECREF(cpy_r_r48);
    if (cpy_r_r52) goto CPyL40;
    if (0) {
        goto CPyL41;
    } else
        goto CPyL209;
CPyL40: ;
    if (!1) goto CPyL209;
CPyL41: ;
    cpy_r_r53 = CPyList_GetSlice(cpy_r_struct_logs, cpy_r_i, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    if (likely(PyList_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 378, CPyStatic_main___globals, "list", cpy_r_r53);
        goto CPyL210;
    }
    cpy_r_r55 = 0;
CPyL44: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_r54)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r55 < cpy_r_r57;
    if (!cpy_r_r58) goto CPyL211;
    cpy_r_r59 = (CPyPtr)&((PyListObject *)cpy_r_r54)->ob_item;
    cpy_r_r60 = *(CPyPtr *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r55 * 8;
    cpy_r_r62 = cpy_r_r60 + cpy_r_r61;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    CPy_INCREF(cpy_r_r63);
    if (likely(PyDict_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 378, CPyStatic_main___globals, "dict", cpy_r_r63);
        goto CPyL212;
    }
    cpy_r_r65 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'depth' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL213;
    }
    if (likely(PyLong_Check(cpy_r_r66)))
        cpy_r_r67 = CPyTagged_FromObject(cpy_r_r66);
    else {
        CPy_TypeError("int", cpy_r_r66); cpy_r_r67 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL213;
    }
    cpy_r_r68 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'depth' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL214;
    }
    if (likely(PyLong_Check(cpy_r_r69)))
        cpy_r_r70 = CPyTagged_FromObject(cpy_r_r69);
    else {
        CPy_TypeError("int", cpy_r_r69); cpy_r_r70 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL214;
    }
    cpy_r_r71 = cpy_r_r67 & 1;
    cpy_r_r72 = cpy_r_r71 != 0;
    if (!cpy_r_r72) goto CPyL52;
    cpy_r_r73 = CPyTagged_IsEq_(cpy_r_r67, cpy_r_r70);
    cpy_r_r74 = cpy_r_r73;
    goto CPyL53;
CPyL52: ;
    cpy_r_r75 = cpy_r_r67 == cpy_r_r70;
    cpy_r_r74 = cpy_r_r75;
CPyL53: ;
    CPyTagged_DECREF(cpy_r_r67);
    CPyTagged_DECREF(cpy_r_r70);
    if (cpy_r_r74) {
        goto CPyL215;
    } else
        goto CPyL216;
CPyL54: ;
    goto CPyL58;
CPyL55: ;
    cpy_r_r76 = cpy_r_r55 + 1;
    cpy_r_r55 = cpy_r_r76;
    goto CPyL44;
CPyL56: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r77 = 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r78 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0x' */
    cpy_r_r79 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'stack' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r64, cpy_r_r79);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    if (likely(PyList_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 379, CPyStatic_main___globals, "list", cpy_r_r80);
        goto CPyL217;
    }
    cpy_r_r82 = CPyList_GetItemShort(cpy_r_r81, -2);
    CPy_DECREF_NO_IMM(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    if (likely(PyUnicode_Check(cpy_r_r82)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 379, CPyStatic_main___globals, "str", cpy_r_r82);
        goto CPyL217;
    }
    cpy_r_r84 = CPyStr_GetSlice(cpy_r_r83, -80, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    if (likely(PyUnicode_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 379, CPyStatic_main___globals, "str", cpy_r_r84);
        goto CPyL217;
    }
    cpy_r_r86 = CPyStr_Build(2, cpy_r_r78, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    PyObject *cpy_r_r87[1] = {cpy_r_r86};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r88, 1, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL218;
    }
    CPy_DECREF(cpy_r_r86);
    if (likely(PyUnicode_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 379, CPyStatic_main___globals, "str", cpy_r_r89);
        goto CPyL217;
    }
    cpy_r_address = cpy_r_r90;
    cpy_r_r91 = PyList_Append(cpy_r_address_list, cpy_r_address);
    CPy_DECREF(cpy_r_address);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    } else
        goto CPyL89;
CPyL68: ;
    cpy_r_r93 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0x' */
    cpy_r_r94 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'stack' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r94);
    CPy_DECREF(cpy_r_last_step);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    if (likely(PyList_Check(cpy_r_r95)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 382, CPyStatic_main___globals, "list", cpy_r_r95);
        goto CPyL217;
    }
    cpy_r_r97 = CPyList_GetItemShort(cpy_r_r96, -4);
    CPy_DECREF_NO_IMM(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    if (likely(PyUnicode_Check(cpy_r_r97)))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 382, CPyStatic_main___globals, "str", cpy_r_r97);
        goto CPyL217;
    }
    cpy_r_r99 = CPyStr_GetSlice(cpy_r_r98, -80, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    if (likely(PyUnicode_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 382, CPyStatic_main___globals, "str", cpy_r_r99);
        goto CPyL217;
    }
    cpy_r_r101 = CPyStr_Build(2, cpy_r_r93, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    PyObject *cpy_r_r102[1] = {cpy_r_r101};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r103, 1, 0);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL219;
    }
    CPy_DECREF(cpy_r_r101);
    if (likely(PyUnicode_Check(cpy_r_r104)))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 382, CPyStatic_main___globals, "str", cpy_r_r104);
        goto CPyL217;
    }
    cpy_r_address = cpy_r_r105;
    cpy_r_r106 = PyList_Append(cpy_r_address_list, cpy_r_address);
    CPy_DECREF(cpy_r_address);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    } else
        goto CPyL89;
CPyL78: ;
    cpy_r_r108 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'depth' */
    cpy_r_r109 = CPyDict_GetItem(cpy_r_r30, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    if (likely(PyLong_Check(cpy_r_r109)))
        cpy_r_r110 = CPyTagged_FromObject(cpy_r_r109);
    else {
        CPy_TypeError("int", cpy_r_r109); cpy_r_r110 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r111 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'depth' */
    cpy_r_r112 = CPyDict_GetItem(cpy_r_last_step, cpy_r_r111);
    CPy_DECREF(cpy_r_last_step);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL220;
    }
    if (likely(PyLong_Check(cpy_r_r112)))
        cpy_r_r113 = CPyTagged_FromObject(cpy_r_r112);
    else {
        CPy_TypeError("int", cpy_r_r112); cpy_r_r113 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL220;
    }
    cpy_r_r114 = cpy_r_r110 & 1;
    cpy_r_r115 = cpy_r_r114 != 0;
    if (cpy_r_r115) goto CPyL84;
    cpy_r_r116 = cpy_r_r113 & 1;
    cpy_r_r117 = cpy_r_r116 != 0;
    if (!cpy_r_r117) goto CPyL85;
CPyL84: ;
    cpy_r_r118 = CPyTagged_IsLt_(cpy_r_r110, cpy_r_r113);
    cpy_r_r119 = cpy_r_r118;
    goto CPyL86;
CPyL85: ;
    cpy_r_r120 = (Py_ssize_t)cpy_r_r110 < (Py_ssize_t)cpy_r_r113;
    cpy_r_r119 = cpy_r_r120;
CPyL86: ;
    CPyTagged_DECREF(cpy_r_r110);
    CPyTagged_DECREF(cpy_r_r113);
    if (!cpy_r_r119) goto CPyL89;
    cpy_r_r121 = CPyList_PopLast(cpy_r_address_list);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    if (PyUnicode_Check(cpy_r_r121))
        cpy_r_r122 = cpy_r_r121;
    else {
        cpy_r_r122 = NULL;
    }
    if (cpy_r_r122 != NULL) goto __LL8;
    if (cpy_r_r121 == Py_None)
        cpy_r_r122 = cpy_r_r121;
    else {
        cpy_r_r122 = NULL;
    }
    if (cpy_r_r122 != NULL) goto __LL8;
    CPy_TypeError("str or None", cpy_r_r121); 
    cpy_r_r122 = NULL;
__LL8: ;
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    } else
        goto CPyL221;
CPyL89: ;
    CPy_INCREF(cpy_r_r30);
    cpy_r_last_step = cpy_r_r30;
    cpy_r_r123 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'op' */
    cpy_r_r124 = CPyDict_GetItem(cpy_r_r30, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    if (likely(PyUnicode_Check(cpy_r_r124)))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 389, CPyStatic_main___globals, "str", cpy_r_r124);
        goto CPyL210;
    }
    cpy_r_r126 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'LOG' */
    cpy_r_r127 = CPyStr_Startswith(cpy_r_r125, cpy_r_r126);
    cpy_r_r128 = cpy_r_r127;
    if (!cpy_r_r128) goto CPyL222;
    cpy_r_r129 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'stack' */
    cpy_r_r130 = CPyDict_GetItem(cpy_r_r30, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL223;
    }
    if (likely(PyList_Check(cpy_r_r130)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 394, CPyStatic_main___globals, "list", cpy_r_r130);
        goto CPyL223;
    }
    cpy_r_r132 = CPyList_GetItemShort(cpy_r_r131, -2);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL224;
    }
    if (likely(PyUnicode_Check(cpy_r_r132)))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 395, CPyStatic_main___globals, "str", cpy_r_r132);
        goto CPyL224;
    }
    cpy_r_r134 = CPyLong_FromStrWithBase(cpy_r_r133, 32);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL224;
    }
    if (likely(PyLong_Check(cpy_r_r134)))
        cpy_r_r135 = CPyTagged_FromObject(cpy_r_r134);
    else {
        CPy_TypeError("int", cpy_r_r134); cpy_r_r135 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r136 = CPyList_GetItemShort(cpy_r_r131, -4);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL225;
    }
    if (likely(PyUnicode_Check(cpy_r_r136)))
        cpy_r_r137 = cpy_r_r136;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 396, CPyStatic_main___globals, "str", cpy_r_r136);
        goto CPyL225;
    }
    cpy_r_r138 = CPyLong_FromStrWithBase(cpy_r_r137, 32);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL225;
    }
    if (likely(PyLong_Check(cpy_r_r138)))
        cpy_r_r139 = CPyTagged_FromObject(cpy_r_r138);
    else {
        CPy_TypeError("int", cpy_r_r138); cpy_r_r139 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r139 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL225;
    }
    cpy_r_r140 = CPyStr_GetItem(cpy_r_r125, -2);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL226;
    }
    cpy_r_r141 = CPyLong_FromStr(cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL226;
    }
    if (likely(PyLong_Check(cpy_r_r141)))
        cpy_r_r142 = CPyTagged_FromObject(cpy_r_r141);
    else {
        CPy_TypeError("int", cpy_r_r141); cpy_r_r142 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL226;
    }
    cpy_r_r143 = CPyTagged_Subtract(-6, cpy_r_r142);
    CPyTagged_DECREF(cpy_r_r142);
    cpy_r_r144 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* -3 */
    cpy_r_r145 = CPyTagged_StealAsObject(cpy_r_r143);
    cpy_r_r146 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* -1 */
    cpy_r_r147 = PySlice_New(cpy_r_r144, cpy_r_r145, cpy_r_r146);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL226;
    }
    cpy_r_r148 = PyObject_GetItem(cpy_r_r131, cpy_r_r147);
    CPy_DECREF_NO_IMM(cpy_r_r131);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL227;
    }
    if (likely(PyList_Check(cpy_r_r148)))
        cpy_r_r149 = cpy_r_r148;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 398, CPyStatic_main___globals, "list", cpy_r_r148);
        goto CPyL227;
    }
    cpy_r_r150 = (CPyPtr)&((PyVarObject *)cpy_r_r149)->ob_size;
    cpy_r_r151 = *(int64_t *)cpy_r_r150;
    cpy_r_r152 = PyList_New(cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL228;
    }
    cpy_r_r153 = 0;
CPyL110: ;
    cpy_r_r154 = (CPyPtr)&((PyVarObject *)cpy_r_r149)->ob_size;
    cpy_r_r155 = *(int64_t *)cpy_r_r154;
    cpy_r_r156 = cpy_r_r153 < cpy_r_r155;
    if (!cpy_r_r156) goto CPyL229;
    cpy_r_r157 = (CPyPtr)&((PyListObject *)cpy_r_r149)->ob_item;
    cpy_r_r158 = *(CPyPtr *)cpy_r_r157;
    cpy_r_r159 = cpy_r_r153 * 8;
    cpy_r_r160 = cpy_r_r158 + cpy_r_r159;
    cpy_r_r161 = *(PyObject * *)cpy_r_r160;
    CPy_INCREF(cpy_r_r161);
    if (likely(PyUnicode_Check(cpy_r_r161)))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 398, CPyStatic_main___globals, "str", cpy_r_r161);
        goto CPyL230;
    }
    cpy_r_r163 = CPyDef_main____0xstring(cpy_r_r162);
    CPy_DECREF(cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL230;
    }
    CPyList_SetItemUnsafe(cpy_r_r152, cpy_r_r153, cpy_r_r163);
    cpy_r_r164 = cpy_r_r153 + 1;
    cpy_r_r153 = cpy_r_r164;
    goto CPyL110;
CPyL115: ;
    goto CPyL133;
CPyL116: ;
    cpy_r_r165 = CPy_CatchError();
    cpy_r_r166 = CPyModule_builtins;
    cpy_r_r167 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'KeyError' */
    cpy_r_r168 = CPyObject_GetAttr(cpy_r_r166, cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL131;
    }
    cpy_r_r169 = CPy_ExceptionMatches(cpy_r_r168);
    CPy_DecRef(cpy_r_r168);
    if (!cpy_r_r169) goto CPyL122;
    cpy_r_r170 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r170;
    CPy_DecRef(cpy_r_e);
    cpy_r_r171 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'StructLog has no stack' */
    cpy_r_r172 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r173[1] = {cpy_r_r171};
    cpy_r_r174 = (PyObject **)&cpy_r_r173;
    cpy_r_r175 = PyObject_Vectorcall(cpy_r_r172, cpy_r_r174, 1, 0);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL131;
    }
    if (likely(Py_TYPE(cpy_r_r175) == CPyType_main___StructLogError))
        cpy_r_r176 = cpy_r_r175;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 400, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r175);
        goto CPyL131;
    }
    CPy_Raise(cpy_r_r176);
    CPy_DecRef(cpy_r_r176);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL131;
    } else
        goto CPyL231;
CPyL121: ;
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r177 = CPyModule_builtins;
    cpy_r_r178 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'IndexError' */
    cpy_r_r179 = CPyObject_GetAttr(cpy_r_r177, cpy_r_r178);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL131;
    }
    cpy_r_r180 = CPyModule_builtins;
    cpy_r_r181 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TypeError' */
    cpy_r_r182 = CPyObject_GetAttr(cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL232;
    }
    cpy_r_r183.f0 = cpy_r_r179;
    cpy_r_r183.f1 = cpy_r_r182;
    cpy_r_r184 = PyTuple_New(2);
    if (unlikely(cpy_r_r184 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9 = cpy_r_r183.f0;
    PyTuple_SET_ITEM(cpy_r_r184, 0, __tmp9);
    PyObject *__tmp10 = cpy_r_r183.f1;
    PyTuple_SET_ITEM(cpy_r_r184, 1, __tmp10);
    cpy_r_r185 = CPy_ExceptionMatches(cpy_r_r184);
    CPy_DecRef(cpy_r_r184);
    if (!cpy_r_r185) goto CPyL129;
    cpy_r_r186 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r186;
    CPy_DecRef(cpy_r_e);
    cpy_r_r187 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Malformed stack' */
    cpy_r_r188 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r189[1] = {cpy_r_r187};
    cpy_r_r190 = (PyObject **)&cpy_r_r189;
    cpy_r_r191 = PyObject_Vectorcall(cpy_r_r188, cpy_r_r190, 1, 0);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL131;
    }
    if (likely(Py_TYPE(cpy_r_r191) == CPyType_main___StructLogError))
        cpy_r_r192 = cpy_r_r191;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 402, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r191);
        goto CPyL131;
    }
    CPy_Raise(cpy_r_r192);
    CPy_DecRef(cpy_r_r192);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL131;
    } else
        goto CPyL233;
CPyL128: ;
    CPy_Unreachable();
CPyL129: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL131;
    } else
        goto CPyL234;
CPyL130: ;
    CPy_Unreachable();
CPyL131: ;
    CPy_RestoreExcInfo(cpy_r_r165);
    CPy_DecRef(cpy_r_r165.f0);
    CPy_DecRef(cpy_r_r165.f1);
    CPy_DecRef(cpy_r_r165.f2);
    cpy_r_r193 = CPy_KeepPropagating();
    if (!cpy_r_r193) goto CPyL193;
    CPy_Unreachable();
CPyL133: ;
    cpy_r_r194 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '' */
    cpy_r_r195 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'memory' */
    cpy_r_r196 = CPyDict_GetItem(cpy_r_r30, cpy_r_r195);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL235;
    }
    if (likely(PyList_Check(cpy_r_r196)))
        cpy_r_r197 = cpy_r_r196;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 405, CPyStatic_main___globals, "list", cpy_r_r196);
        goto CPyL235;
    }
    cpy_r_r198 = PyUnicode_Join(cpy_r_r194, cpy_r_r197);
    CPy_DECREF_NO_IMM(cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL235;
    }
    cpy_r_r199 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r199 == NULL)) {
        goto CPyL236;
    } else
        goto CPyL139;
CPyL137: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r200 = 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL146;
    }
    CPy_Unreachable();
CPyL139: ;
    PyObject *cpy_r_r201[1] = {cpy_r_r198};
    cpy_r_r202 = (PyObject **)&cpy_r_r201;
    cpy_r_r203 = PyObject_Vectorcall(cpy_r_r199, cpy_r_r202, 1, 0);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL237;
    }
    CPy_DECREF(cpy_r_r198);
    cpy_r_r204 = CPyTagged_Add(cpy_r_r135, cpy_r_r139);
    CPyTagged_DECREF(cpy_r_r204);
    cpy_r_r205 = CPyTagged_Add(cpy_r_r135, cpy_r_r139);
    CPyTagged_DECREF(cpy_r_r139);
    cpy_r_r206 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r207 = CPyTagged_StealAsObject(cpy_r_r135);
    cpy_r_r208 = CPyTagged_StealAsObject(cpy_r_r205);
    cpy_r_r209 = PySlice_New(cpy_r_r207, cpy_r_r208, cpy_r_r206);
    CPy_DECREF(cpy_r_r207);
    CPy_DECREF(cpy_r_r208);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL238;
    }
    cpy_r_r210 = PyObject_GetItem(cpy_r_r203, cpy_r_r209);
    CPy_DECREF(cpy_r_r203);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL239;
    }
    cpy_r_r211 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex' */
    PyObject *cpy_r_r212[1] = {cpy_r_r210};
    cpy_r_r213 = (PyObject **)&cpy_r_r212;
    cpy_r_r214 = PyObject_VectorcallMethod(cpy_r_r211, cpy_r_r213, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL240;
    }
    CPy_DECREF(cpy_r_r210);
    if (likely(PyUnicode_Check(cpy_r_r214)))
        cpy_r_r215 = cpy_r_r214;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 405, CPyStatic_main___globals, "str", cpy_r_r214);
        goto CPyL239;
    }
    cpy_r_r216 = CPyDef_main____0xstring(cpy_r_r215);
    CPy_DECREF(cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL239;
    }
    goto CPyL157;
CPyL146: ;
    cpy_r_r217 = CPy_CatchError();
    cpy_r_r218 = CPyModule_builtins;
    cpy_r_r219 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'KeyError' */
    cpy_r_r220 = CPyObject_GetAttr(cpy_r_r218, cpy_r_r219);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL155;
    }
    cpy_r_r221 = CPyModule_builtins;
    cpy_r_r222 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TypeError' */
    cpy_r_r223 = CPyObject_GetAttr(cpy_r_r221, cpy_r_r222);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL241;
    }
    cpy_r_r224.f0 = cpy_r_r220;
    cpy_r_r224.f1 = cpy_r_r223;
    cpy_r_r225 = PyTuple_New(2);
    if (unlikely(cpy_r_r225 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp11 = cpy_r_r224.f0;
    PyTuple_SET_ITEM(cpy_r_r225, 0, __tmp11);
    PyObject *__tmp12 = cpy_r_r224.f1;
    PyTuple_SET_ITEM(cpy_r_r225, 1, __tmp12);
    cpy_r_r226 = CPy_ExceptionMatches(cpy_r_r225);
    CPy_DecRef(cpy_r_r225);
    if (!cpy_r_r226) goto CPyL153;
    cpy_r_r227 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r227;
    CPy_DecRef(cpy_r_e);
    cpy_r_r228 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Malformed memory' */
    cpy_r_r229 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r230[1] = {cpy_r_r228};
    cpy_r_r231 = (PyObject **)&cpy_r_r230;
    cpy_r_r232 = PyObject_Vectorcall(cpy_r_r229, cpy_r_r231, 1, 0);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL155;
    }
    if (likely(Py_TYPE(cpy_r_r232) == CPyType_main___StructLogError))
        cpy_r_r233 = cpy_r_r232;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 407, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r232);
        goto CPyL155;
    }
    CPy_Raise(cpy_r_r233);
    CPy_DecRef(cpy_r_r233);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL155;
    } else
        goto CPyL242;
CPyL152: ;
    CPy_Unreachable();
CPyL153: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL155;
    } else
        goto CPyL243;
CPyL154: ;
    CPy_Unreachable();
CPyL155: ;
    CPy_RestoreExcInfo(cpy_r_r217);
    CPy_DecRef(cpy_r_r217.f0);
    CPy_DecRef(cpy_r_r217.f1);
    CPy_DecRef(cpy_r_r217.f2);
    cpy_r_r234 = CPy_KeepPropagating();
    if (!cpy_r_r234) goto CPyL193;
    CPy_Unreachable();
CPyL157: ;
    cpy_r_r235 = (CPyPtr)&((PyVarObject *)cpy_r_r152)->ob_size;
    cpy_r_r236 = *(int64_t *)cpy_r_r235;
    cpy_r_r237 = cpy_r_r236 << 1;
    cpy_r_r238 = cpy_r_r237 != 0;
    if (!cpy_r_r238) goto CPyL162;
    cpy_r_r239 = CPyList_GetItemShort(cpy_r_r152, 0);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL244;
    }
    if (likely(PyUnicode_Check(cpy_r_r239)))
        cpy_r_r240 = cpy_r_r239;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 409, CPyStatic_main___globals, "str", cpy_r_r239);
        goto CPyL244;
    }
    cpy_r_r241 = PySequence_Contains(cpy_r_topic_map, cpy_r_r240);
    CPy_DECREF(cpy_r_r240);
    cpy_r_r242 = cpy_r_r241 >= 0;
    if (unlikely(!cpy_r_r242)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL244;
    }
    cpy_r_r243 = cpy_r_r241;
    cpy_r_r244 = cpy_r_r243 ^ 1;
    if (!cpy_r_r244) goto CPyL171;
CPyL162: ;
    if (cpy_r_allow_undecoded) {
        goto CPyL167;
    } else
        goto CPyL245;
CPyL163: ;
    cpy_r_r245 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Log contains undecodable event' */
    cpy_r_r246 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r247[1] = {cpy_r_r245};
    cpy_r_r248 = (PyObject **)&cpy_r_r247;
    cpy_r_r249 = PyObject_Vectorcall(cpy_r_r246, cpy_r_r248, 1, 0);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL193;
    }
    if (likely(Py_TYPE(cpy_r_r249) == CPyType_main___UnknownEvent))
        cpy_r_r250 = cpy_r_r249;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 411, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r249);
        goto CPyL193;
    }
    CPy_Raise(cpy_r_r250);
    CPy_DECREF_NO_IMM(cpy_r_r250);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL167: ;
    cpy_r_r251 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r252 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'topics' */
    cpy_r_r253 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'data' */
    cpy_r_r254 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decoded' */
    cpy_r_r255 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r256 = CPyList_GetItemShort(cpy_r_address_list, -2);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL244;
    }
    if (PyUnicode_Check(cpy_r_r256))
        cpy_r_r257 = cpy_r_r256;
    else {
        cpy_r_r257 = NULL;
    }
    if (cpy_r_r257 != NULL) goto __LL13;
    if (cpy_r_r256 == Py_None)
        cpy_r_r257 = cpy_r_r256;
    else {
        cpy_r_r257 = NULL;
    }
    if (cpy_r_r257 != NULL) goto __LL13;
    CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 417, CPyStatic_main___globals, "str or None", cpy_r_r256);
    goto CPyL244;
__LL13: ;
    cpy_r_r258 = Py_None;
    cpy_r_r259 = 0 ? Py_True : Py_False;
    cpy_r_r260 = CPyDict_Build(5, cpy_r_r251, cpy_r_r258, cpy_r_r252, cpy_r_r152, cpy_r_r253, cpy_r_r216, cpy_r_r254, cpy_r_r259, cpy_r_r255, cpy_r_r257);
    CPy_DECREF_NO_IMM(cpy_r_r152);
    CPy_DECREF(cpy_r_r216);
    CPy_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL246;
    }
    cpy_r_r261 = PyList_Append(cpy_r_r8, cpy_r_r260);
    CPy_DECREF(cpy_r_r260);
    cpy_r_r262 = cpy_r_r261 >= 0;
    if (unlikely(!cpy_r_r262)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL246;
    } else
        goto CPyL191;
CPyL171: ;
    cpy_r_r263 = PyObject_GetIter(cpy_r_r152);
    CPy_DECREF_NO_IMM(cpy_r_r152);
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL247;
    }
    cpy_r_r264 = PyIter_Next(cpy_r_r263);
    if (cpy_r_r264 == NULL) {
        goto CPyL248;
    } else
        goto CPyL175;
CPyL173: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r265 = 0;
    if (unlikely(!cpy_r_r265)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL175: ;
    if (likely(PyUnicode_Check(cpy_r_r264)))
        cpy_r_r266 = cpy_r_r264;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 421, CPyStatic_main___globals, "str", cpy_r_r264);
        goto CPyL249;
    }
    cpy_r_r267 = PySequence_List(cpy_r_r263);
    CPy_DECREF(cpy_r_r263);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL250;
    }
    cpy_r_r268 = (CPyPtr)&((PyVarObject *)cpy_r_r267)->ob_size;
    cpy_r_r269 = *(int64_t *)cpy_r_r268;
    cpy_r_r270 = cpy_r_r269 << 1;
    cpy_r_r271 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r270;
    if (cpy_r_r271) {
        goto CPyL180;
    } else
        goto CPyL251;
CPyL178: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r272 = 0;
    if (unlikely(!cpy_r_r272)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL180: ;
    cpy_r_r273 = PyObject_GetItem(cpy_r_topic_map, cpy_r_r266);
    CPy_DECREF(cpy_r_r266);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL252;
    }
    if (likely(PyDict_Check(cpy_r_r273)))
        cpy_r_r274 = cpy_r_r273;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 422, CPyStatic_main___globals, "dict", cpy_r_r273);
        goto CPyL252;
    }
    cpy_r_r275 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r276 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r277 = CPyDict_GetItem(cpy_r_r274, cpy_r_r276);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL253;
    }
    if (likely(PyUnicode_Check(cpy_r_r277)))
        cpy_r_r278 = cpy_r_r277;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 424, CPyStatic_main___globals, "str", cpy_r_r277);
        goto CPyL253;
    }
    cpy_r_r279 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'data' */
    cpy_r_r280 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'inputs' */
    cpy_r_r281 = CPyDict_GetItem(cpy_r_r274, cpy_r_r280);
    CPy_DECREF(cpy_r_r274);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL254;
    }
    if (likely(PyList_Check(cpy_r_r281)))
        cpy_r_r282 = cpy_r_r281;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 425, CPyStatic_main___globals, "list", cpy_r_r281);
        goto CPyL254;
    }
    cpy_r_r283 = CPyDef_main____decode(cpy_r_r282, cpy_r_r267, cpy_r_r216);
    CPy_DECREF_NO_IMM(cpy_r_r282);
    CPy_DECREF_NO_IMM(cpy_r_r267);
    CPy_DECREF(cpy_r_r216);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL255;
    }
    cpy_r_r284 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decoded' */
    cpy_r_r285 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r286 = CPyList_GetItemShort(cpy_r_address_list, -2);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL256;
    }
    if (PyUnicode_Check(cpy_r_r286))
        cpy_r_r287 = cpy_r_r286;
    else {
        cpy_r_r287 = NULL;
    }
    if (cpy_r_r287 != NULL) goto __LL14;
    if (cpy_r_r286 == Py_None)
        cpy_r_r287 = cpy_r_r286;
    else {
        cpy_r_r287 = NULL;
    }
    if (cpy_r_r287 != NULL) goto __LL14;
    CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 427, CPyStatic_main___globals, "str or None", cpy_r_r286);
    goto CPyL256;
__LL14: ;
    cpy_r_r288 = 1 ? Py_True : Py_False;
    cpy_r_r289 = CPyDict_Build(4, cpy_r_r275, cpy_r_r278, cpy_r_r279, cpy_r_r283, cpy_r_r284, cpy_r_r288, cpy_r_r285, cpy_r_r287);
    CPy_DECREF(cpy_r_r278);
    CPy_DECREF_NO_IMM(cpy_r_r283);
    CPy_DECREF(cpy_r_r287);
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL246;
    }
    cpy_r_r290 = PyList_Append(cpy_r_r8, cpy_r_r289);
    CPy_DECREF(cpy_r_r289);
    cpy_r_r291 = cpy_r_r290 >= 0;
    if (unlikely(!cpy_r_r291)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL246;
    }
CPyL191: ;
    cpy_r_r292 = cpy_r_r27 + 2;
    cpy_r_r27 = cpy_r_r292;
    cpy_r_i = cpy_r_r292;
    goto CPyL22;
CPyL192: ;
    return cpy_r_r8;
CPyL193: ;
    cpy_r_r293 = NULL;
    return cpy_r_r293;
CPyL194: ;
    CPy_INCREF(cpy_r_initial_address);
    goto CPyL4;
CPyL195: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL5;
CPyL196: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL8;
CPyL197: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL193;
CPyL198: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    goto CPyL193;
CPyL199: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL193;
CPyL200: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    goto CPyL193;
CPyL201: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    goto CPyL193;
CPyL202: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL192;
CPyL203: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL193;
CPyL204: ;
    CPy_DECREF(cpy_r_last_step);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL89;
CPyL205: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r30);
    goto CPyL193;
CPyL206: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r35);
    goto CPyL193;
CPyL207: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL78;
CPyL208: ;
    CPy_DECREF(cpy_r_r48);
    goto CPyL40;
CPyL209: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL68;
CPyL210: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    goto CPyL193;
CPyL211: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF_NO_IMM(cpy_r_r54);
    goto CPyL56;
CPyL212: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r54);
    goto CPyL193;
CPyL213: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r64);
    goto CPyL193;
CPyL214: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r64);
    CPyTagged_DecRef(cpy_r_r67);
    goto CPyL193;
CPyL215: ;
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF_NO_IMM(cpy_r_r54);
    goto CPyL54;
CPyL216: ;
    CPy_DECREF(cpy_r_r64);
    goto CPyL55;
CPyL217: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    goto CPyL193;
CPyL218: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r86);
    goto CPyL193;
CPyL219: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r101);
    goto CPyL193;
CPyL220: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r110);
    goto CPyL193;
CPyL221: ;
    CPy_DECREF(cpy_r_r122);
    goto CPyL89;
CPyL222: ;
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r125);
    goto CPyL191;
CPyL223: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r125);
    goto CPyL116;
CPyL224: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    goto CPyL116;
CPyL225: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPyTagged_DecRef(cpy_r_r135);
    goto CPyL116;
CPyL226: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r131);
    CPyTagged_DecRef(cpy_r_r135);
    CPyTagged_DecRef(cpy_r_r139);
    goto CPyL116;
CPyL227: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r135);
    CPyTagged_DecRef(cpy_r_r139);
    goto CPyL116;
CPyL228: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r135);
    CPyTagged_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r149);
    goto CPyL116;
CPyL229: ;
    CPy_DECREF_NO_IMM(cpy_r_r149);
    goto CPyL115;
CPyL230: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r135);
    CPyTagged_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r152);
    goto CPyL116;
CPyL231: ;
    CPy_DecRef(cpy_r_r165.f0);
    CPy_DecRef(cpy_r_r165.f1);
    CPy_DecRef(cpy_r_r165.f2);
    goto CPyL121;
CPyL232: ;
    CPy_DecRef(cpy_r_r179);
    goto CPyL131;
CPyL233: ;
    CPy_DecRef(cpy_r_r165.f0);
    CPy_DecRef(cpy_r_r165.f1);
    CPy_DecRef(cpy_r_r165.f2);
    goto CPyL128;
CPyL234: ;
    CPy_DecRef(cpy_r_r165.f0);
    CPy_DecRef(cpy_r_r165.f1);
    CPy_DecRef(cpy_r_r165.f2);
    goto CPyL130;
CPyL235: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r135);
    CPyTagged_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r152);
    goto CPyL146;
CPyL236: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r135);
    CPyTagged_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r198);
    goto CPyL137;
CPyL237: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r135);
    CPyTagged_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r198);
    goto CPyL146;
CPyL238: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r203);
    goto CPyL146;
CPyL239: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r152);
    goto CPyL146;
CPyL240: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r210);
    goto CPyL146;
CPyL241: ;
    CPy_DecRef(cpy_r_r220);
    goto CPyL155;
CPyL242: ;
    CPy_DecRef(cpy_r_r217.f0);
    CPy_DecRef(cpy_r_r217.f1);
    CPy_DecRef(cpy_r_r217.f2);
    goto CPyL152;
CPyL243: ;
    CPy_DecRef(cpy_r_r217.f0);
    CPy_DecRef(cpy_r_r217.f1);
    CPy_DecRef(cpy_r_r217.f2);
    goto CPyL154;
CPyL244: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r216);
    goto CPyL193;
CPyL245: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF_NO_IMM(cpy_r_r152);
    CPy_DECREF(cpy_r_r216);
    goto CPyL163;
CPyL246: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    goto CPyL193;
CPyL247: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r216);
    goto CPyL193;
CPyL248: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r216);
    CPy_DECREF(cpy_r_r263);
    goto CPyL173;
CPyL249: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r263);
    goto CPyL193;
CPyL250: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r266);
    goto CPyL193;
CPyL251: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r216);
    CPy_DECREF(cpy_r_r266);
    CPy_DECREF_NO_IMM(cpy_r_r267);
    goto CPyL178;
CPyL252: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r267);
    goto CPyL193;
CPyL253: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r267);
    CPy_DecRef(cpy_r_r274);
    goto CPyL193;
CPyL254: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r267);
    CPy_DecRef(cpy_r_r278);
    goto CPyL193;
CPyL255: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r278);
    goto CPyL193;
CPyL256: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r278);
    CPy_DecRef(cpy_r_r283);
    goto CPyL193;
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
        goto __LL15;
    }
    arg_initial_address = obj_initial_address;
    if (arg_initial_address != NULL) goto __LL15;
    if (obj_initial_address == Py_None)
        arg_initial_address = obj_initial_address;
    else {
        arg_initial_address = NULL;
    }
    if (arg_initial_address != NULL) goto __LL15;
    CPy_TypeError("object or None", obj_initial_address); 
    goto fail;
__LL15: ;
    PyObject *retval = CPyDef_main___decode_traceTransaction(arg_struct_logs, arg_topic_map, arg_allow_undecoded, arg_initial_address);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
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
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0x' */
    cpy_r_r1 = CPyStatic_main___HexBytes;
    if (likely(cpy_r_r1 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL3: ;
    PyObject *cpy_r_r3[1] = {cpy_r_value};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_Vectorcall(cpy_r_r1, cpy_r_r4, 1, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL8;
    }
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex' */
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_0xstring", 435, CPyStatic_main___globals, "str", cpy_r_r9);
        goto CPyL8;
    }
    cpy_r_r11 = CPyStr_Build(2, cpy_r_r0, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "_0xstring", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main____params(PyObject *cpy_r_abi_params) {
    PyObject *cpy_r_r0;
    int64_t cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_tuple_match;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r__array;
    PyObject *cpy_r__size;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_tuple_type_tail;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    int64_t cpy_r_r54;
    PyObject *cpy_r_r55;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_abi_params)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r1 < cpy_r_r3;
    if (!cpy_r_r4) goto CPyL28;
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_abi_params)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r1 * 8;
    cpy_r_r8 = cpy_r_r6 + cpy_r_r7;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    CPy_INCREF(cpy_r_r9);
    if (likely(PyDict_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 443, CPyStatic_main___globals, "dict", cpy_r_r9);
        goto CPyL30;
    }
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'type' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL31;
    }
    cpy_r_r13 = CPyStatic_main____tuple_match;
    if (unlikely(cpy_r_r13 == NULL)) {
        goto CPyL32;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_tuple_match\" was not set");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL8: ;
    PyObject *cpy_r_r15[1] = {cpy_r_r12};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_Vectorcall(cpy_r_r13, cpy_r_r16, 1, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r17);
    cpy_r_tuple_match = cpy_r_r17;
    cpy_r_r18 = PyObject_IsTrue(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL34;
    }
    cpy_r_r20 = cpy_r_r18;
    if (cpy_r_r20) {
        goto CPyL35;
    } else
        goto CPyL36;
CPyL11: ;
    cpy_r_r21 = cpy_r_tuple_match;
    cpy_r_r22 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'group' */
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 1 */
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 2 */
    PyObject *cpy_r_r25[3] = {cpy_r_r21, cpy_r_r23, cpy_r_r24};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_VectorcallMethod(cpy_r_r22, cpy_r_r26, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r21);
    if (likely(PyTuple_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 446, CPyStatic_main___globals, "tuple", cpy_r_r27);
        goto CPyL31;
    }
    cpy_r_r29 = CPySequence_CheckUnpackCount(cpy_r_r28, 2);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL38;
    }
    cpy_r_r31 = CPySequenceTuple_GetItemUnsafe(cpy_r_r28, 0);
    cpy_r_r32 = CPySequenceTuple_GetItemUnsafe(cpy_r_r28, 1);
    CPy_DECREF(cpy_r_r28);
    cpy_r__array = cpy_r_r31;
    cpy_r__size = cpy_r_r32;
    cpy_r_r33 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r34 = cpy_r__array != cpy_r_r33;
    CPy_DECREF(cpy_r__array);
    if (!cpy_r_r34) goto CPyL39;
    cpy_r_r35 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '[' */
    cpy_r_r36 = PyObject_Str(cpy_r__size);
    CPy_DECREF(cpy_r__size);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL31;
    }
    cpy_r_r37 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ']' */
    cpy_r_r38 = CPyStr_Build(3, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL31;
    }
    cpy_r_r39 = cpy_r_r38;
    goto CPyL20;
CPyL19: ;
    cpy_r_r40 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '' */
    CPy_INCREF(cpy_r_r40);
    cpy_r_r39 = cpy_r_r40;
CPyL20: ;
    cpy_r_tuple_type_tail = cpy_r_r39;
    cpy_r_r41 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '(' */
    cpy_r_r42 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ',' */
    cpy_r_r43 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'components' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r10, cpy_r_r43);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL40;
    }
    if (likely(PyList_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 448, CPyStatic_main___globals, "list", cpy_r_r44);
        goto CPyL40;
    }
    cpy_r_r46 = CPyDef_main____params(cpy_r_r45);
    CPy_DECREF_NO_IMM(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL40;
    }
    cpy_r_r47 = PyUnicode_Join(cpy_r_r42, cpy_r_r46);
    CPy_DECREF_NO_IMM(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL40;
    }
    cpy_r_r48 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ')' */
    cpy_r_r49 = CPyStr_Build(4, cpy_r_r41, cpy_r_r47, cpy_r_r48, cpy_r_tuple_type_tail);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_tuple_type_tail);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL30;
    }
    cpy_r_r50 = PyList_Append(cpy_r_r0, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL30;
    } else
        goto CPyL27;
CPyL26: ;
    cpy_r_r52 = PyList_Append(cpy_r_r0, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL30;
    }
CPyL27: ;
    cpy_r_r54 = cpy_r_r1 + 1;
    cpy_r_r1 = cpy_r_r54;
    goto CPyL2;
CPyL28: ;
    return cpy_r_r0;
CPyL29: ;
    cpy_r_r55 = NULL;
    return cpy_r_r55;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    goto CPyL6;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_tuple_match);
    goto CPyL29;
CPyL35: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL11;
CPyL36: ;
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_tuple_match);
    goto CPyL26;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r21);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r28);
    goto CPyL29;
CPyL39: ;
    CPy_DECREF(cpy_r__size);
    goto CPyL19;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_tuple_type_tail);
    goto CPyL29;
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
    CPy_AddTraceback("eth_event/main.py", "_params", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main____decode(PyObject *cpy_r_inputs, PyObject *cpy_r_topics, PyObject *cpy_r_data) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_unindexed_types;
    CPyTagged cpy_r_indexed_count;
    int64_t cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_topics_count;
    int64_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    int64_t cpy_r_r30;
    char cpy_r_r31;
    int64_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    tuple_T2OO cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    CPyPtr cpy_r_r68;
    int64_t cpy_r_r69;
    CPyTagged cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    tuple_T3OOO cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject **cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject **cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject **cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject **cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    int64_t cpy_r_r152;
    CPyPtr cpy_r_r153;
    int64_t cpy_r_r154;
    char cpy_r_r155;
    CPyPtr cpy_r_r156;
    CPyPtr cpy_r_r157;
    int64_t cpy_r_r158;
    CPyPtr cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    int32_t cpy_r_r172;
    char cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    int32_t cpy_r_r178;
    char cpy_r_r179;
    CPyPtr cpy_r_r180;
    int64_t cpy_r_r181;
    CPyTagged cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject **cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    CPyPtr cpy_r_r194;
    CPyPtr cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject **cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_value;
    tuple_T3OOO cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    tuple_T4OOOO cpy_r_r217;
    PyObject *cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    int32_t cpy_r_r222;
    char cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    int32_t cpy_r_r226;
    char cpy_r_r227;
    int32_t cpy_r_r228;
    char cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    int32_t cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    int32_t cpy_r_r240;
    char cpy_r_r241;
    int32_t cpy_r_r242;
    char cpy_r_r243;
    int64_t cpy_r_r244;
    PyObject *cpy_r_r245;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL146;
    }
    cpy_r_unindexed_types = cpy_r_r0;
    cpy_r_indexed_count = 0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_inputs)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r1 < cpy_r_r3;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_inputs)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r1 * 8;
    cpy_r_r8 = cpy_r_r6 + cpy_r_r7;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    CPy_INCREF(cpy_r_r9);
    if (likely(PyDict_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 460, CPyStatic_main___globals, "dict", cpy_r_r9);
        goto CPyL147;
    }
    cpy_r_i = cpy_r_r10;
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'indexed' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_i, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL148;
    }
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL148;
    }
    if (cpy_r_r13) {
        goto CPyL149;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r14 = CPyTagged_Add(cpy_r_indexed_count, 2);
    CPyTagged_DECREF(cpy_r_indexed_count);
    cpy_r_indexed_count = cpy_r_r14;
    goto CPyL9;
CPyL8: ;
    cpy_r_r15 = PyList_Append(cpy_r_unindexed_types, cpy_r_i);
    CPy_DECREF(cpy_r_i);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL147;
    }
CPyL9: ;
    cpy_r_r17 = cpy_r_r1 + 1;
    cpy_r_r1 = cpy_r_r17;
    goto CPyL2;
CPyL10: ;
    cpy_r_r18 = cpy_r_indexed_count != 0;
    if (!cpy_r_r18) goto CPyL13;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (cpy_r_r22) {
        goto CPyL13;
    } else
        goto CPyL150;
CPyL12: ;
    CPy_INCREF_NO_IMM(cpy_r_inputs);
    cpy_r_unindexed_types = cpy_r_inputs;
    goto CPyL29;
CPyL13: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_topics_count = cpy_r_r25;
    cpy_r_r26 = cpy_r_indexed_count & 1;
    cpy_r_r27 = cpy_r_r26 != 0;
    if (!cpy_r_r27) goto CPyL15;
    cpy_r_r28 = CPyTagged_IsEq_(cpy_r_indexed_count, cpy_r_topics_count);
    if (cpy_r_r28) {
        goto CPyL151;
    } else
        goto CPyL152;
CPyL15: ;
    cpy_r_r29 = cpy_r_indexed_count == cpy_r_topics_count;
    if (cpy_r_r29) {
        goto CPyL151;
    } else
        goto CPyL152;
CPyL16: ;
    cpy_r_r30 = cpy_r_indexed_count & 1;
    cpy_r_r31 = cpy_r_r30 != 0;
    if (cpy_r_r31) goto CPyL18;
    cpy_r_r32 = cpy_r_topics_count & 1;
    cpy_r_r33 = cpy_r_r32 != 0;
    if (!cpy_r_r33) goto CPyL19;
CPyL18: ;
    cpy_r_r34 = CPyTagged_IsLt_(cpy_r_indexed_count, cpy_r_topics_count);
    cpy_r_r35 = cpy_r_r34;
    goto CPyL20;
CPyL19: ;
    cpy_r_r36 = (Py_ssize_t)cpy_r_indexed_count < (Py_ssize_t)cpy_r_topics_count;
    cpy_r_r35 = cpy_r_r36;
CPyL20: ;
    CPyTagged_DECREF(cpy_r_indexed_count);
    CPyTagged_DECREF(cpy_r_topics_count);
    if (!cpy_r_r35) goto CPyL25;
    cpy_r_r37 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Event log does not contain enough topics for the given '
                                   'ABI - this is usually because an event argument is not '
                                   'marked as indexed') */
    cpy_r_r38 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r39[1] = {cpy_r_r37};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL146;
    }
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_main___EventError))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 475, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r41);
        goto CPyL146;
    }
    CPy_Raise(cpy_r_r42);
    CPy_DECREF_NO_IMM(cpy_r_r42);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL146;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r43 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Event log contains more topics than expected for the '
                                   'given ABI - this is usually because an event argument '
                                   'is incorrectly marked as indexed') */
    cpy_r_r44 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r45[1] = {cpy_r_r43};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = PyObject_Vectorcall(cpy_r_r44, cpy_r_r46, 1, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL146;
    }
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_main___EventError))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 480, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r47);
        goto CPyL146;
    }
    CPy_Raise(cpy_r_r48);
    CPy_DECREF_NO_IMM(cpy_r_r48);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL146;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r49 = CPyDef_main____params(cpy_r_unindexed_types);
    CPy_DECREF_NO_IMM(cpy_r_unindexed_types);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL31;
    }
    goto CPyL42;
CPyL31: ;
    cpy_r_r50 = CPy_CatchError();
    cpy_r_r51 = CPyModule_builtins;
    cpy_r_r52 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'KeyError' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL40;
    }
    cpy_r_r54 = CPyModule_builtins;
    cpy_r_r55 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TypeError' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL153;
    }
    cpy_r_r57.f0 = cpy_r_r53;
    cpy_r_r57.f1 = cpy_r_r56;
    cpy_r_r58 = PyTuple_New(2);
    if (unlikely(cpy_r_r58 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp16 = cpy_r_r57.f0;
    PyTuple_SET_ITEM(cpy_r_r58, 0, __tmp16);
    PyObject *__tmp17 = cpy_r_r57.f1;
    PyTuple_SET_ITEM(cpy_r_r58, 1, __tmp17);
    cpy_r_r59 = CPy_ExceptionMatches(cpy_r_r58);
    CPy_DecRef(cpy_r_r58);
    if (!cpy_r_r59) goto CPyL38;
    cpy_r_r60 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r60;
    CPy_DecRef(cpy_r_e);
    cpy_r_r61 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Invalid ABI' */
    cpy_r_r62 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r63[1] = {cpy_r_r61};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_Vectorcall(cpy_r_r62, cpy_r_r64, 1, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL40;
    }
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_main___ABIError))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 489, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r65);
        goto CPyL40;
    }
    CPy_Raise(cpy_r_r66);
    CPy_DecRef(cpy_r_r66);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL40;
    } else
        goto CPyL154;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL40;
    } else
        goto CPyL155;
CPyL39: ;
    CPy_Unreachable();
CPyL40: ;
    CPy_RestoreExcInfo(cpy_r_r50);
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r50.f2);
    cpy_r_r67 = CPy_KeepPropagating();
    if (!cpy_r_r67) goto CPyL146;
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r68 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r69 = *(int64_t *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 << 1;
    cpy_r_r71 = cpy_r_r70 != 0;
    if (!cpy_r_r71) goto CPyL156;
    cpy_r_r72 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0x' */
    cpy_r_r73 = PyObject_RichCompare(cpy_r_data, cpy_r_r72, 2);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL157;
    }
    cpy_r_r74 = PyObject_IsTrue(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL157;
    }
    cpy_r_r76 = cpy_r_r74;
    if (!cpy_r_r76) goto CPyL156;
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = CPyTagged_Multiply(cpy_r_r79, 64);
    cpy_r_r81 = CPyTagged_StealAsObject(cpy_r_r80);
    cpy_r_r82 = CPyDef_main____0xstring(cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL157;
    }
    cpy_r_data = cpy_r_r82;
CPyL48: ;
    cpy_r_r83 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r83 == NULL)) {
        goto CPyL158;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r84 = 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL51: ;
    PyObject *cpy_r_r85[1] = {cpy_r_data};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = PyObject_Vectorcall(cpy_r_r83, cpy_r_r86, 1, 0);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL159;
    }
    CPy_DECREF(cpy_r_data);
    cpy_r_r88 = CPyStatic_main___globals;
    cpy_r_r89 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decode' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL160;
    }
    PyObject *cpy_r_r91[2] = {cpy_r_r49, cpy_r_r87};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = PyObject_Vectorcall(cpy_r_r90, cpy_r_r92, 2, 0);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL160;
    }
    CPy_DECREF_NO_IMM(cpy_r_r49);
    CPy_DECREF(cpy_r_r87);
    if (likely(PyTuple_Check(cpy_r_r93)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 496, CPyStatic_main___globals, "tuple", cpy_r_r93);
        goto CPyL60;
    }
    cpy_r_r95 = PySequence_List(cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL60;
    }
    cpy_r_r96 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r97 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r98 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* -1 */
    cpy_r_r99 = PySlice_New(cpy_r_r96, cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL161;
    }
    cpy_r_r100 = PyObject_GetItem(cpy_r_r95, cpy_r_r99);
    CPy_DECREF_NO_IMM(cpy_r_r95);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL60;
    }
    if (likely(PyList_Check(cpy_r_r100)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 496, CPyStatic_main___globals, "list", cpy_r_r100);
        goto CPyL60;
    }
    goto CPyL89;
CPyL60: ;
    cpy_r_r102 = CPy_CatchError();
    cpy_r_r103 = CPyStatic_main___globals;
    cpy_r_r104 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'InsufficientDataBytes' */
    cpy_r_r105 = CPyDict_GetItem(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    }
    cpy_r_r106 = CPy_ExceptionMatches(cpy_r_r105);
    CPy_DecRef(cpy_r_r105);
    if (!cpy_r_r106) goto CPyL66;
    cpy_r_r107 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Event data has insufficient length' */
    cpy_r_r108 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r109[1] = {cpy_r_r107};
    cpy_r_r110 = (PyObject **)&cpy_r_r109;
    cpy_r_r111 = PyObject_Vectorcall(cpy_r_r108, cpy_r_r110, 1, 0);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    }
    if (likely(Py_TYPE(cpy_r_r111) == CPyType_main___EventError))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 498, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r111);
        goto CPyL87;
    }
    CPy_Raise(cpy_r_r112);
    CPy_DecRef(cpy_r_r112);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    } else
        goto CPyL162;
CPyL65: ;
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r113 = CPyStatic_main___globals;
    cpy_r_r114 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'NonEmptyPaddingBytes' */
    cpy_r_r115 = CPyDict_GetItem(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    }
    cpy_r_r116 = CPy_ExceptionMatches(cpy_r_r115);
    CPy_DecRef(cpy_r_r115);
    if (!cpy_r_r116) goto CPyL72;
    cpy_r_r117 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Malformed data field in event log' */
    cpy_r_r118 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r119[1] = {cpy_r_r117};
    cpy_r_r120 = (PyObject **)&cpy_r_r119;
    cpy_r_r121 = PyObject_Vectorcall(cpy_r_r118, cpy_r_r120, 1, 0);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    }
    if (likely(Py_TYPE(cpy_r_r121) == CPyType_main___EventError))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 500, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r121);
        goto CPyL87;
    }
    CPy_Raise(cpy_r_r122);
    CPy_DecRef(cpy_r_r122);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    } else
        goto CPyL163;
CPyL71: ;
    CPy_Unreachable();
CPyL72: ;
    cpy_r_r123 = CPyStatic_main___globals;
    cpy_r_r124 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'InvalidPointer' */
    cpy_r_r125 = CPyDict_GetItem(cpy_r_r123, cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    }
    cpy_r_r126 = CPy_ExceptionMatches(cpy_r_r125);
    CPy_DecRef(cpy_r_r125);
    if (!cpy_r_r126) goto CPyL79;
    cpy_r_r127 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r127;
    cpy_r_r128 = PyObject_Str(cpy_r_e);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    }
    cpy_r_r129 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r130[1] = {cpy_r_r128};
    cpy_r_r131 = (PyObject **)&cpy_r_r130;
    cpy_r_r132 = PyObject_Vectorcall(cpy_r_r129, cpy_r_r131, 1, 0);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL164;
    }
    CPy_DecRef(cpy_r_r128);
    if (likely(Py_TYPE(cpy_r_r132) == CPyType_main___EventError))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 502, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r132);
        goto CPyL87;
    }
    CPy_Raise(cpy_r_r133);
    CPy_DecRef(cpy_r_r133);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    } else
        goto CPyL165;
CPyL78: ;
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r134 = CPyModule_builtins;
    cpy_r_r135 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'OverflowError' */
    cpy_r_r136 = CPyObject_GetAttr(cpy_r_r134, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    }
    cpy_r_r137 = CPy_ExceptionMatches(cpy_r_r136);
    CPy_DecRef(cpy_r_r136);
    if (!cpy_r_r137) goto CPyL85;
    cpy_r_r138 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Cannot decode event due to overflow error' */
    cpy_r_r139 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r140[1] = {cpy_r_r138};
    cpy_r_r141 = (PyObject **)&cpy_r_r140;
    cpy_r_r142 = PyObject_Vectorcall(cpy_r_r139, cpy_r_r141, 1, 0);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    }
    if (likely(Py_TYPE(cpy_r_r142) == CPyType_main___EventError))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 504, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r142);
        goto CPyL87;
    }
    CPy_Raise(cpy_r_r143);
    CPy_DecRef(cpy_r_r143);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL87;
    } else
        goto CPyL166;
CPyL84: ;
    CPy_Unreachable();
CPyL85: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL87;
    } else
        goto CPyL167;
CPyL86: ;
    CPy_Unreachable();
CPyL87: ;
    CPy_RestoreExcInfo(cpy_r_r102);
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r102.f2);
    cpy_r_r144 = CPy_KeepPropagating();
    if (!cpy_r_r144) goto CPyL146;
    CPy_Unreachable();
CPyL89: ;
    cpy_r_r145 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r146 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r147 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* -1 */
    cpy_r_r148 = PySlice_New(cpy_r_r145, cpy_r_r146, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL168;
    }
    cpy_r_r149 = PyObject_GetItem(cpy_r_topics, cpy_r_r148);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL168;
    }
    if (likely(PyList_Check(cpy_r_r149)))
        cpy_r_r150 = cpy_r_r149;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 507, CPyStatic_main___globals, "list", cpy_r_r149);
        goto CPyL168;
    }
    cpy_r_topics = cpy_r_r150;
    cpy_r_r151 = PyList_New(0);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL169;
    }
    cpy_r_r152 = 0;
CPyL94: ;
    cpy_r_r153 = (CPyPtr)&((PyVarObject *)cpy_r_inputs)->ob_size;
    cpy_r_r154 = *(int64_t *)cpy_r_r153;
    cpy_r_r155 = cpy_r_r152 < cpy_r_r154;
    if (!cpy_r_r155) goto CPyL170;
    cpy_r_r156 = (CPyPtr)&((PyListObject *)cpy_r_inputs)->ob_item;
    cpy_r_r157 = *(CPyPtr *)cpy_r_r156;
    cpy_r_r158 = cpy_r_r152 * 8;
    cpy_r_r159 = cpy_r_r157 + cpy_r_r158;
    cpy_r_r160 = *(PyObject * *)cpy_r_r159;
    CPy_INCREF(cpy_r_r160);
    if (likely(PyDict_Check(cpy_r_r160)))
        cpy_r_r161 = cpy_r_r160;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 510, CPyStatic_main___globals, "dict", cpy_r_r160);
        goto CPyL171;
    }
    cpy_r_i = cpy_r_r161;
    cpy_r_r162 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'type' */
    cpy_r_r163 = CPyDict_GetItem(cpy_r_i, cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL172;
    }
    if (likely(PyUnicode_Check(cpy_r_r163)))
        cpy_r_r164 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 511, CPyStatic_main___globals, "str", cpy_r_r163);
        goto CPyL172;
    }
    cpy_r_r165 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r166 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r167 = CPyDict_GetItem(cpy_r_i, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL173;
    }
    if (likely(PyUnicode_Check(cpy_r_r167)))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 513, CPyStatic_main___globals, "str", cpy_r_r167);
        goto CPyL173;
    }
    cpy_r_r169 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'type' */
    cpy_r_r170 = CPyDict_Build(2, cpy_r_r165, cpy_r_r168, cpy_r_r169, cpy_r_r164);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL173;
    }
    cpy_r_r171 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'components' */
    cpy_r_r172 = PyDict_Contains(cpy_r_i, cpy_r_r171);
    cpy_r_r173 = cpy_r_r172 >= 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL174;
    }
    cpy_r_r174 = cpy_r_r172;
    if (!cpy_r_r174) goto CPyL105;
    cpy_r_r175 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'components' */
    cpy_r_r176 = CPyDict_GetItem(cpy_r_i, cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL174;
    }
    cpy_r_r177 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'components' */
    cpy_r_r178 = CPyDict_SetItem(cpy_r_r170, cpy_r_r177, cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    cpy_r_r179 = cpy_r_r178 >= 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL174;
    }
CPyL105: ;
    cpy_r_r180 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r181 = *(int64_t *)cpy_r_r180;
    cpy_r_r182 = cpy_r_r181 << 1;
    cpy_r_r183 = cpy_r_r182 != 0;
    if (!cpy_r_r183) goto CPyL175;
    cpy_r_r184 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'indexed' */
    cpy_r_r185 = CPyDict_GetItem(cpy_r_i, cpy_r_r184);
    CPy_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL176;
    }
    if (unlikely(!PyBool_Check(cpy_r_r185))) {
        CPy_TypeError("bool", cpy_r_r185); cpy_r_r186 = 2;
    } else
        cpy_r_r186 = cpy_r_r185 == Py_True;
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL176;
    }
    if (!cpy_r_r186) goto CPyL177;
    cpy_r_r187 = CPyList_PopLast(cpy_r_topics);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL176;
    }
    cpy_r_r188 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r188 == NULL)) {
        goto CPyL178;
    } else
        goto CPyL113;
CPyL111: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r189 = 0;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL146;
    }
    CPy_Unreachable();
CPyL113: ;
    PyObject *cpy_r_r190[1] = {cpy_r_r187};
    cpy_r_r191 = (PyObject **)&cpy_r_r190;
    cpy_r_r192 = PyObject_Vectorcall(cpy_r_r188, cpy_r_r191, 1, 0);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL179;
    }
    CPy_DECREF(cpy_r_r187);
    cpy_r_r193 = PyList_New(1);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL180;
    }
    cpy_r_r194 = (CPyPtr)&((PyListObject *)cpy_r_r193)->ob_item;
    cpy_r_r195 = *(CPyPtr *)cpy_r_r194;
    *(PyObject * *)cpy_r_r195 = cpy_r_r164;
    cpy_r_r196 = CPyStatic_main___globals;
    cpy_r_r197 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decode' */
    cpy_r_r198 = CPyDict_GetItem(cpy_r_r196, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL181;
    }
    PyObject *cpy_r_r199[2] = {cpy_r_r193, cpy_r_r192};
    cpy_r_r200 = (PyObject **)&cpy_r_r199;
    cpy_r_r201 = PyObject_Vectorcall(cpy_r_r198, cpy_r_r200, 2, 0);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL181;
    }
    CPy_DECREF_NO_IMM(cpy_r_r193);
    if (likely(PyTuple_Check(cpy_r_r201)))
        cpy_r_r202 = cpy_r_r201;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 520, CPyStatic_main___globals, "tuple", cpy_r_r201);
        goto CPyL121;
    }
    cpy_r_r203 = CPySequenceTuple_GetItem(cpy_r_r202, 0);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL121;
    } else
        goto CPyL182;
CPyL120: ;
    cpy_r_value = cpy_r_r203;
    goto CPyL137;
CPyL121: ;
    cpy_r_r204 = CPy_CatchError();
    cpy_r_r205 = CPyStatic_main___globals;
    cpy_r_r206 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'InsufficientDataBytes' */
    cpy_r_r207 = CPyDict_GetItem(cpy_r_r205, cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL183;
    }
    cpy_r_r208 = CPyStatic_main___globals;
    cpy_r_r209 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'NoEntriesFound' */
    cpy_r_r210 = CPyDict_GetItem(cpy_r_r208, cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL184;
    }
    cpy_r_r211 = CPyModule_builtins;
    cpy_r_r212 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'OverflowError' */
    cpy_r_r213 = CPyObject_GetAttr(cpy_r_r211, cpy_r_r212);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL185;
    }
    cpy_r_r214 = CPyStatic_main___globals;
    cpy_r_r215 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'InvalidPointer' */
    cpy_r_r216 = CPyDict_GetItem(cpy_r_r214, cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL186;
    }
    cpy_r_r217.f0 = cpy_r_r207;
    cpy_r_r217.f1 = cpy_r_r210;
    cpy_r_r217.f2 = cpy_r_r213;
    cpy_r_r217.f3 = cpy_r_r216;
    cpy_r_r218 = PyTuple_New(4);
    if (unlikely(cpy_r_r218 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp18 = cpy_r_r217.f0;
    PyTuple_SET_ITEM(cpy_r_r218, 0, __tmp18);
    PyObject *__tmp19 = cpy_r_r217.f1;
    PyTuple_SET_ITEM(cpy_r_r218, 1, __tmp19);
    PyObject *__tmp20 = cpy_r_r217.f2;
    PyTuple_SET_ITEM(cpy_r_r218, 2, __tmp20);
    PyObject *__tmp21 = cpy_r_r217.f3;
    PyTuple_SET_ITEM(cpy_r_r218, 3, __tmp21);
    cpy_r_r219 = CPy_ExceptionMatches(cpy_r_r218);
    CPy_DecRef(cpy_r_r218);
    if (!cpy_r_r219) goto CPyL187;
    cpy_r_r220 = CPyDef_main____0xstring(cpy_r_r192);
    CPy_DecRef(cpy_r_r192);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL188;
    }
    cpy_r_r221 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'value' */
    cpy_r_r222 = CPyDict_SetItem(cpy_r_r170, cpy_r_r221, cpy_r_r220);
    CPy_DecRef(cpy_r_r220);
    cpy_r_r223 = cpy_r_r222 >= 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL188;
    }
    cpy_r_r224 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decoded' */
    cpy_r_r225 = 0 ? Py_True : Py_False;
    cpy_r_r226 = CPyDict_SetItem(cpy_r_r170, cpy_r_r224, cpy_r_r225);
    cpy_r_r227 = cpy_r_r226 >= 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL188;
    }
    cpy_r_r228 = PyList_Append(cpy_r_r151, cpy_r_r170);
    CPy_DecRef(cpy_r_r170);
    cpy_r_r229 = cpy_r_r228 >= 0;
    if (unlikely(!cpy_r_r229)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL189;
    }
    CPy_RestoreExcInfo(cpy_r_r204);
    CPy_DecRef(cpy_r_r204.f0);
    CPy_DecRef(cpy_r_r204.f1);
    CPy_DecRef(cpy_r_r204.f2);
    goto CPyL144;
CPyL131: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL133;
    } else
        goto CPyL190;
CPyL132: ;
    CPy_Unreachable();
CPyL133: ;
    CPy_RestoreExcInfo(cpy_r_r204);
    CPy_DecRef(cpy_r_r204.f0);
    CPy_DecRef(cpy_r_r204.f1);
    CPy_DecRef(cpy_r_r204.f2);
    cpy_r_r230 = CPy_KeepPropagating();
    if (!cpy_r_r230) goto CPyL146;
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r231 = CPyList_PopLast(cpy_r_r101);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_value = cpy_r_r231;
CPyL137: ;
    cpy_r_r232 = PyBytes_Check(cpy_r_value);
    if (!cpy_r_r232) goto CPyL141;
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r233 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 531, CPyStatic_main___globals, "bytes", cpy_r_value);
        goto CPyL191;
    }
    cpy_r_r234 = CPyDef_main____0xstring(cpy_r_r233);
    CPy_DECREF(cpy_r_r233);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_value = cpy_r_r234;
CPyL141: ;
    cpy_r_r235 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'value' */
    cpy_r_r236 = CPyDict_SetItem(cpy_r_r170, cpy_r_r235, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    cpy_r_r237 = cpy_r_r236 >= 0;
    if (unlikely(!cpy_r_r237)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r238 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decoded' */
    cpy_r_r239 = 1 ? Py_True : Py_False;
    cpy_r_r240 = CPyDict_SetItem(cpy_r_r170, cpy_r_r238, cpy_r_r239);
    cpy_r_r241 = cpy_r_r240 >= 0;
    if (unlikely(!cpy_r_r241)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r242 = PyList_Append(cpy_r_r151, cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r243 = cpy_r_r242 >= 0;
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL171;
    }
CPyL144: ;
    cpy_r_r244 = cpy_r_r152 + 1;
    cpy_r_r152 = cpy_r_r244;
    goto CPyL94;
CPyL145: ;
    return cpy_r_r151;
CPyL146: ;
    cpy_r_r245 = NULL;
    return cpy_r_r245;
CPyL147: ;
    CPy_DecRef(cpy_r_unindexed_types);
    CPyTagged_DecRef(cpy_r_indexed_count);
    goto CPyL146;
CPyL148: ;
    CPy_DecRef(cpy_r_unindexed_types);
    CPyTagged_DecRef(cpy_r_indexed_count);
    CPy_DecRef(cpy_r_i);
    goto CPyL146;
CPyL149: ;
    CPy_DECREF(cpy_r_i);
    goto CPyL7;
CPyL150: ;
    CPy_DECREF_NO_IMM(cpy_r_unindexed_types);
    CPyTagged_DECREF(cpy_r_indexed_count);
    goto CPyL12;
CPyL151: ;
    CPyTagged_DECREF(cpy_r_indexed_count);
    CPyTagged_DECREF(cpy_r_topics_count);
    goto CPyL29;
CPyL152: ;
    CPy_DECREF_NO_IMM(cpy_r_unindexed_types);
    goto CPyL16;
CPyL153: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL40;
CPyL154: ;
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r50.f2);
    goto CPyL37;
CPyL155: ;
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r50.f2);
    goto CPyL39;
CPyL156: ;
    CPy_INCREF(cpy_r_data);
    goto CPyL48;
CPyL157: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL146;
CPyL158: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r49);
    goto CPyL49;
CPyL159: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r49);
    goto CPyL60;
CPyL160: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r87);
    goto CPyL60;
CPyL161: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL60;
CPyL162: ;
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r102.f2);
    goto CPyL65;
CPyL163: ;
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r102.f2);
    goto CPyL71;
CPyL164: ;
    CPy_DecRef(cpy_r_r128);
    goto CPyL87;
CPyL165: ;
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r102.f2);
    goto CPyL78;
CPyL166: ;
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r102.f2);
    goto CPyL84;
CPyL167: ;
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r102.f2);
    goto CPyL86;
CPyL168: ;
    CPy_DecRef(cpy_r_r101);
    goto CPyL146;
CPyL169: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    goto CPyL146;
CPyL170: ;
    CPy_DECREF_NO_IMM(cpy_r_topics);
    CPy_DECREF_NO_IMM(cpy_r_r101);
    goto CPyL145;
CPyL171: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    goto CPyL146;
CPyL172: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    goto CPyL146;
CPyL173: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r164);
    goto CPyL146;
CPyL174: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r170);
    goto CPyL146;
CPyL175: ;
    CPy_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r164);
    goto CPyL135;
CPyL176: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r170);
    goto CPyL146;
CPyL177: ;
    CPy_DECREF(cpy_r_r164);
    goto CPyL135;
CPyL178: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r170);
    CPy_DecRef(cpy_r_r187);
    goto CPyL111;
CPyL179: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r170);
    CPy_DecRef(cpy_r_r187);
    goto CPyL146;
CPyL180: ;
    CPy_DecRef(cpy_r_r164);
    goto CPyL121;
CPyL181: ;
    CPy_DecRef(cpy_r_r193);
    goto CPyL121;
CPyL182: ;
    CPy_DECREF(cpy_r_r192);
    goto CPyL120;
CPyL183: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r170);
    CPy_DecRef(cpy_r_r192);
    goto CPyL133;
CPyL184: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r170);
    CPy_DecRef(cpy_r_r192);
    CPy_DecRef(cpy_r_r207);
    goto CPyL133;
CPyL185: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r170);
    CPy_DecRef(cpy_r_r192);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r210);
    goto CPyL133;
CPyL186: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r170);
    CPy_DecRef(cpy_r_r192);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r210);
    CPy_DecRef(cpy_r_r213);
    goto CPyL133;
CPyL187: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r170);
    CPy_DecRef(cpy_r_r192);
    goto CPyL131;
CPyL188: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r170);
    goto CPyL133;
CPyL189: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    goto CPyL133;
CPyL190: ;
    CPy_DecRef(cpy_r_r204.f0);
    CPy_DecRef(cpy_r_r204.f1);
    CPy_DecRef(cpy_r_r204.f2);
    goto CPyL132;
CPyL191: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r170);
    goto CPyL146;
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
    CPy_AddTraceback("eth_event/main.py", "_decode", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
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
    void *cpy_r_r23;
    void *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
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
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject **cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    int32_t cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    int32_t cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    int32_t cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    int32_t cpy_r_r180;
    char cpy_r_r181;
    PyObject **cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject **cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    int32_t cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject **cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    int32_t cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    int32_t cpy_r_r235;
    char cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    int32_t cpy_r_r239;
    char cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    int32_t cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    int32_t cpy_r_r249;
    char cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    int32_t cpy_r_r253;
    char cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    int32_t cpy_r_r257;
    char cpy_r_r258;
    PyObject **cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject **cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    int32_t cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    char cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    char cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    char cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject **cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    int32_t cpy_r_r308;
    char cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    int32_t cpy_r_r312;
    char cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    int32_t cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    int32_t cpy_r_r322;
    char cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    int32_t cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    int32_t cpy_r_r332;
    char cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    int32_t cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    int32_t cpy_r_r340;
    char cpy_r_r341;
    PyObject **cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject **cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    int32_t cpy_r_r353;
    char cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    tuple_T2OO cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    int32_t cpy_r_r370;
    char cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    tuple_T3OOO cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    int32_t cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    int32_t cpy_r_r386;
    char cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    int32_t cpy_r_r393;
    char cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    int32_t cpy_r_r402;
    char cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    int32_t cpy_r_r409;
    char cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject **cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    int32_t cpy_r_r422;
    char cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    char cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    char cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    char cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject **cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    int32_t cpy_r_r459;
    char cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject *cpy_r_r462;
    int32_t cpy_r_r463;
    char cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    int32_t cpy_r_r467;
    char cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    int32_t cpy_r_r471;
    char cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    int32_t cpy_r_r475;
    char cpy_r_r476;
    PyObject **cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    int32_t cpy_r_r482;
    char cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject *cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject *cpy_r_r493;
    tuple_T2OO cpy_r_r494;
    PyObject *cpy_r_r495;
    PyObject *cpy_r_r496;
    PyObject *cpy_r_r497;
    PyObject *cpy_r_r498;
    int32_t cpy_r_r499;
    char cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    char cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject *cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    char cpy_r_r514;
    PyObject *cpy_r_r515;
    PyObject *cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    char cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    PyObject **cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    PyObject *cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    int32_t cpy_r_r536;
    char cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    int32_t cpy_r_r540;
    char cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    int32_t cpy_r_r544;
    char cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    int32_t cpy_r_r548;
    char cpy_r_r549;
    PyObject *cpy_r_r550;
    PyObject *cpy_r_r551;
    int32_t cpy_r_r552;
    char cpy_r_r553;
    PyObject *cpy_r_r554;
    PyObject *cpy_r_r555;
    int32_t cpy_r_r556;
    char cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    int32_t cpy_r_r560;
    char cpy_r_r561;
    PyObject **cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    int32_t cpy_r_r567;
    char cpy_r_r568;
    PyObject *cpy_r_r569;
    char cpy_r_r570;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", -1, CPyStatic_main___globals);
        goto CPyL210;
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
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('functools', 'functools', 'functools'),
                                    ('re', 're', 're')) */
    cpy_r_r12 = CPyStatic_main___globals;
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event/main.py' */
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r15 = CPyImport_ImportMany(cpy_r_r11, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r10);
    if (!cpy_r_r15) goto CPyL210;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Any', 'Callable', 'Dict', 'Final', 'List', 'Literal',
                                    'Mapping', 'Optional', 'Sequence', 'TypedDict', 'Union',
                                    'final', 'overload') */
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r18 = CPyStatic_main___globals;
    cpy_r_r19 = CPyImport_ImportFromMany(cpy_r_r17, cpy_r_r16, cpy_r_r16, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_typing = cpy_r_r19;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r20 = (PyObject **)&CPyModule_cchecksum;
    cpy_r_r21 = (PyObject **)&CPyModule_faster_hexbytes;
    PyObject **cpy_r_r22[2] = {cpy_r_r20, cpy_r_r21};
    cpy_r_r23 = (void *)&cpy_r_r22;
    int64_t cpy_r_r24[2] = {21, 22};
    cpy_r_r25 = (void *)&cpy_r_r24;
    cpy_r_r26 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('cchecksum', 'cchecksum', 'cchecksum'),
                                    ('faster_hexbytes', 'faster_hexbytes',
                                     'faster_hexbytes')) */
    cpy_r_r27 = CPyStatic_main___globals;
    cpy_r_r28 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event/main.py' */
    cpy_r_r29 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r30 = CPyImport_ImportMany(cpy_r_r26, cpy_r_r23, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r25);
    if (!cpy_r_r30) goto CPyL210;
    cpy_r_r31 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('auto',) */
    cpy_r_r32 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_hash' */
    cpy_r_r33 = CPyStatic_main___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_eth_hash = cpy_r_r34;
    CPy_INCREF(CPyModule_eth_hash);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('ABIComponent', 'ABIComponentIndexed', 'ABIElement',
                                    'ABIEvent', 'AnyAddress', 'ChecksumAddress',
                                    'HexAddress', 'HexStr') */
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_typing' */
    cpy_r_r37 = CPyStatic_main___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_eth_typing = cpy_r_r38;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('decode',) */
    cpy_r_r40 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_eth_abi' */
    cpy_r_r41 = CPyStatic_main___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_faster_eth_abi = cpy_r_r42;
    CPy_INCREF(CPyModule_faster_eth_abi);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('InsufficientDataBytes', 'InvalidPointer',
                                    'NoEntriesFound', 'NonEmptyPaddingBytes') */
    cpy_r_r44 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_eth_abi.exceptions' */
    cpy_r_r45 = CPyStatic_main___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_faster_eth_abi___exceptions = cpy_r_r46;
    CPy_INCREF(CPyModule_faster_eth_abi___exceptions);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('NotRequired',) */
    cpy_r_r48 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing_extensions' */
    cpy_r_r49 = CPyStatic_main___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_typing_extensions = cpy_r_r50;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyModule_builtins;
    cpy_r_r52 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Exception' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r54 = PyTuple_Pack(1, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r55 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r56 = (PyObject *)CPyType_main___ABIError_template;
    cpy_r_r57 = CPyType_FromTemplate(cpy_r_r56, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r58 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__mypyc_attrs__' */
    cpy_r_r59 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__dict__' */
    cpy_r_r60 = PyTuple_Pack(1, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL211;
    }
    cpy_r_r61 = PyObject_SetAttr(cpy_r_r57, cpy_r_r58, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL211;
    }
    CPyType_main___ABIError = (PyTypeObject *)cpy_r_r57;
    CPy_INCREF(CPyType_main___ABIError);
    cpy_r_r63 = CPyStatic_main___globals;
    cpy_r_r64 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ABIError' */
    cpy_r_r65 = PyDict_SetItem(cpy_r_r63, cpy_r_r64, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r67 = CPyModule_builtins;
    cpy_r_r68 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Exception' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r70 = PyTuple_Pack(1, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r71 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r72 = (PyObject *)CPyType_main___EventError_template;
    cpy_r_r73 = CPyType_FromTemplate(cpy_r_r72, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r74 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__mypyc_attrs__' */
    cpy_r_r75 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__dict__' */
    cpy_r_r76 = PyTuple_Pack(1, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL212;
    }
    cpy_r_r77 = PyObject_SetAttr(cpy_r_r73, cpy_r_r74, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL212;
    }
    CPyType_main___EventError = (PyTypeObject *)cpy_r_r73;
    CPy_INCREF(CPyType_main___EventError);
    cpy_r_r79 = CPyStatic_main___globals;
    cpy_r_r80 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'EventError' */
    cpy_r_r81 = PyDict_SetItem(cpy_r_r79, cpy_r_r80, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r83 = CPyModule_builtins;
    cpy_r_r84 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Exception' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r86 = PyTuple_Pack(1, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r87 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r88 = (PyObject *)CPyType_main___StructLogError_template;
    cpy_r_r89 = CPyType_FromTemplate(cpy_r_r88, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r90 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__mypyc_attrs__' */
    cpy_r_r91 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__dict__' */
    cpy_r_r92 = PyTuple_Pack(1, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL213;
    }
    cpy_r_r93 = PyObject_SetAttr(cpy_r_r89, cpy_r_r90, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL213;
    }
    CPyType_main___StructLogError = (PyTypeObject *)cpy_r_r89;
    CPy_INCREF(CPyType_main___StructLogError);
    cpy_r_r95 = CPyStatic_main___globals;
    cpy_r_r96 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'StructLogError' */
    cpy_r_r97 = PyDict_SetItem(cpy_r_r95, cpy_r_r96, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r99 = CPyModule_builtins;
    cpy_r_r100 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Exception' */
    cpy_r_r101 = CPyObject_GetAttr(cpy_r_r99, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r102 = PyTuple_Pack(1, cpy_r_r101);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r103 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r104 = (PyObject *)CPyType_main___UnknownEvent_template;
    cpy_r_r105 = CPyType_FromTemplate(cpy_r_r104, cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r106 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__mypyc_attrs__' */
    cpy_r_r107 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__dict__' */
    cpy_r_r108 = PyTuple_Pack(1, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL214;
    }
    cpy_r_r109 = PyObject_SetAttr(cpy_r_r105, cpy_r_r106, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL214;
    }
    CPyType_main___UnknownEvent = (PyTypeObject *)cpy_r_r105;
    CPy_INCREF(CPyType_main___UnknownEvent);
    cpy_r_r111 = CPyStatic_main___globals;
    cpy_r_r112 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'UnknownEvent' */
    cpy_r_r113 = PyDict_SetItem(cpy_r_r111, cpy_r_r112, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r115 = CPyModule_typing;
    cpy_r_r116 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r117 = cpy_r_r115 != cpy_r_r116;
    if (cpy_r_r117) goto CPyL38;
    cpy_r_r118 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r119 = PyImport_Import(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_typing = cpy_r_r119;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r119);
CPyL38: ;
    cpy_r_r120 = PyImport_GetModuleDict();
    cpy_r_r121 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r122 = CPyDict_GetItem(cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r123 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDict' */
    cpy_r_r124 = CPyObject_GetAttr(cpy_r_r122, cpy_r_r123);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r125 = PyTuple_Pack(1, cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r126 = CPyModule_typing;
    cpy_r_r127 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r128 = cpy_r_r126 != cpy_r_r127;
    if (cpy_r_r128) goto CPyL44;
    cpy_r_r129 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r130 = PyImport_Import(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL215;
    }
    CPyModule_typing = cpy_r_r130;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r130);
CPyL44: ;
    cpy_r_r131 = PyImport_GetModuleDict();
    cpy_r_r132 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r133 = CPyDict_GetItem(cpy_r_r131, cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL215;
    }
    cpy_r_r134 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDictMeta' */
    cpy_r_r135 = CPyObject_GetAttr(cpy_r_r133, cpy_r_r134);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL215;
    }
    cpy_r_r136 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r137 = PyObject_HasAttr(cpy_r_r135, cpy_r_r136);
    if (!cpy_r_r137) goto CPyL51;
    cpy_r_r138 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'EventData' */
    cpy_r_r139 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r140 = CPyObject_GetAttr(cpy_r_r135, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL216;
    }
    PyObject *cpy_r_r141[2] = {cpy_r_r138, cpy_r_r125};
    cpy_r_r142 = (PyObject **)&cpy_r_r141;
    cpy_r_r143 = PyObject_Vectorcall(cpy_r_r140, cpy_r_r142, 2, 0);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL216;
    }
    if (likely(PyDict_Check(cpy_r_r143)))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 65, CPyStatic_main___globals, "dict", cpy_r_r143);
        goto CPyL216;
    }
    cpy_r_r145 = cpy_r_r144;
    goto CPyL53;
CPyL51: ;
    cpy_r_r146 = PyDict_New();
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL216;
    }
    cpy_r_r145 = cpy_r_r146;
CPyL53: ;
    cpy_r_r147 = PyDict_New();
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    cpy_r_r148 = (PyObject *)&PyUnicode_Type;
    cpy_r_r149 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r150 = PyDict_SetItem(cpy_r_r147, cpy_r_r149, cpy_r_r148);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r152 = (PyObject *)&PyUnicode_Type;
    cpy_r_r153 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'type' */
    cpy_r_r154 = PyDict_SetItem(cpy_r_r147, cpy_r_r153, cpy_r_r152);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r156 = CPyStatic_main___globals;
    cpy_r_r157 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Sequence' */
    cpy_r_r158 = CPyDict_GetItem(cpy_r_r156, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r159 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'components' */
    cpy_r_r160 = PyDict_SetItem(cpy_r_r147, cpy_r_r159, cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r162 = (PyObject *)&PyType_Type;
    cpy_r_r163 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'value' */
    cpy_r_r164 = PyDict_SetItem(cpy_r_r147, cpy_r_r163, cpy_r_r162);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r166 = (PyObject *)&PyBool_Type;
    cpy_r_r167 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decoded' */
    cpy_r_r168 = PyDict_SetItem(cpy_r_r147, cpy_r_r167, cpy_r_r166);
    cpy_r_r169 = cpy_r_r168 >= 0;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r170 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'EventData' */
    cpy_r_r171 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r172 = CPyDict_SetItem(cpy_r_r145, cpy_r_r171, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r173 = cpy_r_r172 >= 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    cpy_r_r174 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r175 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r176 = CPyDict_SetItem(cpy_r_r145, cpy_r_r175, cpy_r_r174);
    cpy_r_r177 = cpy_r_r176 >= 0;
    if (unlikely(!cpy_r_r177)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    cpy_r_r178 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r179 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r180 = CPyDict_SetItem(cpy_r_r145, cpy_r_r179, cpy_r_r178);
    cpy_r_r181 = cpy_r_r180 >= 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL217;
    }
    PyObject *cpy_r_r182[3] = {cpy_r_r170, cpy_r_r125, cpy_r_r145};
    cpy_r_r183 = (PyObject **)&cpy_r_r182;
    cpy_r_r184 = PyObject_Vectorcall(cpy_r_r135, cpy_r_r183, 3, 0);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL219;
    }
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r145);
    cpy_r_r185 = CPyStatic_main___globals;
    cpy_r_r186 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'final' */
    cpy_r_r187 = CPyDict_GetItem(cpy_r_r185, cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL220;
    }
    PyObject *cpy_r_r188[1] = {cpy_r_r184};
    cpy_r_r189 = (PyObject **)&cpy_r_r188;
    cpy_r_r190 = PyObject_Vectorcall(cpy_r_r187, cpy_r_r189, 1, 0);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL220;
    }
    CPy_DECREF(cpy_r_r184);
    CPyType_main___EventData = (PyTypeObject *)cpy_r_r190;
    CPy_INCREF(CPyType_main___EventData);
    cpy_r_r191 = CPyStatic_main___globals;
    cpy_r_r192 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'EventData' */
    cpy_r_r193 = PyDict_SetItem(cpy_r_r191, cpy_r_r192, cpy_r_r190);
    CPy_DECREF(cpy_r_r190);
    cpy_r_r194 = cpy_r_r193 >= 0;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r195 = (PyObject *)CPyType_main___EventData;
    cpy_r_r196 = CPyModule_typing;
    cpy_r_r197 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r198 = cpy_r_r196 != cpy_r_r197;
    if (cpy_r_r198) goto CPyL70;
    cpy_r_r199 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r200 = PyImport_Import(cpy_r_r199);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_typing = cpy_r_r200;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r200);
CPyL70: ;
    cpy_r_r201 = PyImport_GetModuleDict();
    cpy_r_r202 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r203 = CPyDict_GetItem(cpy_r_r201, cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r204 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDict' */
    cpy_r_r205 = CPyObject_GetAttr(cpy_r_r203, cpy_r_r204);
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r206 = PyTuple_Pack(1, cpy_r_r205);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r207 = CPyModule_typing;
    cpy_r_r208 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r209 = cpy_r_r207 != cpy_r_r208;
    if (cpy_r_r209) goto CPyL76;
    cpy_r_r210 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r211 = PyImport_Import(cpy_r_r210);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL221;
    }
    CPyModule_typing = cpy_r_r211;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r211);
CPyL76: ;
    cpy_r_r212 = PyImport_GetModuleDict();
    cpy_r_r213 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r214 = CPyDict_GetItem(cpy_r_r212, cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL221;
    }
    cpy_r_r215 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDictMeta' */
    cpy_r_r216 = CPyObject_GetAttr(cpy_r_r214, cpy_r_r215);
    CPy_DECREF(cpy_r_r214);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL221;
    }
    cpy_r_r217 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r218 = PyObject_HasAttr(cpy_r_r216, cpy_r_r217);
    if (!cpy_r_r218) goto CPyL83;
    cpy_r_r219 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'DecodedEvent' */
    cpy_r_r220 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r221 = CPyObject_GetAttr(cpy_r_r216, cpy_r_r220);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL222;
    }
    PyObject *cpy_r_r222[2] = {cpy_r_r219, cpy_r_r206};
    cpy_r_r223 = (PyObject **)&cpy_r_r222;
    cpy_r_r224 = PyObject_Vectorcall(cpy_r_r221, cpy_r_r223, 2, 0);
    CPy_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL222;
    }
    if (likely(PyDict_Check(cpy_r_r224)))
        cpy_r_r225 = cpy_r_r224;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals, "dict", cpy_r_r224);
        goto CPyL222;
    }
    cpy_r_r226 = cpy_r_r225;
    goto CPyL85;
CPyL83: ;
    cpy_r_r227 = PyDict_New();
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL222;
    }
    cpy_r_r226 = cpy_r_r227;
CPyL85: ;
    cpy_r_r228 = PyDict_New();
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL223;
    }
    cpy_r_r229 = (PyObject *)&PyUnicode_Type;
    cpy_r_r230 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r231 = PyDict_SetItem(cpy_r_r228, cpy_r_r230, cpy_r_r229);
    cpy_r_r232 = cpy_r_r231 >= 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r233 = (PyObject *)&PyList_Type;
    cpy_r_r234 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'data' */
    cpy_r_r235 = PyDict_SetItem(cpy_r_r228, cpy_r_r234, cpy_r_r233);
    cpy_r_r236 = cpy_r_r235 >= 0;
    if (unlikely(!cpy_r_r236)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r237 = (PyObject *)&PyType_Type;
    cpy_r_r238 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decoded' */
    cpy_r_r239 = PyDict_SetItem(cpy_r_r228, cpy_r_r238, cpy_r_r237);
    cpy_r_r240 = cpy_r_r239 >= 0;
    if (unlikely(!cpy_r_r240)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r241 = CPyStatic_main___globals;
    cpy_r_r242 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ChecksumAddress' */
    cpy_r_r243 = CPyDict_GetItem(cpy_r_r241, cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r244 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r245 = PyDict_SetItem(cpy_r_r228, cpy_r_r244, cpy_r_r243);
    CPy_DECREF(cpy_r_r243);
    cpy_r_r246 = cpy_r_r245 >= 0;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r247 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'DecodedEvent' */
    cpy_r_r248 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r249 = CPyDict_SetItem(cpy_r_r226, cpy_r_r248, cpy_r_r228);
    CPy_DECREF(cpy_r_r228);
    cpy_r_r250 = cpy_r_r249 >= 0;
    if (unlikely(!cpy_r_r250)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL223;
    }
    cpy_r_r251 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r252 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r253 = CPyDict_SetItem(cpy_r_r226, cpy_r_r252, cpy_r_r251);
    cpy_r_r254 = cpy_r_r253 >= 0;
    if (unlikely(!cpy_r_r254)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL223;
    }
    cpy_r_r255 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r256 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r257 = CPyDict_SetItem(cpy_r_r226, cpy_r_r256, cpy_r_r255);
    cpy_r_r258 = cpy_r_r257 >= 0;
    if (unlikely(!cpy_r_r258)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL223;
    }
    PyObject *cpy_r_r259[3] = {cpy_r_r247, cpy_r_r206, cpy_r_r226};
    cpy_r_r260 = (PyObject **)&cpy_r_r259;
    cpy_r_r261 = PyObject_Vectorcall(cpy_r_r216, cpy_r_r260, 3, 0);
    CPy_DECREF(cpy_r_r216);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL225;
    }
    CPy_DECREF(cpy_r_r206);
    CPy_DECREF(cpy_r_r226);
    cpy_r_r262 = CPyStatic_main___globals;
    cpy_r_r263 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'final' */
    cpy_r_r264 = CPyDict_GetItem(cpy_r_r262, cpy_r_r263);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL226;
    }
    PyObject *cpy_r_r265[1] = {cpy_r_r261};
    cpy_r_r266 = (PyObject **)&cpy_r_r265;
    cpy_r_r267 = PyObject_Vectorcall(cpy_r_r264, cpy_r_r266, 1, 0);
    CPy_DECREF(cpy_r_r264);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL226;
    }
    CPy_DECREF(cpy_r_r261);
    CPyType_main___DecodedEvent = (PyTypeObject *)cpy_r_r267;
    CPy_INCREF(CPyType_main___DecodedEvent);
    cpy_r_r268 = CPyStatic_main___globals;
    cpy_r_r269 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'DecodedEvent' */
    cpy_r_r270 = PyDict_SetItem(cpy_r_r268, cpy_r_r269, cpy_r_r267);
    CPy_DECREF(cpy_r_r267);
    cpy_r_r271 = cpy_r_r270 >= 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r272 = (PyObject *)CPyType_main___DecodedEvent;
    cpy_r_r273 = CPyModule_typing;
    cpy_r_r274 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r275 = cpy_r_r273 != cpy_r_r274;
    if (cpy_r_r275) goto CPyL101;
    cpy_r_r276 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r277 = PyImport_Import(cpy_r_r276);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_typing = cpy_r_r277;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r277);
CPyL101: ;
    cpy_r_r278 = PyImport_GetModuleDict();
    cpy_r_r279 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r280 = CPyDict_GetItem(cpy_r_r278, cpy_r_r279);
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r281 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDict' */
    cpy_r_r282 = CPyObject_GetAttr(cpy_r_r280, cpy_r_r281);
    CPy_DECREF(cpy_r_r280);
    if (unlikely(cpy_r_r282 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r283 = PyTuple_Pack(1, cpy_r_r282);
    CPy_DECREF(cpy_r_r282);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r284 = CPyModule_typing;
    cpy_r_r285 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r286 = cpy_r_r284 != cpy_r_r285;
    if (cpy_r_r286) goto CPyL107;
    cpy_r_r287 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r288 = PyImport_Import(cpy_r_r287);
    if (unlikely(cpy_r_r288 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL227;
    }
    CPyModule_typing = cpy_r_r288;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r288);
CPyL107: ;
    cpy_r_r289 = PyImport_GetModuleDict();
    cpy_r_r290 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r291 = CPyDict_GetItem(cpy_r_r289, cpy_r_r290);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL227;
    }
    cpy_r_r292 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDictMeta' */
    cpy_r_r293 = CPyObject_GetAttr(cpy_r_r291, cpy_r_r292);
    CPy_DECREF(cpy_r_r291);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL227;
    }
    cpy_r_r294 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r295 = PyObject_HasAttr(cpy_r_r293, cpy_r_r294);
    if (!cpy_r_r295) goto CPyL114;
    cpy_r_r296 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'NonDecodedEvent' */
    cpy_r_r297 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r298 = CPyObject_GetAttr(cpy_r_r293, cpy_r_r297);
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL228;
    }
    PyObject *cpy_r_r299[2] = {cpy_r_r296, cpy_r_r283};
    cpy_r_r300 = (PyObject **)&cpy_r_r299;
    cpy_r_r301 = PyObject_Vectorcall(cpy_r_r298, cpy_r_r300, 2, 0);
    CPy_DECREF(cpy_r_r298);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL228;
    }
    if (likely(PyDict_Check(cpy_r_r301)))
        cpy_r_r302 = cpy_r_r301;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 82, CPyStatic_main___globals, "dict", cpy_r_r301);
        goto CPyL228;
    }
    cpy_r_r303 = cpy_r_r302;
    goto CPyL116;
CPyL114: ;
    cpy_r_r304 = PyDict_New();
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL228;
    }
    cpy_r_r303 = cpy_r_r304;
CPyL116: ;
    cpy_r_r305 = PyDict_New();
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL229;
    }
    cpy_r_r306 = (PyObject *)&PyType_Type;
    cpy_r_r307 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r308 = PyDict_SetItem(cpy_r_r305, cpy_r_r307, cpy_r_r306);
    cpy_r_r309 = cpy_r_r308 >= 0;
    if (unlikely(!cpy_r_r309)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r310 = (PyObject *)&PyList_Type;
    cpy_r_r311 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'topics' */
    cpy_r_r312 = PyDict_SetItem(cpy_r_r305, cpy_r_r311, cpy_r_r310);
    cpy_r_r313 = cpy_r_r312 >= 0;
    if (unlikely(!cpy_r_r313)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r314 = CPyStatic_main___globals;
    cpy_r_r315 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexStr' */
    cpy_r_r316 = CPyDict_GetItem(cpy_r_r314, cpy_r_r315);
    if (unlikely(cpy_r_r316 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r317 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'data' */
    cpy_r_r318 = PyDict_SetItem(cpy_r_r305, cpy_r_r317, cpy_r_r316);
    CPy_DECREF(cpy_r_r316);
    cpy_r_r319 = cpy_r_r318 >= 0;
    if (unlikely(!cpy_r_r319)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r320 = (PyObject *)&PyType_Type;
    cpy_r_r321 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'decoded' */
    cpy_r_r322 = PyDict_SetItem(cpy_r_r305, cpy_r_r321, cpy_r_r320);
    cpy_r_r323 = cpy_r_r322 >= 0;
    if (unlikely(!cpy_r_r323)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r324 = CPyStatic_main___globals;
    cpy_r_r325 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ChecksumAddress' */
    cpy_r_r326 = CPyDict_GetItem(cpy_r_r324, cpy_r_r325);
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r327 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r328 = PyDict_SetItem(cpy_r_r305, cpy_r_r327, cpy_r_r326);
    CPy_DECREF(cpy_r_r326);
    cpy_r_r329 = cpy_r_r328 >= 0;
    if (unlikely(!cpy_r_r329)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL230;
    }
    cpy_r_r330 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'NonDecodedEvent' */
    cpy_r_r331 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r332 = CPyDict_SetItem(cpy_r_r303, cpy_r_r331, cpy_r_r305);
    CPy_DECREF(cpy_r_r305);
    cpy_r_r333 = cpy_r_r332 >= 0;
    if (unlikely(!cpy_r_r333)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL229;
    }
    cpy_r_r334 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r335 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r336 = CPyDict_SetItem(cpy_r_r303, cpy_r_r335, cpy_r_r334);
    cpy_r_r337 = cpy_r_r336 >= 0;
    if (unlikely(!cpy_r_r337)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL229;
    }
    cpy_r_r338 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r339 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r340 = CPyDict_SetItem(cpy_r_r303, cpy_r_r339, cpy_r_r338);
    cpy_r_r341 = cpy_r_r340 >= 0;
    if (unlikely(!cpy_r_r341)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL229;
    }
    PyObject *cpy_r_r342[3] = {cpy_r_r330, cpy_r_r283, cpy_r_r303};
    cpy_r_r343 = (PyObject **)&cpy_r_r342;
    cpy_r_r344 = PyObject_Vectorcall(cpy_r_r293, cpy_r_r343, 3, 0);
    CPy_DECREF(cpy_r_r293);
    if (unlikely(cpy_r_r344 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL231;
    }
    CPy_DECREF(cpy_r_r283);
    CPy_DECREF(cpy_r_r303);
    cpy_r_r345 = CPyStatic_main___globals;
    cpy_r_r346 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'final' */
    cpy_r_r347 = CPyDict_GetItem(cpy_r_r345, cpy_r_r346);
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL232;
    }
    PyObject *cpy_r_r348[1] = {cpy_r_r344};
    cpy_r_r349 = (PyObject **)&cpy_r_r348;
    cpy_r_r350 = PyObject_Vectorcall(cpy_r_r347, cpy_r_r349, 1, 0);
    CPy_DECREF(cpy_r_r347);
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL232;
    }
    CPy_DECREF(cpy_r_r344);
    CPyType_main___NonDecodedEvent = (PyTypeObject *)cpy_r_r350;
    CPy_INCREF(CPyType_main___NonDecodedEvent);
    cpy_r_r351 = CPyStatic_main___globals;
    cpy_r_r352 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'NonDecodedEvent' */
    cpy_r_r353 = PyDict_SetItem(cpy_r_r351, cpy_r_r352, cpy_r_r350);
    CPy_DECREF(cpy_r_r350);
    cpy_r_r354 = cpy_r_r353 >= 0;
    if (unlikely(!cpy_r_r354)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r355 = (PyObject *)CPyType_main___NonDecodedEvent;
    cpy_r_r356 = CPyStatic_main___globals;
    cpy_r_r357 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Union' */
    cpy_r_r358 = CPyDict_GetItem(cpy_r_r356, cpy_r_r357);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r359 = CPyStatic_main___globals;
    cpy_r_r360 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'DecodedEvent' */
    cpy_r_r361 = CPyDict_GetItem(cpy_r_r359, cpy_r_r360);
    if (unlikely(cpy_r_r361 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL233;
    }
    cpy_r_r362 = CPyStatic_main___globals;
    cpy_r_r363 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'NonDecodedEvent' */
    cpy_r_r364 = CPyDict_GetItem(cpy_r_r362, cpy_r_r363);
    if (unlikely(cpy_r_r364 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL234;
    }
    cpy_r_r365.f0 = cpy_r_r361;
    cpy_r_r365.f1 = cpy_r_r364;
    cpy_r_r366 = PyTuple_New(2);
    if (unlikely(cpy_r_r366 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp22 = cpy_r_r365.f0;
    PyTuple_SET_ITEM(cpy_r_r366, 0, __tmp22);
    PyObject *__tmp23 = cpy_r_r365.f1;
    PyTuple_SET_ITEM(cpy_r_r366, 1, __tmp23);
    cpy_r_r367 = PyObject_GetItem(cpy_r_r358, cpy_r_r366);
    CPy_DECREF(cpy_r_r358);
    CPy_DECREF(cpy_r_r366);
    if (unlikely(cpy_r_r367 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r368 = CPyStatic_main___globals;
    cpy_r_r369 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Event' */
    cpy_r_r370 = CPyDict_SetItem(cpy_r_r368, cpy_r_r369, cpy_r_r367);
    CPy_DECREF(cpy_r_r367);
    cpy_r_r371 = cpy_r_r370 >= 0;
    if (unlikely(!cpy_r_r371)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r372 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'logIndex' */
    cpy_r_r373 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'blockNumber' */
    cpy_r_r374 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'transactionIndex' */
    CPy_INCREF(cpy_r_r372);
    CPy_INCREF(cpy_r_r373);
    CPy_INCREF(cpy_r_r374);
    cpy_r_r375.f0 = cpy_r_r372;
    cpy_r_r375.f1 = cpy_r_r373;
    cpy_r_r375.f2 = cpy_r_r374;
    CPyStatic_main___ADD_LOG_ENTRIES = cpy_r_r375;
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f0);
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f1);
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f2);
    cpy_r_r376 = CPyStatic_main___globals;
    cpy_r_r377 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ADD_LOG_ENTRIES' */
    cpy_r_r378 = PyTuple_New(3);
    if (unlikely(cpy_r_r378 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp24 = cpy_r_r375.f0;
    PyTuple_SET_ITEM(cpy_r_r378, 0, __tmp24);
    PyObject *__tmp25 = cpy_r_r375.f1;
    PyTuple_SET_ITEM(cpy_r_r378, 1, __tmp25);
    PyObject *__tmp26 = cpy_r_r375.f2;
    PyTuple_SET_ITEM(cpy_r_r378, 2, __tmp26);
    cpy_r_r379 = CPyDict_SetItem(cpy_r_r376, cpy_r_r377, cpy_r_r378);
    CPy_DECREF(cpy_r_r378);
    cpy_r_r380 = cpy_r_r379 >= 0;
    if (unlikely(!cpy_r_r380)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r381 = CPyModule_faster_hexbytes;
    cpy_r_r382 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r383 = CPyObject_GetAttr(cpy_r_r381, cpy_r_r382);
    if (unlikely(cpy_r_r383 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyStatic_main___HexBytes = cpy_r_r383;
    CPy_INCREF(CPyStatic_main___HexBytes);
    cpy_r_r384 = CPyStatic_main___globals;
    cpy_r_r385 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r386 = CPyDict_SetItem(cpy_r_r384, cpy_r_r385, cpy_r_r383);
    CPy_DECREF(cpy_r_r383);
    cpy_r_r387 = cpy_r_r386 >= 0;
    if (unlikely(!cpy_r_r387)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r388 = CPyModule_cchecksum;
    cpy_r_r389 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'to_checksum_address' */
    cpy_r_r390 = CPyObject_GetAttr(cpy_r_r388, cpy_r_r389);
    if (unlikely(cpy_r_r390 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyStatic_main___to_checksum_address = cpy_r_r390;
    CPy_INCREF(CPyStatic_main___to_checksum_address);
    cpy_r_r391 = CPyStatic_main___globals;
    cpy_r_r392 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'to_checksum_address' */
    cpy_r_r393 = CPyDict_SetItem(cpy_r_r391, cpy_r_r392, cpy_r_r390);
    CPy_DECREF(cpy_r_r390);
    cpy_r_r394 = cpy_r_r393 >= 0;
    if (unlikely(!cpy_r_r394)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r395 = CPyStatic_main___globals;
    cpy_r_r396 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'auto' */
    cpy_r_r397 = CPyDict_GetItem(cpy_r_r395, cpy_r_r396);
    if (unlikely(cpy_r_r397 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r398 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'keccak' */
    cpy_r_r399 = CPyObject_GetAttr(cpy_r_r397, cpy_r_r398);
    CPy_DECREF(cpy_r_r397);
    if (unlikely(cpy_r_r399 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyStatic_main___keccak = cpy_r_r399;
    CPy_INCREF(CPyStatic_main___keccak);
    cpy_r_r400 = CPyStatic_main___globals;
    cpy_r_r401 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'keccak' */
    cpy_r_r402 = CPyDict_SetItem(cpy_r_r400, cpy_r_r401, cpy_r_r399);
    CPy_DECREF(cpy_r_r399);
    cpy_r_r403 = cpy_r_r402 >= 0;
    if (unlikely(!cpy_r_r403)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r404 = CPyModule_functools;
    cpy_r_r405 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'lru_cache' */
    cpy_r_r406 = CPyObject_GetAttr(cpy_r_r404, cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyStatic_main___lru_cache = cpy_r_r406;
    CPy_INCREF(CPyStatic_main___lru_cache);
    cpy_r_r407 = CPyStatic_main___globals;
    cpy_r_r408 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'lru_cache' */
    cpy_r_r409 = CPyDict_SetItem(cpy_r_r407, cpy_r_r408, cpy_r_r406);
    CPy_DECREF(cpy_r_r406);
    cpy_r_r410 = cpy_r_r409 >= 0;
    if (unlikely(!cpy_r_r410)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r411 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'tuple(\\[(\\d*)\\])?' */
    cpy_r_r412 = CPyModule_re;
    cpy_r_r413 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'compile' */
    cpy_r_r414 = CPyObject_GetAttr(cpy_r_r412, cpy_r_r413);
    if (unlikely(cpy_r_r414 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    PyObject *cpy_r_r415[1] = {cpy_r_r411};
    cpy_r_r416 = (PyObject **)&cpy_r_r415;
    cpy_r_r417 = PyObject_Vectorcall(cpy_r_r414, cpy_r_r416, 1, 0);
    CPy_DECREF(cpy_r_r414);
    if (unlikely(cpy_r_r417 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r418 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'match' */
    cpy_r_r419 = CPyObject_GetAttr(cpy_r_r417, cpy_r_r418);
    CPy_DECREF(cpy_r_r417);
    if (unlikely(cpy_r_r419 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyStatic_main____tuple_match = cpy_r_r419;
    CPy_INCREF(CPyStatic_main____tuple_match);
    cpy_r_r420 = CPyStatic_main___globals;
    cpy_r_r421 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_tuple_match' */
    cpy_r_r422 = CPyDict_SetItem(cpy_r_r420, cpy_r_r421, cpy_r_r419);
    CPy_DECREF(cpy_r_r419);
    cpy_r_r423 = cpy_r_r422 >= 0;
    if (unlikely(!cpy_r_r423)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r424 = CPyModule_typing;
    cpy_r_r425 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r426 = cpy_r_r424 != cpy_r_r425;
    if (cpy_r_r426) goto CPyL153;
    cpy_r_r427 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r428 = PyImport_Import(cpy_r_r427);
    if (unlikely(cpy_r_r428 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_typing = cpy_r_r428;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r428);
CPyL153: ;
    cpy_r_r429 = PyImport_GetModuleDict();
    cpy_r_r430 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r431 = CPyDict_GetItem(cpy_r_r429, cpy_r_r430);
    if (unlikely(cpy_r_r431 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r432 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDict' */
    cpy_r_r433 = CPyObject_GetAttr(cpy_r_r431, cpy_r_r432);
    CPy_DECREF(cpy_r_r431);
    if (unlikely(cpy_r_r433 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r434 = PyTuple_Pack(1, cpy_r_r433);
    CPy_DECREF(cpy_r_r433);
    if (unlikely(cpy_r_r434 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r435 = CPyModule_typing;
    cpy_r_r436 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r437 = cpy_r_r435 != cpy_r_r436;
    if (cpy_r_r437) goto CPyL159;
    cpy_r_r438 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r439 = PyImport_Import(cpy_r_r438);
    if (unlikely(cpy_r_r439 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL235;
    }
    CPyModule_typing = cpy_r_r439;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r439);
CPyL159: ;
    cpy_r_r440 = PyImport_GetModuleDict();
    cpy_r_r441 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r442 = CPyDict_GetItem(cpy_r_r440, cpy_r_r441);
    if (unlikely(cpy_r_r442 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL235;
    }
    cpy_r_r443 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDictMeta' */
    cpy_r_r444 = CPyObject_GetAttr(cpy_r_r442, cpy_r_r443);
    CPy_DECREF(cpy_r_r442);
    if (unlikely(cpy_r_r444 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL235;
    }
    cpy_r_r445 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r446 = PyObject_HasAttr(cpy_r_r444, cpy_r_r445);
    if (!cpy_r_r446) goto CPyL166;
    cpy_r_r447 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TopicMapData' */
    cpy_r_r448 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r449 = CPyObject_GetAttr(cpy_r_r444, cpy_r_r448);
    if (unlikely(cpy_r_r449 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL236;
    }
    PyObject *cpy_r_r450[2] = {cpy_r_r447, cpy_r_r434};
    cpy_r_r451 = (PyObject **)&cpy_r_r450;
    cpy_r_r452 = PyObject_Vectorcall(cpy_r_r449, cpy_r_r451, 2, 0);
    CPy_DECREF(cpy_r_r449);
    if (unlikely(cpy_r_r452 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL236;
    }
    if (likely(PyDict_Check(cpy_r_r452)))
        cpy_r_r453 = cpy_r_r452;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 128, CPyStatic_main___globals, "dict", cpy_r_r452);
        goto CPyL236;
    }
    cpy_r_r454 = cpy_r_r453;
    goto CPyL168;
CPyL166: ;
    cpy_r_r455 = PyDict_New();
    if (unlikely(cpy_r_r455 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL236;
    }
    cpy_r_r454 = cpy_r_r455;
CPyL168: ;
    cpy_r_r456 = PyDict_New();
    if (unlikely(cpy_r_r456 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL237;
    }
    cpy_r_r457 = (PyObject *)&PyUnicode_Type;
    cpy_r_r458 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r459 = PyDict_SetItem(cpy_r_r456, cpy_r_r458, cpy_r_r457);
    cpy_r_r460 = cpy_r_r459 >= 0;
    if (unlikely(!cpy_r_r460)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL238;
    }
    cpy_r_r461 = (PyObject *)&PyList_Type;
    cpy_r_r462 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'inputs' */
    cpy_r_r463 = PyDict_SetItem(cpy_r_r456, cpy_r_r462, cpy_r_r461);
    cpy_r_r464 = cpy_r_r463 >= 0;
    if (unlikely(!cpy_r_r464)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL238;
    }
    cpy_r_r465 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TopicMapData' */
    cpy_r_r466 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r467 = CPyDict_SetItem(cpy_r_r454, cpy_r_r466, cpy_r_r456);
    CPy_DECREF(cpy_r_r456);
    cpy_r_r468 = cpy_r_r467 >= 0;
    if (unlikely(!cpy_r_r468)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL237;
    }
    cpy_r_r469 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r470 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r471 = CPyDict_SetItem(cpy_r_r454, cpy_r_r470, cpy_r_r469);
    cpy_r_r472 = cpy_r_r471 >= 0;
    if (unlikely(!cpy_r_r472)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL237;
    }
    cpy_r_r473 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r474 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r475 = CPyDict_SetItem(cpy_r_r454, cpy_r_r474, cpy_r_r473);
    cpy_r_r476 = cpy_r_r475 >= 0;
    if (unlikely(!cpy_r_r476)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL237;
    }
    PyObject *cpy_r_r477[3] = {cpy_r_r465, cpy_r_r434, cpy_r_r454};
    cpy_r_r478 = (PyObject **)&cpy_r_r477;
    cpy_r_r479 = PyObject_Vectorcall(cpy_r_r444, cpy_r_r478, 3, 0);
    CPy_DECREF(cpy_r_r444);
    if (unlikely(cpy_r_r479 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL239;
    }
    CPy_DECREF(cpy_r_r434);
    CPy_DECREF(cpy_r_r454);
    CPyType_main___TopicMapData = (PyTypeObject *)cpy_r_r479;
    CPy_INCREF(CPyType_main___TopicMapData);
    cpy_r_r480 = CPyStatic_main___globals;
    cpy_r_r481 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TopicMapData' */
    cpy_r_r482 = PyDict_SetItem(cpy_r_r480, cpy_r_r481, cpy_r_r479);
    CPy_DECREF(cpy_r_r479);
    cpy_r_r483 = cpy_r_r482 >= 0;
    if (unlikely(!cpy_r_r483)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r484 = (PyObject *)CPyType_main___TopicMapData;
    cpy_r_r485 = CPyStatic_main___globals;
    cpy_r_r486 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Mapping' */
    cpy_r_r487 = CPyDict_GetItem(cpy_r_r485, cpy_r_r486);
    if (unlikely(cpy_r_r487 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r488 = CPyStatic_main___globals;
    cpy_r_r489 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexStr' */
    cpy_r_r490 = CPyDict_GetItem(cpy_r_r488, cpy_r_r489);
    if (unlikely(cpy_r_r490 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL240;
    }
    cpy_r_r491 = CPyStatic_main___globals;
    cpy_r_r492 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TopicMapData' */
    cpy_r_r493 = CPyDict_GetItem(cpy_r_r491, cpy_r_r492);
    if (unlikely(cpy_r_r493 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL241;
    }
    cpy_r_r494.f0 = cpy_r_r490;
    cpy_r_r494.f1 = cpy_r_r493;
    cpy_r_r495 = PyTuple_New(2);
    if (unlikely(cpy_r_r495 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp27 = cpy_r_r494.f0;
    PyTuple_SET_ITEM(cpy_r_r495, 0, __tmp27);
    PyObject *__tmp28 = cpy_r_r494.f1;
    PyTuple_SET_ITEM(cpy_r_r495, 1, __tmp28);
    cpy_r_r496 = PyObject_GetItem(cpy_r_r487, cpy_r_r495);
    CPy_DECREF(cpy_r_r487);
    CPy_DECREF(cpy_r_r495);
    if (unlikely(cpy_r_r496 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r497 = CPyStatic_main___globals;
    cpy_r_r498 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TopicMap' */
    cpy_r_r499 = CPyDict_SetItem(cpy_r_r497, cpy_r_r498, cpy_r_r496);
    CPy_DECREF(cpy_r_r496);
    cpy_r_r500 = cpy_r_r499 >= 0;
    if (unlikely(!cpy_r_r500)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r501 = CPyModule_typing;
    cpy_r_r502 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r503 = cpy_r_r501 != cpy_r_r502;
    if (cpy_r_r503) goto CPyL184;
    cpy_r_r504 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r505 = PyImport_Import(cpy_r_r504);
    if (unlikely(cpy_r_r505 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    CPyModule_typing = cpy_r_r505;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r505);
CPyL184: ;
    cpy_r_r506 = PyImport_GetModuleDict();
    cpy_r_r507 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r508 = CPyDict_GetItem(cpy_r_r506, cpy_r_r507);
    if (unlikely(cpy_r_r508 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r509 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDict' */
    cpy_r_r510 = CPyObject_GetAttr(cpy_r_r508, cpy_r_r509);
    CPy_DECREF(cpy_r_r508);
    if (unlikely(cpy_r_r510 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r511 = PyTuple_Pack(1, cpy_r_r510);
    CPy_DECREF(cpy_r_r510);
    if (unlikely(cpy_r_r511 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r512 = CPyModule_typing;
    cpy_r_r513 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r514 = cpy_r_r512 != cpy_r_r513;
    if (cpy_r_r514) goto CPyL190;
    cpy_r_r515 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r516 = PyImport_Import(cpy_r_r515);
    if (unlikely(cpy_r_r516 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL242;
    }
    CPyModule_typing = cpy_r_r516;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r516);
CPyL190: ;
    cpy_r_r517 = PyImport_GetModuleDict();
    cpy_r_r518 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r519 = CPyDict_GetItem(cpy_r_r517, cpy_r_r518);
    if (unlikely(cpy_r_r519 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL242;
    }
    cpy_r_r520 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TypedDictMeta' */
    cpy_r_r521 = CPyObject_GetAttr(cpy_r_r519, cpy_r_r520);
    CPy_DECREF(cpy_r_r519);
    if (unlikely(cpy_r_r521 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL242;
    }
    cpy_r_r522 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r523 = PyObject_HasAttr(cpy_r_r521, cpy_r_r522);
    if (!cpy_r_r523) goto CPyL197;
    cpy_r_r524 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TraceStep' */
    cpy_r_r525 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r526 = CPyObject_GetAttr(cpy_r_r521, cpy_r_r525);
    if (unlikely(cpy_r_r526 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL243;
    }
    PyObject *cpy_r_r527[2] = {cpy_r_r524, cpy_r_r511};
    cpy_r_r528 = (PyObject **)&cpy_r_r527;
    cpy_r_r529 = PyObject_Vectorcall(cpy_r_r526, cpy_r_r528, 2, 0);
    CPy_DECREF(cpy_r_r526);
    if (unlikely(cpy_r_r529 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL243;
    }
    if (likely(PyDict_Check(cpy_r_r529)))
        cpy_r_r530 = cpy_r_r529;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 325, CPyStatic_main___globals, "dict", cpy_r_r529);
        goto CPyL243;
    }
    cpy_r_r531 = cpy_r_r530;
    goto CPyL199;
CPyL197: ;
    cpy_r_r532 = PyDict_New();
    if (unlikely(cpy_r_r532 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL243;
    }
    cpy_r_r531 = cpy_r_r532;
CPyL199: ;
    cpy_r_r533 = PyDict_New();
    if (unlikely(cpy_r_r533 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL244;
    }
    cpy_r_r534 = (PyObject *)&PyLong_Type;
    cpy_r_r535 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'depth' */
    cpy_r_r536 = PyDict_SetItem(cpy_r_r533, cpy_r_r535, cpy_r_r534);
    cpy_r_r537 = cpy_r_r536 >= 0;
    if (unlikely(!cpy_r_r537)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r538 = (PyObject *)&PyUnicode_Type;
    cpy_r_r539 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'op' */
    cpy_r_r540 = PyDict_SetItem(cpy_r_r533, cpy_r_r539, cpy_r_r538);
    cpy_r_r541 = cpy_r_r540 >= 0;
    if (unlikely(!cpy_r_r541)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r542 = (PyObject *)&PyList_Type;
    cpy_r_r543 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'stack' */
    cpy_r_r544 = PyDict_SetItem(cpy_r_r533, cpy_r_r543, cpy_r_r542);
    cpy_r_r545 = cpy_r_r544 >= 0;
    if (unlikely(!cpy_r_r545)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r546 = (PyObject *)&PyList_Type;
    cpy_r_r547 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'memory' */
    cpy_r_r548 = PyDict_SetItem(cpy_r_r533, cpy_r_r547, cpy_r_r546);
    cpy_r_r549 = cpy_r_r548 >= 0;
    if (unlikely(!cpy_r_r549)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL245;
    }
    cpy_r_r550 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TraceStep' */
    cpy_r_r551 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r552 = CPyDict_SetItem(cpy_r_r531, cpy_r_r551, cpy_r_r533);
    CPy_DECREF(cpy_r_r533);
    cpy_r_r553 = cpy_r_r552 >= 0;
    if (unlikely(!cpy_r_r553)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL244;
    }
    cpy_r_r554 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r555 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r556 = CPyDict_SetItem(cpy_r_r531, cpy_r_r555, cpy_r_r554);
    cpy_r_r557 = cpy_r_r556 >= 0;
    if (unlikely(!cpy_r_r557)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL244;
    }
    cpy_r_r558 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_event.main' */
    cpy_r_r559 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r560 = CPyDict_SetItem(cpy_r_r531, cpy_r_r559, cpy_r_r558);
    cpy_r_r561 = cpy_r_r560 >= 0;
    if (unlikely(!cpy_r_r561)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL244;
    }
    PyObject *cpy_r_r562[3] = {cpy_r_r550, cpy_r_r511, cpy_r_r531};
    cpy_r_r563 = (PyObject **)&cpy_r_r562;
    cpy_r_r564 = PyObject_Vectorcall(cpy_r_r521, cpy_r_r563, 3, 0);
    CPy_DECREF(cpy_r_r521);
    if (unlikely(cpy_r_r564 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL246;
    }
    CPy_DECREF(cpy_r_r511);
    CPy_DECREF(cpy_r_r531);
    CPyType_main____TraceStep = (PyTypeObject *)cpy_r_r564;
    CPy_INCREF(CPyType_main____TraceStep);
    cpy_r_r565 = CPyStatic_main___globals;
    cpy_r_r566 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_TraceStep' */
    cpy_r_r567 = PyDict_SetItem(cpy_r_r565, cpy_r_r566, cpy_r_r564);
    CPy_DECREF(cpy_r_r564);
    cpy_r_r568 = cpy_r_r567 >= 0;
    if (unlikely(!cpy_r_r568)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r569 = (PyObject *)CPyType_main____TraceStep;
    return 1;
CPyL210: ;
    cpy_r_r570 = 2;
    return cpy_r_r570;
CPyL211: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL210;
CPyL212: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL210;
CPyL213: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL210;
CPyL214: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL210;
CPyL215: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL210;
CPyL216: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r135);
    goto CPyL210;
CPyL217: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r145);
    goto CPyL210;
CPyL218: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r147);
    goto CPyL210;
CPyL219: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r145);
    goto CPyL210;
CPyL220: ;
    CPy_DecRef(cpy_r_r184);
    goto CPyL210;
CPyL221: ;
    CPy_DecRef(cpy_r_r206);
    goto CPyL210;
CPyL222: ;
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r216);
    goto CPyL210;
CPyL223: ;
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r226);
    goto CPyL210;
CPyL224: ;
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r226);
    CPy_DecRef(cpy_r_r228);
    goto CPyL210;
CPyL225: ;
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r226);
    goto CPyL210;
CPyL226: ;
    CPy_DecRef(cpy_r_r261);
    goto CPyL210;
CPyL227: ;
    CPy_DecRef(cpy_r_r283);
    goto CPyL210;
CPyL228: ;
    CPy_DecRef(cpy_r_r283);
    CPy_DecRef(cpy_r_r293);
    goto CPyL210;
CPyL229: ;
    CPy_DecRef(cpy_r_r283);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r303);
    goto CPyL210;
CPyL230: ;
    CPy_DecRef(cpy_r_r283);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r303);
    CPy_DecRef(cpy_r_r305);
    goto CPyL210;
CPyL231: ;
    CPy_DecRef(cpy_r_r283);
    CPy_DecRef(cpy_r_r303);
    goto CPyL210;
CPyL232: ;
    CPy_DecRef(cpy_r_r344);
    goto CPyL210;
CPyL233: ;
    CPy_DecRef(cpy_r_r358);
    goto CPyL210;
CPyL234: ;
    CPy_DecRef(cpy_r_r358);
    CPy_DecRef(cpy_r_r361);
    goto CPyL210;
CPyL235: ;
    CPy_DecRef(cpy_r_r434);
    goto CPyL210;
CPyL236: ;
    CPy_DecRef(cpy_r_r434);
    CPy_DecRef(cpy_r_r444);
    goto CPyL210;
CPyL237: ;
    CPy_DecRef(cpy_r_r434);
    CPy_DecRef(cpy_r_r444);
    CPy_DecRef(cpy_r_r454);
    goto CPyL210;
CPyL238: ;
    CPy_DecRef(cpy_r_r434);
    CPy_DecRef(cpy_r_r444);
    CPy_DecRef(cpy_r_r454);
    CPy_DecRef(cpy_r_r456);
    goto CPyL210;
CPyL239: ;
    CPy_DecRef(cpy_r_r434);
    CPy_DecRef(cpy_r_r454);
    goto CPyL210;
CPyL240: ;
    CPy_DecRef(cpy_r_r487);
    goto CPyL210;
CPyL241: ;
    CPy_DecRef(cpy_r_r487);
    CPy_DecRef(cpy_r_r490);
    goto CPyL210;
CPyL242: ;
    CPy_DecRef(cpy_r_r511);
    goto CPyL210;
CPyL243: ;
    CPy_DecRef(cpy_r_r511);
    CPy_DecRef(cpy_r_r521);
    goto CPyL210;
CPyL244: ;
    CPy_DecRef(cpy_r_r511);
    CPy_DecRef(cpy_r_r521);
    CPy_DecRef(cpy_r_r531);
    goto CPyL210;
CPyL245: ;
    CPy_DecRef(cpy_r_r511);
    CPy_DecRef(cpy_r_r521);
    CPy_DecRef(cpy_r_r531);
    CPy_DecRef(cpy_r_r533);
    goto CPyL210;
CPyL246: ;
    CPy_DecRef(cpy_r_r511);
    CPy_DecRef(cpy_r_r531);
    goto CPyL210;
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
    CPyModule_faster_hexbytes = Py_None;
    CPyModule_eth_hash = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_eth_abi = Py_None;
    CPyModule_faster_eth_abi___exceptions = Py_None;
    CPyModule_typing_extensions = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[DIFFCHECK_PLACEHOLDER];
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
    "\t\bCallable\004Dict\005Final\004List\aLiteral\aMapping\bOptional\bSequence\tTypedDict",
    "\b\005Union\005final\boverload\006typing\tcchecksum\017faster_hexbytes\004auto\beth_hash",
    "\005\fABIComponent\023ABIComponentIndexed\nABIElement\bABIEvent\nAnyAddress",
    "\005\017ChecksumAddress\nHexAddress\006HexStr\neth_typing\016faster_eth_abi",
    "\004\031faster_eth_abi.exceptions\vNotRequired\021typing_extensions\tException",
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
    "\004-3\000-1\0001\0002",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    13, 9, 4, 5, 6, 7, 8, 9, 10, 11, 12, 3, 66, 66, 66, 3, 67, 67, 67,
    2, 135, 136, 13, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
    3, 84, 84, 84, 3, 85, 85, 85, 2, 139, 140, 1, 86, 8, 88, 89, 90, 91,
    92, 93, 94, 95, 1, 56, 4, 57, 61, 64, 59, 1, 99
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_eth_event__internal = NULL;
CPyModule *CPyModule_eth_event;
PyObject *CPyStatic_eth_event___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_eth_event___main__internal = NULL;
CPyModule *CPyModule_eth_event___main;
PyObject *CPyStatic_main___globals;
CPyModule *CPyModule_functools;
CPyModule *CPyModule_re;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_cchecksum;
CPyModule *CPyModule_faster_hexbytes;
CPyModule *CPyModule_eth_hash;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_faster_eth_abi;
CPyModule *CPyModule_faster_eth_abi___exceptions;
CPyModule *CPyModule_typing_extensions;
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

static int exec_7eaee132373d5bf56d84__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
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
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_7eaee132373d5bf56d84__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "7eaee132373d5bf56d84__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_7eaee132373d5bf56d84__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_7eaee132373d5bf56d84__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_7eaee132373d5bf56d84__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
