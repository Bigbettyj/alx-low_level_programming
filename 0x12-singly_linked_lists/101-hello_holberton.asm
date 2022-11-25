section .text
global main
extern printf

section .data
msg db "Hello, Holberton", 0
fmt db "%s", 10, 0

main:
mov rdx, fmt
mov rsi, msg
mov rax, 0
call printf

mov rax, 0
ret
