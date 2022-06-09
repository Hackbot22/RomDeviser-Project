mono application/app.cs
gcc -m32 -c exedll.c -o exedll.o
g++ -m32 -c pe_handler.cpp -o pe_handler.o
nasm -f elf64 compilecs.asm -o compilecs.o
ld -m elf_i386 -T link.ld -o compile.bin exedll.o pe_handler.o compilecs.o

rm exedll.o
rm pe_handler.o
rm compilecs.o
rm app.exe

chmod +x compile.bin
./compile.bin
rm compile.bin