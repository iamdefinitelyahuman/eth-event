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
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
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
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    cpy_r_r0 = (PyObject *)&PyDict_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_event_abi, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 94, CPyStatic_main___globals);
        goto CPyL27;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL6;
    cpy_r_r4 = CPyStatics[14]; /* "Must be a dictionary of the specific event's ABI" */
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 95, CPyStatic_main___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r8[1] = {cpy_r_r4};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 95, CPyStatic_main___globals);
        goto CPyL27;
    }
    CPy_Raise(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 95, CPyStatic_main___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r11 = CPyStatics[16]; /* 'anonymous' */
    cpy_r_r12 = CPyDict_GetWithNone(cpy_r_event_abi, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 96, CPyStatic_main___globals);
        goto CPyL27;
    }
    cpy_r_r13 = PyObject_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 96, CPyStatic_main___globals);
        goto CPyL27;
    }
    cpy_r_r15 = cpy_r_r13;
    if (!cpy_r_r15) goto CPyL13;
    cpy_r_r16 = CPyStatics[17]; /* 'Anonymous events do not have a topic' */
    cpy_r_r17 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r18[1] = {cpy_r_r16};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 97, CPyStatic_main___globals);
        goto CPyL27;
    }
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_main___ABIError))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 97, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r20);
        goto CPyL27;
    }
    CPy_Raise(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 97, CPyStatic_main___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r22 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_event_abi, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 99, CPyStatic_main___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_log_topic", 99, CPyStatic_main___globals, "list", cpy_r_r23);
        goto CPyL27;
    }
    cpy_r_r25 = CPyDef_main____params(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 99, CPyStatic_main___globals);
        goto CPyL27;
    }
    cpy_r_r26 = CPyStatics[19]; /* 'name' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_event_abi, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 100, CPyStatic_main___globals);
        goto CPyL28;
    }
    cpy_r_r28 = PyObject_Str(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 100, CPyStatic_main___globals);
        goto CPyL28;
    }
    cpy_r_r29 = CPyStatics[20]; /* '(' */
    cpy_r_r30 = CPyStatics[21]; /* ',' */
    cpy_r_r31 = PyUnicode_Join(cpy_r_r30, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 100, CPyStatic_main___globals);
        goto CPyL29;
    }
    cpy_r_r32 = CPyStatics[22]; /* ')' */
    cpy_r_r33 = CPyStr_Build(4, cpy_r_r28, cpy_r_r29, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 100, CPyStatic_main___globals);
        goto CPyL27;
    }
    cpy_r_r34 = PyUnicode_AsUTF8String(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 100, CPyStatic_main___globals);
        goto CPyL27;
    }
    cpy_r_r35 = CPyStatic_main___keccak;
    if (unlikely(cpy_r_r35 == NULL)) {
        goto CPyL30;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"keccak\" was not set");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 102, CPyStatic_main___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL24: ;
    PyObject *cpy_r_r37[1] = {cpy_r_r34};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r35, cpy_r_r38, 1, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 102, CPyStatic_main___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r34);
    cpy_r_r40 = CPyDef_main____0xstring(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_log_topic", 102, CPyStatic_main___globals);
        goto CPyL27;
    }
    return cpy_r_r40;
CPyL27: ;
    cpy_r_r41 = NULL;
    return cpy_r_r41;
CPyL28: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL22;
CPyL31: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL27;
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
    CPy_AddTraceback("eth_event/main.py", "get_log_topic", 80, CPyStatic_main___globals);
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
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
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
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    tuple_T2OO cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 142, CPyStatic_main___globals);
        goto CPyL22;
    }
    cpy_r_r1 = 0;
CPyL3: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_abi)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL21;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r1 >> 1;
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_abi)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r6 * 8;
    cpy_r_r10 = cpy_r_r8 + cpy_r_r9;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyStatics[23]; /* 'type' */
    cpy_r_r13 = PyObject_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 145, CPyStatic_main___globals);
        goto CPyL34;
    }
    cpy_r_r14 = CPyStatics[24]; /* 'event' */
    cpy_r_r15 = PyObject_RichCompare(cpy_r_r13, cpy_r_r14, 2);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 145, CPyStatic_main___globals);
        goto CPyL34;
    }
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 145, CPyStatic_main___globals);
        goto CPyL35;
    }
    cpy_r_r18 = cpy_r_r16;
    if (cpy_r_r18) goto CPyL36;
    cpy_r_r19 = cpy_r_r15;
    goto CPyL12;
CPyL9: ;
    cpy_r_r20 = CPyStatics[16]; /* 'anonymous' */
    cpy_r_r21 = CPyStatics[25]; /* 'get' */
    PyObject *cpy_r_r22[2] = {cpy_r_r11, cpy_r_r20};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r23, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 145, CPyStatic_main___globals);
        goto CPyL34;
    }
    cpy_r_r25 = PyObject_Not(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 145, CPyStatic_main___globals);
        goto CPyL34;
    }
    cpy_r_r27 = cpy_r_r25;
    cpy_r_r28 = cpy_r_r27 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r19 = cpy_r_r28;
CPyL12: ;
    cpy_r_r29 = PyObject_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", -1, CPyStatic_main___globals);
        goto CPyL34;
    }
    cpy_r_r31 = cpy_r_r29;
    if (!cpy_r_r31) goto CPyL37;
    CPy_INCREF(cpy_r_r11);
    if (likely(PyDict_Check(cpy_r_r11)))
        cpy_r_r32 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 143, CPyStatic_main___globals, "dict", cpy_r_r11);
        goto CPyL34;
    }
    cpy_r_r33 = CPyDef_main___get_log_topic(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 143, CPyStatic_main___globals);
        goto CPyL34;
    }
    cpy_r_r34 = CPyStatics[19]; /* 'name' */
    cpy_r_r35 = CPyStatics[19]; /* 'name' */
    cpy_r_r36 = PyObject_GetItem(cpy_r_r11, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 143, CPyStatic_main___globals);
        goto CPyL38;
    }
    cpy_r_r37 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r38 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r39 = PyObject_GetItem(cpy_r_r11, cpy_r_r38);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 143, CPyStatic_main___globals);
        goto CPyL39;
    }
    cpy_r_r40 = CPyDict_Build(2, cpy_r_r34, cpy_r_r36, cpy_r_r37, cpy_r_r39);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 143, CPyStatic_main___globals);
        goto CPyL40;
    }
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r0, cpy_r_r33, cpy_r_r40);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 142, CPyStatic_main___globals);
        goto CPyL41;
    }
CPyL20: ;
    cpy_r_r43 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r43;
    goto CPyL3;
CPyL21: ;
    return cpy_r_r0;
CPyL22: ;
    cpy_r_r44 = CPy_CatchError();
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[26]; /* 'KeyError' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 147, CPyStatic_main___globals);
        goto CPyL31;
    }
    cpy_r_r48 = CPyModule_builtins;
    cpy_r_r49 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 147, CPyStatic_main___globals);
        goto CPyL42;
    }
    cpy_r_r51.f0 = cpy_r_r47;
    cpy_r_r51.f1 = cpy_r_r50;
    cpy_r_r52 = PyTuple_New(2);
    if (unlikely(cpy_r_r52 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r51.f0;
    PyTuple_SET_ITEM(cpy_r_r52, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r51.f1;
    PyTuple_SET_ITEM(cpy_r_r52, 1, __tmp2);
    cpy_r_r53 = CPy_ExceptionMatches(cpy_r_r52);
    CPy_DecRef(cpy_r_r52);
    if (!cpy_r_r53) goto CPyL29;
    cpy_r_r54 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r54);
    cpy_r_r55 = CPyStatics[27]; /* 'Invalid ABI' */
    cpy_r_r56 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r57[1] = {cpy_r_r55};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = _PyObject_Vectorcall(cpy_r_r56, cpy_r_r58, 1, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 148, CPyStatic_main___globals);
        goto CPyL31;
    }
    if (likely(Py_TYPE(cpy_r_r59) == CPyType_main___ABIError))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "get_topic_map", 148, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r59);
        goto CPyL31;
    }
    CPy_Raise(cpy_r_r60);
    CPy_DecRef(cpy_r_r60);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "get_topic_map", 148, CPyStatic_main___globals);
        goto CPyL31;
    } else
        goto CPyL43;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL31;
    } else
        goto CPyL44;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    CPy_RestoreExcInfo(cpy_r_r44);
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    cpy_r_r61 = CPy_KeepPropagating();
    if (!cpy_r_r61) goto CPyL33;
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r62 = NULL;
    return cpy_r_r62;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    goto CPyL22;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r15);
    goto CPyL22;
CPyL36: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL9;
CPyL37: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL20;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r33);
    goto CPyL22;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    goto CPyL22;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r33);
    goto CPyL22;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL42: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL31;
CPyL43: ;
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    goto CPyL28;
CPyL44: ;
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    goto CPyL30;
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
    CPy_AddTraceback("eth_event/main.py", "get_topic_map", 115, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 154, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r___checksum_func = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = CPyStatics[28]; /* 'topics' */
    cpy_r_r3 = PyObject_GetItem(cpy_r_log, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 195, CPyStatic_main___globals);
        goto CPyL54;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 195, CPyStatic_main___globals);
        goto CPyL55;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) {
        goto CPyL12;
    } else
        goto CPyL56;
CPyL8: ;
    cpy_r_r7 = CPyStatics[29]; /* 'Cannot decode an anonymous event' */
    cpy_r_r8 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r9[1] = {cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 197, CPyStatic_main___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_main___EventError))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 197, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r11);
        goto CPyL52;
    }
    CPy_Raise(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 197, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r13 = PyObject_GetIter(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 199, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 199, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r16 = PySequence_List(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 199, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_log", 199, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_data_topics = cpy_r_r16;
    cpy_r_r22 = CPyDef_main____0xstring(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 200, CPyStatic_main___globals);
        goto CPyL60;
    }
    cpy_r_r23 = PySequence_Contains(cpy_r_topic_map, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 201, CPyStatic_main___globals);
        goto CPyL61;
    }
    cpy_r_r25 = cpy_r_r23;
    cpy_r_r26 = cpy_r_r25 ^ 1;
    if (cpy_r_r26) {
        goto CPyL62;
    } else
        goto CPyL27;
CPyL23: ;
    cpy_r_r27 = CPyStatics[30]; /* 'Event topic is not present in given ABI' */
    cpy_r_r28 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r29[1] = {cpy_r_r27};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 202, CPyStatic_main___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_main___UnknownEvent))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 202, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r31);
        goto CPyL52;
    }
    CPy_Raise(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 202, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r33 = PyObject_GetItem(cpy_r_topic_map, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 204, CPyStatic_main___globals);
        goto CPyL60;
    }
    if (likely(PyDict_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 204, CPyStatic_main___globals, "dict", cpy_r_r33);
        goto CPyL60;
    }
    cpy_r_r35 = CPyStatics[19]; /* 'name' */
    cpy_r_r36 = CPyStatics[19]; /* 'name' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 208, CPyStatic_main___globals);
        goto CPyL63;
    }
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 208, CPyStatic_main___globals, "str", cpy_r_r37);
        goto CPyL63;
    }
    cpy_r_r39 = CPyStatics[31]; /* 'data' */
    cpy_r_r40 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r34, cpy_r_r40);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 209, CPyStatic_main___globals);
        goto CPyL64;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 209, CPyStatic_main___globals, "list", cpy_r_r41);
        goto CPyL64;
    }
    cpy_r_r43 = CPyStatics[31]; /* 'data' */
    cpy_r_r44 = PyObject_GetItem(cpy_r_log, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 209, CPyStatic_main___globals);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_data_topics)))
        cpy_r_r45 = cpy_r_data_topics;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 209, CPyStatic_main___globals, "list", cpy_r_data_topics);
        goto CPyL66;
    }
    cpy_r_r46 = CPyDef_main____decode(cpy_r_r42, cpy_r_r45, cpy_r_r44);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 209, CPyStatic_main___globals);
        goto CPyL67;
    }
    cpy_r_r47 = CPyStatics[32]; /* 'decoded' */
    cpy_r_r48 = CPyStatics[33]; /* 'address' */
    cpy_r_r49 = CPyStatics[33]; /* 'address' */
    cpy_r_r50 = PyObject_GetItem(cpy_r_log, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 211, CPyStatic_main___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_r50};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r___checksum_func, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r___checksum_func);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 211, CPyStatic_main___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r50);
    cpy_r_r54 = 1 ? Py_True : Py_False;
    cpy_r_r55 = CPyDict_Build(4, cpy_r_r35, cpy_r_r38, cpy_r_r39, cpy_r_r46, cpy_r_r47, cpy_r_r54, cpy_r_r48, cpy_r_r53);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 207, CPyStatic_main___globals);
        goto CPyL42;
    }
    cpy_r_r56 = CPyDef_main____append_additional_log_data(cpy_r_log, cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 213, CPyStatic_main___globals);
        goto CPyL70;
    }
    return cpy_r_r55;
CPyL42: ;
    cpy_r_r57 = CPy_CatchError();
    cpy_r_r58 = CPyModule_builtins;
    cpy_r_r59 = CPyStatics[26]; /* 'KeyError' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 215, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r61 = CPy_ExceptionMatches(cpy_r_r60);
    CPy_DecRef(cpy_r_r60);
    if (!cpy_r_r61) goto CPyL48;
    cpy_r_r62 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r62);
    cpy_r_r63 = CPyStatics[34]; /* 'Invalid event' */
    cpy_r_r64 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r65[1] = {cpy_r_r63};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = _PyObject_Vectorcall(cpy_r_r64, cpy_r_r66, 1, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 216, CPyStatic_main___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_main___EventError))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_log", 216, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r67);
        goto CPyL50;
    }
    CPy_Raise(cpy_r_r68);
    CPy_DecRef(cpy_r_r68);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_log", 216, CPyStatic_main___globals);
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
    CPy_DECREF(cpy_r_r16);
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
    CPy_AddTraceback("eth_event/main.py", "decode_log", 151, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 265, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 269, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 269, CPyStatic_main___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL9: ;
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 1, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 269, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 272, CPyStatic_main___globals);
        goto CPyL44;
    }
    cpy_r_r20 = CPyStatics[28]; /* 'topics' */
    cpy_r_r21 = PyObject_GetItem(cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 272, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r22 = PyObject_GetIter(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 272, CPyStatic_main___globals);
        goto CPyL45;
    }
CPyL15: ;
    cpy_r_r23 = PyIter_Next(cpy_r_r22);
    if (cpy_r_r23 == NULL) goto CPyL46;
    cpy_r_r24 = CPyDef_main____0xstring(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 272, CPyStatic_main___globals);
        goto CPyL47;
    }
    cpy_r_r25 = PyList_Append(cpy_r_r19, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 272, CPyStatic_main___globals);
        goto CPyL47;
    } else
        goto CPyL15;
CPyL18: ;
    cpy_r_r27 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 272, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = cpy_r_r30 != 0;
    if (!cpy_r_r31) goto CPyL25;
    cpy_r_r32 = CPyList_GetItemShort(cpy_r_r19, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 273, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r33 = PySequence_Contains(cpy_r_topic_map, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 273, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 274, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r37 = PyList_Append(cpy_r_r0, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 274, CPyStatic_main___globals);
        goto CPyL50;
    } else
        goto CPyL37;
CPyL25: ;
    if (cpy_r_allow_undecoded) {
        goto CPyL30;
    } else
        goto CPyL51;
CPyL26: ;
    cpy_r_r39 = CPyStatics[35]; /* 'Log contains undecodable event' */
    cpy_r_r40 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r41[1] = {cpy_r_r39};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 276, CPyStatic_main___globals);
        goto CPyL39;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_main___UnknownEvent))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_logs", 276, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r43);
        goto CPyL39;
    }
    CPy_Raise(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 276, CPyStatic_main___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r45 = CPyStatics[19]; /* 'name' */
    cpy_r_r46 = CPyStatics[28]; /* 'topics' */
    cpy_r_r47 = CPyStatics[31]; /* 'data' */
    cpy_r_r48 = CPyStatics[31]; /* 'data' */
    cpy_r_r49 = PyObject_GetItem(cpy_r_r18, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 281, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r50 = CPyDef_main____0xstring(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 281, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r51 = CPyStatics[32]; /* 'decoded' */
    cpy_r_r52 = CPyStatics[33]; /* 'address' */
    cpy_r_r53 = CPyStatics[33]; /* 'address' */
    cpy_r_r54 = PyObject_GetItem(cpy_r_r18, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 283, CPyStatic_main___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r55[1] = {cpy_r_r54};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r56, 1, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 283, CPyStatic_main___globals);
        goto CPyL53;
    }
    CPy_DECREF(cpy_r_r54);
    cpy_r_r58 = Py_None;
    cpy_r_r59 = 0 ? Py_True : Py_False;
    cpy_r_r60 = CPyDict_Build(5, cpy_r_r45, cpy_r_r58, cpy_r_r46, cpy_r_r19, cpy_r_r47, cpy_r_r50, cpy_r_r51, cpy_r_r59, cpy_r_r52, cpy_r_r57);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 278, CPyStatic_main___globals);
        goto CPyL44;
    }
    cpy_r_r61 = CPyDef_main____append_additional_log_data(cpy_r_r18, cpy_r_r60);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 285, CPyStatic_main___globals);
        goto CPyL54;
    }
    cpy_r_r62 = PyList_Append(cpy_r_r0, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("eth_event/main.py", "decode_logs", 286, CPyStatic_main___globals);
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
    CPy_DECREF(cpy_r_r19);
    goto CPyL23;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL39;
CPyL51: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
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
    CPy_AddTraceback("eth_event/main.py", "decode_logs", 231, CPyStatic_main___globals);
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
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 292, CPyStatic_main___globals);
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
    PyObject *__tmp3 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp4);
    PyObject *__tmp5 = cpy_r_r0.f2;
    PyTuple_SET_ITEM(cpy_r_r2, 2, __tmp5);
    cpy_r_r3 = PyObject_GetIter(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 292, CPyStatic_main___globals);
        goto CPyL12;
    }
CPyL4: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL13;
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_append_additional_log_data", 292, CPyStatic_main___globals, "str", cpy_r_r4);
        goto CPyL14;
    }
    cpy_r_r6 = PySequence_Contains(cpy_r_log, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 293, CPyStatic_main___globals);
        goto CPyL15;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL16;
    cpy_r_r9 = PyObject_GetItem(cpy_r_log, cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 294, CPyStatic_main___globals);
        goto CPyL15;
    }
    cpy_r_r10 = CPyDict_SetItem(cpy_r_event, cpy_r_r5, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 294, CPyStatic_main___globals);
        goto CPyL14;
    } else
        goto CPyL4;
CPyL10: ;
    cpy_r_r12 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 292, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "_append_additional_log_data", 291, CPyStatic_main___globals);
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
    PyObject *cpy_r_last_step;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_i;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyPtr cpy_r_r52;
    int64_t cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    int64_t cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    CPyTagged cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_address;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject **cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject **cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject **cpy_r_r132;
    PyObject *cpy_r_r133;
    CPyTagged cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject **cpy_r_r140;
    PyObject *cpy_r_r141;
    CPyTagged cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject **cpy_r_r147;
    PyObject *cpy_r_r148;
    CPyTagged cpy_r_r149;
    PyObject *cpy_r_r150;
    CPyTagged cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    tuple_T3OOO cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject **cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    tuple_T2OO cpy_r_r181;
    PyObject *cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject **cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject **cpy_r_r199;
    PyObject *cpy_r_r200;
    CPyTagged cpy_r_r201;
    CPyTagged cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject **cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    tuple_T3OOO cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    tuple_T2OO cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject **cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    CPyPtr cpy_r_r231;
    int64_t cpy_r_r232;
    CPyTagged cpy_r_r233;
    char cpy_r_r234;
    PyObject *cpy_r_r235;
    int32_t cpy_r_r236;
    char cpy_r_r237;
    char cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject **cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    int32_t cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    CPyPtr cpy_r_r261;
    int64_t cpy_r_r262;
    CPyTagged cpy_r_r263;
    char cpy_r_r264;
    char cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
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
    PyObject *cpy_r_r281;
    int32_t cpy_r_r282;
    char cpy_r_r283;
    CPyTagged cpy_r_r284;
    PyObject *cpy_r_r285;
    if (cpy_r_allow_undecoded != 2) goto CPyL2;
    cpy_r_allow_undecoded = 0;
CPyL2: ;
    if (cpy_r_initial_address != NULL) goto CPyL168;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_initial_address = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyStatic_main___to_checksum_address;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL169;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 326, CPyStatic_main___globals);
        goto CPyL167;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r3 = CPyStatic_main___lru_cache;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL170;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"lru_cache\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 326, CPyStatic_main___globals);
        goto CPyL167;
    }
    CPy_Unreachable();
CPyL10: ;
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 1, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 326, CPyStatic_main___globals);
        goto CPyL171;
    }
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 328, CPyStatic_main___globals);
        goto CPyL172;
    }
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_initial_address != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL17;
    CPy_INCREF(cpy_r_initial_address);
    if (likely(cpy_r_initial_address != Py_None))
        cpy_r_r11 = cpy_r_initial_address;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 330, CPyStatic_main___globals, "str", cpy_r_initial_address);
        goto CPyL173;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_r11};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r13, 1, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 330, CPyStatic_main___globals);
        goto CPyL174;
    }
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = PyList_New(1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 330, CPyStatic_main___globals);
        goto CPyL175;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    *(PyObject * *)cpy_r_r17 = cpy_r_r14;
    cpy_r_address_list = cpy_r_r15;
    goto CPyL19;
CPyL17: ;
    cpy_r_r18 = PyList_New(1);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 332, CPyStatic_main___globals);
        goto CPyL173;
    }
    cpy_r_r19 = Py_None;
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    CPy_INCREF(cpy_r_r19);
    *(PyObject * *)cpy_r_r21 = cpy_r_r19;
    cpy_r_address_list = cpy_r_r18;
CPyL19: ;
    cpy_r_r22 = CPyList_GetItemShort(cpy_r_struct_logs, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 334, CPyStatic_main___globals);
        goto CPyL176;
    }
    cpy_r_last_step = cpy_r_r22;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_struct_logs)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = 2;
    cpy_r_i = cpy_r_r26;
CPyL21: ;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r27) goto CPyL177;
    cpy_r_r28 = CPyList_GetItem(cpy_r_struct_logs, cpy_r_i);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 336, CPyStatic_main___globals);
        goto CPyL178;
    }
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_initial_address != cpy_r_r29;
    if (!cpy_r_r30) goto CPyL179;
    cpy_r_r31 = CPyStatics[36]; /* 'depth' */
    cpy_r_r32 = PyObject_GetItem(cpy_r_r28, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 338, CPyStatic_main___globals);
        goto CPyL180;
    }
    cpy_r_r33 = CPyStatics[36]; /* 'depth' */
    cpy_r_r34 = PyObject_GetItem(cpy_r_last_step, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 338, CPyStatic_main___globals);
        goto CPyL181;
    }
    cpy_r_r35 = PyObject_RichCompare(cpy_r_r32, cpy_r_r34, 4);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 338, CPyStatic_main___globals);
        goto CPyL180;
    }
    cpy_r_r36 = PyObject_IsTrue(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 338, CPyStatic_main___globals);
        goto CPyL180;
    }
    cpy_r_r38 = cpy_r_r36;
    if (!cpy_r_r38) goto CPyL182;
    cpy_r_r39 = CPyStatics[37]; /* 'op' */
    cpy_r_r40 = PyObject_GetItem(cpy_r_last_step, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 339, CPyStatic_main___globals);
        goto CPyL180;
    }
    cpy_r_r41 = CPyStatics[38]; /* 'CREATE' */
    cpy_r_r42 = PyObject_RichCompare(cpy_r_r40, cpy_r_r41, 2);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", -1, CPyStatic_main___globals);
        goto CPyL180;
    }
    if (unlikely(!PyBool_Check(cpy_r_r42))) {
        CPy_TypeError("bool", cpy_r_r42); cpy_r_r43 = 2;
    } else
        cpy_r_r43 = cpy_r_r42 == Py_True;
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", -1, CPyStatic_main___globals);
        goto CPyL180;
    }
    if (!cpy_r_r43) goto CPyL34;
    if (cpy_r_r43) {
        goto CPyL38;
    } else
        goto CPyL183;
CPyL34: ;
    cpy_r_r44 = CPyStatics[37]; /* 'op' */
    cpy_r_r45 = PyObject_GetItem(cpy_r_last_step, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 339, CPyStatic_main___globals);
        goto CPyL180;
    }
    cpy_r_r46 = CPyStatics[39]; /* 'CREATE2' */
    cpy_r_r47 = PyObject_RichCompare(cpy_r_r45, cpy_r_r46, 2);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", -1, CPyStatic_main___globals);
        goto CPyL180;
    }
    if (unlikely(!PyBool_Check(cpy_r_r47))) {
        CPy_TypeError("bool", cpy_r_r47); cpy_r_r48 = 2;
    } else
        cpy_r_r48 = cpy_r_r47 == Py_True;
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", -1, CPyStatic_main___globals);
        goto CPyL180;
    }
    if (!cpy_r_r48) goto CPyL183;
CPyL38: ;
    cpy_r_r49 = CPyList_GetSlice(cpy_r_struct_logs, cpy_r_i, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 340, CPyStatic_main___globals);
        goto CPyL184;
    }
    if (likely(PyList_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 340, CPyStatic_main___globals, "list", cpy_r_r49);
        goto CPyL184;
    }
    cpy_r_r51 = 0;
CPyL41: ;
    cpy_r_r52 = (CPyPtr)&((PyVarObject *)cpy_r_r50)->ob_size;
    cpy_r_r53 = *(int64_t *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 << 1;
    cpy_r_r55 = (Py_ssize_t)cpy_r_r51 < (Py_ssize_t)cpy_r_r54;
    if (!cpy_r_r55) goto CPyL185;
    cpy_r_r56 = (Py_ssize_t)cpy_r_r51 >> 1;
    cpy_r_r57 = (CPyPtr)&((PyListObject *)cpy_r_r50)->ob_item;
    cpy_r_r58 = *(CPyPtr *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r56 * 8;
    cpy_r_r60 = cpy_r_r58 + cpy_r_r59;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = CPyStatics[36]; /* 'depth' */
    cpy_r_r63 = PyObject_GetItem(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 340, CPyStatic_main___globals);
        goto CPyL186;
    }
    cpy_r_r64 = CPyStatics[36]; /* 'depth' */
    cpy_r_r65 = PyObject_GetItem(cpy_r_last_step, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 340, CPyStatic_main___globals);
        goto CPyL187;
    }
    cpy_r_r66 = PyObject_RichCompare(cpy_r_r63, cpy_r_r65, 2);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 340, CPyStatic_main___globals);
        goto CPyL186;
    }
    cpy_r_r67 = PyObject_IsTrue(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 340, CPyStatic_main___globals);
        goto CPyL186;
    }
    cpy_r_r69 = cpy_r_r67;
    if (cpy_r_r69) {
        goto CPyL188;
    } else
        goto CPyL189;
CPyL47: ;
    goto CPyL51;
CPyL48: ;
    cpy_r_r70 = cpy_r_r51 + 2;
    cpy_r_r51 = cpy_r_r70;
    goto CPyL41;
CPyL49: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 340, CPyStatic_main___globals);
        goto CPyL167;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r72 = CPyStatics[40]; /* '0x' */
    cpy_r_r73 = CPyStatics[41]; /* 'stack' */
    cpy_r_r74 = PyObject_GetItem(cpy_r_r61, cpy_r_r73);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 341, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r75 = CPyStatics[123]; /* -1 */
    cpy_r_r76 = PyObject_GetItem(cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 341, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r77 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r78 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r79 = CPyStatics[124]; /* -40 */
    cpy_r_r80 = PySlice_New(cpy_r_r79, cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 341, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r81 = PyObject_GetItem(cpy_r_r76, cpy_r_r80);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 341, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r82 = PyObject_Str(cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 341, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r83 = CPyStr_Build(2, cpy_r_r72, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 341, CPyStatic_main___globals);
        goto CPyL190;
    }
    PyObject *cpy_r_r84[1] = {cpy_r_r83};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r85, 1, 0);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 341, CPyStatic_main___globals);
        goto CPyL192;
    }
    CPy_DECREF(cpy_r_r83);
    cpy_r_address = cpy_r_r86;
    cpy_r_r87 = PyList_Append(cpy_r_address_list, cpy_r_address);
    CPy_DECREF(cpy_r_address);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 342, CPyStatic_main___globals);
        goto CPyL190;
    } else
        goto CPyL73;
CPyL59: ;
    cpy_r_r89 = CPyStatics[40]; /* '0x' */
    cpy_r_r90 = CPyStatics[41]; /* 'stack' */
    cpy_r_r91 = PyObject_GetItem(cpy_r_last_step, cpy_r_r90);
    CPy_DECREF(cpy_r_last_step);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 344, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r92 = CPyStatics[125]; /* -2 */
    cpy_r_r93 = PyObject_GetItem(cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 344, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r94 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r95 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r96 = CPyStatics[124]; /* -40 */
    cpy_r_r97 = PySlice_New(cpy_r_r96, cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 344, CPyStatic_main___globals);
        goto CPyL193;
    }
    cpy_r_r98 = PyObject_GetItem(cpy_r_r93, cpy_r_r97);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 344, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r99 = PyObject_Str(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 344, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r100 = CPyStr_Build(2, cpy_r_r89, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 344, CPyStatic_main___globals);
        goto CPyL190;
    }
    PyObject *cpy_r_r101[1] = {cpy_r_r100};
    cpy_r_r102 = (PyObject **)&cpy_r_r101;
    cpy_r_r103 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r102, 1, 0);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 344, CPyStatic_main___globals);
        goto CPyL194;
    }
    CPy_DECREF(cpy_r_r100);
    cpy_r_address = cpy_r_r103;
    cpy_r_r104 = PyList_Append(cpy_r_address_list, cpy_r_address);
    CPy_DECREF(cpy_r_address);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 345, CPyStatic_main___globals);
        goto CPyL190;
    } else
        goto CPyL73;
CPyL67: ;
    cpy_r_r106 = CPyStatics[36]; /* 'depth' */
    cpy_r_r107 = PyObject_GetItem(cpy_r_r28, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 347, CPyStatic_main___globals);
        goto CPyL184;
    }
    cpy_r_r108 = CPyStatics[36]; /* 'depth' */
    cpy_r_r109 = PyObject_GetItem(cpy_r_last_step, cpy_r_r108);
    CPy_DECREF(cpy_r_last_step);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 347, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r110 = PyObject_RichCompare(cpy_r_r107, cpy_r_r109, 0);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 347, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r111 = PyObject_IsTrue(cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 347, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r113 = cpy_r_r111;
    if (!cpy_r_r113) goto CPyL73;
    cpy_r_r114 = CPyList_PopLast(cpy_r_address_list);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 348, CPyStatic_main___globals);
        goto CPyL190;
    } else
        goto CPyL196;
CPyL73: ;
    CPy_INCREF(cpy_r_r28);
    cpy_r_last_step = cpy_r_r28;
    cpy_r_r115 = CPyStatics[37]; /* 'op' */
    cpy_r_r116 = PyObject_GetItem(cpy_r_r28, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 351, CPyStatic_main___globals);
        goto CPyL184;
    }
    cpy_r_r117 = CPyStatics[42]; /* 'LOG' */
    cpy_r_r118 = CPyStatics[43]; /* 'startswith' */
    PyObject *cpy_r_r119[2] = {cpy_r_r116, cpy_r_r117};
    cpy_r_r120 = (PyObject **)&cpy_r_r119;
    cpy_r_r121 = PyObject_VectorcallMethod(cpy_r_r118, cpy_r_r120, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 352, CPyStatic_main___globals);
        goto CPyL197;
    }
    cpy_r_r122 = PyObject_IsTrue(cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 352, CPyStatic_main___globals);
        goto CPyL197;
    }
    cpy_r_r124 = cpy_r_r122;
    if (!cpy_r_r124) goto CPyL198;
    cpy_r_r125 = CPyStatics[41]; /* 'stack' */
    cpy_r_r126 = PyObject_GetItem(cpy_r_r28, cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 356, CPyStatic_main___globals);
        goto CPyL199;
    }
    cpy_r_r127 = CPyStatics[123]; /* -1 */
    cpy_r_r128 = PyObject_GetItem(cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals);
        goto CPyL200;
    }
    cpy_r_r129 = (PyObject *)&PyLong_Type;
    cpy_r_r130 = CPyStatics[126]; /* 16 */
    PyObject *cpy_r_r131[2] = {cpy_r_r128, cpy_r_r130};
    cpy_r_r132 = (PyObject **)&cpy_r_r131;
    cpy_r_r133 = _PyObject_Vectorcall(cpy_r_r129, cpy_r_r132, 2, 0);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals);
        goto CPyL201;
    }
    CPy_DECREF(cpy_r_r128);
    if (likely(PyLong_Check(cpy_r_r133)))
        cpy_r_r134 = CPyTagged_FromObject(cpy_r_r133);
    else {
        CPy_TypeError("int", cpy_r_r133); cpy_r_r134 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 357, CPyStatic_main___globals);
        goto CPyL200;
    }
    cpy_r_r135 = CPyStatics[125]; /* -2 */
    cpy_r_r136 = PyObject_GetItem(cpy_r_r126, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL202;
    }
    cpy_r_r137 = (PyObject *)&PyLong_Type;
    cpy_r_r138 = CPyStatics[126]; /* 16 */
    PyObject *cpy_r_r139[2] = {cpy_r_r136, cpy_r_r138};
    cpy_r_r140 = (PyObject **)&cpy_r_r139;
    cpy_r_r141 = _PyObject_Vectorcall(cpy_r_r137, cpy_r_r140, 2, 0);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL203;
    }
    CPy_DECREF(cpy_r_r136);
    if (likely(PyLong_Check(cpy_r_r141)))
        cpy_r_r142 = CPyTagged_FromObject(cpy_r_r141);
    else {
        CPy_TypeError("int", cpy_r_r141); cpy_r_r142 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 358, CPyStatic_main___globals);
        goto CPyL202;
    }
    cpy_r_r143 = CPyStatics[123]; /* -1 */
    cpy_r_r144 = PyObject_GetItem(cpy_r_r116, cpy_r_r143);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 359, CPyStatic_main___globals);
        goto CPyL204;
    }
    cpy_r_r145 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r146[1] = {cpy_r_r144};
    cpy_r_r147 = (PyObject **)&cpy_r_r146;
    cpy_r_r148 = _PyObject_Vectorcall(cpy_r_r145, cpy_r_r147, 1, 0);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 359, CPyStatic_main___globals);
        goto CPyL205;
    }
    CPy_DECREF(cpy_r_r144);
    if (likely(PyLong_Check(cpy_r_r148)))
        cpy_r_r149 = CPyTagged_FromObject(cpy_r_r148);
    else {
        CPy_TypeError("int", cpy_r_r148); cpy_r_r149 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r149 == CPY_INT_TAG)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 359, CPyStatic_main___globals);
        goto CPyL204;
    }
    cpy_r_r150 = PyList_New(0);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 360, CPyStatic_main___globals);
        goto CPyL206;
    }
    cpy_r_r151 = CPyTagged_Subtract(-6, cpy_r_r149);
    CPyTagged_DECREF(cpy_r_r149);
    cpy_r_r152 = CPyStatics[127]; /* -3 */
    cpy_r_r153 = CPyTagged_StealAsObject(cpy_r_r151);
    cpy_r_r154 = CPyStatics[123]; /* -1 */
    cpy_r_r155 = PySlice_New(cpy_r_r152, cpy_r_r153, cpy_r_r154);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 360, CPyStatic_main___globals);
        goto CPyL207;
    }
    cpy_r_r156 = PyObject_GetItem(cpy_r_r126, cpy_r_r155);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 360, CPyStatic_main___globals);
        goto CPyL208;
    }
    cpy_r_r157 = PyObject_GetIter(cpy_r_r156);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 360, CPyStatic_main___globals);
        goto CPyL208;
    }
CPyL91: ;
    cpy_r_r158 = PyIter_Next(cpy_r_r157);
    if (cpy_r_r158 == NULL) goto CPyL209;
    cpy_r_r159 = CPyDef_main____0xstring(cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 360, CPyStatic_main___globals);
        goto CPyL210;
    }
    cpy_r_r160 = PyList_Append(cpy_r_r150, cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 360, CPyStatic_main___globals);
        goto CPyL210;
    } else
        goto CPyL91;
CPyL94: ;
    cpy_r_r162 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 360, CPyStatic_main___globals);
        goto CPyL208;
    }
    goto CPyL113;
CPyL96: ;
    cpy_r_r163 = CPy_CatchError();
    cpy_r_r164 = CPyModule_builtins;
    cpy_r_r165 = CPyStatics[26]; /* 'KeyError' */
    cpy_r_r166 = CPyObject_GetAttr(cpy_r_r164, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 361, CPyStatic_main___globals);
        goto CPyL111;
    }
    cpy_r_r167 = CPy_ExceptionMatches(cpy_r_r166);
    CPy_DecRef(cpy_r_r166);
    if (!cpy_r_r167) goto CPyL102;
    cpy_r_r168 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r168;
    CPy_DecRef(cpy_r_e);
    cpy_r_r169 = CPyStatics[44]; /* 'StructLog has no stack' */
    cpy_r_r170 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r171[1] = {cpy_r_r169};
    cpy_r_r172 = (PyObject **)&cpy_r_r171;
    cpy_r_r173 = _PyObject_Vectorcall(cpy_r_r170, cpy_r_r172, 1, 0);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 362, CPyStatic_main___globals);
        goto CPyL111;
    }
    if (likely(Py_TYPE(cpy_r_r173) == CPyType_main___StructLogError))
        cpy_r_r174 = cpy_r_r173;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 362, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r173);
        goto CPyL111;
    }
    CPy_Raise(cpy_r_r174);
    CPy_DecRef(cpy_r_r174);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 362, CPyStatic_main___globals);
        goto CPyL111;
    } else
        goto CPyL211;
CPyL101: ;
    CPy_Unreachable();
CPyL102: ;
    cpy_r_r175 = CPyModule_builtins;
    cpy_r_r176 = CPyStatics[45]; /* 'IndexError' */
    cpy_r_r177 = CPyObject_GetAttr(cpy_r_r175, cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 363, CPyStatic_main___globals);
        goto CPyL111;
    }
    cpy_r_r178 = CPyModule_builtins;
    cpy_r_r179 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r180 = CPyObject_GetAttr(cpy_r_r178, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 363, CPyStatic_main___globals);
        goto CPyL212;
    }
    cpy_r_r181.f0 = cpy_r_r177;
    cpy_r_r181.f1 = cpy_r_r180;
    cpy_r_r182 = PyTuple_New(2);
    if (unlikely(cpy_r_r182 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6 = cpy_r_r181.f0;
    PyTuple_SET_ITEM(cpy_r_r182, 0, __tmp6);
    PyObject *__tmp7 = cpy_r_r181.f1;
    PyTuple_SET_ITEM(cpy_r_r182, 1, __tmp7);
    cpy_r_r183 = CPy_ExceptionMatches(cpy_r_r182);
    CPy_DecRef(cpy_r_r182);
    if (!cpy_r_r183) goto CPyL109;
    cpy_r_r184 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r184;
    CPy_DecRef(cpy_r_e);
    cpy_r_r185 = CPyStatics[46]; /* 'Malformed stack' */
    cpy_r_r186 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r187[1] = {cpy_r_r185};
    cpy_r_r188 = (PyObject **)&cpy_r_r187;
    cpy_r_r189 = _PyObject_Vectorcall(cpy_r_r186, cpy_r_r188, 1, 0);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 364, CPyStatic_main___globals);
        goto CPyL111;
    }
    if (likely(Py_TYPE(cpy_r_r189) == CPyType_main___StructLogError))
        cpy_r_r190 = cpy_r_r189;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 364, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r189);
        goto CPyL111;
    }
    CPy_Raise(cpy_r_r190);
    CPy_DecRef(cpy_r_r190);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 364, CPyStatic_main___globals);
        goto CPyL111;
    } else
        goto CPyL213;
CPyL108: ;
    CPy_Unreachable();
CPyL109: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL111;
    } else
        goto CPyL214;
CPyL110: ;
    CPy_Unreachable();
CPyL111: ;
    CPy_RestoreExcInfo(cpy_r_r163);
    CPy_DecRef(cpy_r_r163.f0);
    CPy_DecRef(cpy_r_r163.f1);
    CPy_DecRef(cpy_r_r163.f2);
    cpy_r_r191 = CPy_KeepPropagating();
    if (!cpy_r_r191) goto CPyL167;
    CPy_Unreachable();
CPyL113: ;
    cpy_r_r192 = CPyStatics[47]; /* '' */
    cpy_r_r193 = CPyStatics[48]; /* 'memory' */
    cpy_r_r194 = PyObject_GetItem(cpy_r_r28, cpy_r_r193);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 367, CPyStatic_main___globals);
        goto CPyL215;
    }
    cpy_r_r195 = PyUnicode_Join(cpy_r_r192, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 367, CPyStatic_main___globals);
        goto CPyL215;
    }
    cpy_r_r196 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r196 == NULL)) {
        goto CPyL216;
    } else
        goto CPyL118;
CPyL116: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r197 = 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 367, CPyStatic_main___globals);
        goto CPyL124;
    }
    CPy_Unreachable();
CPyL118: ;
    PyObject *cpy_r_r198[1] = {cpy_r_r195};
    cpy_r_r199 = (PyObject **)&cpy_r_r198;
    cpy_r_r200 = _PyObject_Vectorcall(cpy_r_r196, cpy_r_r199, 1, 0);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 367, CPyStatic_main___globals);
        goto CPyL217;
    }
    CPy_DECREF(cpy_r_r195);
    cpy_r_r201 = CPyTagged_Add(cpy_r_r134, cpy_r_r142);
    CPyTagged_DECREF(cpy_r_r201);
    cpy_r_r202 = CPyTagged_Add(cpy_r_r134, cpy_r_r142);
    CPyTagged_DECREF(cpy_r_r142);
    cpy_r_r203 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r204 = CPyTagged_StealAsObject(cpy_r_r134);
    cpy_r_r205 = CPyTagged_StealAsObject(cpy_r_r202);
    cpy_r_r206 = PySlice_New(cpy_r_r204, cpy_r_r205, cpy_r_r203);
    CPy_DECREF(cpy_r_r204);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 367, CPyStatic_main___globals);
        goto CPyL218;
    }
    cpy_r_r207 = PyObject_GetItem(cpy_r_r200, cpy_r_r206);
    CPy_DECREF(cpy_r_r200);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 367, CPyStatic_main___globals);
        goto CPyL219;
    }
    cpy_r_r208 = CPyStatics[49]; /* 'hex' */
    PyObject *cpy_r_r209[1] = {cpy_r_r207};
    cpy_r_r210 = (PyObject **)&cpy_r_r209;
    cpy_r_r211 = PyObject_VectorcallMethod(cpy_r_r208, cpy_r_r210, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 367, CPyStatic_main___globals);
        goto CPyL220;
    }
    CPy_DECREF(cpy_r_r207);
    cpy_r_r212 = CPyDef_main____0xstring(cpy_r_r211);
    CPy_DECREF(cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 367, CPyStatic_main___globals);
        goto CPyL219;
    }
    goto CPyL135;
CPyL124: ;
    cpy_r_r213 = CPy_CatchError();
    cpy_r_r214 = CPyModule_builtins;
    cpy_r_r215 = CPyStatics[26]; /* 'KeyError' */
    cpy_r_r216 = CPyObject_GetAttr(cpy_r_r214, cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 368, CPyStatic_main___globals);
        goto CPyL133;
    }
    cpy_r_r217 = CPyModule_builtins;
    cpy_r_r218 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r219 = CPyObject_GetAttr(cpy_r_r217, cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 368, CPyStatic_main___globals);
        goto CPyL221;
    }
    cpy_r_r220.f0 = cpy_r_r216;
    cpy_r_r220.f1 = cpy_r_r219;
    cpy_r_r221 = PyTuple_New(2);
    if (unlikely(cpy_r_r221 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8 = cpy_r_r220.f0;
    PyTuple_SET_ITEM(cpy_r_r221, 0, __tmp8);
    PyObject *__tmp9 = cpy_r_r220.f1;
    PyTuple_SET_ITEM(cpy_r_r221, 1, __tmp9);
    cpy_r_r222 = CPy_ExceptionMatches(cpy_r_r221);
    CPy_DecRef(cpy_r_r221);
    if (!cpy_r_r222) goto CPyL131;
    cpy_r_r223 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r223;
    CPy_DecRef(cpy_r_e);
    cpy_r_r224 = CPyStatics[50]; /* 'Malformed memory' */
    cpy_r_r225 = (PyObject *)CPyType_main___StructLogError;
    PyObject *cpy_r_r226[1] = {cpy_r_r224};
    cpy_r_r227 = (PyObject **)&cpy_r_r226;
    cpy_r_r228 = _PyObject_Vectorcall(cpy_r_r225, cpy_r_r227, 1, 0);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 369, CPyStatic_main___globals);
        goto CPyL133;
    }
    if (likely(Py_TYPE(cpy_r_r228) == CPyType_main___StructLogError))
        cpy_r_r229 = cpy_r_r228;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 369, CPyStatic_main___globals, "eth_event.main.StructLogError", cpy_r_r228);
        goto CPyL133;
    }
    CPy_Raise(cpy_r_r229);
    CPy_DecRef(cpy_r_r229);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 369, CPyStatic_main___globals);
        goto CPyL133;
    } else
        goto CPyL222;
CPyL130: ;
    CPy_Unreachable();
CPyL131: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL133;
    } else
        goto CPyL223;
CPyL132: ;
    CPy_Unreachable();
CPyL133: ;
    CPy_RestoreExcInfo(cpy_r_r213);
    CPy_DecRef(cpy_r_r213.f0);
    CPy_DecRef(cpy_r_r213.f1);
    CPy_DecRef(cpy_r_r213.f2);
    cpy_r_r230 = CPy_KeepPropagating();
    if (!cpy_r_r230) goto CPyL167;
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r231 = (CPyPtr)&((PyVarObject *)cpy_r_r150)->ob_size;
    cpy_r_r232 = *(int64_t *)cpy_r_r231;
    cpy_r_r233 = cpy_r_r232 << 1;
    cpy_r_r234 = cpy_r_r233 != 0;
    if (!cpy_r_r234) goto CPyL139;
    cpy_r_r235 = CPyList_GetItemShort(cpy_r_r150, 0);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r236 = PySequence_Contains(cpy_r_topic_map, cpy_r_r235);
    CPy_DECREF(cpy_r_r235);
    cpy_r_r237 = cpy_r_r236 >= 0;
    if (unlikely(!cpy_r_r237)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 371, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r238 = cpy_r_r236;
    cpy_r_r239 = cpy_r_r238 ^ 1;
    if (!cpy_r_r239) goto CPyL147;
CPyL139: ;
    if (cpy_r_allow_undecoded) {
        goto CPyL144;
    } else
        goto CPyL225;
CPyL140: ;
    cpy_r_r240 = CPyStatics[35]; /* 'Log contains undecodable event' */
    cpy_r_r241 = (PyObject *)CPyType_main___UnknownEvent;
    PyObject *cpy_r_r242[1] = {cpy_r_r240};
    cpy_r_r243 = (PyObject **)&cpy_r_r242;
    cpy_r_r244 = _PyObject_Vectorcall(cpy_r_r241, cpy_r_r243, 1, 0);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 373, CPyStatic_main___globals);
        goto CPyL167;
    }
    if (likely(Py_TYPE(cpy_r_r244) == CPyType_main___UnknownEvent))
        cpy_r_r245 = cpy_r_r244;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 373, CPyStatic_main___globals, "eth_event.main.UnknownEvent", cpy_r_r244);
        goto CPyL167;
    }
    CPy_Raise(cpy_r_r245);
    CPy_DECREF(cpy_r_r245);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 373, CPyStatic_main___globals);
        goto CPyL167;
    }
    CPy_Unreachable();
CPyL144: ;
    cpy_r_r246 = CPyStatics[19]; /* 'name' */
    cpy_r_r247 = CPyStatics[28]; /* 'topics' */
    cpy_r_r248 = CPyStatics[31]; /* 'data' */
    cpy_r_r249 = CPyStatics[32]; /* 'decoded' */
    cpy_r_r250 = CPyStatics[33]; /* 'address' */
    cpy_r_r251 = CPyList_GetItemShort(cpy_r_address_list, -2);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 379, CPyStatic_main___globals);
        goto CPyL224;
    }
    cpy_r_r252 = Py_None;
    cpy_r_r253 = 0 ? Py_True : Py_False;
    cpy_r_r254 = CPyDict_Build(5, cpy_r_r246, cpy_r_r252, cpy_r_r247, cpy_r_r150, cpy_r_r248, cpy_r_r212, cpy_r_r249, cpy_r_r253, cpy_r_r250, cpy_r_r251);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r212);
    CPy_DECREF(cpy_r_r251);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 374, CPyStatic_main___globals);
        goto CPyL226;
    }
    cpy_r_r255 = PyList_Append(cpy_r_r8, cpy_r_r254);
    CPy_DECREF(cpy_r_r254);
    cpy_r_r256 = cpy_r_r255 >= 0;
    if (unlikely(!cpy_r_r256)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 381, CPyStatic_main___globals);
        goto CPyL226;
    } else
        goto CPyL165;
CPyL147: ;
    cpy_r_r257 = PyObject_GetIter(cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 383, CPyStatic_main___globals);
        goto CPyL227;
    }
    cpy_r_r258 = PyIter_Next(cpy_r_r257);
    if (cpy_r_r258 == NULL) {
        goto CPyL228;
    } else
        goto CPyL151;
CPyL149: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r259 = 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 383, CPyStatic_main___globals);
        goto CPyL167;
    }
    CPy_Unreachable();
CPyL151: ;
    cpy_r_r260 = PySequence_List(cpy_r_r257);
    CPy_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 383, CPyStatic_main___globals);
        goto CPyL229;
    }
    cpy_r_r261 = (CPyPtr)&((PyVarObject *)cpy_r_r260)->ob_size;
    cpy_r_r262 = *(int64_t *)cpy_r_r261;
    cpy_r_r263 = cpy_r_r262 << 1;
    cpy_r_r264 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r263;
    if (cpy_r_r264) {
        goto CPyL155;
    } else
        goto CPyL230;
CPyL153: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r265 = 0;
    if (unlikely(!cpy_r_r265)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 383, CPyStatic_main___globals);
        goto CPyL167;
    }
    CPy_Unreachable();
CPyL155: ;
    cpy_r_r266 = PyObject_GetItem(cpy_r_topic_map, cpy_r_r258);
    CPy_DECREF(cpy_r_r258);
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals);
        goto CPyL231;
    }
    if (likely(PyDict_Check(cpy_r_r266)))
        cpy_r_r267 = cpy_r_r266;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 384, CPyStatic_main___globals, "dict", cpy_r_r266);
        goto CPyL231;
    }
    cpy_r_r268 = CPyStatics[19]; /* 'name' */
    cpy_r_r269 = CPyStatics[19]; /* 'name' */
    cpy_r_r270 = CPyDict_GetItem(cpy_r_r267, cpy_r_r269);
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 386, CPyStatic_main___globals);
        goto CPyL232;
    }
    if (likely(PyUnicode_Check(cpy_r_r270)))
        cpy_r_r271 = cpy_r_r270;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 386, CPyStatic_main___globals, "str", cpy_r_r270);
        goto CPyL232;
    }
    cpy_r_r272 = CPyStatics[31]; /* 'data' */
    cpy_r_r273 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r274 = CPyDict_GetItem(cpy_r_r267, cpy_r_r273);
    CPy_DECREF(cpy_r_r267);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 387, CPyStatic_main___globals);
        goto CPyL233;
    }
    if (likely(PyList_Check(cpy_r_r274)))
        cpy_r_r275 = cpy_r_r274;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "decode_traceTransaction", 387, CPyStatic_main___globals, "list", cpy_r_r274);
        goto CPyL233;
    }
    cpy_r_r276 = CPyDef_main____decode(cpy_r_r275, cpy_r_r260, cpy_r_r212);
    CPy_DECREF(cpy_r_r275);
    CPy_DECREF(cpy_r_r260);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 387, CPyStatic_main___globals);
        goto CPyL234;
    }
    cpy_r_r277 = CPyStatics[32]; /* 'decoded' */
    cpy_r_r278 = CPyStatics[33]; /* 'address' */
    cpy_r_r279 = CPyList_GetItemShort(cpy_r_address_list, -2);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 389, CPyStatic_main___globals);
        goto CPyL235;
    }
    cpy_r_r280 = 1 ? Py_True : Py_False;
    cpy_r_r281 = CPyDict_Build(4, cpy_r_r268, cpy_r_r271, cpy_r_r272, cpy_r_r276, cpy_r_r277, cpy_r_r280, cpy_r_r278, cpy_r_r279);
    CPy_DECREF(cpy_r_r271);
    CPy_DECREF(cpy_r_r276);
    CPy_DECREF(cpy_r_r279);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 385, CPyStatic_main___globals);
        goto CPyL226;
    }
    cpy_r_r282 = PyList_Append(cpy_r_r8, cpy_r_r281);
    CPy_DECREF(cpy_r_r281);
    cpy_r_r283 = cpy_r_r282 >= 0;
    if (unlikely(!cpy_r_r283)) {
        CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 391, CPyStatic_main___globals);
        goto CPyL226;
    }
CPyL165: ;
    cpy_r_r284 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r284;
    cpy_r_i = cpy_r_r284;
    goto CPyL21;
CPyL166: ;
    return cpy_r_r8;
CPyL167: ;
    cpy_r_r285 = NULL;
    return cpy_r_r285;
CPyL168: ;
    CPy_INCREF(cpy_r_initial_address);
    goto CPyL4;
CPyL169: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL5;
CPyL170: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL8;
CPyL171: ;
    CPy_DecRef(cpy_r_initial_address);
    goto CPyL167;
CPyL172: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    goto CPyL167;
CPyL173: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL167;
CPyL174: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL167;
CPyL175: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    goto CPyL167;
CPyL176: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    goto CPyL167;
CPyL177: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL166;
CPyL178: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL167;
CPyL179: ;
    CPy_DECREF(cpy_r_last_step);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL73;
CPyL180: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r28);
    goto CPyL167;
CPyL181: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    goto CPyL167;
CPyL182: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL67;
CPyL183: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL59;
CPyL184: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    goto CPyL167;
CPyL185: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r50);
    goto CPyL49;
CPyL186: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r61);
    goto CPyL167;
CPyL187: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r63);
    goto CPyL167;
CPyL188: ;
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r50);
    goto CPyL47;
CPyL189: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL48;
CPyL190: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r28);
    goto CPyL167;
CPyL191: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r76);
    goto CPyL167;
CPyL192: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r83);
    goto CPyL167;
CPyL193: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r93);
    goto CPyL167;
CPyL194: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r100);
    goto CPyL167;
CPyL195: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r107);
    goto CPyL167;
CPyL196: ;
    CPy_DECREF(cpy_r_r114);
    goto CPyL73;
CPyL197: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r116);
    goto CPyL167;
CPyL198: ;
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r116);
    goto CPyL165;
CPyL199: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r116);
    goto CPyL96;
CPyL200: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r126);
    goto CPyL96;
CPyL201: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r128);
    goto CPyL96;
CPyL202: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r126);
    CPyTagged_DecRef(cpy_r_r134);
    goto CPyL96;
CPyL203: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r126);
    CPyTagged_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r136);
    goto CPyL96;
CPyL204: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r126);
    CPyTagged_DecRef(cpy_r_r134);
    CPyTagged_DecRef(cpy_r_r142);
    goto CPyL96;
CPyL205: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r126);
    CPyTagged_DecRef(cpy_r_r134);
    CPyTagged_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r144);
    goto CPyL96;
CPyL206: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r126);
    CPyTagged_DecRef(cpy_r_r134);
    CPyTagged_DecRef(cpy_r_r142);
    CPyTagged_DecRef(cpy_r_r149);
    goto CPyL96;
CPyL207: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r126);
    CPyTagged_DecRef(cpy_r_r134);
    CPyTagged_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    goto CPyL96;
CPyL208: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPyTagged_DecRef(cpy_r_r134);
    CPyTagged_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    goto CPyL96;
CPyL209: ;
    CPy_DECREF(cpy_r_r157);
    goto CPyL94;
CPyL210: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r28);
    CPyTagged_DecRef(cpy_r_r134);
    CPyTagged_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r157);
    goto CPyL96;
CPyL211: ;
    CPy_DecRef(cpy_r_r163.f0);
    CPy_DecRef(cpy_r_r163.f1);
    CPy_DecRef(cpy_r_r163.f2);
    goto CPyL101;
CPyL212: ;
    CPy_DecRef(cpy_r_r177);
    goto CPyL111;
CPyL213: ;
    CPy_DecRef(cpy_r_r163.f0);
    CPy_DecRef(cpy_r_r163.f1);
    CPy_DecRef(cpy_r_r163.f2);
    goto CPyL108;
CPyL214: ;
    CPy_DecRef(cpy_r_r163.f0);
    CPy_DecRef(cpy_r_r163.f1);
    CPy_DecRef(cpy_r_r163.f2);
    goto CPyL110;
CPyL215: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r134);
    CPyTagged_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    goto CPyL124;
CPyL216: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r134);
    CPyTagged_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r195);
    goto CPyL116;
CPyL217: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPyTagged_DecRef(cpy_r_r134);
    CPyTagged_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r195);
    goto CPyL124;
CPyL218: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r200);
    goto CPyL124;
CPyL219: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r150);
    goto CPyL124;
CPyL220: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r207);
    goto CPyL124;
CPyL221: ;
    CPy_DecRef(cpy_r_r216);
    goto CPyL133;
CPyL222: ;
    CPy_DecRef(cpy_r_r213.f0);
    CPy_DecRef(cpy_r_r213.f1);
    CPy_DecRef(cpy_r_r213.f2);
    goto CPyL130;
CPyL223: ;
    CPy_DecRef(cpy_r_r213.f0);
    CPy_DecRef(cpy_r_r213.f1);
    CPy_DecRef(cpy_r_r213.f2);
    goto CPyL132;
CPyL224: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r212);
    goto CPyL167;
CPyL225: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r212);
    goto CPyL140;
CPyL226: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    goto CPyL167;
CPyL227: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r212);
    goto CPyL167;
CPyL228: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r212);
    CPy_DECREF(cpy_r_r257);
    goto CPyL149;
CPyL229: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r212);
    CPy_DecRef(cpy_r_r258);
    goto CPyL167;
CPyL230: ;
    CPy_DECREF(cpy_r_initial_address);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_address_list);
    CPy_DECREF(cpy_r_last_step);
    CPy_DECREF(cpy_r_r212);
    CPy_DECREF(cpy_r_r258);
    CPy_DECREF(cpy_r_r260);
    goto CPyL153;
CPyL231: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r212);
    CPy_DecRef(cpy_r_r260);
    goto CPyL167;
CPyL232: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r212);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r267);
    goto CPyL167;
CPyL233: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r212);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r271);
    goto CPyL167;
CPyL234: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r271);
    goto CPyL167;
CPyL235: ;
    CPy_DecRef(cpy_r_initial_address);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_address_list);
    CPy_DecRef(cpy_r_last_step);
    CPy_DecRef(cpy_r_r271);
    CPy_DecRef(cpy_r_r276);
    goto CPyL167;
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
        goto __LL10;
    }
    if (PyUnicode_Check(obj_initial_address))
        arg_initial_address = obj_initial_address;
    else {
        arg_initial_address = NULL;
    }
    if (arg_initial_address != NULL) goto __LL10;
    if (obj_initial_address == Py_None)
        arg_initial_address = obj_initial_address;
    else {
        arg_initial_address = NULL;
    }
    if (arg_initial_address != NULL) goto __LL10;
    CPy_TypeError("str or None", obj_initial_address); 
    goto fail;
__LL10: ;
    PyObject *retval = CPyDef_main___decode_traceTransaction(arg_struct_logs, arg_topic_map, arg_allow_undecoded, arg_initial_address);
    return retval;
fail: ;
    CPy_AddTraceback("eth_event/main.py", "decode_traceTransaction", 297, CPyStatic_main___globals);
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
    cpy_r_r0 = CPyStatics[40]; /* '0x' */
    cpy_r_r1 = CPyStatic_main___HexBytes;
    if (likely(cpy_r_r1 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 397, CPyStatic_main___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL3: ;
    PyObject *cpy_r_r3[1] = {cpy_r_value};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r4, 1, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 397, CPyStatic_main___globals);
        goto CPyL8;
    }
    cpy_r_r6 = CPyStatics[49]; /* 'hex' */
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 397, CPyStatic_main___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r5);
    cpy_r_r10 = PyObject_Str(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 397, CPyStatic_main___globals);
        goto CPyL8;
    }
    cpy_r_r11 = CPyStr_Build(2, cpy_r_r0, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_0xstring", 397, CPyStatic_main___globals);
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
    CPy_AddTraceback("eth_event/main.py", "_0xstring", 396, CPyStatic_main___globals);
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
    char cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_tuple_match;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r__array;
    PyObject *cpy_r__size;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_tuple_type_tail;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyPtr cpy_r_r52;
    int64_t cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    int64_t cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 401, CPyStatic_main___globals);
        goto CPyL35;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_abi_params)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL34;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r1 >> 1;
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_abi_params)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r6 * 8;
    cpy_r_r10 = cpy_r_r8 + cpy_r_r9;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyStatics[23]; /* 'type' */
    cpy_r_r13 = PyObject_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 406, CPyStatic_main___globals);
        goto CPyL36;
    }
    cpy_r_r14 = CPyStatic_main____tuple_match;
    if (unlikely(cpy_r_r14 == NULL)) {
        goto CPyL37;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_tuple_match\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 407, CPyStatic_main___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL7: ;
    PyObject *cpy_r_r16[1] = {cpy_r_r13};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r17, 1, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 407, CPyStatic_main___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r18);
    cpy_r_tuple_match = cpy_r_r18;
    cpy_r_r19 = PyObject_IsTrue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 407, CPyStatic_main___globals);
        goto CPyL39;
    }
    cpy_r_r21 = cpy_r_r19;
    if (cpy_r_r21) {
        goto CPyL40;
    } else
        goto CPyL41;
CPyL10: ;
    cpy_r_r22 = cpy_r_tuple_match;
    cpy_r_r23 = CPyStatics[51]; /* 'group' */
    cpy_r_r24 = CPyStatics[128]; /* 1 */
    cpy_r_r25 = CPyStatics[129]; /* 2 */
    PyObject *cpy_r_r26[3] = {cpy_r_r22, cpy_r_r24, cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r27, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 408, CPyStatic_main___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r22);
    if (likely(PyTuple_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 408, CPyStatic_main___globals, "tuple", cpy_r_r28);
        goto CPyL36;
    }
    cpy_r_r30 = CPySequence_CheckUnpackCount(cpy_r_r29, 2);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 408, CPyStatic_main___globals);
        goto CPyL43;
    }
    cpy_r_r32 = CPySequenceTuple_GetItem(cpy_r_r29, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 408, CPyStatic_main___globals);
        goto CPyL43;
    }
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_r29, 2);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 408, CPyStatic_main___globals);
        goto CPyL44;
    }
    cpy_r__array = cpy_r_r32;
    cpy_r__size = cpy_r_r33;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r__array != cpy_r_r34;
    CPy_DECREF(cpy_r__array);
    if (!cpy_r_r35) goto CPyL45;
    cpy_r_r36 = CPyStatics[52]; /* '[' */
    cpy_r_r37 = PyObject_Str(cpy_r__size);
    CPy_DECREF(cpy_r__size);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 409, CPyStatic_main___globals);
        goto CPyL36;
    }
    cpy_r_r38 = CPyStatics[53]; /* ']' */
    cpy_r_r39 = CPyStr_Build(3, cpy_r_r36, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 409, CPyStatic_main___globals);
        goto CPyL36;
    }
    cpy_r_r40 = cpy_r_r39;
    goto CPyL21;
CPyL20: ;
    cpy_r_r41 = CPyStatics[47]; /* '' */
    CPy_INCREF(cpy_r_r41);
    cpy_r_r40 = cpy_r_r41;
CPyL21: ;
    cpy_r_tuple_type_tail = cpy_r_r40;
    cpy_r_r42 = CPyStatics[20]; /* '(' */
    cpy_r_r43 = CPyStatics[21]; /* ',' */
    cpy_r_r44 = CPyStatics[54]; /* 'components' */
    cpy_r_r45 = PyObject_GetItem(cpy_r_r11, cpy_r_r44);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 410, CPyStatic_main___globals);
        goto CPyL46;
    }
    if (likely(PyList_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_params", 410, CPyStatic_main___globals, "list", cpy_r_r45);
        goto CPyL46;
    }
    cpy_r_r47 = CPyDef_main____params(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 410, CPyStatic_main___globals);
        goto CPyL46;
    }
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r47)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = PyList_New(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 410, CPyStatic_main___globals);
        goto CPyL47;
    }
    cpy_r_r51 = 0;
CPyL26: ;
    cpy_r_r52 = (CPyPtr)&((PyVarObject *)cpy_r_r47)->ob_size;
    cpy_r_r53 = *(int64_t *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 << 1;
    cpy_r_r55 = (Py_ssize_t)cpy_r_r51 < (Py_ssize_t)cpy_r_r54;
    if (!cpy_r_r55) goto CPyL48;
    cpy_r_r56 = (Py_ssize_t)cpy_r_r51 >> 1;
    cpy_r_r57 = (CPyPtr)&((PyListObject *)cpy_r_r47)->ob_item;
    cpy_r_r58 = *(CPyPtr *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r56 * 8;
    cpy_r_r60 = cpy_r_r58 + cpy_r_r59;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = CPyList_SetItemUnsafe(cpy_r_r50, cpy_r_r51, cpy_r_r61);
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 410, CPyStatic_main___globals);
        goto CPyL49;
    }
    cpy_r_r63 = cpy_r_r51 + 2;
    cpy_r_r51 = cpy_r_r63;
    goto CPyL26;
CPyL29: ;
    cpy_r_r64 = PyUnicode_Join(cpy_r_r43, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 410, CPyStatic_main___globals);
        goto CPyL46;
    }
    cpy_r_r65 = CPyStatics[22]; /* ')' */
    cpy_r_r66 = CPyStr_Build(4, cpy_r_r42, cpy_r_r64, cpy_r_r65, cpy_r_tuple_type_tail);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_tuple_type_tail);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 410, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r67 = PyList_Append(cpy_r_r0, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 410, CPyStatic_main___globals);
        goto CPyL50;
    } else
        goto CPyL33;
CPyL32: ;
    cpy_r_r69 = PyList_Append(cpy_r_r0, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("eth_event/main.py", "_params", 412, CPyStatic_main___globals);
        goto CPyL50;
    }
CPyL33: ;
    cpy_r_r71 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r71;
    goto CPyL2;
CPyL34: ;
    return cpy_r_r0;
CPyL35: ;
    cpy_r_r72 = NULL;
    return cpy_r_r72;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL5;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL35;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_tuple_match);
    goto CPyL35;
CPyL40: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL10;
CPyL41: ;
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_tuple_match);
    goto CPyL32;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r22);
    goto CPyL35;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r29);
    goto CPyL35;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r32);
    goto CPyL35;
CPyL45: ;
    CPy_DECREF(cpy_r__size);
    goto CPyL20;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_tuple_type_tail);
    goto CPyL35;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_tuple_type_tail);
    CPy_DecRef(cpy_r_r47);
    goto CPyL35;
CPyL48: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL29;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_tuple_type_tail);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    goto CPyL35;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL35;
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
    CPy_AddTraceback("eth_event/main.py", "_params", 400, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main____decode(PyObject *cpy_r_inputs, PyObject *cpy_r_topics, PyObject *cpy_r_data) {
    CPyTagged cpy_r_indexed_count;
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    int64_t cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_unindexed_types;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_len_topics;
    int64_t cpy_r_r26;
    char cpy_r_r27;
    int64_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int64_t cpy_r_r38;
    char cpy_r_r39;
    int64_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
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
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    tuple_T2OO cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    CPyPtr cpy_r_r90;
    int64_t cpy_r_r91;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    CPyPtr cpy_r_r99;
    int64_t cpy_r_r100;
    CPyTagged cpy_r_r101;
    CPyTagged cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject **cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject **cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    tuple_T3OOO cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject **cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject **cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject **cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject **cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    CPyTagged cpy_r_r174;
    CPyPtr cpy_r_r175;
    int64_t cpy_r_r176;
    CPyTagged cpy_r_r177;
    char cpy_r_r178;
    int64_t cpy_r_r179;
    CPyPtr cpy_r_r180;
    CPyPtr cpy_r_r181;
    int64_t cpy_r_r182;
    CPyPtr cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    int32_t cpy_r_r188;
    char cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_element;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    CPyPtr cpy_r_r204;
    int64_t cpy_r_r205;
    CPyTagged cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    char cpy_r_r215;
    PyObject **cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    CPyPtr cpy_r_r223;
    CPyPtr cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject **cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_value;
    tuple_T3OOO cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    tuple_T4OOOO cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    int32_t cpy_r_r252;
    char cpy_r_r253;
    int32_t cpy_r_r254;
    char cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    int32_t cpy_r_r259;
    char cpy_r_r260;
    char cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    int32_t cpy_r_r268;
    char cpy_r_r269;
    int32_t cpy_r_r270;
    char cpy_r_r271;
    CPyTagged cpy_r_r272;
    PyObject *cpy_r_r273;
    cpy_r_indexed_count = 0;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_inputs)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL7;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r0 >> 1;
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_inputs)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r5 * 8;
    cpy_r_r9 = cpy_r_r7 + cpy_r_r8;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    CPy_INCREF(cpy_r_r10);
    cpy_r_i = cpy_r_r10;
    cpy_r_r11 = CPyStatics[55]; /* 'indexed' */
    cpy_r_r12 = PyObject_GetItem(cpy_r_i, cpy_r_r11);
    CPy_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 420, CPyStatic_main___globals);
        goto CPyL153;
    }
    cpy_r_r13 = PyObject_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 420, CPyStatic_main___globals);
        goto CPyL153;
    }
    cpy_r_r15 = cpy_r_r13;
    if (!cpy_r_r15) goto CPyL6;
    cpy_r_r16 = CPyTagged_Add(cpy_r_indexed_count, 2);
    CPyTagged_DECREF(cpy_r_indexed_count);
    cpy_r_indexed_count = cpy_r_r16;
CPyL6: ;
    cpy_r_r17 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r17;
    goto CPyL1;
CPyL7: ;
    cpy_r_r18 = cpy_r_indexed_count != 0;
    if (!cpy_r_r18) goto CPyL10;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (cpy_r_r22) {
        goto CPyL10;
    } else
        goto CPyL154;
CPyL9: ;
    CPy_INCREF(cpy_r_inputs);
    cpy_r_unindexed_types = cpy_r_inputs;
    goto CPyL36;
CPyL10: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_len_topics = cpy_r_r25;
    cpy_r_r26 = cpy_r_indexed_count & 1;
    cpy_r_r27 = cpy_r_r26 != 0;
    if (cpy_r_r27) goto CPyL12;
    cpy_r_r28 = cpy_r_len_topics & 1;
    cpy_r_r29 = cpy_r_r28 != 0;
    if (!cpy_r_r29) goto CPyL13;
CPyL12: ;
    cpy_r_r30 = CPyTagged_IsLt_(cpy_r_indexed_count, cpy_r_len_topics);
    if (cpy_r_r30) {
        goto CPyL155;
    } else
        goto CPyL18;
CPyL13: ;
    cpy_r_r31 = (Py_ssize_t)cpy_r_indexed_count < (Py_ssize_t)cpy_r_len_topics;
    if (cpy_r_r31) {
        goto CPyL155;
    } else
        goto CPyL18;
CPyL14: ;
    cpy_r_r32 = CPyStatics[56]; /* ('Event log does not contain enough topics for the given '
                                   'ABI - this is usually because an event argument is not '
                                   'marked as indexed') */
    cpy_r_r33 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r34[1] = {cpy_r_r32};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 1, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 431, CPyStatic_main___globals);
        goto CPyL152;
    }
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_main___EventError))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 431, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r36);
        goto CPyL152;
    }
    CPy_Raise(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 431, CPyStatic_main___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r38 = cpy_r_indexed_count & 1;
    cpy_r_r39 = cpy_r_r38 != 0;
    if (cpy_r_r39) goto CPyL20;
    cpy_r_r40 = cpy_r_len_topics & 1;
    cpy_r_r41 = cpy_r_r40 != 0;
    if (!cpy_r_r41) goto CPyL21;
CPyL20: ;
    cpy_r_r42 = CPyTagged_IsLt_(cpy_r_len_topics, cpy_r_indexed_count);
    cpy_r_r43 = cpy_r_r42;
    goto CPyL22;
CPyL21: ;
    cpy_r_r44 = (Py_ssize_t)cpy_r_indexed_count > (Py_ssize_t)cpy_r_len_topics;
    cpy_r_r43 = cpy_r_r44;
CPyL22: ;
    CPyTagged_DECREF(cpy_r_indexed_count);
    CPyTagged_DECREF(cpy_r_len_topics);
    if (!cpy_r_r43) goto CPyL27;
    cpy_r_r45 = CPyStatics[57]; /* ('Event log contains more topics than expected for the '
                                   'given ABI - this is usually because an event argument '
                                   'is incorrectly marked as indexed') */
    cpy_r_r46 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r47[1] = {cpy_r_r45};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r48, 1, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 436, CPyStatic_main___globals);
        goto CPyL152;
    }
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_main___EventError))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 436, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r49);
        goto CPyL152;
    }
    CPy_Raise(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 436, CPyStatic_main___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r51 = PyList_New(0);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 440, CPyStatic_main___globals);
        goto CPyL152;
    }
    cpy_r_r52 = 0;
CPyL29: ;
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_inputs)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = (Py_ssize_t)cpy_r_r52 < (Py_ssize_t)cpy_r_r55;
    if (!cpy_r_r56) goto CPyL35;
    cpy_r_r57 = (Py_ssize_t)cpy_r_r52 >> 1;
    cpy_r_r58 = (CPyPtr)&((PyListObject *)cpy_r_inputs)->ob_item;
    cpy_r_r59 = *(CPyPtr *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r57 * 8;
    cpy_r_r61 = cpy_r_r59 + cpy_r_r60;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[55]; /* 'indexed' */
    cpy_r_r64 = PyObject_GetItem(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 440, CPyStatic_main___globals);
        goto CPyL156;
    }
    cpy_r_r65 = PyObject_Not(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 440, CPyStatic_main___globals);
        goto CPyL156;
    }
    cpy_r_r67 = cpy_r_r65;
    if (!cpy_r_r67) goto CPyL157;
    cpy_r_r68 = PyList_Append(cpy_r_r51, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 440, CPyStatic_main___globals);
        goto CPyL158;
    }
CPyL34: ;
    cpy_r_r70 = cpy_r_r52 + 2;
    cpy_r_r52 = cpy_r_r70;
    goto CPyL29;
CPyL35: ;
    cpy_r_unindexed_types = cpy_r_r51;
CPyL36: ;
    cpy_r_r71 = CPyDef_main____params(cpy_r_unindexed_types);
    CPy_DECREF(cpy_r_unindexed_types);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 444, CPyStatic_main___globals);
        goto CPyL38;
    }
    cpy_r_unindexed_types = cpy_r_r71;
    goto CPyL49;
CPyL38: ;
    cpy_r_r72 = CPy_CatchError();
    cpy_r_r73 = CPyModule_builtins;
    cpy_r_r74 = CPyStatics[26]; /* 'KeyError' */
    cpy_r_r75 = CPyObject_GetAttr(cpy_r_r73, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 445, CPyStatic_main___globals);
        goto CPyL47;
    }
    cpy_r_r76 = CPyModule_builtins;
    cpy_r_r77 = CPyStatics[15]; /* 'TypeError' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 445, CPyStatic_main___globals);
        goto CPyL159;
    }
    cpy_r_r79.f0 = cpy_r_r75;
    cpy_r_r79.f1 = cpy_r_r78;
    cpy_r_r80 = PyTuple_New(2);
    if (unlikely(cpy_r_r80 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp11 = cpy_r_r79.f0;
    PyTuple_SET_ITEM(cpy_r_r80, 0, __tmp11);
    PyObject *__tmp12 = cpy_r_r79.f1;
    PyTuple_SET_ITEM(cpy_r_r80, 1, __tmp12);
    cpy_r_r81 = CPy_ExceptionMatches(cpy_r_r80);
    CPy_DecRef(cpy_r_r80);
    if (!cpy_r_r81) goto CPyL45;
    cpy_r_r82 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r82;
    CPy_DecRef(cpy_r_e);
    cpy_r_r83 = CPyStatics[27]; /* 'Invalid ABI' */
    cpy_r_r84 = (PyObject *)CPyType_main___ABIError;
    PyObject *cpy_r_r85[1] = {cpy_r_r83};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = _PyObject_Vectorcall(cpy_r_r84, cpy_r_r86, 1, 0);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 446, CPyStatic_main___globals);
        goto CPyL47;
    }
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_main___ABIError))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 446, CPyStatic_main___globals, "eth_event.main.ABIError", cpy_r_r87);
        goto CPyL47;
    }
    CPy_Raise(cpy_r_r88);
    CPy_DecRef(cpy_r_r88);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 446, CPyStatic_main___globals);
        goto CPyL47;
    } else
        goto CPyL160;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL47;
    } else
        goto CPyL161;
CPyL46: ;
    CPy_Unreachable();
CPyL47: ;
    CPy_RestoreExcInfo(cpy_r_r72);
    CPy_DecRef(cpy_r_r72.f0);
    CPy_DecRef(cpy_r_r72.f1);
    CPy_DecRef(cpy_r_r72.f2);
    cpy_r_r89 = CPy_KeepPropagating();
    if (!cpy_r_r89) goto CPyL152;
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r90 = (CPyPtr)&((PyVarObject *)cpy_r_unindexed_types)->ob_size;
    cpy_r_r91 = *(int64_t *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 << 1;
    cpy_r_r93 = cpy_r_r92 != 0;
    if (!cpy_r_r93) goto CPyL162;
    cpy_r_r94 = CPyStatics[40]; /* '0x' */
    cpy_r_r95 = PyObject_RichCompare(cpy_r_data, cpy_r_r94, 2);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 448, CPyStatic_main___globals);
        goto CPyL163;
    }
    cpy_r_r96 = PyObject_IsTrue(cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 448, CPyStatic_main___globals);
        goto CPyL163;
    }
    cpy_r_r98 = cpy_r_r96;
    if (!cpy_r_r98) goto CPyL162;
    cpy_r_r99 = (CPyPtr)&((PyVarObject *)cpy_r_unindexed_types)->ob_size;
    cpy_r_r100 = *(int64_t *)cpy_r_r99;
    cpy_r_r101 = cpy_r_r100 << 1;
    cpy_r_r102 = CPyTagged_Multiply(cpy_r_r101, 64);
    cpy_r_r103 = CPyTagged_StealAsObject(cpy_r_r102);
    cpy_r_r104 = CPyDef_main____0xstring(cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 450, CPyStatic_main___globals);
        goto CPyL163;
    }
    cpy_r_data = cpy_r_r104;
CPyL55: ;
    cpy_r_r105 = CPyStatic_main___globals;
    cpy_r_r106 = CPyStatics[58]; /* 'eth_abi' */
    cpy_r_r107 = CPyDict_GetItem(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 453, CPyStatic_main___globals);
        goto CPyL164;
    }
    cpy_r_r108 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r108 == NULL)) {
        goto CPyL165;
    } else
        goto CPyL59;
CPyL57: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r109 = 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 453, CPyStatic_main___globals);
        goto CPyL66;
    }
    CPy_Unreachable();
CPyL59: ;
    PyObject *cpy_r_r110[1] = {cpy_r_data};
    cpy_r_r111 = (PyObject **)&cpy_r_r110;
    cpy_r_r112 = _PyObject_Vectorcall(cpy_r_r108, cpy_r_r111, 1, 0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 453, CPyStatic_main___globals);
        goto CPyL166;
    }
    CPy_DECREF(cpy_r_data);
    cpy_r_r113 = CPyStatics[59]; /* 'decode' */
    PyObject *cpy_r_r114[3] = {cpy_r_r107, cpy_r_unindexed_types, cpy_r_r112};
    cpy_r_r115 = (PyObject **)&cpy_r_r114;
    cpy_r_r116 = PyObject_VectorcallMethod(cpy_r_r113, cpy_r_r115, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 453, CPyStatic_main___globals);
        goto CPyL167;
    }
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_unindexed_types);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r117 = PySequence_List(cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 453, CPyStatic_main___globals);
        goto CPyL66;
    }
    cpy_r_r118 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r119 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r120 = CPyStatics[123]; /* -1 */
    cpy_r_r121 = PySlice_New(cpy_r_r118, cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 453, CPyStatic_main___globals);
        goto CPyL168;
    }
    cpy_r_r122 = PyObject_GetItem(cpy_r_r117, cpy_r_r121);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 453, CPyStatic_main___globals);
        goto CPyL66;
    }
    if (likely(PyList_Check(cpy_r_r122)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 453, CPyStatic_main___globals, "list", cpy_r_r122);
        goto CPyL66;
    }
    goto CPyL95;
CPyL66: ;
    cpy_r_r124 = CPy_CatchError();
    cpy_r_r125 = CPyStatic_main___globals;
    cpy_r_r126 = CPyStatics[60]; /* 'InsufficientDataBytes' */
    cpy_r_r127 = CPyDict_GetItem(cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 454, CPyStatic_main___globals);
        goto CPyL93;
    }
    cpy_r_r128 = CPy_ExceptionMatches(cpy_r_r127);
    CPy_DecRef(cpy_r_r127);
    if (!cpy_r_r128) goto CPyL72;
    cpy_r_r129 = CPyStatics[61]; /* 'Event data has insufficient length' */
    cpy_r_r130 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r131[1] = {cpy_r_r129};
    cpy_r_r132 = (PyObject **)&cpy_r_r131;
    cpy_r_r133 = _PyObject_Vectorcall(cpy_r_r130, cpy_r_r132, 1, 0);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 455, CPyStatic_main___globals);
        goto CPyL93;
    }
    if (likely(Py_TYPE(cpy_r_r133) == CPyType_main___EventError))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 455, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r133);
        goto CPyL93;
    }
    CPy_Raise(cpy_r_r134);
    CPy_DecRef(cpy_r_r134);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 455, CPyStatic_main___globals);
        goto CPyL93;
    } else
        goto CPyL169;
CPyL71: ;
    CPy_Unreachable();
CPyL72: ;
    cpy_r_r135 = CPyStatic_main___globals;
    cpy_r_r136 = CPyStatics[62]; /* 'NonEmptyPaddingBytes' */
    cpy_r_r137 = CPyDict_GetItem(cpy_r_r135, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 456, CPyStatic_main___globals);
        goto CPyL93;
    }
    cpy_r_r138 = CPy_ExceptionMatches(cpy_r_r137);
    CPy_DecRef(cpy_r_r137);
    if (!cpy_r_r138) goto CPyL78;
    cpy_r_r139 = CPyStatics[63]; /* 'Malformed data field in event log' */
    cpy_r_r140 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r141[1] = {cpy_r_r139};
    cpy_r_r142 = (PyObject **)&cpy_r_r141;
    cpy_r_r143 = _PyObject_Vectorcall(cpy_r_r140, cpy_r_r142, 1, 0);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 457, CPyStatic_main___globals);
        goto CPyL93;
    }
    if (likely(Py_TYPE(cpy_r_r143) == CPyType_main___EventError))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 457, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r143);
        goto CPyL93;
    }
    CPy_Raise(cpy_r_r144);
    CPy_DecRef(cpy_r_r144);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 457, CPyStatic_main___globals);
        goto CPyL93;
    } else
        goto CPyL170;
CPyL77: ;
    CPy_Unreachable();
CPyL78: ;
    cpy_r_r145 = CPyStatic_main___globals;
    cpy_r_r146 = CPyStatics[64]; /* 'InvalidPointer' */
    cpy_r_r147 = CPyDict_GetItem(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 458, CPyStatic_main___globals);
        goto CPyL93;
    }
    cpy_r_r148 = CPy_ExceptionMatches(cpy_r_r147);
    CPy_DecRef(cpy_r_r147);
    if (!cpy_r_r148) goto CPyL85;
    cpy_r_r149 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r149;
    cpy_r_r150 = PyObject_Str(cpy_r_e);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 459, CPyStatic_main___globals);
        goto CPyL93;
    }
    cpy_r_r151 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r152[1] = {cpy_r_r150};
    cpy_r_r153 = (PyObject **)&cpy_r_r152;
    cpy_r_r154 = _PyObject_Vectorcall(cpy_r_r151, cpy_r_r153, 1, 0);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 459, CPyStatic_main___globals);
        goto CPyL171;
    }
    CPy_DecRef(cpy_r_r150);
    if (likely(Py_TYPE(cpy_r_r154) == CPyType_main___EventError))
        cpy_r_r155 = cpy_r_r154;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 459, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r154);
        goto CPyL93;
    }
    CPy_Raise(cpy_r_r155);
    CPy_DecRef(cpy_r_r155);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 459, CPyStatic_main___globals);
        goto CPyL93;
    } else
        goto CPyL172;
CPyL84: ;
    CPy_Unreachable();
CPyL85: ;
    cpy_r_r156 = CPyModule_builtins;
    cpy_r_r157 = CPyStatics[65]; /* 'OverflowError' */
    cpy_r_r158 = CPyObject_GetAttr(cpy_r_r156, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 460, CPyStatic_main___globals);
        goto CPyL93;
    }
    cpy_r_r159 = CPy_ExceptionMatches(cpy_r_r158);
    CPy_DecRef(cpy_r_r158);
    if (!cpy_r_r159) goto CPyL91;
    cpy_r_r160 = CPyStatics[66]; /* 'Cannot decode event due to overflow error' */
    cpy_r_r161 = (PyObject *)CPyType_main___EventError;
    PyObject *cpy_r_r162[1] = {cpy_r_r160};
    cpy_r_r163 = (PyObject **)&cpy_r_r162;
    cpy_r_r164 = _PyObject_Vectorcall(cpy_r_r161, cpy_r_r163, 1, 0);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 461, CPyStatic_main___globals);
        goto CPyL93;
    }
    if (likely(Py_TYPE(cpy_r_r164) == CPyType_main___EventError))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 461, CPyStatic_main___globals, "eth_event.main.EventError", cpy_r_r164);
        goto CPyL93;
    }
    CPy_Raise(cpy_r_r165);
    CPy_DecRef(cpy_r_r165);
    if (unlikely(!0)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 461, CPyStatic_main___globals);
        goto CPyL93;
    } else
        goto CPyL173;
CPyL90: ;
    CPy_Unreachable();
CPyL91: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL93;
    } else
        goto CPyL174;
CPyL92: ;
    CPy_Unreachable();
CPyL93: ;
    CPy_RestoreExcInfo(cpy_r_r124);
    CPy_DecRef(cpy_r_r124.f0);
    CPy_DecRef(cpy_r_r124.f1);
    CPy_DecRef(cpy_r_r124.f2);
    cpy_r_r166 = CPy_KeepPropagating();
    if (!cpy_r_r166) goto CPyL152;
    CPy_Unreachable();
CPyL95: ;
    cpy_r_r167 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r168 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r169 = CPyStatics[123]; /* -1 */
    cpy_r_r170 = PySlice_New(cpy_r_r167, cpy_r_r168, cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 464, CPyStatic_main___globals);
        goto CPyL175;
    }
    cpy_r_r171 = PyObject_GetItem(cpy_r_topics, cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 464, CPyStatic_main___globals);
        goto CPyL175;
    }
    if (likely(PyList_Check(cpy_r_r171)))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 464, CPyStatic_main___globals, "list", cpy_r_r171);
        goto CPyL175;
    }
    cpy_r_topics = cpy_r_r172;
    cpy_r_r173 = PyList_New(0);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 465, CPyStatic_main___globals);
        goto CPyL176;
    }
    cpy_r_r174 = 0;
CPyL100: ;
    cpy_r_r175 = (CPyPtr)&((PyVarObject *)cpy_r_inputs)->ob_size;
    cpy_r_r176 = *(int64_t *)cpy_r_r175;
    cpy_r_r177 = cpy_r_r176 << 1;
    cpy_r_r178 = (Py_ssize_t)cpy_r_r174 < (Py_ssize_t)cpy_r_r177;
    if (!cpy_r_r178) goto CPyL177;
    cpy_r_r179 = (Py_ssize_t)cpy_r_r174 >> 1;
    cpy_r_r180 = (CPyPtr)&((PyListObject *)cpy_r_inputs)->ob_item;
    cpy_r_r181 = *(CPyPtr *)cpy_r_r180;
    cpy_r_r182 = cpy_r_r179 * 8;
    cpy_r_r183 = cpy_r_r181 + cpy_r_r182;
    cpy_r_r184 = *(PyObject * *)cpy_r_r183;
    CPy_INCREF(cpy_r_r184);
    cpy_r_i = cpy_r_r184;
    cpy_r_r185 = CPyStatics[23]; /* 'type' */
    cpy_r_r186 = PyObject_GetItem(cpy_r_i, cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 467, CPyStatic_main___globals);
        goto CPyL178;
    }
    cpy_r_r187 = CPyStatics[54]; /* 'components' */
    cpy_r_r188 = PySequence_Contains(cpy_r_i, cpy_r_r187);
    cpy_r_r189 = cpy_r_r188 >= 0;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 469, CPyStatic_main___globals);
        goto CPyL179;
    }
    cpy_r_r190 = cpy_r_r188;
    if (!cpy_r_r190) goto CPyL108;
    cpy_r_r191 = CPyStatics[19]; /* 'name' */
    cpy_r_r192 = CPyStatics[19]; /* 'name' */
    cpy_r_r193 = PyObject_GetItem(cpy_r_i, cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 470, CPyStatic_main___globals);
        goto CPyL179;
    }
    cpy_r_r194 = CPyStatics[23]; /* 'type' */
    cpy_r_r195 = CPyStatics[54]; /* 'components' */
    cpy_r_r196 = CPyStatics[54]; /* 'components' */
    cpy_r_r197 = PyObject_GetItem(cpy_r_i, cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 470, CPyStatic_main___globals);
        goto CPyL180;
    }
    cpy_r_r198 = CPyDict_Build(3, cpy_r_r191, cpy_r_r193, cpy_r_r194, cpy_r_r186, cpy_r_r195, cpy_r_r197);
    CPy_DECREF(cpy_r_r193);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 470, CPyStatic_main___globals);
        goto CPyL179;
    }
    cpy_r_element = cpy_r_r198;
    goto CPyL111;
CPyL108: ;
    cpy_r_r199 = CPyStatics[19]; /* 'name' */
    cpy_r_r200 = CPyStatics[19]; /* 'name' */
    cpy_r_r201 = PyObject_GetItem(cpy_r_i, cpy_r_r200);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals);
        goto CPyL179;
    }
    cpy_r_r202 = CPyStatics[23]; /* 'type' */
    cpy_r_r203 = CPyDict_Build(2, cpy_r_r199, cpy_r_r201, cpy_r_r202, cpy_r_r186);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 472, CPyStatic_main___globals);
        goto CPyL179;
    }
    cpy_r_element = cpy_r_r203;
CPyL111: ;
    cpy_r_r204 = (CPyPtr)&((PyVarObject *)cpy_r_topics)->ob_size;
    cpy_r_r205 = *(int64_t *)cpy_r_r204;
    cpy_r_r206 = cpy_r_r205 << 1;
    cpy_r_r207 = cpy_r_r206 != 0;
    if (!cpy_r_r207) goto CPyL181;
    cpy_r_r208 = CPyStatics[55]; /* 'indexed' */
    cpy_r_r209 = PyObject_GetItem(cpy_r_i, cpy_r_r208);
    CPy_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 474, CPyStatic_main___globals);
        goto CPyL182;
    }
    cpy_r_r210 = PyObject_IsTrue(cpy_r_r209);
    CPy_DECREF(cpy_r_r209);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 474, CPyStatic_main___globals);
        goto CPyL182;
    }
    cpy_r_r212 = cpy_r_r210;
    if (!cpy_r_r212) goto CPyL183;
    cpy_r_r213 = CPyList_PopLast(cpy_r_topics);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 475, CPyStatic_main___globals);
        goto CPyL182;
    }
    cpy_r_r214 = CPyStatic_main___HexBytes;
    if (unlikely(cpy_r_r214 == NULL)) {
        goto CPyL184;
    } else
        goto CPyL119;
CPyL117: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HexBytes\" was not set");
    cpy_r_r215 = 0;
    if (unlikely(!cpy_r_r215)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 475, CPyStatic_main___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL119: ;
    PyObject *cpy_r_r216[1] = {cpy_r_r213};
    cpy_r_r217 = (PyObject **)&cpy_r_r216;
    cpy_r_r218 = _PyObject_Vectorcall(cpy_r_r214, cpy_r_r217, 1, 0);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 475, CPyStatic_main___globals);
        goto CPyL185;
    }
    CPy_DECREF(cpy_r_r213);
    cpy_r_r219 = CPyStatic_main___globals;
    cpy_r_r220 = CPyStatics[58]; /* 'eth_abi' */
    cpy_r_r221 = CPyDict_GetItem(cpy_r_r219, cpy_r_r220);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 477, CPyStatic_main___globals);
        goto CPyL186;
    }
    cpy_r_r222 = PyList_New(1);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 477, CPyStatic_main___globals);
        goto CPyL187;
    }
    cpy_r_r223 = (CPyPtr)&((PyListObject *)cpy_r_r222)->ob_item;
    cpy_r_r224 = *(CPyPtr *)cpy_r_r223;
    *(PyObject * *)cpy_r_r224 = cpy_r_r186;
    cpy_r_r225 = CPyStatics[59]; /* 'decode' */
    PyObject *cpy_r_r226[3] = {cpy_r_r221, cpy_r_r222, cpy_r_r218};
    cpy_r_r227 = (PyObject **)&cpy_r_r226;
    cpy_r_r228 = PyObject_VectorcallMethod(cpy_r_r225, cpy_r_r227, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 477, CPyStatic_main___globals);
        goto CPyL188;
    }
    CPy_DECREF(cpy_r_r221);
    CPy_DECREF(cpy_r_r222);
    cpy_r_r229 = CPyStatics[130]; /* 0 */
    cpy_r_r230 = PyObject_GetItem(cpy_r_r228, cpy_r_r229);
    CPy_DECREF(cpy_r_r228);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 477, CPyStatic_main___globals);
        goto CPyL126;
    } else
        goto CPyL189;
CPyL125: ;
    cpy_r_value = cpy_r_r230;
    goto CPyL142;
CPyL126: ;
    cpy_r_r231 = CPy_CatchError();
    cpy_r_r232 = CPyStatic_main___globals;
    cpy_r_r233 = CPyStatics[60]; /* 'InsufficientDataBytes' */
    cpy_r_r234 = CPyDict_GetItem(cpy_r_r232, cpy_r_r233);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals);
        goto CPyL190;
    }
    cpy_r_r235 = CPyStatic_main___globals;
    cpy_r_r236 = CPyStatics[67]; /* 'NoEntriesFound' */
    cpy_r_r237 = CPyDict_GetItem(cpy_r_r235, cpy_r_r236);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals);
        goto CPyL191;
    }
    cpy_r_r238 = CPyModule_builtins;
    cpy_r_r239 = CPyStatics[65]; /* 'OverflowError' */
    cpy_r_r240 = CPyObject_GetAttr(cpy_r_r238, cpy_r_r239);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals);
        goto CPyL192;
    }
    cpy_r_r241 = CPyStatic_main___globals;
    cpy_r_r242 = CPyStatics[64]; /* 'InvalidPointer' */
    cpy_r_r243 = CPyDict_GetItem(cpy_r_r241, cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 478, CPyStatic_main___globals);
        goto CPyL193;
    }
    cpy_r_r244.f0 = cpy_r_r234;
    cpy_r_r244.f1 = cpy_r_r237;
    cpy_r_r244.f2 = cpy_r_r240;
    cpy_r_r244.f3 = cpy_r_r243;
    cpy_r_r245 = PyTuple_New(4);
    if (unlikely(cpy_r_r245 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp13 = cpy_r_r244.f0;
    PyTuple_SET_ITEM(cpy_r_r245, 0, __tmp13);
    PyObject *__tmp14 = cpy_r_r244.f1;
    PyTuple_SET_ITEM(cpy_r_r245, 1, __tmp14);
    PyObject *__tmp15 = cpy_r_r244.f2;
    PyTuple_SET_ITEM(cpy_r_r245, 2, __tmp15);
    PyObject *__tmp16 = cpy_r_r244.f3;
    PyTuple_SET_ITEM(cpy_r_r245, 3, __tmp16);
    cpy_r_r246 = CPy_ExceptionMatches(cpy_r_r245);
    CPy_DecRef(cpy_r_r245);
    if (!cpy_r_r246) goto CPyL194;
    cpy_r_r247 = CPyStatics[68]; /* 'value' */
    cpy_r_r248 = CPyDef_main____0xstring(cpy_r_r218);
    CPy_DecRef(cpy_r_r218);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 480, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r249 = CPyStatics[32]; /* 'decoded' */
    cpy_r_r250 = 0 ? Py_True : Py_False;
    cpy_r_r251 = CPyDict_Build(2, cpy_r_r247, cpy_r_r248, cpy_r_r249, cpy_r_r250);
    CPy_DecRef(cpy_r_r248);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 480, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r252 = CPyDict_Update(cpy_r_element, cpy_r_r251);
    CPy_DecRef(cpy_r_r251);
    cpy_r_r253 = cpy_r_r252 >= 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 480, CPyStatic_main___globals);
        goto CPyL195;
    }
    cpy_r_r254 = PyList_Append(cpy_r_r173, cpy_r_element);
    CPy_DecRef(cpy_r_element);
    cpy_r_r255 = cpy_r_r254 >= 0;
    if (unlikely(!cpy_r_r255)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 481, CPyStatic_main___globals);
        goto CPyL196;
    }
    CPy_RestoreExcInfo(cpy_r_r231);
    CPy_DecRef(cpy_r_r231.f0);
    CPy_DecRef(cpy_r_r231.f1);
    CPy_DecRef(cpy_r_r231.f2);
    goto CPyL150;
CPyL136: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL138;
    } else
        goto CPyL197;
CPyL137: ;
    CPy_Unreachable();
CPyL138: ;
    CPy_RestoreExcInfo(cpy_r_r231);
    CPy_DecRef(cpy_r_r231.f0);
    CPy_DecRef(cpy_r_r231.f1);
    CPy_DecRef(cpy_r_r231.f2);
    cpy_r_r256 = CPy_KeepPropagating();
    if (!cpy_r_r256) goto CPyL152;
    CPy_Unreachable();
CPyL140: ;
    cpy_r_r257 = CPyList_PopLast(cpy_r_r123);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 484, CPyStatic_main___globals);
        goto CPyL198;
    }
    cpy_r_value = cpy_r_r257;
CPyL142: ;
    cpy_r_r258 = (PyObject *)&PyBytes_Type;
    cpy_r_r259 = PyObject_IsInstance(cpy_r_value, cpy_r_r258);
    cpy_r_r260 = cpy_r_r259 >= 0;
    if (unlikely(!cpy_r_r260)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 486, CPyStatic_main___globals);
        goto CPyL199;
    }
    cpy_r_r261 = cpy_r_r259;
    if (!cpy_r_r261) goto CPyL147;
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r262 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "_decode", 487, CPyStatic_main___globals, "bytes", cpy_r_value);
        goto CPyL198;
    }
    cpy_r_r263 = CPyDef_main____0xstring(cpy_r_r262);
    CPy_DECREF(cpy_r_r262);
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 487, CPyStatic_main___globals);
        goto CPyL198;
    }
    cpy_r_value = cpy_r_r263;
CPyL147: ;
    cpy_r_r264 = CPyStatics[68]; /* 'value' */
    cpy_r_r265 = CPyStatics[32]; /* 'decoded' */
    cpy_r_r266 = 1 ? Py_True : Py_False;
    cpy_r_r267 = CPyDict_Build(2, cpy_r_r264, cpy_r_value, cpy_r_r265, cpy_r_r266);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 489, CPyStatic_main___globals);
        goto CPyL198;
    }
    cpy_r_r268 = CPyDict_Update(cpy_r_element, cpy_r_r267);
    CPy_DECREF(cpy_r_r267);
    cpy_r_r269 = cpy_r_r268 >= 0;
    if (unlikely(!cpy_r_r269)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 489, CPyStatic_main___globals);
        goto CPyL198;
    }
    cpy_r_r270 = PyList_Append(cpy_r_r173, cpy_r_element);
    CPy_DECREF(cpy_r_element);
    cpy_r_r271 = cpy_r_r270 >= 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("eth_event/main.py", "_decode", 490, CPyStatic_main___globals);
        goto CPyL200;
    }
CPyL150: ;
    cpy_r_r272 = cpy_r_r174 + 2;
    cpy_r_r174 = cpy_r_r272;
    goto CPyL100;
CPyL151: ;
    return cpy_r_r173;
CPyL152: ;
    cpy_r_r273 = NULL;
    return cpy_r_r273;
CPyL153: ;
    CPyTagged_DecRef(cpy_r_indexed_count);
    goto CPyL152;
CPyL154: ;
    CPyTagged_DECREF(cpy_r_indexed_count);
    goto CPyL9;
CPyL155: ;
    CPyTagged_DECREF(cpy_r_indexed_count);
    CPyTagged_DECREF(cpy_r_len_topics);
    goto CPyL14;
CPyL156: ;
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r62);
    goto CPyL152;
CPyL157: ;
    CPy_DECREF(cpy_r_r62);
    goto CPyL34;
CPyL158: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL152;
CPyL159: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL47;
CPyL160: ;
    CPy_DecRef(cpy_r_r72.f0);
    CPy_DecRef(cpy_r_r72.f1);
    CPy_DecRef(cpy_r_r72.f2);
    goto CPyL44;
CPyL161: ;
    CPy_DecRef(cpy_r_r72.f0);
    CPy_DecRef(cpy_r_r72.f1);
    CPy_DecRef(cpy_r_r72.f2);
    goto CPyL46;
CPyL162: ;
    CPy_INCREF(cpy_r_data);
    goto CPyL55;
CPyL163: ;
    CPy_DecRef(cpy_r_unindexed_types);
    goto CPyL152;
CPyL164: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_unindexed_types);
    goto CPyL66;
CPyL165: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_unindexed_types);
    CPy_DecRef(cpy_r_r107);
    goto CPyL57;
CPyL166: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_unindexed_types);
    CPy_DecRef(cpy_r_r107);
    goto CPyL66;
CPyL167: ;
    CPy_DecRef(cpy_r_unindexed_types);
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_r112);
    goto CPyL66;
CPyL168: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL66;
CPyL169: ;
    CPy_DecRef(cpy_r_r124.f0);
    CPy_DecRef(cpy_r_r124.f1);
    CPy_DecRef(cpy_r_r124.f2);
    goto CPyL71;
CPyL170: ;
    CPy_DecRef(cpy_r_r124.f0);
    CPy_DecRef(cpy_r_r124.f1);
    CPy_DecRef(cpy_r_r124.f2);
    goto CPyL77;
CPyL171: ;
    CPy_DecRef(cpy_r_r150);
    goto CPyL93;
CPyL172: ;
    CPy_DecRef(cpy_r_r124.f0);
    CPy_DecRef(cpy_r_r124.f1);
    CPy_DecRef(cpy_r_r124.f2);
    goto CPyL84;
CPyL173: ;
    CPy_DecRef(cpy_r_r124.f0);
    CPy_DecRef(cpy_r_r124.f1);
    CPy_DecRef(cpy_r_r124.f2);
    goto CPyL90;
CPyL174: ;
    CPy_DecRef(cpy_r_r124.f0);
    CPy_DecRef(cpy_r_r124.f1);
    CPy_DecRef(cpy_r_r124.f2);
    goto CPyL92;
CPyL175: ;
    CPy_DecRef(cpy_r_r123);
    goto CPyL152;
CPyL176: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    goto CPyL152;
CPyL177: ;
    CPy_DECREF(cpy_r_topics);
    CPy_DECREF(cpy_r_r123);
    goto CPyL151;
CPyL178: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    goto CPyL152;
CPyL179: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r186);
    goto CPyL152;
CPyL180: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r193);
    goto CPyL152;
CPyL181: ;
    CPy_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r186);
    goto CPyL140;
CPyL182: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_element);
    goto CPyL152;
CPyL183: ;
    CPy_DECREF(cpy_r_r186);
    goto CPyL140;
CPyL184: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r213);
    goto CPyL117;
CPyL185: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r213);
    goto CPyL152;
CPyL186: ;
    CPy_DecRef(cpy_r_r186);
    goto CPyL126;
CPyL187: ;
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r221);
    goto CPyL126;
CPyL188: ;
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r222);
    goto CPyL126;
CPyL189: ;
    CPy_DECREF(cpy_r_r218);
    goto CPyL125;
CPyL190: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r218);
    goto CPyL138;
CPyL191: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r234);
    goto CPyL138;
CPyL192: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r234);
    CPy_DecRef(cpy_r_r237);
    goto CPyL138;
CPyL193: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r234);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    goto CPyL138;
CPyL194: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_r218);
    goto CPyL136;
CPyL195: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_element);
    goto CPyL138;
CPyL196: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    goto CPyL138;
CPyL197: ;
    CPy_DecRef(cpy_r_r231.f0);
    CPy_DecRef(cpy_r_r231.f1);
    CPy_DecRef(cpy_r_r231.f2);
    goto CPyL137;
CPyL198: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_element);
    goto CPyL152;
CPyL199: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_element);
    CPy_DecRef(cpy_r_value);
    goto CPyL152;
CPyL200: ;
    CPy_DecRef(cpy_r_topics);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r173);
    goto CPyL152;
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
    CPy_AddTraceback("eth_event/main.py", "_decode", 417, CPyStatic_main___globals);
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
    int32_t cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    int32_t cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject **cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject **cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    int32_t cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
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
    PyObject **cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    int32_t cpy_r_r222;
    char cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    int32_t cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    int32_t cpy_r_r230;
    char cpy_r_r231;
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
    int32_t cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    int32_t cpy_r_r250;
    char cpy_r_r251;
    PyObject **cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject **cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    int32_t cpy_r_r263;
    char cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    tuple_T2OO cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    int32_t cpy_r_r280;
    char cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    tuple_T3OOO cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    int32_t cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    int32_t cpy_r_r298;
    char cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    int32_t cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    int32_t cpy_r_r316;
    char cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    int32_t cpy_r_r323;
    char cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject **cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    int32_t cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    char cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    char cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    char cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject **cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    int32_t cpy_r_r373;
    char cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    int32_t cpy_r_r377;
    char cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    int32_t cpy_r_r381;
    char cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    int32_t cpy_r_r385;
    char cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    int32_t cpy_r_r389;
    char cpy_r_r390;
    PyObject **cpy_r_r392;
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
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    tuple_T2OO cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    int32_t cpy_r_r413;
    char cpy_r_r414;
    char cpy_r_r415;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", -1, CPyStatic_main___globals);
        goto CPyL148;
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
    cpy_r_r13 = CPyStatics[71]; /* 'eth_event/main.py' */
    cpy_r_r14 = CPyStatics[72]; /* '<module>' */
    cpy_r_r15 = CPyImport_ImportMany(cpy_r_r11, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r10);
    if (!cpy_r_r15) goto CPyL148;
    cpy_r_r16 = CPyStatics[135]; /* ('Any', 'Callable', 'Dict', 'Final', 'List', 'Literal',
                                    'Mapping', 'Optional', 'TypedDict', 'Union', 'final',
                                    'overload') */
    cpy_r_r17 = CPyStatics[85]; /* 'typing' */
    cpy_r_r18 = CPyStatic_main___globals;
    cpy_r_r19 = CPyImport_ImportFromMany(cpy_r_r17, cpy_r_r16, cpy_r_r16, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 5, CPyStatic_main___globals);
        goto CPyL148;
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
    cpy_r_r29 = CPyStatics[71]; /* 'eth_event/main.py' */
    cpy_r_r30 = CPyStatics[72]; /* '<module>' */
    cpy_r_r31 = CPyImport_ImportMany(cpy_r_r27, cpy_r_r24, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r26);
    if (!cpy_r_r31) goto CPyL148;
    cpy_r_r32 = CPyStatics[140]; /* ('InsufficientDataBytes', 'NoEntriesFound',
                                    'NonEmptyPaddingBytes') */
    cpy_r_r33 = CPyStatics[88]; /* 'eth_abi.exceptions' */
    cpy_r_r34 = CPyStatic_main___globals;
    cpy_r_r35 = CPyImport_ImportFromMany(cpy_r_r33, cpy_r_r32, cpy_r_r32, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 23, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyModule_eth_abi___exceptions = cpy_r_r35;
    CPy_INCREF(CPyModule_eth_abi___exceptions);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r36 = CPyStatics[141]; /* ('auto',) */
    cpy_r_r37 = CPyStatics[90]; /* 'eth_hash' */
    cpy_r_r38 = CPyStatic_main___globals;
    cpy_r_r39 = CPyImport_ImportFromMany(cpy_r_r37, cpy_r_r36, cpy_r_r36, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 24, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyModule_eth_hash = cpy_r_r39;
    CPy_INCREF(CPyModule_eth_hash);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r40 = CPyStatics[142]; /* ('ChecksumAddress', 'HexAddress', 'HexStr') */
    cpy_r_r41 = CPyStatics[94]; /* 'eth_typing' */
    cpy_r_r42 = CPyStatic_main___globals;
    cpy_r_r43 = CPyImport_ImportFromMany(cpy_r_r41, cpy_r_r40, cpy_r_r40, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 25, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyModule_eth_typing = cpy_r_r43;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r44 = CPyStatics[143]; /* ('InvalidPointer',) */
    cpy_r_r45 = CPyStatics[95]; /* 'eth_event.conditional_imports' */
    cpy_r_r46 = CPyStatic_main___globals;
    cpy_r_r47 = CPyImport_ImportFromMany(cpy_r_r45, cpy_r_r44, cpy_r_r44, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 27, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyModule_eth_event___conditional_imports = cpy_r_r47;
    CPy_INCREF(CPyModule_eth_event___conditional_imports);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r48 = CPyModule_builtins;
    cpy_r_r49 = CPyStatics[96]; /* 'Exception' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 31, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r51 = PyTuple_Pack(1, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 31, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r52 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r53 = (PyObject *)CPyType_main___ABIError_template;
    cpy_r_r54 = CPyType_FromTemplate(cpy_r_r53, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 31, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r55 = CPyStatics[97]; /* '__mypyc_attrs__' */
    cpy_r_r56 = CPyStatics[98]; /* '__dict__' */
    cpy_r_r57 = PyTuple_Pack(1, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 31, CPyStatic_main___globals);
        goto CPyL149;
    }
    cpy_r_r58 = PyObject_SetAttr(cpy_r_r54, cpy_r_r55, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 31, CPyStatic_main___globals);
        goto CPyL149;
    }
    CPyType_main___ABIError = (PyTypeObject *)cpy_r_r54;
    CPy_INCREF(CPyType_main___ABIError);
    cpy_r_r60 = CPyStatic_main___globals;
    cpy_r_r61 = CPyStatics[4]; /* 'ABIError' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 31, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r64 = CPyModule_builtins;
    cpy_r_r65 = CPyStatics[96]; /* 'Exception' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 36, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r67 = PyTuple_Pack(1, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 36, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r68 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r69 = (PyObject *)CPyType_main___EventError_template;
    cpy_r_r70 = CPyType_FromTemplate(cpy_r_r69, cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 36, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r71 = CPyStatics[97]; /* '__mypyc_attrs__' */
    cpy_r_r72 = CPyStatics[98]; /* '__dict__' */
    cpy_r_r73 = PyTuple_Pack(1, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 36, CPyStatic_main___globals);
        goto CPyL150;
    }
    cpy_r_r74 = PyObject_SetAttr(cpy_r_r70, cpy_r_r71, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 36, CPyStatic_main___globals);
        goto CPyL150;
    }
    CPyType_main___EventError = (PyTypeObject *)cpy_r_r70;
    CPy_INCREF(CPyType_main___EventError);
    cpy_r_r76 = CPyStatic_main___globals;
    cpy_r_r77 = CPyStatics[5]; /* 'EventError' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 36, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r80 = CPyModule_builtins;
    cpy_r_r81 = CPyStatics[96]; /* 'Exception' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r83 = PyTuple_Pack(1, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r84 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r85 = (PyObject *)CPyType_main___StructLogError_template;
    cpy_r_r86 = CPyType_FromTemplate(cpy_r_r85, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r87 = CPyStatics[97]; /* '__mypyc_attrs__' */
    cpy_r_r88 = CPyStatics[98]; /* '__dict__' */
    cpy_r_r89 = PyTuple_Pack(1, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL151;
    }
    cpy_r_r90 = PyObject_SetAttr(cpy_r_r86, cpy_r_r87, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL151;
    }
    CPyType_main___StructLogError = (PyTypeObject *)cpy_r_r86;
    CPy_INCREF(CPyType_main___StructLogError);
    cpy_r_r92 = CPyStatic_main___globals;
    cpy_r_r93 = CPyStatics[6]; /* 'StructLogError' */
    cpy_r_r94 = CPyDict_SetItem(cpy_r_r92, cpy_r_r93, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r96 = CPyModule_builtins;
    cpy_r_r97 = CPyStatics[96]; /* 'Exception' */
    cpy_r_r98 = CPyObject_GetAttr(cpy_r_r96, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 46, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r99 = PyTuple_Pack(1, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 46, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r100 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r101 = (PyObject *)CPyType_main___UnknownEvent_template;
    cpy_r_r102 = CPyType_FromTemplate(cpy_r_r101, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 46, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r103 = CPyStatics[97]; /* '__mypyc_attrs__' */
    cpy_r_r104 = CPyStatics[98]; /* '__dict__' */
    cpy_r_r105 = PyTuple_Pack(1, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 46, CPyStatic_main___globals);
        goto CPyL152;
    }
    cpy_r_r106 = PyObject_SetAttr(cpy_r_r102, cpy_r_r103, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 46, CPyStatic_main___globals);
        goto CPyL152;
    }
    CPyType_main___UnknownEvent = (PyTypeObject *)cpy_r_r102;
    CPy_INCREF(CPyType_main___UnknownEvent);
    cpy_r_r108 = CPyStatic_main___globals;
    cpy_r_r109 = CPyStatics[7]; /* 'UnknownEvent' */
    cpy_r_r110 = CPyDict_SetItem(cpy_r_r108, cpy_r_r109, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 46, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r112 = CPyModule_typing;
    cpy_r_r113 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r114 = cpy_r_r112 != cpy_r_r113;
    if (cpy_r_r114) goto CPyL37;
    cpy_r_r115 = CPyStatics[85]; /* 'typing' */
    cpy_r_r116 = PyImport_Import(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyModule_typing = cpy_r_r116;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r116);
CPyL37: ;
    cpy_r_r117 = PyImport_GetModuleDict();
    cpy_r_r118 = CPyStatics[85]; /* 'typing' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r120 = CPyStatics[99]; /* '_TypedDict' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r122 = PyTuple_Pack(1, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r123 = CPyModule_typing;
    cpy_r_r124 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r125 = cpy_r_r123 != cpy_r_r124;
    if (cpy_r_r125) goto CPyL43;
    cpy_r_r126 = CPyStatics[85]; /* 'typing' */
    cpy_r_r127 = PyImport_Import(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL153;
    }
    CPyModule_typing = cpy_r_r127;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r127);
CPyL43: ;
    cpy_r_r128 = PyImport_GetModuleDict();
    cpy_r_r129 = CPyStatics[85]; /* 'typing' */
    cpy_r_r130 = CPyDict_GetItem(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL153;
    }
    cpy_r_r131 = CPyStatics[100]; /* '_TypedDictMeta' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL153;
    }
    cpy_r_r133 = CPyStatics[101]; /* '__prepare__' */
    cpy_r_r134 = PyObject_HasAttr(cpy_r_r132, cpy_r_r133);
    if (!cpy_r_r134) goto CPyL50;
    cpy_r_r135 = CPyStatics[102]; /* 'DecodedEvent' */
    cpy_r_r136 = CPyStatics[101]; /* '__prepare__' */
    cpy_r_r137 = CPyObject_GetAttr(cpy_r_r132, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL154;
    }
    PyObject *cpy_r_r138[2] = {cpy_r_r135, cpy_r_r122};
    cpy_r_r139 = (PyObject **)&cpy_r_r138;
    cpy_r_r140 = _PyObject_Vectorcall(cpy_r_r137, cpy_r_r139, 2, 0);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals, "dict", cpy_r_r140);
        goto CPyL154;
    }
    cpy_r_r142 = cpy_r_r141;
    goto CPyL52;
CPyL50: ;
    cpy_r_r143 = PyDict_New();
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL154;
    }
    cpy_r_r142 = cpy_r_r143;
CPyL52: ;
    cpy_r_r144 = PyDict_New();
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL155;
    }
    cpy_r_r145 = (PyObject *)&PyUnicode_Type;
    cpy_r_r146 = CPyStatics[19]; /* 'name' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r144, cpy_r_r146, cpy_r_r145);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 52, CPyStatic_main___globals);
        goto CPyL156;
    }
    cpy_r_r149 = (PyObject *)&PyList_Type;
    cpy_r_r150 = CPyStatics[31]; /* 'data' */
    cpy_r_r151 = CPyDict_SetItem(cpy_r_r144, cpy_r_r150, cpy_r_r149);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 53, CPyStatic_main___globals);
        goto CPyL156;
    }
    cpy_r_r153 = (PyObject *)&PyType_Type;
    cpy_r_r154 = CPyStatics[32]; /* 'decoded' */
    cpy_r_r155 = CPyDict_SetItem(cpy_r_r144, cpy_r_r154, cpy_r_r153);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 54, CPyStatic_main___globals);
        goto CPyL156;
    }
    cpy_r_r157 = (PyObject *)&PyType_Type;
    cpy_r_r158 = CPyStatics[33]; /* 'address' */
    cpy_r_r159 = CPyDict_SetItem(cpy_r_r144, cpy_r_r158, cpy_r_r157);
    cpy_r_r160 = cpy_r_r159 >= 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 55, CPyStatic_main___globals);
        goto CPyL156;
    }
    cpy_r_r161 = CPyStatics[102]; /* 'DecodedEvent' */
    cpy_r_r162 = CPyStatics[103]; /* '__annotations__' */
    cpy_r_r163 = CPyDict_SetItem(cpy_r_r142, cpy_r_r162, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r164 = cpy_r_r163 >= 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL155;
    }
    cpy_r_r165 = CPyStatics[104]; /* 'mypyc filler docstring' */
    cpy_r_r166 = CPyStatics[105]; /* '__doc__' */
    cpy_r_r167 = CPyDict_SetItem(cpy_r_r142, cpy_r_r166, cpy_r_r165);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL155;
    }
    cpy_r_r169 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r170 = CPyStatics[106]; /* '__module__' */
    cpy_r_r171 = CPyDict_SetItem(cpy_r_r142, cpy_r_r170, cpy_r_r169);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL155;
    }
    PyObject *cpy_r_r173[3] = {cpy_r_r161, cpy_r_r122, cpy_r_r142};
    cpy_r_r174 = (PyObject **)&cpy_r_r173;
    cpy_r_r175 = _PyObject_Vectorcall(cpy_r_r132, cpy_r_r174, 3, 0);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL157;
    }
    CPy_DECREF(cpy_r_r122);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r176 = CPyStatic_main___globals;
    cpy_r_r177 = CPyStatics[83]; /* 'final' */
    cpy_r_r178 = CPyDict_GetItem(cpy_r_r176, cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 50, CPyStatic_main___globals);
        goto CPyL158;
    }
    PyObject *cpy_r_r179[1] = {cpy_r_r175};
    cpy_r_r180 = (PyObject **)&cpy_r_r179;
    cpy_r_r181 = _PyObject_Vectorcall(cpy_r_r178, cpy_r_r180, 1, 0);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL158;
    }
    CPy_DECREF(cpy_r_r175);
    CPyType_main___DecodedEvent = (PyTypeObject *)cpy_r_r181;
    CPy_INCREF(CPyType_main___DecodedEvent);
    cpy_r_r182 = CPyStatic_main___globals;
    cpy_r_r183 = CPyStatics[102]; /* 'DecodedEvent' */
    cpy_r_r184 = CPyDict_SetItem(cpy_r_r182, cpy_r_r183, cpy_r_r181);
    CPy_DECREF(cpy_r_r181);
    cpy_r_r185 = cpy_r_r184 >= 0;
    if (unlikely(!cpy_r_r185)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 51, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r186 = (PyObject *)CPyType_main___DecodedEvent;
    cpy_r_r187 = CPyModule_typing;
    cpy_r_r188 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r189 = cpy_r_r187 != cpy_r_r188;
    if (cpy_r_r189) goto CPyL67;
    cpy_r_r190 = CPyStatics[85]; /* 'typing' */
    cpy_r_r191 = PyImport_Import(cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyModule_typing = cpy_r_r191;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r191);
CPyL67: ;
    cpy_r_r192 = PyImport_GetModuleDict();
    cpy_r_r193 = CPyStatics[85]; /* 'typing' */
    cpy_r_r194 = CPyDict_GetItem(cpy_r_r192, cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r195 = CPyStatics[99]; /* '_TypedDict' */
    cpy_r_r196 = CPyObject_GetAttr(cpy_r_r194, cpy_r_r195);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r197 = PyTuple_Pack(1, cpy_r_r196);
    CPy_DECREF(cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r198 = CPyModule_typing;
    cpy_r_r199 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r200 = cpy_r_r198 != cpy_r_r199;
    if (cpy_r_r200) goto CPyL73;
    cpy_r_r201 = CPyStatics[85]; /* 'typing' */
    cpy_r_r202 = PyImport_Import(cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL159;
    }
    CPyModule_typing = cpy_r_r202;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r202);
CPyL73: ;
    cpy_r_r203 = PyImport_GetModuleDict();
    cpy_r_r204 = CPyStatics[85]; /* 'typing' */
    cpy_r_r205 = CPyDict_GetItem(cpy_r_r203, cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL159;
    }
    cpy_r_r206 = CPyStatics[100]; /* '_TypedDictMeta' */
    cpy_r_r207 = CPyObject_GetAttr(cpy_r_r205, cpy_r_r206);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL159;
    }
    cpy_r_r208 = CPyStatics[101]; /* '__prepare__' */
    cpy_r_r209 = PyObject_HasAttr(cpy_r_r207, cpy_r_r208);
    if (!cpy_r_r209) goto CPyL80;
    cpy_r_r210 = CPyStatics[107]; /* 'NonDecodedEvent' */
    cpy_r_r211 = CPyStatics[101]; /* '__prepare__' */
    cpy_r_r212 = CPyObject_GetAttr(cpy_r_r207, cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL160;
    }
    PyObject *cpy_r_r213[2] = {cpy_r_r210, cpy_r_r197};
    cpy_r_r214 = (PyObject **)&cpy_r_r213;
    cpy_r_r215 = _PyObject_Vectorcall(cpy_r_r212, cpy_r_r214, 2, 0);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL160;
    }
    if (likely(PyDict_Check(cpy_r_r215)))
        cpy_r_r216 = cpy_r_r215;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals, "dict", cpy_r_r215);
        goto CPyL160;
    }
    cpy_r_r217 = cpy_r_r216;
    goto CPyL82;
CPyL80: ;
    cpy_r_r218 = PyDict_New();
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL160;
    }
    cpy_r_r217 = cpy_r_r218;
CPyL82: ;
    cpy_r_r219 = PyDict_New();
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL161;
    }
    cpy_r_r220 = (PyObject *)&PyType_Type;
    cpy_r_r221 = CPyStatics[19]; /* 'name' */
    cpy_r_r222 = CPyDict_SetItem(cpy_r_r219, cpy_r_r221, cpy_r_r220);
    cpy_r_r223 = cpy_r_r222 >= 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 60, CPyStatic_main___globals);
        goto CPyL162;
    }
    cpy_r_r224 = (PyObject *)&PyList_Type;
    cpy_r_r225 = CPyStatics[28]; /* 'topics' */
    cpy_r_r226 = CPyDict_SetItem(cpy_r_r219, cpy_r_r225, cpy_r_r224);
    cpy_r_r227 = cpy_r_r226 >= 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 61, CPyStatic_main___globals);
        goto CPyL162;
    }
    cpy_r_r228 = (PyObject *)&PyType_Type;
    cpy_r_r229 = CPyStatics[31]; /* 'data' */
    cpy_r_r230 = CPyDict_SetItem(cpy_r_r219, cpy_r_r229, cpy_r_r228);
    cpy_r_r231 = cpy_r_r230 >= 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL162;
    }
    cpy_r_r232 = (PyObject *)&PyType_Type;
    cpy_r_r233 = CPyStatics[32]; /* 'decoded' */
    cpy_r_r234 = CPyDict_SetItem(cpy_r_r219, cpy_r_r233, cpy_r_r232);
    cpy_r_r235 = cpy_r_r234 >= 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 63, CPyStatic_main___globals);
        goto CPyL162;
    }
    cpy_r_r236 = (PyObject *)&PyType_Type;
    cpy_r_r237 = CPyStatics[33]; /* 'address' */
    cpy_r_r238 = CPyDict_SetItem(cpy_r_r219, cpy_r_r237, cpy_r_r236);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 64, CPyStatic_main___globals);
        goto CPyL162;
    }
    cpy_r_r240 = CPyStatics[107]; /* 'NonDecodedEvent' */
    cpy_r_r241 = CPyStatics[103]; /* '__annotations__' */
    cpy_r_r242 = CPyDict_SetItem(cpy_r_r217, cpy_r_r241, cpy_r_r219);
    CPy_DECREF(cpy_r_r219);
    cpy_r_r243 = cpy_r_r242 >= 0;
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL161;
    }
    cpy_r_r244 = CPyStatics[104]; /* 'mypyc filler docstring' */
    cpy_r_r245 = CPyStatics[105]; /* '__doc__' */
    cpy_r_r246 = CPyDict_SetItem(cpy_r_r217, cpy_r_r245, cpy_r_r244);
    cpy_r_r247 = cpy_r_r246 >= 0;
    if (unlikely(!cpy_r_r247)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL161;
    }
    cpy_r_r248 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r249 = CPyStatics[106]; /* '__module__' */
    cpy_r_r250 = CPyDict_SetItem(cpy_r_r217, cpy_r_r249, cpy_r_r248);
    cpy_r_r251 = cpy_r_r250 >= 0;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL161;
    }
    PyObject *cpy_r_r252[3] = {cpy_r_r240, cpy_r_r197, cpy_r_r217};
    cpy_r_r253 = (PyObject **)&cpy_r_r252;
    cpy_r_r254 = _PyObject_Vectorcall(cpy_r_r207, cpy_r_r253, 3, 0);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL163;
    }
    CPy_DECREF(cpy_r_r197);
    CPy_DECREF(cpy_r_r217);
    cpy_r_r255 = CPyStatic_main___globals;
    cpy_r_r256 = CPyStatics[83]; /* 'final' */
    cpy_r_r257 = CPyDict_GetItem(cpy_r_r255, cpy_r_r256);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 58, CPyStatic_main___globals);
        goto CPyL164;
    }
    PyObject *cpy_r_r258[1] = {cpy_r_r254};
    cpy_r_r259 = (PyObject **)&cpy_r_r258;
    cpy_r_r260 = _PyObject_Vectorcall(cpy_r_r257, cpy_r_r259, 1, 0);
    CPy_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL164;
    }
    CPy_DECREF(cpy_r_r254);
    CPyType_main___NonDecodedEvent = (PyTypeObject *)cpy_r_r260;
    CPy_INCREF(CPyType_main___NonDecodedEvent);
    cpy_r_r261 = CPyStatic_main___globals;
    cpy_r_r262 = CPyStatics[107]; /* 'NonDecodedEvent' */
    cpy_r_r263 = CPyDict_SetItem(cpy_r_r261, cpy_r_r262, cpy_r_r260);
    CPy_DECREF(cpy_r_r260);
    cpy_r_r264 = cpy_r_r263 >= 0;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 59, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r265 = (PyObject *)CPyType_main___NonDecodedEvent;
    cpy_r_r266 = CPyStatic_main___globals;
    cpy_r_r267 = CPyStatics[82]; /* 'Union' */
    cpy_r_r268 = CPyDict_GetItem(cpy_r_r266, cpy_r_r267);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 67, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r269 = CPyStatic_main___globals;
    cpy_r_r270 = CPyStatics[102]; /* 'DecodedEvent' */
    cpy_r_r271 = CPyDict_GetItem(cpy_r_r269, cpy_r_r270);
    if (unlikely(cpy_r_r271 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 67, CPyStatic_main___globals);
        goto CPyL165;
    }
    cpy_r_r272 = CPyStatic_main___globals;
    cpy_r_r273 = CPyStatics[107]; /* 'NonDecodedEvent' */
    cpy_r_r274 = CPyDict_GetItem(cpy_r_r272, cpy_r_r273);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 67, CPyStatic_main___globals);
        goto CPyL166;
    }
    cpy_r_r275.f0 = cpy_r_r271;
    cpy_r_r275.f1 = cpy_r_r274;
    cpy_r_r276 = PyTuple_New(2);
    if (unlikely(cpy_r_r276 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp17 = cpy_r_r275.f0;
    PyTuple_SET_ITEM(cpy_r_r276, 0, __tmp17);
    PyObject *__tmp18 = cpy_r_r275.f1;
    PyTuple_SET_ITEM(cpy_r_r276, 1, __tmp18);
    cpy_r_r277 = PyObject_GetItem(cpy_r_r268, cpy_r_r276);
    CPy_DECREF(cpy_r_r268);
    CPy_DECREF(cpy_r_r276);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 67, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r278 = CPyStatic_main___globals;
    cpy_r_r279 = CPyStatics[108]; /* 'Event' */
    cpy_r_r280 = CPyDict_SetItem(cpy_r_r278, cpy_r_r279, cpy_r_r277);
    CPy_DECREF(cpy_r_r277);
    cpy_r_r281 = cpy_r_r280 >= 0;
    if (unlikely(!cpy_r_r281)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 67, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r282 = CPyStatics[109]; /* 'logIndex' */
    cpy_r_r283 = CPyStatics[110]; /* 'blockNumber' */
    cpy_r_r284 = CPyStatics[111]; /* 'transactionIndex' */
    CPy_INCREF(cpy_r_r282);
    CPy_INCREF(cpy_r_r283);
    CPy_INCREF(cpy_r_r284);
    cpy_r_r285.f0 = cpy_r_r282;
    cpy_r_r285.f1 = cpy_r_r283;
    cpy_r_r285.f2 = cpy_r_r284;
    CPyStatic_main___ADD_LOG_ENTRIES = cpy_r_r285;
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f0);
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f1);
    CPy_INCREF(CPyStatic_main___ADD_LOG_ENTRIES.f2);
    cpy_r_r286 = CPyStatic_main___globals;
    cpy_r_r287 = CPyStatics[112]; /* 'ADD_LOG_ENTRIES' */
    cpy_r_r288 = PyTuple_New(3);
    if (unlikely(cpy_r_r288 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp19 = cpy_r_r285.f0;
    PyTuple_SET_ITEM(cpy_r_r288, 0, __tmp19);
    PyObject *__tmp20 = cpy_r_r285.f1;
    PyTuple_SET_ITEM(cpy_r_r288, 1, __tmp20);
    PyObject *__tmp21 = cpy_r_r285.f2;
    PyTuple_SET_ITEM(cpy_r_r288, 2, __tmp21);
    cpy_r_r289 = CPyDict_SetItem(cpy_r_r286, cpy_r_r287, cpy_r_r288);
    CPy_DECREF(cpy_r_r288);
    cpy_r_r290 = cpy_r_r289 >= 0;
    if (unlikely(!cpy_r_r290)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 70, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r291 = CPyStatic_main___globals;
    cpy_r_r292 = CPyStatics[87]; /* 'hexbytes' */
    cpy_r_r293 = CPyDict_GetItem(cpy_r_r291, cpy_r_r292);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 72, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r294 = CPyStatics[113]; /* 'HexBytes' */
    cpy_r_r295 = CPyObject_GetAttr(cpy_r_r293, cpy_r_r294);
    CPy_DECREF(cpy_r_r293);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 72, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyStatic_main___HexBytes = cpy_r_r295;
    CPy_INCREF(CPyStatic_main___HexBytes);
    cpy_r_r296 = CPyStatic_main___globals;
    cpy_r_r297 = CPyStatics[113]; /* 'HexBytes' */
    cpy_r_r298 = CPyDict_SetItem(cpy_r_r296, cpy_r_r297, cpy_r_r295);
    CPy_DECREF(cpy_r_r295);
    cpy_r_r299 = cpy_r_r298 >= 0;
    if (unlikely(!cpy_r_r299)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 72, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r300 = CPyStatic_main___globals;
    cpy_r_r301 = CPyStatics[86]; /* 'cchecksum' */
    cpy_r_r302 = CPyDict_GetItem(cpy_r_r300, cpy_r_r301);
    if (unlikely(cpy_r_r302 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r303 = CPyStatics[114]; /* 'to_checksum_address' */
    cpy_r_r304 = CPyObject_GetAttr(cpy_r_r302, cpy_r_r303);
    CPy_DECREF(cpy_r_r302);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyStatic_main___to_checksum_address = cpy_r_r304;
    CPy_INCREF(CPyStatic_main___to_checksum_address);
    cpy_r_r305 = CPyStatic_main___globals;
    cpy_r_r306 = CPyStatics[114]; /* 'to_checksum_address' */
    cpy_r_r307 = CPyDict_SetItem(cpy_r_r305, cpy_r_r306, cpy_r_r304);
    CPy_DECREF(cpy_r_r304);
    cpy_r_r308 = cpy_r_r307 >= 0;
    if (unlikely(!cpy_r_r308)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 74, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r309 = CPyStatic_main___globals;
    cpy_r_r310 = CPyStatics[89]; /* 'auto' */
    cpy_r_r311 = CPyDict_GetItem(cpy_r_r309, cpy_r_r310);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 75, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r312 = CPyStatics[115]; /* 'keccak' */
    cpy_r_r313 = CPyObject_GetAttr(cpy_r_r311, cpy_r_r312);
    CPy_DECREF(cpy_r_r311);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 75, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyStatic_main___keccak = cpy_r_r313;
    CPy_INCREF(CPyStatic_main___keccak);
    cpy_r_r314 = CPyStatic_main___globals;
    cpy_r_r315 = CPyStatics[115]; /* 'keccak' */
    cpy_r_r316 = CPyDict_SetItem(cpy_r_r314, cpy_r_r315, cpy_r_r313);
    CPy_DECREF(cpy_r_r313);
    cpy_r_r317 = cpy_r_r316 >= 0;
    if (unlikely(!cpy_r_r317)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 75, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r318 = CPyModule_functools;
    cpy_r_r319 = CPyStatics[116]; /* 'lru_cache' */
    cpy_r_r320 = CPyObject_GetAttr(cpy_r_r318, cpy_r_r319);
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 76, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyStatic_main___lru_cache = cpy_r_r320;
    CPy_INCREF(CPyStatic_main___lru_cache);
    cpy_r_r321 = CPyStatic_main___globals;
    cpy_r_r322 = CPyStatics[116]; /* 'lru_cache' */
    cpy_r_r323 = CPyDict_SetItem(cpy_r_r321, cpy_r_r322, cpy_r_r320);
    CPy_DECREF(cpy_r_r320);
    cpy_r_r324 = cpy_r_r323 >= 0;
    if (unlikely(!cpy_r_r324)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 76, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r325 = CPyStatics[117]; /* 'tuple(\\[(\\d*)\\])?' */
    cpy_r_r326 = CPyModule_re;
    cpy_r_r327 = CPyStatics[118]; /* 'compile' */
    cpy_r_r328 = CPyObject_GetAttr(cpy_r_r326, cpy_r_r327);
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 77, CPyStatic_main___globals);
        goto CPyL148;
    }
    PyObject *cpy_r_r329[1] = {cpy_r_r325};
    cpy_r_r330 = (PyObject **)&cpy_r_r329;
    cpy_r_r331 = _PyObject_Vectorcall(cpy_r_r328, cpy_r_r330, 1, 0);
    CPy_DECREF(cpy_r_r328);
    if (unlikely(cpy_r_r331 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 77, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r332 = CPyStatics[119]; /* 'match' */
    cpy_r_r333 = CPyObject_GetAttr(cpy_r_r331, cpy_r_r332);
    CPy_DECREF(cpy_r_r331);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 77, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyStatic_main____tuple_match = cpy_r_r333;
    CPy_INCREF(CPyStatic_main____tuple_match);
    cpy_r_r334 = CPyStatic_main___globals;
    cpy_r_r335 = CPyStatics[120]; /* '_tuple_match' */
    cpy_r_r336 = CPyDict_SetItem(cpy_r_r334, cpy_r_r335, cpy_r_r333);
    CPy_DECREF(cpy_r_r333);
    cpy_r_r337 = cpy_r_r336 >= 0;
    if (unlikely(!cpy_r_r337)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 77, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r338 = CPyModule_typing;
    cpy_r_r339 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r340 = cpy_r_r338 != cpy_r_r339;
    if (cpy_r_r340) goto CPyL119;
    cpy_r_r341 = CPyStatics[85]; /* 'typing' */
    cpy_r_r342 = PyImport_Import(cpy_r_r341);
    if (unlikely(cpy_r_r342 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL148;
    }
    CPyModule_typing = cpy_r_r342;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r342);
CPyL119: ;
    cpy_r_r343 = PyImport_GetModuleDict();
    cpy_r_r344 = CPyStatics[85]; /* 'typing' */
    cpy_r_r345 = CPyDict_GetItem(cpy_r_r343, cpy_r_r344);
    if (unlikely(cpy_r_r345 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r346 = CPyStatics[99]; /* '_TypedDict' */
    cpy_r_r347 = CPyObject_GetAttr(cpy_r_r345, cpy_r_r346);
    CPy_DECREF(cpy_r_r345);
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r348 = PyTuple_Pack(1, cpy_r_r347);
    CPy_DECREF(cpy_r_r347);
    if (unlikely(cpy_r_r348 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r349 = CPyModule_typing;
    cpy_r_r350 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r351 = cpy_r_r349 != cpy_r_r350;
    if (cpy_r_r351) goto CPyL125;
    cpy_r_r352 = CPyStatics[85]; /* 'typing' */
    cpy_r_r353 = PyImport_Import(cpy_r_r352);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL167;
    }
    CPyModule_typing = cpy_r_r353;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r353);
CPyL125: ;
    cpy_r_r354 = PyImport_GetModuleDict();
    cpy_r_r355 = CPyStatics[85]; /* 'typing' */
    cpy_r_r356 = CPyDict_GetItem(cpy_r_r354, cpy_r_r355);
    if (unlikely(cpy_r_r356 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL167;
    }
    cpy_r_r357 = CPyStatics[100]; /* '_TypedDictMeta' */
    cpy_r_r358 = CPyObject_GetAttr(cpy_r_r356, cpy_r_r357);
    CPy_DECREF(cpy_r_r356);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL167;
    }
    cpy_r_r359 = CPyStatics[101]; /* '__prepare__' */
    cpy_r_r360 = PyObject_HasAttr(cpy_r_r358, cpy_r_r359);
    if (!cpy_r_r360) goto CPyL132;
    cpy_r_r361 = CPyStatics[121]; /* 'TopicMapData' */
    cpy_r_r362 = CPyStatics[101]; /* '__prepare__' */
    cpy_r_r363 = CPyObject_GetAttr(cpy_r_r358, cpy_r_r362);
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL168;
    }
    PyObject *cpy_r_r364[2] = {cpy_r_r361, cpy_r_r348};
    cpy_r_r365 = (PyObject **)&cpy_r_r364;
    cpy_r_r366 = _PyObject_Vectorcall(cpy_r_r363, cpy_r_r365, 2, 0);
    CPy_DECREF(cpy_r_r363);
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL168;
    }
    if (likely(PyDict_Check(cpy_r_r366)))
        cpy_r_r367 = cpy_r_r366;
    else {
        CPy_TypeErrorTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals, "dict", cpy_r_r366);
        goto CPyL168;
    }
    cpy_r_r368 = cpy_r_r367;
    goto CPyL134;
CPyL132: ;
    cpy_r_r369 = PyDict_New();
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL168;
    }
    cpy_r_r368 = cpy_r_r369;
CPyL134: ;
    cpy_r_r370 = PyDict_New();
    if (unlikely(cpy_r_r370 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL169;
    }
    cpy_r_r371 = (PyObject *)&PyUnicode_Type;
    cpy_r_r372 = CPyStatics[19]; /* 'name' */
    cpy_r_r373 = CPyDict_SetItem(cpy_r_r370, cpy_r_r372, cpy_r_r371);
    cpy_r_r374 = cpy_r_r373 >= 0;
    if (unlikely(!cpy_r_r374)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 106, CPyStatic_main___globals);
        goto CPyL170;
    }
    cpy_r_r375 = (PyObject *)&PyList_Type;
    cpy_r_r376 = CPyStatics[18]; /* 'inputs' */
    cpy_r_r377 = CPyDict_SetItem(cpy_r_r370, cpy_r_r376, cpy_r_r375);
    cpy_r_r378 = cpy_r_r377 >= 0;
    if (unlikely(!cpy_r_r378)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 107, CPyStatic_main___globals);
        goto CPyL170;
    }
    cpy_r_r379 = CPyStatics[121]; /* 'TopicMapData' */
    cpy_r_r380 = CPyStatics[103]; /* '__annotations__' */
    cpy_r_r381 = CPyDict_SetItem(cpy_r_r368, cpy_r_r380, cpy_r_r370);
    CPy_DECREF(cpy_r_r370);
    cpy_r_r382 = cpy_r_r381 >= 0;
    if (unlikely(!cpy_r_r382)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL169;
    }
    cpy_r_r383 = CPyStatics[104]; /* 'mypyc filler docstring' */
    cpy_r_r384 = CPyStatics[105]; /* '__doc__' */
    cpy_r_r385 = CPyDict_SetItem(cpy_r_r368, cpy_r_r384, cpy_r_r383);
    cpy_r_r386 = cpy_r_r385 >= 0;
    if (unlikely(!cpy_r_r386)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL169;
    }
    cpy_r_r387 = CPyStatics[13]; /* 'eth_event.main' */
    cpy_r_r388 = CPyStatics[106]; /* '__module__' */
    cpy_r_r389 = CPyDict_SetItem(cpy_r_r368, cpy_r_r388, cpy_r_r387);
    cpy_r_r390 = cpy_r_r389 >= 0;
    if (unlikely(!cpy_r_r390)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL169;
    }
    PyObject *cpy_r_r391[3] = {cpy_r_r379, cpy_r_r348, cpy_r_r368};
    cpy_r_r392 = (PyObject **)&cpy_r_r391;
    cpy_r_r393 = _PyObject_Vectorcall(cpy_r_r358, cpy_r_r392, 3, 0);
    CPy_DECREF(cpy_r_r358);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL171;
    }
    CPy_DECREF(cpy_r_r348);
    CPy_DECREF(cpy_r_r368);
    CPyType_main___TopicMapData = (PyTypeObject *)cpy_r_r393;
    CPy_INCREF(CPyType_main___TopicMapData);
    cpy_r_r394 = CPyStatic_main___globals;
    cpy_r_r395 = CPyStatics[121]; /* 'TopicMapData' */
    cpy_r_r396 = CPyDict_SetItem(cpy_r_r394, cpy_r_r395, cpy_r_r393);
    CPy_DECREF(cpy_r_r393);
    cpy_r_r397 = cpy_r_r396 >= 0;
    if (unlikely(!cpy_r_r397)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 105, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r398 = (PyObject *)CPyType_main___TopicMapData;
    cpy_r_r399 = CPyStatic_main___globals;
    cpy_r_r400 = CPyStatics[79]; /* 'Mapping' */
    cpy_r_r401 = CPyDict_GetItem(cpy_r_r399, cpy_r_r400);
    if (unlikely(cpy_r_r401 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 110, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r402 = CPyStatic_main___globals;
    cpy_r_r403 = CPyStatics[93]; /* 'HexStr' */
    cpy_r_r404 = CPyDict_GetItem(cpy_r_r402, cpy_r_r403);
    if (unlikely(cpy_r_r404 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 110, CPyStatic_main___globals);
        goto CPyL172;
    }
    cpy_r_r405 = CPyStatic_main___globals;
    cpy_r_r406 = CPyStatics[121]; /* 'TopicMapData' */
    cpy_r_r407 = CPyDict_GetItem(cpy_r_r405, cpy_r_r406);
    if (unlikely(cpy_r_r407 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 110, CPyStatic_main___globals);
        goto CPyL173;
    }
    cpy_r_r408.f0 = cpy_r_r404;
    cpy_r_r408.f1 = cpy_r_r407;
    cpy_r_r409 = PyTuple_New(2);
    if (unlikely(cpy_r_r409 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp22 = cpy_r_r408.f0;
    PyTuple_SET_ITEM(cpy_r_r409, 0, __tmp22);
    PyObject *__tmp23 = cpy_r_r408.f1;
    PyTuple_SET_ITEM(cpy_r_r409, 1, __tmp23);
    cpy_r_r410 = PyObject_GetItem(cpy_r_r401, cpy_r_r409);
    CPy_DECREF(cpy_r_r401);
    CPy_DECREF(cpy_r_r409);
    if (unlikely(cpy_r_r410 == NULL)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 110, CPyStatic_main___globals);
        goto CPyL148;
    }
    cpy_r_r411 = CPyStatic_main___globals;
    cpy_r_r412 = CPyStatics[122]; /* 'TopicMap' */
    cpy_r_r413 = CPyDict_SetItem(cpy_r_r411, cpy_r_r412, cpy_r_r410);
    CPy_DECREF(cpy_r_r410);
    cpy_r_r414 = cpy_r_r413 >= 0;
    if (unlikely(!cpy_r_r414)) {
        CPy_AddTraceback("eth_event/main.py", "<module>", 110, CPyStatic_main___globals);
        goto CPyL148;
    }
    return 1;
CPyL148: ;
    cpy_r_r415 = 2;
    return cpy_r_r415;
CPyL149: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL148;
CPyL150: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL148;
CPyL151: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL148;
CPyL152: ;
    CPy_DecRef(cpy_r_r102);
    goto CPyL148;
CPyL153: ;
    CPy_DecRef(cpy_r_r122);
    goto CPyL148;
CPyL154: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r132);
    goto CPyL148;
CPyL155: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r142);
    goto CPyL148;
CPyL156: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r144);
    goto CPyL148;
CPyL157: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r142);
    goto CPyL148;
CPyL158: ;
    CPy_DecRef(cpy_r_r175);
    goto CPyL148;
CPyL159: ;
    CPy_DecRef(cpy_r_r197);
    goto CPyL148;
CPyL160: ;
    CPy_DecRef(cpy_r_r197);
    CPy_DecRef(cpy_r_r207);
    goto CPyL148;
CPyL161: ;
    CPy_DecRef(cpy_r_r197);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r217);
    goto CPyL148;
CPyL162: ;
    CPy_DecRef(cpy_r_r197);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r219);
    goto CPyL148;
CPyL163: ;
    CPy_DecRef(cpy_r_r197);
    CPy_DecRef(cpy_r_r217);
    goto CPyL148;
CPyL164: ;
    CPy_DecRef(cpy_r_r254);
    goto CPyL148;
CPyL165: ;
    CPy_DecRef(cpy_r_r268);
    goto CPyL148;
CPyL166: ;
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r271);
    goto CPyL148;
CPyL167: ;
    CPy_DecRef(cpy_r_r348);
    goto CPyL148;
CPyL168: ;
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r358);
    goto CPyL148;
CPyL169: ;
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r358);
    CPy_DecRef(cpy_r_r368);
    goto CPyL148;
CPyL170: ;
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r358);
    CPy_DecRef(cpy_r_r368);
    CPy_DecRef(cpy_r_r370);
    goto CPyL148;
CPyL171: ;
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r368);
    goto CPyL148;
CPyL172: ;
    CPy_DecRef(cpy_r_r401);
    goto CPyL148;
CPyL173: ;
    CPy_DecRef(cpy_r_r401);
    CPy_DecRef(cpy_r_r404);
    goto CPyL148;
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
    "\t\001(\001,\001)\004type\005event\003get\bKeyError\vInvalid ABI\006topics",
    "\001 Cannot decode an anonymous event",
    "\004\'Event topic is not present in given ABI\004data\adecoded\aaddress",
    "\006\rInvalid event\036Log contains undecodable event\005depth\002op\006CREATE\aCREATE2",
    "\006\0020x\005stack\003LOG\nstartswith\026StructLog has no stack\nIndexError",
    "\t\017Malformed stack\000\006memory\003hex\020Malformed memory\005group\001[\001]\ncomponents",
    "\001\aindexed",
    "\001\177Event log does not contain enough topics for the given ABI - this is usually because an event argument is not marked as indexed",
    "\001\201\vEvent log contains more topics than expected for the given ABI - this is usually because an event argument is incorrectly marked as indexed",
    "\003\aeth_abi\006decode\025InsufficientDataBytes",
    "\002\"Event data has insufficient length\024NonEmptyPaddingBytes",
    "\003!Malformed data field in event log\016InvalidPointer\rOverflowError",
    "\003)Cannot decode event due to overflow error\016NoEntriesFound\005value",
    "\t\tfunctools\002re\021eth_event/main.py\b<module>\003Any\bCallable\004Dict\005Final\004List",
    "\b\aLiteral\aMapping\bOptional\tTypedDict\005Union\005final\boverload\006typing",
    "\006\tcchecksum\bhexbytes\022eth_abi.exceptions\004auto\beth_hash\017ChecksumAddress",
    "\005\nHexAddress\006HexStr\neth_typing\035eth_event.conditional_imports\tException",
    "\005\017__mypyc_attrs__\b__dict__\n_TypedDict\016_TypedDictMeta\v__prepare__",
    "\004\fDecodedEvent\017__annotations__\026mypyc filler docstring\a__doc__",
    "\005\n__module__\017NonDecodedEvent\005Event\blogIndex\vblockNumber",
    "\005\020transactionIndex\017ADD_LOG_ENTRIES\bHexBytes\023to_checksum_address\006keccak",
    "\006\tlru_cache\021tuple(\\[(\\d*)\\])\?\acompile\005match\f_tuple_match\fTopicMapData",
    "\001\bTopicMap",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\b-1\000-40\000-2\00016\000-3\0001\0002\0000",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    13, 9, 4, 5, 6, 7, 8, 9, 10, 11, 12, 3, 69, 69, 69, 3, 70, 70, 70,
    2, 132, 133, 12, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 3,
    86, 86, 86, 3, 58, 58, 58, 3, 87, 87, 87, 3, 136, 137, 138, 3, 60, 67,
    62, 1, 89, 3, 91, 92, 93, 1, 64
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
