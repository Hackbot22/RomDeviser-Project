//#link "font/chr_generic.s"

#include "application/type.h"

#include <iostream>
#include <fstream>
using namespace std;

#if __RUN_PYTHON__
#include "py.h"
#endif

#if __RUN_CSHARP__
#include "cs.h"
#endif

#if __RUN_OBJC__
#include "application/app.m"
#endif

#if __RUN_OBJCPP__
#include "application/app.mm"
#endif

#if __RUN_CUDA__
#include "application/app.cu"
#endif

#if __RUN_C__
#include "application/app.c"
#endif

#if __RUN_CPP__
#include "application/app.cpp"
#endif

#if __GRAPHICS_ENABLED__
string line = "";
string out = "";
ifstream Reader("application/graphics/lib.txt");
while (getline(Reader, line)) {
    out += line;
}
#include out
#endif

void startlink() {}

void run() {
    #if __RUN_PYTHON__
    read();
    #endif
    #if __RUN_CSHARP__
    csharp_app();
    #endif
    #if __RUN_OBJC__
    m_app();
    #endif
    #if __RUN_OBJCPP__
    mm_app();
    #endif
    #if __RUN_CUDA__
    cuda_app();
    #endif
    #if __RUN_C__
    c_app();
    #endif
    #if __RUN_CPP__
    cpp_app();
    #endif
}
