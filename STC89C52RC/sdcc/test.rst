                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.1.0 #7066 (Apr 25 2013) (Linux)
                              4 ; This file was generated Mon Dec  8 00:28:19 2014
                              5 ;--------------------------------------------------------
                              6 	.module test
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _TF2
                             14 	.globl _EXF2
                             15 	.globl _RCLK
                             16 	.globl _TCLK
                             17 	.globl _EXEN2
                             18 	.globl _TR2
                             19 	.globl _C_T2
                             20 	.globl _CP_RL2
                             21 	.globl _T2CON_7
                             22 	.globl _T2CON_6
                             23 	.globl _T2CON_5
                             24 	.globl _T2CON_4
                             25 	.globl _T2CON_3
                             26 	.globl _T2CON_2
                             27 	.globl _T2CON_1
                             28 	.globl _T2CON_0
                             29 	.globl _PT2
                             30 	.globl _ET2
                             31 	.globl _CY
                             32 	.globl _AC
                             33 	.globl _F0
                             34 	.globl _RS1
                             35 	.globl _RS0
                             36 	.globl _OV
                             37 	.globl _F1
                             38 	.globl _P
                             39 	.globl _PS
                             40 	.globl _PT1
                             41 	.globl _PX1
                             42 	.globl _PT0
                             43 	.globl _PX0
                             44 	.globl _RD
                             45 	.globl _WR
                             46 	.globl _T1
                             47 	.globl _T0
                             48 	.globl _INT1
                             49 	.globl _INT0
                             50 	.globl _TXD
                             51 	.globl _RXD
                             52 	.globl _P3_7
                             53 	.globl _P3_6
                             54 	.globl _P3_5
                             55 	.globl _P3_4
                             56 	.globl _P3_3
                             57 	.globl _P3_2
                             58 	.globl _P3_1
                             59 	.globl _P3_0
                             60 	.globl _EA
                             61 	.globl _ES
                             62 	.globl _ET1
                             63 	.globl _EX1
                             64 	.globl _ET0
                             65 	.globl _EX0
                             66 	.globl _P2_7
                             67 	.globl _P2_6
                             68 	.globl _P2_5
                             69 	.globl _P2_4
                             70 	.globl _P2_3
                             71 	.globl _P2_2
                             72 	.globl _P2_1
                             73 	.globl _P2_0
                             74 	.globl _SM0
                             75 	.globl _SM1
                             76 	.globl _SM2
                             77 	.globl _REN
                             78 	.globl _TB8
                             79 	.globl _RB8
                             80 	.globl _TI
                             81 	.globl _RI
                             82 	.globl _P1_7
                             83 	.globl _P1_6
                             84 	.globl _P1_5
                             85 	.globl _P1_4
                             86 	.globl _P1_3
                             87 	.globl _P1_2
                             88 	.globl _P1_1
                             89 	.globl _P1_0
                             90 	.globl _TF1
                             91 	.globl _TR1
                             92 	.globl _TF0
                             93 	.globl _TR0
                             94 	.globl _IE1
                             95 	.globl _IT1
                             96 	.globl _IE0
                             97 	.globl _IT0
                             98 	.globl _P0_7
                             99 	.globl _P0_6
                            100 	.globl _P0_5
                            101 	.globl _P0_4
                            102 	.globl _P0_3
                            103 	.globl _P0_2
                            104 	.globl _P0_1
                            105 	.globl _P0_0
                            106 	.globl _TH2
                            107 	.globl _TL2
                            108 	.globl _RCAP2H
                            109 	.globl _RCAP2L
                            110 	.globl _T2CON
                            111 	.globl _B
                            112 	.globl _ACC
                            113 	.globl _PSW
                            114 	.globl _IP
                            115 	.globl _P3
                            116 	.globl _IE
                            117 	.globl _P2
                            118 	.globl _SBUF
                            119 	.globl _SCON
                            120 	.globl _P1
                            121 	.globl _TH1
                            122 	.globl _TH0
                            123 	.globl _TL1
                            124 	.globl _TL0
                            125 	.globl _TMOD
                            126 	.globl _TCON
                            127 	.globl _PCON
                            128 	.globl _DPH
                            129 	.globl _DPL
                            130 	.globl _SP
                            131 	.globl _P0
                            132 ;--------------------------------------------------------
                            133 ; special function registers
                            134 ;--------------------------------------------------------
                            135 	.area RSEG    (ABS,DATA)
   0000                     136 	.org 0x0000
                    0080    137 _P0	=	0x0080
                    0081    138 _SP	=	0x0081
                    0082    139 _DPL	=	0x0082
                    0083    140 _DPH	=	0x0083
                    0087    141 _PCON	=	0x0087
                    0088    142 _TCON	=	0x0088
                    0089    143 _TMOD	=	0x0089
                    008A    144 _TL0	=	0x008a
                    008B    145 _TL1	=	0x008b
                    008C    146 _TH0	=	0x008c
                    008D    147 _TH1	=	0x008d
                    0090    148 _P1	=	0x0090
                    0098    149 _SCON	=	0x0098
                    0099    150 _SBUF	=	0x0099
                    00A0    151 _P2	=	0x00a0
                    00A8    152 _IE	=	0x00a8
                    00B0    153 _P3	=	0x00b0
                    00B8    154 _IP	=	0x00b8
                    00D0    155 _PSW	=	0x00d0
                    00E0    156 _ACC	=	0x00e0
                    00F0    157 _B	=	0x00f0
                    00C8    158 _T2CON	=	0x00c8
                    00CA    159 _RCAP2L	=	0x00ca
                    00CB    160 _RCAP2H	=	0x00cb
                    00CC    161 _TL2	=	0x00cc
                    00CD    162 _TH2	=	0x00cd
                            163 ;--------------------------------------------------------
                            164 ; special function bits
                            165 ;--------------------------------------------------------
                            166 	.area RSEG    (ABS,DATA)
   0000                     167 	.org 0x0000
                    0080    168 _P0_0	=	0x0080
                    0081    169 _P0_1	=	0x0081
                    0082    170 _P0_2	=	0x0082
                    0083    171 _P0_3	=	0x0083
                    0084    172 _P0_4	=	0x0084
                    0085    173 _P0_5	=	0x0085
                    0086    174 _P0_6	=	0x0086
                    0087    175 _P0_7	=	0x0087
                    0088    176 _IT0	=	0x0088
                    0089    177 _IE0	=	0x0089
                    008A    178 _IT1	=	0x008a
                    008B    179 _IE1	=	0x008b
                    008C    180 _TR0	=	0x008c
                    008D    181 _TF0	=	0x008d
                    008E    182 _TR1	=	0x008e
                    008F    183 _TF1	=	0x008f
                    0090    184 _P1_0	=	0x0090
                    0091    185 _P1_1	=	0x0091
                    0092    186 _P1_2	=	0x0092
                    0093    187 _P1_3	=	0x0093
                    0094    188 _P1_4	=	0x0094
                    0095    189 _P1_5	=	0x0095
                    0096    190 _P1_6	=	0x0096
                    0097    191 _P1_7	=	0x0097
                    0098    192 _RI	=	0x0098
                    0099    193 _TI	=	0x0099
                    009A    194 _RB8	=	0x009a
                    009B    195 _TB8	=	0x009b
                    009C    196 _REN	=	0x009c
                    009D    197 _SM2	=	0x009d
                    009E    198 _SM1	=	0x009e
                    009F    199 _SM0	=	0x009f
                    00A0    200 _P2_0	=	0x00a0
                    00A1    201 _P2_1	=	0x00a1
                    00A2    202 _P2_2	=	0x00a2
                    00A3    203 _P2_3	=	0x00a3
                    00A4    204 _P2_4	=	0x00a4
                    00A5    205 _P2_5	=	0x00a5
                    00A6    206 _P2_6	=	0x00a6
                    00A7    207 _P2_7	=	0x00a7
                    00A8    208 _EX0	=	0x00a8
                    00A9    209 _ET0	=	0x00a9
                    00AA    210 _EX1	=	0x00aa
                    00AB    211 _ET1	=	0x00ab
                    00AC    212 _ES	=	0x00ac
                    00AF    213 _EA	=	0x00af
                    00B0    214 _P3_0	=	0x00b0
                    00B1    215 _P3_1	=	0x00b1
                    00B2    216 _P3_2	=	0x00b2
                    00B3    217 _P3_3	=	0x00b3
                    00B4    218 _P3_4	=	0x00b4
                    00B5    219 _P3_5	=	0x00b5
                    00B6    220 _P3_6	=	0x00b6
                    00B7    221 _P3_7	=	0x00b7
                    00B0    222 _RXD	=	0x00b0
                    00B1    223 _TXD	=	0x00b1
                    00B2    224 _INT0	=	0x00b2
                    00B3    225 _INT1	=	0x00b3
                    00B4    226 _T0	=	0x00b4
                    00B5    227 _T1	=	0x00b5
                    00B6    228 _WR	=	0x00b6
                    00B7    229 _RD	=	0x00b7
                    00B8    230 _PX0	=	0x00b8
                    00B9    231 _PT0	=	0x00b9
                    00BA    232 _PX1	=	0x00ba
                    00BB    233 _PT1	=	0x00bb
                    00BC    234 _PS	=	0x00bc
                    00D0    235 _P	=	0x00d0
                    00D1    236 _F1	=	0x00d1
                    00D2    237 _OV	=	0x00d2
                    00D3    238 _RS0	=	0x00d3
                    00D4    239 _RS1	=	0x00d4
                    00D5    240 _F0	=	0x00d5
                    00D6    241 _AC	=	0x00d6
                    00D7    242 _CY	=	0x00d7
                    00AD    243 _ET2	=	0x00ad
                    00BD    244 _PT2	=	0x00bd
                    00C8    245 _T2CON_0	=	0x00c8
                    00C9    246 _T2CON_1	=	0x00c9
                    00CA    247 _T2CON_2	=	0x00ca
                    00CB    248 _T2CON_3	=	0x00cb
                    00CC    249 _T2CON_4	=	0x00cc
                    00CD    250 _T2CON_5	=	0x00cd
                    00CE    251 _T2CON_6	=	0x00ce
                    00CF    252 _T2CON_7	=	0x00cf
                    00C8    253 _CP_RL2	=	0x00c8
                    00C9    254 _C_T2	=	0x00c9
                    00CA    255 _TR2	=	0x00ca
                    00CB    256 _EXEN2	=	0x00cb
                    00CC    257 _TCLK	=	0x00cc
                    00CD    258 _RCLK	=	0x00cd
                    00CE    259 _EXF2	=	0x00ce
                    00CF    260 _TF2	=	0x00cf
                            261 ;--------------------------------------------------------
                            262 ; overlayable register banks
                            263 ;--------------------------------------------------------
                            264 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     265 	.ds 8
                            266 ;--------------------------------------------------------
                            267 ; internal ram data
                            268 ;--------------------------------------------------------
                            269 	.area DSEG    (DATA)
                            270 ;--------------------------------------------------------
                            271 ; overlayable items in internal ram 
                            272 ;--------------------------------------------------------
                            273 	.area OSEG    (OVR,DATA)
                            274 ;--------------------------------------------------------
                            275 ; Stack segment in internal ram 
                            276 ;--------------------------------------------------------
                            277 	.area	SSEG	(DATA)
   0008                     278 __start__stack:
   0008                     279 	.ds	1
                            280 
                            281 ;--------------------------------------------------------
                            282 ; indirectly addressable internal ram data
                            283 ;--------------------------------------------------------
                            284 	.area ISEG    (DATA)
                            285 ;--------------------------------------------------------
                            286 ; absolute internal ram data
                            287 ;--------------------------------------------------------
                            288 	.area IABS    (ABS,DATA)
                            289 	.area IABS    (ABS,DATA)
                            290 ;--------------------------------------------------------
                            291 ; bit data
                            292 ;--------------------------------------------------------
                            293 	.area BSEG    (BIT)
                            294 ;--------------------------------------------------------
                            295 ; paged external ram data
                            296 ;--------------------------------------------------------
                            297 	.area PSEG    (PAG,XDATA)
                            298 ;--------------------------------------------------------
                            299 ; external ram data
                            300 ;--------------------------------------------------------
                            301 	.area XSEG    (XDATA)
                            302 ;--------------------------------------------------------
                            303 ; absolute external ram data
                            304 ;--------------------------------------------------------
                            305 	.area XABS    (ABS,XDATA)
                            306 ;--------------------------------------------------------
                            307 ; external initialized ram data
                            308 ;--------------------------------------------------------
                            309 	.area XISEG   (XDATA)
                            310 	.area HOME    (CODE)
                            311 	.area GSINIT0 (CODE)
                            312 	.area GSINIT1 (CODE)
                            313 	.area GSINIT2 (CODE)
                            314 	.area GSINIT3 (CODE)
                            315 	.area GSINIT4 (CODE)
                            316 	.area GSINIT5 (CODE)
                            317 	.area GSINIT  (CODE)
                            318 	.area GSFINAL (CODE)
                            319 	.area CSEG    (CODE)
                            320 ;--------------------------------------------------------
                            321 ; interrupt vector 
                            322 ;--------------------------------------------------------
                            323 	.area HOME    (CODE)
   0000                     324 __interrupt_vect:
   0000 02 00 08            325 	ljmp	__sdcc_gsinit_startup
                            326 ;--------------------------------------------------------
                            327 ; global & static initialisations
                            328 ;--------------------------------------------------------
                            329 	.area HOME    (CODE)
                            330 	.area GSINIT  (CODE)
                            331 	.area GSFINAL (CODE)
                            332 	.area GSINIT  (CODE)
                            333 	.globl __sdcc_gsinit_startup
                            334 	.globl __sdcc_program_startup
                            335 	.globl __start__stack
                            336 	.globl __mcs51_genXINIT
                            337 	.globl __mcs51_genXRAMCLEAR
                            338 	.globl __mcs51_genRAMCLEAR
                            339 	.area GSFINAL (CODE)
   0061 02 00 03            340 	ljmp	__sdcc_program_startup
                            341 ;--------------------------------------------------------
                            342 ; Home
                            343 ;--------------------------------------------------------
                            344 	.area HOME    (CODE)
                            345 	.area HOME    (CODE)
   0003                     346 __sdcc_program_startup:
   0003 12 00 64            347 	lcall	_main
                            348 ;	return from main will lock up
   0006 80 FE               349 	sjmp .
                            350 ;--------------------------------------------------------
                            351 ; code
                            352 ;--------------------------------------------------------
                            353 	.area CSEG    (CODE)
                            354 ;------------------------------------------------------------
                            355 ;Allocation info for local variables in function 'main'
                            356 ;------------------------------------------------------------
                            357 ;	test.c:2: void main(void)
                            358 ;	-----------------------------------------
                            359 ;	 function main
                            360 ;	-----------------------------------------
   0064                     361 _main:
                    0007    362 	ar7 = 0x07
                    0006    363 	ar6 = 0x06
                    0005    364 	ar5 = 0x05
                    0004    365 	ar4 = 0x04
                    0003    366 	ar3 = 0x03
                    0002    367 	ar2 = 0x02
                    0001    368 	ar1 = 0x01
                    0000    369 	ar0 = 0x00
                            370 ;	test.c:4: P2_0=0x3F;
   0064 D2 A0               371 	setb	_P2_0
   0066 22                  372 	ret
                            373 	.area CSEG    (CODE)
                            374 	.area CONST   (CODE)
                            375 	.area XINIT   (CODE)
                            376 	.area CABS    (ABS,CODE)
