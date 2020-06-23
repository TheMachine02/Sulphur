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
	ld	a, (iy+LEAF_HEADER_TYPE)
	cp	a, LT_EXEC
	ret	nz
	ld	a, (iy+LEAF_HEADER_MACHINE)
	cp	a, LM_EZ80_ADL
	ret	nz
; execute the leaf file. It is static ?
	ld	a, (iy+LEAF_HEADER_FLAGS)
	and	LF_STATIC
	ret	z
; execute in place
; we need to reallocate here
; read section table and copy at correct location (for those needed)
	lea	bc, iy+0
	ld	ix, (iy+LEAF_HEADER_SHOFF)
	add	ix, bc
; read section now
	ld	b, (iy+LEAF_HEADER_SHNUM)
.alloc_prog_loop:
	push	bc
	ld	a, (ix+LEAF_SECTION_FLAGS)
	and	a, SHF_ALLOC
	jr	z, .alloc_next_section
	ld	hl, $E40000
	ld	a, (ix+LEAF_SECTION_TYPE)
	cp	a, SHT_NOBITS
	jr	z, .copy_null
	ld	hl, (ix+LEAF_SECTION_OFFSET)
.copy_null:
	ld	bc, (ix+LEAF_SECTION_SIZE)
; we are a static file, the addr is RAM adress
	ld	de, (ix+LEAF_SECTION_ADDR)
	ldir
.alloc_next_section:
	lea	ix, ix+16
	pop	bc
	djnz	.alloc_prog_loop
; load up entry
; and jump !
	ld	hl, (iy+LEAF_HEADER_ENTRY)
	jp	(hl)
