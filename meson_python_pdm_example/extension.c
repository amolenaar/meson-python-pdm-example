/*
 * SPDX-FileCopyrightText: 2024 Arjan Molenaar
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define PY_SSIZE_T_CLEAN
#include <Python.h>

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
    "extension",
    NULL,
    0,
    functions,
    NULL,
    NULL,
    NULL,
    NULL
};

PyMODINIT_FUNC
PyInit_extension(void) {
    return PyModuleDef_Init(&module);
}
