#include <Python.h>
#include "tree_sitter/parser.h"

typedef struct TSLanguage TSLanguage;

extern TSLanguage *tree_sitter_apex(void);
extern TSLanguage *tree_sitter_soql(void);
extern TSLanguage *tree_sitter_sosl(void);
extern TSLanguage *tree_sitter_sflog(void);

static PyObject *_binding_language_apex(PyObject *Py_UNUSED(self), PyObject *Py_UNUSED(args)) {
    return PyCapsule_New(tree_sitter_apex(), "tree_sitter.Language", NULL);
}

static PyObject *_binding_language_soql(PyObject *Py_UNUSED(self), PyObject *Py_UNUSED(args)) {
    return PyCapsule_New(tree_sitter_soql(), "tree_sitter.Language", NULL);
}

static PyObject *_binding_language_sosl(PyObject *Py_UNUSED(self), PyObject *Py_UNUSED(args)) {
    return PyCapsule_New(tree_sitter_sosl(), "tree_sitter.Language", NULL);
}

static PyObject *_binding_language_sflog(PyObject *Py_UNUSED(self), PyObject *Py_UNUSED(args)) {
    return PyCapsule_New(tree_sitter_sflog(), "tree_sitter.Language", NULL);
}

static PyMethodDef methods[] = {
    {"language_apex",  _binding_language_apex,  METH_NOARGS, "Apex language capsule."},
    {"language_soql",  _binding_language_soql,  METH_NOARGS, "SOQL language capsule."},
    {"language_sosl",  _binding_language_sosl,  METH_NOARGS, "SOSL language capsule."},
    {"language_sflog", _binding_language_sflog, METH_NOARGS, "SFLog language capsule."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT, "_binding", NULL, -1, methods
};

PyMODINIT_FUNC PyInit__binding(void) {
    return PyModule_Create(&module);
}
