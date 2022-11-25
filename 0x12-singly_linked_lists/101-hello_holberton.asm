section .text
extern printf
global main

section .data
msg db 'Hello, Holberton', 0
fmt db "%s", 10, 0

main:
push rbp

mov rsi,msg
mov rdi,fmt
mov rax,0
call printf

pop rbp

mov eax,0
ret
