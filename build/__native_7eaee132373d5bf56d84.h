#ifndef MYPYC_NATIVE_7eaee132373d5bf56d84_H
#define MYPYC_NATIVE_7eaee132373d5bf56d84_H
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


struct export_table_7eaee132373d5bf56d84 {
    char (*CPyDef_eth_event_____top_level__)(void);
    tuple_T3OOO *CPyStatic_main___ADD_LOG_ENTRIES;
    PyObject **CPyStatic_main___HexBytes;
    PyObject **CPyStatic_main___to_checksum_address;
    PyObject **CPyStatic_main___keccak;
    PyObject **CPyStatic_main___lru_cache;
    PyObject **CPyStatic_main____tuple_match;
    PyTypeObject **CPyType_main___ABIError;
    PyTypeObject **CPyType_main___EventError;
    PyTypeObject **CPyType_main___StructLogError;
    PyTypeObject **CPyType_main___UnknownEvent;
    PyTypeObject **CPyType_main___EventData;
    PyTypeObject **CPyType_main___DecodedEvent;
    PyTypeObject **CPyType_main___NonDecodedEvent;
    PyTypeObject **CPyType_main___TopicMapData;
    PyTypeObject **CPyType_main____TraceStep;
    PyObject *(*CPyDef_main___get_log_topic)(PyObject *cpy_r_event_abi);
    PyObject *(*CPyDef_main___get_topic_map)(PyObject *cpy_r_abi);
    PyObject *(*CPyDef_main___decode_log)(PyObject *cpy_r_log, PyObject *cpy_r_topic_map, PyObject *cpy_r___checksum_func);
    PyObject *(*CPyDef_main___decode_logs)(PyObject *cpy_r_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded);
    char (*CPyDef_main____append_additional_log_data)(PyObject *cpy_r_log, PyObject *cpy_r_event);
    PyObject *(*CPyDef_main___decode_traceTransaction)(PyObject *cpy_r_struct_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded, PyObject *cpy_r_initial_address);
    PyObject *(*CPyDef_main____0xstring)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_main____params)(PyObject *cpy_r_abi_params);
    PyObject *(*CPyDef_main____decode)(PyObject *cpy_r_inputs, PyObject *cpy_r_topics, PyObject *cpy_r_data);
    char (*CPyDef_main_____top_level__)(void);
};
#endif
