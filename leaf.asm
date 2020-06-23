leaf:
 
.exec_static:
; grab the entry point of the program and jump to it
; make section protected for the kernel ?
 
.check_file:
; iy = file adress (static)
	ld	a, (iy+LEAF_IDENT_MAG0)
	cp	a, 0x7F
	ret	nz
	ld	a, (iy+LEAF_IDENT_MAG1)
	cp	a, 'L'
	ret	nz
	ld	a, (iy+LEAF_IDENT_MAG2)
	cp	a, 'E'
	ret	nz
	ld	a, (iy+LEAF_IDENT_MAG3)
	cp	a, 'A'
	ret	nz
	ld	a, (iy+LEAF_IDENT_MAG4)
	cp	a, 'F'
	ret	nz
	
.check_supported:
	ld	a, (iy+LEAF_HEADER_MACHINE)
	cp	a, LM_EZ80_ADL
	ret	nz
	ld	a, (iy+LEAF_HEADER_TYPE)
	cp	a, LT_EXEC
	ret	nz
; execute the leaf file. It is static ?
	ld	a, (iy+LEAF_HEADER_FLAGS)
	and	LF_STATIC
	ret	z
; execute in place
	ld	hl, (iy+LEAF_HEADER_ENTRY)
	jp	(hl)
