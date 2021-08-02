section .text
	global _ft_strlen

_ft_strlen:				; char *s = rdi
	mov	rax, 0			; i = 0;
	jmp	loop			; jump to loop label

loop:
	cmp	byte [rdi + rax], 0	; comparing if rdi[rax] = '\0'
	je	result			; jump to result label if rdi[rax] = '\0'
	inc	rax			; rax++;
	jmp	loop			; jump back to loop label

result:
	ret				; return rax
