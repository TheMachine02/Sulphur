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
define	LEAF_HEADER_SHNUM	14	; 1 bytes, number of section
define	LEAF_HEADER_SHSTRNDX	15	; 1 bytes, string section index

; header is 16 bytes

define	LEAF_SECTION		0
define	LEAF_SECTION_NAME	0	; 3 bytes, offset into the str table
define	LEAF_SECTION_TYPE	3	; 1 byte, type
define	LEAF_SECTION_FLAGS	4	; flags, 1 byte
define	LEAF_SECTION_ADDR	5	; virtual adress
define	LEAF_SECTION_OFFSET	8	; offset in file 
define	LEAF_SECTION_SIZE	11	; size of the section
define	LEAF_SECTION_LINK	14	; link to an other section (for rel section)
define	LEAF_SECTION_PAD	15	; pad to 16 bytes

; relocation, 6 bytes ;
define	LEAF_REL		0
define	LEAF_REL_OFFSET		0		; offset within section of the data to realloc
define	LEAF_REL_INFO		3		; more info (symbol index)

; symbol structure, 11 bytes
define	LEAF_SYMBOL		0
define	LEAF_SYMBOL_NAME	0	; 3 bytes, index is str table
define	LEAF_SYMBOL_VALUE	3	; 3 bytes
define	LEAF_SYMBOL_SIZE	6	; 3 bytes
define	LEAF_SYMBOL_INFO	9	; 1 byte
define	LEAF_SYMBOL_SHNDX	10	; 1 bytes, section index

;define	LEAF_ST_BIND(INFO)	((INFO) >> 4)
;define	LEAF_ST_TYPE(INFO)	((INFO) & $0F)

; machine
define	LM_EZ80_ADL		0
define	LM_EZ80_COMP		1
define	LM_Z80			2
; type
define	LT_NONE			0
define	LT_REL			1
define	LT_EXEC			2
define	LT_DYN			3
define	LT_CORE			4
; flags
define	LF_COMPRESSED		1
define	LF_STATIC		2
 
; section type
define	SHT_NULL		0
define	SHT_PROGBITS		1
define	SHT_SYMTAB		2
define	SHT_STRTAB		3
define	SHT_HASH		4
define	SHT_DYNAMIC		5
define	SHT_NOBITS		6
define	SHT_REL			7
define	SHT_INTERP		8

; section flags
define	SHF_WRITE		$1
define	SHF_ALLOC		$2
define	SHF_EXECINSTR		$4

; special section indexes
define	SHN_UNDEF		0

define	STB_LOCAL		0
define	STB_GLOBAL		1
define	STB_WEAK		2

define	STT_NOTYPE		0
define	STT_OBJECT		1
define	STT_FUNC		2
define	STT_SECTION		3
define	STT_FILE		4
define	STT_COMMON		5
define	STT_TLS			6
