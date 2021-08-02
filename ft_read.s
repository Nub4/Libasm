section .text
	global _ft_read
	extern ___error

_ft_read:				; (int fildes, void *buf, size_t nbyte) = (rdi, rsi, rdx)
	mov	rax, 0x2000003		; sys_read system call
	syscall
	jc	error			; jump if carry flag = 1, an error occured, rax contains errno value now and jumps to error label
	ret

error:
	push	rax			; save error code from rax
	call	___error		; call error, return value is in the rax now
	mov	rbx, rax		; move new error value to rbx
	pop	rax			; restore original rax
	mov	[rbx], rax		; move error code to errno location
	mov	rax, -1			; rax = -1
	ret
