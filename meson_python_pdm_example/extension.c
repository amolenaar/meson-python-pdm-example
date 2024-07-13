#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdio.h>

#define PROJECT_NAME "meson-python-pdm-example"


PyObject*
hello (void)
{
    return PyUnicode_FromString("Hello World");
}

static PyMethodDef functions[] = {
    { "hello", (PyCFunction) hello, METH_NOARGS, "Just say hello" }
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "_extension",
    NULL,
    0,
    functions,
    NULL,
    NULL,
    NULL,
    NULL
};

PyMODINIT_FUNC
PyInit__extension(void) {
    return PyModuleDef_Init(&module);
}
