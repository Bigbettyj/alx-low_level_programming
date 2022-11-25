section .text
global main
extern printf

section .data
msg db "Hello, Holberton", 0
fmt db "%s", 10, 0

main:
mov edx, fmt
mov ecx, msg
mov ebx, 0
call printf

mov ebx, 0
ret
