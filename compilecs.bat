mono application/app.cs
gcc -m32 -c exedll.c -o exedll.o
g++ -m32 -c pe_handler.cpp -o pe_handler.o
nasm -f elf64 compilecs.asm -o compilecs.o
ld -m elf_i386 -T link.ld -o compile.bin exedll.o pe_handler.o compilecs.o

del exedll.o
del pe_handler.o
del compilecs.o
del app.exe

mono bintoexe.cs
rename bintoexe.exe compile.exe
start compile.exe
cls
call :sleep 15
del compile.exe
del compile.bin
exit