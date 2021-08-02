; kerro al, bl ja movzx

section .text
	global _ft_strcmp

_ft_strcmp:				; (char *s1, char *s2) = (rdi, rsi)
	mov	rcx, 0			; rcx = 0;
	jmp	loop			; jumping to loop label

loop:
	mov     al, byte [rdi + rcx]	; al = rdi[rcx], al is one byte
	mov	bl, byte [rsi + rcx]	; bl = rsi[rcx], bl is one byte
	cmp	al, bl			; comparing al and bl
	jne	result			; if al and bl is not equal, jump result
	cmp	bl, 0			; comparing bl to '\0'
	je	result			; if bl = '\0', jump to result
	cmp	al, 0			; comparing al to '\0'
	je	result			; if al = '\0', jump to result
	inc	rcx			; rcx++;
	jmp	loop			; jumping to result label

result:
	movzx	rax, al			; rax = al, moves 8 bits of al to the end of the rax, and puts all the other bits 0 (move zero extended)
	movzx	rdx, bl			; rdx = bl, moves 8 bits of bl to ithe end of the rax, and puts all the other bits 0 (move zero extended)
	sub	rax, rdx		; rax = rax - rdx;
	ret				; return rax;
