#include <fstream>

#ifndef __PYTHON_INCLUDER__
#define __PYTHON_INCLUDER__

#if __RUN_PYTHON__
#include <Python.h>
string PYoutline = "";
string PYout = "";
ifstream PyReader("application/app.py");
PyObject* pInt;
void read() {
    while (getline (PyReader, PYoutline)) {
        PYout += PYoutline;
    }
    Py_Initialize();
    PyRun_SimpleString(PYout);
    PyRun_SimpleString("python_app()");
    Py_Finalize();
}
#endif

#endif