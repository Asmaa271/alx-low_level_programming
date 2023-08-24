section .data
hello db "Hello, Holberton", 0
format db "%s", 0
newline db 10, 0
section .text
global main
extern printf
main:
push rdi  ; Save registers
push rsi
push rdx
lea rdi, [hello]  ; Load address of the string
mov rsi, format   ; Load address of the format specifier
call printf      ; Call the printf function
lea rdi, [newline] ; Load address of the newline character
mov rsi, format    ; Load address of the format specifier
call printf       ; Call the printf function
pop rdx   ; Restore registers
pop rsi
pop rdi
xor eax, eax  ; Return 0 from main
ret
