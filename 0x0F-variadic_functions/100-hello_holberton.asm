global _start   		; define entrypoint
	section .text
_start:
	    mov rax, 0x1    	; syscall number for write
	    mov rdi, 0x1    	; int fd
	    mov rsi, msg    	; const void* buf
	    mov rdx, mlen   	; size_t count
	    syscall

	    mov rax, 0x3c 	; syscall number for exit
	    mov rdi, 0x1  	; int status
	    syscall

	section .data
msg:	 db "Hello, Holberton",0xa, 0xd
mlen:	 equ $-msg
