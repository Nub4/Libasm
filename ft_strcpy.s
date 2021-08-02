section .text
	global _ft_strcpy

_ft_strcpy:						; dst = rdi, src = rsi
	mov	rcx, 0					; i = 0;
	jmp	loop					; jump to loop label

loop:
	cmp	byte [rsi + rcx], 0			; comparing if (src[i]) rsi[rcx] = '\0'
	je	result					; jump to result label if rdi[rcx] = '\0'
	mov	dl, byte [rsi + rcx]			; c = rsi[rcx];		(c = src[i])
	mov	byte [rdi + rcx], dl			; rdi[rcx] = c;		(dst[i] = c)
	inc	rcx					; rcx++;
	jmp	loop					; jump to loop label

result:
	mov	byte [rdi + rcx], 0			; rdi[rcx] = '\0'
	mov	rax, rdi
	ret
