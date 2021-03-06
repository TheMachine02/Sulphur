; Boot Calls
;-----------------------------------
_boot_GetHardwareVers      equ 0000084h
_boot_GetKeyID             equ 0000088h
_boot_GetBootVerMinor      equ 000008Ch
_boot_GetBootVerBuild      equ 0000090h
_boot_dbgout                    equ 0000094h
_boot_longjmp                  equ 0000098h
_boot_memchr                   equ 000009Ch
_boot_memcmp                   equ 00000A0h
_boot_memcpy                   equ 00000A4h
_boot_memmove                  equ 00000A8h
_boot_memset                   equ 00000ACh
_boot_memclear                 equ 00000B0h
_boot_printf                    equ 00000B4h
_boot_setjmp                   equ 00000B8h
_boot_sprintf                   equ 00000BCh
_boot_strcat                   equ 00000C0h
_boot_strchr                   equ 00000C4h
_boot_strcmp                   equ 00000C8h
_boot_strcpy                   equ 00000CCh
_boot_strcspn                  equ 00000D0h
_boot_strlen                   equ 00000D4h
_boot_strncat                  equ 00000D8h
_boot_strncmp                  equ 00000DCh
_boot_strncpy                  equ 00000E0h
_boot_strpbrk                  equ 00000E4h
_boot_strrchr                  equ 00000E8h
_boot_strspn                   equ 00000ECh
_boot_strstr                   equ 00000F0h
_boot_strtok                    equ 00000F4h
_boot_ret                       equ 00000F8h
_boot_bldiy                    equ 00000FCh
_boot_bshl                     equ 0000100h
_boot_bshru                    equ 0000104h
_boot_bstiy                    equ 0000108h
_boot_bstix                    equ 000010Ch
_boot_case                     equ 0000110h
_boot_case16                   equ 0000114h
_boot_case16D                  equ 0000118h
_boot_case24                   equ 000011Ch
_boot_case24D                  equ 0000120h
_boot_case8                    equ 0000124h
_boot_case8D                   equ 0000128h
__frameset                 equ 000012Ch
__frameset0                equ 0000130h
_boot_iand                     equ 0000134h
_boot_icmpzero                 equ 0000138h
_boot_idivs                    equ 000013Ch
_boot_idivu                    equ 0000140h
_boot_idvrmu                   equ 0000144h
_boot_ildix                    equ 0000148h
_boot_ildiy                    equ 000014Ch
_boot_imul_b                   equ 0000150h
_boot_imulu                    equ 0000154h
_boot_imuls                    equ 0000158h
_boot_indcall                  equ 000015Ch
_boot_ineg                     equ 0000160h
_boot_inot                     equ 0000164h
_boot_ior                      equ 0000168h
_boot_irems                    equ 000016Ch
_boot_iremu                    equ 0000170h
_boot_ishl                     equ 0000174h
_boot_ishl_b                   equ 0000178h
_boot_ishrs                    equ 000017Ch
_boot_ishrs_b                  equ 0000180h
_boot_ishru                    equ 0000184h
_boot_ishru_b                  equ 0000188h
_boot_istix                    equ 000018Ch
_boot_istiy                    equ 0000190h
_boot_itol                     equ 0000194h
_boot_ixor                     equ 0000198h
_boot_ladd                     equ 000019Ch
_boot_ladd_b                   equ 00001A0h
_boot_land                     equ 00001A4h
_boot_lcmps                    equ 00001A8h
_boot_lcmpu                    equ 00001ACh
_boot_lcmpzero                 equ 00001B0h
_boot_ldivs                    equ 00001B4h
_boot_ldivu                    equ 00001B8h
_boot_ldvrmu                   equ 00001BCh
_boot_lldix                    equ 00001C0h
_boot_lldiy                    equ 00001C4h
_boot_lmuls                    equ 00001C8h
_boot_lmulu                    equ 00001CCh
_boot_lneg                     equ 00001D0h
_boot_lnot                     equ 00001D4h
_boot_lor                      equ 00001D8h
_boot_lrems                    equ 00001DCh
_boot_lremu                    equ 00001E0h
_boot_lshl                     equ 00001E4h
_boot_lshrs                    equ 00001E8h
_boot_lshru                    equ 00001ECh
_boot_lstix                    equ 00001F0h
_boot_lstiy                    equ 00001F4h
_boot_lsub                     equ 00001F8h
_boot_lxor                     equ 00001FCh
_boot_sand                     equ 0000200h
_boot_scmpzero                 equ 0000204h
_boot_sdivs                    equ 0000208h
_boot_sdivu                    equ 000020Ch
_boot_seqcase                  equ 0000210h
_boot_seqcaseD                 equ 0000214h
_boot_setflag                  equ 0000218h
_boot_sldix                    equ 000021Ch
_boot_sldiy                    equ 0000220h
_boot_smuls                    equ 0000224h
_boot_smulu                    equ 0000228h
_boot_sneg                     equ 000022Ch
_boot_snot                     equ 0000230h
_boot_sor                      equ 0000234h
_boot_srems                    equ 0000238h
_boot_sremu                    equ 000023Ch
_boot_sshl                     equ 0000240h
_boot_sshl_b                   equ 0000244h
_boot_sshrs                    equ 0000248h
_boot_sshrs_b                  equ 000024Ch
_boot_sshru                    equ 0000250h
_boot_sshru_b                  equ 0000254h
_boot_sstix                    equ 0000258h
_boot_sstiy                    equ 000025Ch
_boot_stoi                     equ 0000260h
_boot_stoiu                    equ 0000264h
_boot_sxor                     equ 0000268h
_boot_fppack                   equ 000026Ch
_boot_fadd                     equ 0000270h
_boot_fcmp                     equ 0000274h
_boot_fdiv                     equ 0000278h
_boot_ftol                     equ 000027Ch
_boot_ultof                    equ 0000280h
_boot_ltof                     equ 0000284h
_boot_fmul                     equ 0000288h
_boot_fneg                     equ 000028Ch
_boot_fsub                     equ 0000290h
_boot_FLTMAX                    equ 0000294h
_boot_sqrtf                     equ 0000298h
_boot_frbtof                   equ 000029Ch
_boot_frftob                   equ 00002A0h
_boot_frftoub                  equ 00002A4h
_boot_frftoi                   equ 00002A8h
_boot_frftoui                  equ 00002ACh
_boot_frftos                   equ 00002B0h
_boot_frftous                  equ 00002B4h
_boot_fritof                   equ 00002B8h
_boot_fruitof                  equ 00002BCh
_boot_frstof                   equ 00002C0h
_boot_frubtof                  equ 00002C4h
_boot_frustof                  equ 00002C8h
_boot_ResetPorts                equ 00002CCh
_boot_ChkIfOSInterruptAvailable equ 00002D0h
_boot_WriteFlashByte            equ 00002D4h
_boot_EraseFlash                equ 00002D8h
_boot_EraseFlashSector          equ 00002DCh
_boot_WriteFlash                equ 00002E0h
_boot_WriteFlashByteDuplicate   equ 00002E4h
_boot_WriteFlashA               equ 00002E8h
_boot_CleanupCertificate        equ 00002ECh
_boot_ClrHeap                   equ 00002F0h
_boot_CpyToHeap                 equ 00002F4h
_boot_ChkHeapTop                equ 00002F8h
_boot_ExecuteInRAM              equ 00002FCh
_boot_ExecuteInRAMDup           equ 0000300h
_boot_ExecuteInRAMDup2          equ 0000304h
_boot_ChkCertSpace              equ 0000308h
_boot_GetFieldSizeFromType      equ 000030Ch
_boot_FindFirstCertField        equ 0000310h
_boot_FindField                 equ 0000314h
_boot_FindNextField             equ 0000318h
_boot_GetCertificateEnd         equ 000031Ch
_boot_GetFieldSizeFromType_     equ 0000320h
_boot_GetFieldFromSize          equ 0000324h
_boot_NextFieldFromSize         equ 0000328h
_boot_NextFieldFromType         equ 000032Ch
_boot_GetOffsetToNextField      equ 0000330h
_boot_WriteFlashUnsafe          equ 0000334h
_boot_GetCertCalcString    equ 0000338h
_boot_GetCertCalcID        equ 000033Ch
_boot_GetSerial                 equ 0000340h
;                          equ 0000344h
_boot_Mult16By8                 equ 0000348h
_boot_Div16By8                  equ 000034Ch
_boot_Div16By16                 equ 0000350h
_boot_Div32By16                 equ 0000354h
_boot_CmpStr                    equ 0000358h
_boot_Sha256Init           equ 000035Ch
_boot_Sha256Part           equ 0000360h
_boot_Sha256Hash           equ 0000364h
_boot_FindAppHeaderSubField     equ 0000368h
;                          equ 000036Ch
_boot_FindAppHeaderTimestamp    equ 0000370h
_boot_ClearVRAM            equ 0000374h
_boot_PutS                 equ 0000378h
_boot_PutSpinner                equ 000037Ch
_boot_GetLFontPtr          equ 0000380h
_boot_InitializeHardware   equ 0000384h
_boot_TurnOffHardware      equ 0000388h
_boot_MakeColCmd                equ 000038Ch
_boot_NewLine              equ 0000390h
_boot_PutBootVersion            equ 0000394h
_boot_DrawSectorProtectionTable equ 0000398h
_boot_Set6MHzMode          equ 000039Ch
_boot_Set48MHzMode         equ 00003A0h
_boot_Set6MHzModeI         equ 00003A4h
_boot_Set48MHzModeI        equ 00003A8h
_boot_CheckHardware             equ 00003ACh
_boot_GetBatteryStatus          equ 00003B0h
_boot_Delay10ms                 equ 00003B4h
_boot_DelayTenTimesAms          equ 00003B8h
;                          equ 00003BCh
;                          equ 00003C0h
;                          equ 00003C4h
;                          equ 00003C8h
_boot_usb_IsBusPowered          equ 00003CCh
_boot_KeypadScan                equ 00003D0h
_boot_KeypadScanFull            equ 00003D4h
;_ret                      equ 00003D8h
;_ret                      equ 00003DCh
_boot_MarkOSInvalid             equ 00003E0h
_boot_usb_BusPowered            equ 00003E4h
_boot_usb_SelfPowered           equ 00003E8h
;                          equ 00003ECh
;                          equ 00003F0h
;                          equ 00003F4h
;                          equ 00003F8h
_boot_usb_SetDeviceB            equ 00003FCh
;                          equ 0000400h
_boot_usb_DMACXReadNext         equ 0000404h
_boot_usb_DMACXWrite            equ 0000408h
_boot_usb_DMACXRead             equ 000040Ch
_boot_usb_DMACXWriteNext        equ 0000410h
_boot_usb_DMACXWriteCheck       equ 0000414h
;                          equ 0000418h
;                          equ 000041Ch
;                          equ 0000420h
;                          equ 0000424h
;                          equ 0000428h
;                          equ 000042Ch
;                          equ 0000430h
;                          equ 0000434h
;                          equ 0000438h
;                          equ 000043Ch
;                          equ 0000440h
;                          equ 0000444h
;                          equ 0000448h
;                          equ 000044Ch
;                          equ 0000450h
;                          equ 0000454h
;                          equ 0000458h
;                          equ 000045Ch
_boot_MarkOSValid               equ 0000460h
;                          equ 0000464h
;                          equ 0000468h
;                          equ 000046Ch
;                          equ 0000470h
;                          equ 0000474h
;                          equ 0000478h
;                          equ 000047Ch
;                          equ 0000480h
;                          equ 0000484h
;                          equ 0000488h
;                          equ 000048Ch
;                          equ 0000490h
;                          equ 0000494h
;                          equ 0000498h
;                          equ 000049Ch
;                          equ 00004A0h
;                          equ 00004A4h
_boot_usb_SetDMAState           equ 00004A8h
_boot_usb_DMATransfer           equ 00004ACh
_boot_usb_DMACXTransferWait     equ 00004B0h
;                          equ 00004B4h
;                          equ 00004B8h
_boot_usb_ResetFIFOS            equ 00004BCh
;                          equ 00004C0h
;                          equ 00004C4h
;                          equ 00004C8h
;                          equ 00004CCh
;                          equ 00004D0h
;                          equ 00004D4h
;                          equ 00004D8h
;                          equ 00004DCh
;                          equ 00004E0h
;                          equ 00004E4h
;                          equ 00004E8h
;                          equ 00004ECh
_boot_usb_ResetTimer            equ 00004F0h
_boot_usb_DisableTimer          equ 00004F4h
_boot_usb_EnableTimer           equ 00004F8h
;                          equ 00004FCh
;                          equ 0000500h
;                          equ 0000504h
;                          equ 0000508h
;                          equ 000050Ch
;                          equ 0000510h
;                          equ 0000514h
;                          equ 0000518h
;                          equ 000051Ch
_boot_SetTimersControl     equ 0000520h
_boot_GetTimersControl     equ 0000524h
_boot_SetTimersInterrupt   equ 0000528h
_boot_GetTimersInterrupt   equ 000052Ch
_boot_SetTimersInterruptM  equ 0000530h
_boot_GetTimersInterruptM  equ 0000534h
_boot_SetTimer1Counter     equ 0000538h
_boot_GetTimer1Counter     equ 000053Ch
_boot_SetTimer1ReloadValue equ 0000540h
_boot_GetTimer1ReloadValue equ 0000544h
_boot_SetTimer1MatchValue1 equ 0000548h
_boot_GetTimer1MatchValue1 equ 000054Ch
_boot_SetTimer1MatchValue2 equ 0000550h
_boot_GetTimer1MatchValue2 equ 0000554h
_boot_SetTimer2Counter     equ 0000558h
_boot_GetTimer2Counter     equ 000055Ch
_boot_SetTimer2ReloadValue equ 0000560h
_boot_GetTimer2ReloadValue equ 0000564h
_boot_SetTimer2MatchValue1 equ 0000568h
_boot_GetTimer2MatchValue1 equ 000056Ch
_boot_SetTimer2MatchValue2 equ 0000570h
_boot_GetTimer2MatchValue2 equ 0000574h
_boot_CheckIfEmulated           equ 0000578h
_boot_GetOnInt             equ 000057Ch
_boot_RTCIntHandler        equ 0000580h
_boot_RTCInitialize        equ 0000584h
_boot_RTCGetInitStatus     equ 0000588h
_boot_RTCEnable            equ 000058Ch
_boot_RTCDisable           equ 0000590h
_boot_RTCSet24Hours        equ 0000594h
;                          equ 0000598h
;                          equ 000059Ch
_boot_RTCAckAlarmInt       equ 00005A0h
;                          equ 00005A4h
_boot_RTCWriteTime         equ 00005A8h
_boot_RTCGetTime12Hour     equ 00005ACh
_boot_RTCGetTime           equ 00005B0h
_boot_RTCSetTime           equ 00005B4h
_boot_RTCGetAlarm          equ 00005B8h
_boot_RTCSetAlarmSafe      equ 00005BCh
_boot_RTCCheckAlarmInt     equ 00005C0h
_boot_RTCSetAlarmInt       equ 00005C4h
_boot_RTCIsAfternoon       equ 00005C8h
_boot_RTCGetDay            equ 00005CCh
_boot_RTCSetAlarmIntSafe   equ 00005D0h
_boot_RTCSetAlarm          equ 00005D4h
_boot_RTCEnableInt         equ 00005D8h
_boot_RTCDisableInt        equ 00005DCh
_boot_RTCSetCallback       equ 00005E0h
_boot_RTCResetTimeStruct   equ 00005E4h
;                          equ 00005E8h
_boot_RTCSetFlags          equ 00005ECh
;                          equ 00005F0h
_boot_CheckEmulationBit         equ 00005F4h
_usb_SetDMAAddress         equ 00005F8h
;                          equ 00005FCh
_boot_SectorsBegin         equ 0000600h
;                          equ 0000604h
_usb_InEndpointClrStall    equ 0000608h
_usb_InEndpointSetStall    equ 000060Ch
_usb_InEndpointClrReset    equ 0000610h
_usb_InEndpointSetReset    equ 0000614h
_usb_InEndpointSendZlp     equ 0000618h
_usb_OutEndpointClrStall   equ 000061Ch
_usb_OutEndpointSetStall   equ 0000620h
_usb_OutEndpointClrReset   equ 0000624h
_usb_OutEndpointSetReset   equ 0000628h
_usb_SetFifoMap            equ 000062Ch
_usb_SetEndpointConfig     equ 0000630h
_usb_ClrEndpointConfig     equ 0000634h
_usb_SetFifoConfig         equ 0000638h
;                          equ 000063Ch
 
