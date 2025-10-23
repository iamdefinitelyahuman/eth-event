#ifndef MYPYC_NATIVE_eth_event_H
#define MYPYC_NATIVE_eth_event_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T4OOOO
#define MYPYC_DECLARED_tuple_T4OOOO
typedef struct tuple_T4OOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4OOOO;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} eth_event___main___ABIErrorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} eth_event___main___EventErrorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} eth_event___main___StructLogErrorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} eth_event___main___UnknownEventObject;

#endif
