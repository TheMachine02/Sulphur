define	LEAF_HEADER		0
define	LEAF_HEADER_IDENT	0	; 5 bytes
define	LEAF_IDENT		0	; start
define	LEAF_IDENT_MAG0		0	; $7F
define	LEAF_IDENT_MAG1		1	; 'L'
define	LEAF_IDENT_MAG2		2	; 'E'
define	LEAF_IDENT_MAG3		3	; 'A'
define	LEAF_IDENT_MAG4		4	; 'F'
define	LEAF_HEADER_TYPE	5	; 1 byte, LT_EXEC
define	LEAF_HEADER_MACHINE	6	; 1 byte, default, LM_EZ80_ADL
define	LEAF_HEADER_FLAGS	7	; 1 byte (most if reallocatable or static + specific)
define	LEAF_HEADER_ENTRY	8	; 3 bytes
define	LEAF_HEADER_SHOFF	11	; 3 bytes, section offset in file (usually at the end)
define	LEAF_HEADER_SHNUM	14	; 3 bytes, number of section
define	LEAF_HEADER_SHSTRNDX	17	; 1 bytes, string section index

; header is 18 bytes

; machine ;
define	LM_EZ80_ADL		0
define	LM_EZ80_COMP		1
define	LM_Z80			2
; type ;
define	LT_NONE			0
define	LT_REL			1
define	LT_EXEC			2
define	LT_DYN			3
define	LT_CORE			4
; flags ;
define	LF_COMPRESSED		1
define	LF_STATIC		2
 
