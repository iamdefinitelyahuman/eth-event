#include <Python.h>

PyMODINIT_FUNC
PyInit_eth_event(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("7eaee132373d5bf56d84__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_eth_event");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "7eaee132373d5bf56d84__mypyc.init_eth_event");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_eth_event(); }
