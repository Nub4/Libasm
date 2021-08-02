section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc

_ft_strdup:			; rdi = char *s1
	cmp	rdi, 0x0
	je	error

	call	_ft_strlen	; return (rax) size
	inc	rax		; size + 1 for the '\0'

	push	rdi		; push rdi (src) on the stack
	mov	rdi, rax	; rdi = rax
	call	_malloc		; malloc(rdi), rdi is size, rax is return value
	pop	rdi		; pop old rdi (src) to rdi

	cmp	rax, 0x0	; check if rax = NULL
	je	error		; if true, jump to error label

	mov	rsi, rdi	; rsi = rdi = src
	mov	rdi, rax	; rdi = rax = dest
	call	_ft_strcpy
	ret

error:
	mov	rax, -1
	ret
