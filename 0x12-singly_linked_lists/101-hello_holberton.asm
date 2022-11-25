section .text
extern printf
global main

section .data
msg db 'Hello, Holberton', 0
fmt db "%s", 10, 0

main:
mov esi,fmt
mov edi,msg
mov eax,0
call printf

mov eax,0
ret
