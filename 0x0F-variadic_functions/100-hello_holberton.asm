section .text
	global _start
_start:	               		; ELF entry point
	mov rax, 1             	; sys_write
	mov rdi, 1             	; STDOUT
	mov rsi, message       	; buffer
	mov rdx, [messageLen]  	; length of buffer
	syscall
	mov rax, 60            	; sys_exit
	mov rdi, 0             	; 0
	syscall

	section .data
messageLen:	 dq message.end-message
message:	 db 'Hello, Holberton', 10
	 .end:
