# Info

Put your `.h` graphics file into `application/graphics`.

## Requirements

* NASM x86 assembler
* GCC & G++ compiler
* ld (to merge files)
* Mono C# compiler <i>(if using C#)</i>

## How to use

### Select a programming language/graphics library

1. Go into `application/type.h`
2. Type `#define __PROGRAMMING_LANGUAGE_HERE__`
3. Here are the programming languages and commands to use:
* `__RUN_PYTHON__` = `application/app.py`
* `__RUN_CSHARP__` = `application/app.cs`
* `__RUN_OBJC__` = `application/app.m`
* `__RUN_OBJCPP__` = `application/app.mm`
* `__RUN_CUDA__` = `application/app.cu`
* `__RUN_C__` = `application/app.c`
* `__RUN_CPP__` = `application/app.cpp`

#### Graphics <i>(Optional)</i>
1. Type `#define __GRAPHICS_ENABLED__`
2. Create a file inside `application/graphics` named `lib.txt`.
3. Inside this file, type the name of your file.

### Start programming:

1. Start in the type of file `type.h` went to.
2. Use GLFW methods and functions to create your application.
3. Run your program.

### Compile using Windows:

1. Go to `build` and select which device you want to export to.
2. Run the `build.bat` file to compile all files into the folder you selected.
3. You should see your ROM file in that folder.

### Compile using Mac/Linux:

1. Go to `build` and select which device you want to export to.
2. Run the `build.sh` file to compile all files into the folder you selected.
3. You should see your ROM file in that folder.
