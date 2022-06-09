section .text
    global _start

_start:
    mov ah, 0x0E
    mov al, 'C'
    int 0x10
    mov ah, 0x0E
    mov al, ' '
    int 0x10
    mov ah, 0x0E
    mov al, 'o'
    int 0x10
    mov ah, 0x0E
    mov al, ' '
    int 0x10
    mov ah, 0x0E
    mov al, 'm'
    int 0x10
    mov ah, 0x0E
    mov al, ' '
    int 0x10
    mov ah, 0x0E
    mov al, 'p'
    int 0x10
    mov ah, 0x0E
    mov al, ' '
    int 0x10
    mov ah, 0x0E
    mov al, 'i'
    int 0x10
    mov ah, 0x0E
    mov al, ' '
    int 0x10
    mov ah, 0x0E
    mov al, 'l'
    int 0x10
    mov ah, 0x0E
    mov al, ' '
    int 0x10
    mov ah, 0x0E
    mov al, 'e'
    int 0x10