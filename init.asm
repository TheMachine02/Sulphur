init:
.boot:
	di
	halt
; mount the fat 12 partition
; hl = adress of the block flash device
; load necessary stuff in RAM
; 	ld	hl, $030000
; 	call	vfat.mount
; 	ld	hl, .file_name
; 	call	vfat.open
; 	ld	de, $D00000
; 	ld	bc, 65536
; 	call	vfat.read
	
	ld	hl, $D00000
	ld	de, $D00000
	call	lz4.decompress
	
	ld	iy, $D00000
	call	leaf.exec_static	; should not return
	rst	$00
	
.file_name:
db "sorcery.lz4", 0

.isr:
.rst10:
.rst18:
.rst20:
.rst28:
.rst30:
	ret
