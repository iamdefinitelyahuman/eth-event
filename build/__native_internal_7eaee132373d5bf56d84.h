#ifndef MYPYC_NATIVE_INTERNAL_7eaee132373d5bf56d84_H
#define MYPYC_NATIVE_INTERNAL_7eaee132373d5bf56d84_H
#include <Python.h>
#include <CPy.h>
#include "__native_7eaee132373d5bf56d84.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[145];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_eth_event_internal;
extern CPyModule *CPyModule_eth_event;
extern PyObject *CPyStatic_eth_event___globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_eth_event___main_internal;
extern CPyModule *CPyModule_eth_event___main;
extern PyObject *CPyStatic_main___globals;
extern CPyModule *CPyModule_functools;
extern CPyModule *CPyModule_re;
extern CPyModule *CPyModule_typing;
extern CPyModule *CPyModule_cchecksum;
extern CPyModule *CPyModule_eth_abi;
extern CPyModule *CPyModule_hexbytes;
extern CPyModule *CPyModule_eth_abi___exceptions;
extern CPyModule *CPyModule_eth_hash;
extern CPyModule *CPyModule_eth_typing;
extern CPyModule *CPyModule_eth_event___conditional_imports;
extern char CPyDef_eth_event_____top_level__(void);
extern tuple_T3OOO CPyStatic_main___ADD_LOG_ENTRIES;
extern PyObject *CPyStatic_main___HexBytes;
extern PyObject *CPyStatic_main___to_checksum_address;
extern PyObject *CPyStatic_main___keccak;
extern PyObject *CPyStatic_main___lru_cache;
extern PyObject *CPyStatic_main____tuple_match;
extern PyTypeObject *CPyType_main___ABIError;
extern PyTypeObject *CPyType_main___EventError;
extern PyTypeObject *CPyType_main___StructLogError;
extern PyTypeObject *CPyType_main___UnknownEvent;
extern PyTypeObject *CPyType_main___DecodedEvent;
extern PyTypeObject *CPyType_main___NonDecodedEvent;
extern PyTypeObject *CPyType_main___TopicMapData;
extern PyObject *CPyDef_main___get_log_topic(PyObject *cpy_r_event_abi);
extern PyObject *CPyPy_main___get_log_topic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___get_topic_map(PyObject *cpy_r_abi);
extern PyObject *CPyPy_main___get_topic_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___decode_log(PyObject *cpy_r_log, PyObject *cpy_r_topic_map, PyObject *cpy_r___checksum_func);
extern PyObject *CPyPy_main___decode_log(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___decode_logs(PyObject *cpy_r_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded);
extern PyObject *CPyPy_main___decode_logs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_main____append_additional_log_data(PyObject *cpy_r_log, PyObject *cpy_r_event);
extern PyObject *CPyPy_main____append_additional_log_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___decode_traceTransaction(PyObject *cpy_r_struct_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded, PyObject *cpy_r_initial_address);
extern PyObject *CPyPy_main___decode_traceTransaction(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main____0xstring(PyObject *cpy_r_value);
extern PyObject *CPyPy_main____0xstring(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main____params(PyObject *cpy_r_abi_params);
extern PyObject *CPyPy_main____params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main____decode(PyObject *cpy_r_inputs, PyObject *cpy_r_topics, PyObject *cpy_r_data);
extern PyObject *CPyPy_main____decode(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_main_____top_level__(void);
#endif
