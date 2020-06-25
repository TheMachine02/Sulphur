init:
.boot:
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

.isr	= $D001A0
.rst10	= $D001A4
.rst18	= $D001A8
.rst20	= $D001AB
.rst28	= $D001B0
.rst30	= $D001B4
.nmi	= $D001B8
