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
; 	ld	de, $D30000
; 	call	vfat.file_copy

; in place decompress the file @D3
	ld	hl, $030A00
	ld	de, $D30000
	call	lz4.decompress
	
	ld	iy, $D30000
; and load it
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
