include	'include/ez80.inc'
include	'include/tiformat.inc'
include	'include/ti84pce.inc'

format	ti executable 'SULPHUR'

assume adl = 1

Sulphur_loader:

	ld	hl, .disk_image
	call	.find_image
	ret	c
	ld	(.disk_adress), hl
	di
	call	.create
	jp	$000000
.create:
	call	.flash_unlock
		
	ld	a, $02
.erase:
	push	af
	call	.sector_erase
	pop	af
	inc	a
	cp	a, $10
	jr	nz, .erase

	ld	hl, Sulphur.start
	ld	de, $020000
	ld	bc, Sulphur.size
	call	$0002E0

	ld	hl, (.disk_adress)
	ld	de, $030000
	ld	bc, 65536
	call	$0002E0
	
	call	.flash_lock
	xor	a, a
	ret

.sector_erase:
	ld	bc, $F8
	push	bc
	jp	$0002DC

.write_port:
	ld	de, $C979ED
	ld	hl, $D1887C - 3
	ld	(hl), de
	jp	(hl)

.read_port:
	ld	de, $C978ED
	ld	hl, $D1887C - 3
	ld	(hl), de
	jp	(hl)

.flash_unlock:
	ld	bc, $24
	ld	a, $8c
	call	.write_port
	ld	bc, $06
	call	.read_port
	or	a, $4
	call	.write_port
	ld	bc, $28
	ld	a, $4
	jp	.write_port

.flash_lock:
	ld	bc, $28
	xor	a, a
	call	.write_port
	ld	bc, $06
	call	.read_port
	res	2,a
	call	.write_port
	ld	bc, $24
	ld	a, $88
	jp	.write_port

.find_image:
; load a file from an appv
; hl : file name
; hl = file adress
; if error : c set, a = error code
	call	ti.Mov9ToOP1
	call	ti.ChkFindSym
	ret	c
	call	ti.ChkInRam
	ex	de, hl
	jr	z, .unarchived
; 9 bytes - name size (1b), name string, appv size (2b)
	ld	de, 9
	add	hl, de
	ld	e, (hl)
	add	hl, de
	inc	hl
.unarchived:
	inc	hl
	inc	hl
	ret

.disk_image:
db	ti.AppVarObj, "BOOTPART",0
.disk_adress:
dl	0

Sulphur.start = $
Sulphur.start_off = $%

org $20000

Sulphur:
; first 256 bytes page
include 'sulphur_certificate.asm'
; we'll set as occupying 2 sectors - or 128KB
; first 64K is the actual boot loader, second is FAT12 partition
; almost like a FAT partition, but not totally... silly TI
	db	$5a,$a5,$ff,$02
	jp	Sulphur.end
	jp	init.boot
	jp	init.isr
	jp	init.rst10
	jp	init.rst18
	jp	init.rst20
	jp	init.rst28
	jp	init.rst30
	jp	(hl)
	jp	(iy)
	jp	(ix)
	
include	'init.asm'
include	'leaf.asm'
include	'lz4.asm'
include	'vfat.asm'
include	'usb.asm'

if $ > $030000
	err 'Guilty βίος. Loader is too big !'
end if

org $030000
Sulphur.boot_partition:

org $040000
Sulphur.end:

Sulphur.size = $% - Sulphur.start_off
