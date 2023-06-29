                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module displaynum
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _CY
                                     13 	.globl _AC
                                     14 	.globl _F0
                                     15 	.globl _RS1
                                     16 	.globl _RS0
                                     17 	.globl _OV
                                     18 	.globl _F1
                                     19 	.globl _P
                                     20 	.globl _PS
                                     21 	.globl _PT1
                                     22 	.globl _PX1
                                     23 	.globl _PT0
                                     24 	.globl _PX0
                                     25 	.globl _RD
                                     26 	.globl _WR
                                     27 	.globl _T1
                                     28 	.globl _T0
                                     29 	.globl _INT1
                                     30 	.globl _INT0
                                     31 	.globl _TXD
                                     32 	.globl _RXD
                                     33 	.globl _P3_7
                                     34 	.globl _P3_6
                                     35 	.globl _P3_5
                                     36 	.globl _P3_4
                                     37 	.globl _P3_3
                                     38 	.globl _P3_2
                                     39 	.globl _P3_1
                                     40 	.globl _P3_0
                                     41 	.globl _EA
                                     42 	.globl _ES
                                     43 	.globl _ET1
                                     44 	.globl _EX1
                                     45 	.globl _ET0
                                     46 	.globl _EX0
                                     47 	.globl _P2_7
                                     48 	.globl _P2_6
                                     49 	.globl _P2_5
                                     50 	.globl _P2_4
                                     51 	.globl _P2_3
                                     52 	.globl _P2_2
                                     53 	.globl _P2_1
                                     54 	.globl _P2_0
                                     55 	.globl _SM0
                                     56 	.globl _SM1
                                     57 	.globl _SM2
                                     58 	.globl _REN
                                     59 	.globl _TB8
                                     60 	.globl _RB8
                                     61 	.globl _TI
                                     62 	.globl _RI
                                     63 	.globl _P1_7
                                     64 	.globl _P1_6
                                     65 	.globl _P1_5
                                     66 	.globl _P1_4
                                     67 	.globl _P1_3
                                     68 	.globl _P1_2
                                     69 	.globl _P1_1
                                     70 	.globl _P1_0
                                     71 	.globl _TF1
                                     72 	.globl _TR1
                                     73 	.globl _TF0
                                     74 	.globl _TR0
                                     75 	.globl _IE1
                                     76 	.globl _IT1
                                     77 	.globl _IE0
                                     78 	.globl _IT0
                                     79 	.globl _P0_7
                                     80 	.globl _P0_6
                                     81 	.globl _P0_5
                                     82 	.globl _P0_4
                                     83 	.globl _P0_3
                                     84 	.globl _P0_2
                                     85 	.globl _P0_1
                                     86 	.globl _P0_0
                                     87 	.globl _B
                                     88 	.globl _ACC
                                     89 	.globl _PSW
                                     90 	.globl _IP
                                     91 	.globl _P3
                                     92 	.globl _IE
                                     93 	.globl _P2
                                     94 	.globl _SBUF
                                     95 	.globl _SCON
                                     96 	.globl _P1
                                     97 	.globl _TH1
                                     98 	.globl _TH0
                                     99 	.globl _TL1
                                    100 	.globl _TL0
                                    101 	.globl _TMOD
                                    102 	.globl _TCON
                                    103 	.globl _PCON
                                    104 	.globl _DPH
                                    105 	.globl _DPL
                                    106 	.globl _SP
                                    107 	.globl _P0
                                    108 	.globl _number
                                    109 	.globl _counter
                                    110 ;--------------------------------------------------------
                                    111 ; special function registers
                                    112 ;--------------------------------------------------------
                                    113 	.area RSEG    (ABS,DATA)
      000000                        114 	.org 0x0000
                           000080   115 _P0	=	0x0080
                           000081   116 _SP	=	0x0081
                           000082   117 _DPL	=	0x0082
                           000083   118 _DPH	=	0x0083
                           000087   119 _PCON	=	0x0087
                           000088   120 _TCON	=	0x0088
                           000089   121 _TMOD	=	0x0089
                           00008A   122 _TL0	=	0x008a
                           00008B   123 _TL1	=	0x008b
                           00008C   124 _TH0	=	0x008c
                           00008D   125 _TH1	=	0x008d
                           000090   126 _P1	=	0x0090
                           000098   127 _SCON	=	0x0098
                           000099   128 _SBUF	=	0x0099
                           0000A0   129 _P2	=	0x00a0
                           0000A8   130 _IE	=	0x00a8
                           0000B0   131 _P3	=	0x00b0
                           0000B8   132 _IP	=	0x00b8
                           0000D0   133 _PSW	=	0x00d0
                           0000E0   134 _ACC	=	0x00e0
                           0000F0   135 _B	=	0x00f0
                                    136 ;--------------------------------------------------------
                                    137 ; special function bits
                                    138 ;--------------------------------------------------------
                                    139 	.area RSEG    (ABS,DATA)
      000000                        140 	.org 0x0000
                           000080   141 _P0_0	=	0x0080
                           000081   142 _P0_1	=	0x0081
                           000082   143 _P0_2	=	0x0082
                           000083   144 _P0_3	=	0x0083
                           000084   145 _P0_4	=	0x0084
                           000085   146 _P0_5	=	0x0085
                           000086   147 _P0_6	=	0x0086
                           000087   148 _P0_7	=	0x0087
                           000088   149 _IT0	=	0x0088
                           000089   150 _IE0	=	0x0089
                           00008A   151 _IT1	=	0x008a
                           00008B   152 _IE1	=	0x008b
                           00008C   153 _TR0	=	0x008c
                           00008D   154 _TF0	=	0x008d
                           00008E   155 _TR1	=	0x008e
                           00008F   156 _TF1	=	0x008f
                           000090   157 _P1_0	=	0x0090
                           000091   158 _P1_1	=	0x0091
                           000092   159 _P1_2	=	0x0092
                           000093   160 _P1_3	=	0x0093
                           000094   161 _P1_4	=	0x0094
                           000095   162 _P1_5	=	0x0095
                           000096   163 _P1_6	=	0x0096
                           000097   164 _P1_7	=	0x0097
                           000098   165 _RI	=	0x0098
                           000099   166 _TI	=	0x0099
                           00009A   167 _RB8	=	0x009a
                           00009B   168 _TB8	=	0x009b
                           00009C   169 _REN	=	0x009c
                           00009D   170 _SM2	=	0x009d
                           00009E   171 _SM1	=	0x009e
                           00009F   172 _SM0	=	0x009f
                           0000A0   173 _P2_0	=	0x00a0
                           0000A1   174 _P2_1	=	0x00a1
                           0000A2   175 _P2_2	=	0x00a2
                           0000A3   176 _P2_3	=	0x00a3
                           0000A4   177 _P2_4	=	0x00a4
                           0000A5   178 _P2_5	=	0x00a5
                           0000A6   179 _P2_6	=	0x00a6
                           0000A7   180 _P2_7	=	0x00a7
                           0000A8   181 _EX0	=	0x00a8
                           0000A9   182 _ET0	=	0x00a9
                           0000AA   183 _EX1	=	0x00aa
                           0000AB   184 _ET1	=	0x00ab
                           0000AC   185 _ES	=	0x00ac
                           0000AF   186 _EA	=	0x00af
                           0000B0   187 _P3_0	=	0x00b0
                           0000B1   188 _P3_1	=	0x00b1
                           0000B2   189 _P3_2	=	0x00b2
                           0000B3   190 _P3_3	=	0x00b3
                           0000B4   191 _P3_4	=	0x00b4
                           0000B5   192 _P3_5	=	0x00b5
                           0000B6   193 _P3_6	=	0x00b6
                           0000B7   194 _P3_7	=	0x00b7
                           0000B0   195 _RXD	=	0x00b0
                           0000B1   196 _TXD	=	0x00b1
                           0000B2   197 _INT0	=	0x00b2
                           0000B3   198 _INT1	=	0x00b3
                           0000B4   199 _T0	=	0x00b4
                           0000B5   200 _T1	=	0x00b5
                           0000B6   201 _WR	=	0x00b6
                           0000B7   202 _RD	=	0x00b7
                           0000B8   203 _PX0	=	0x00b8
                           0000B9   204 _PT0	=	0x00b9
                           0000BA   205 _PX1	=	0x00ba
                           0000BB   206 _PT1	=	0x00bb
                           0000BC   207 _PS	=	0x00bc
                           0000D0   208 _P	=	0x00d0
                           0000D1   209 _F1	=	0x00d1
                           0000D2   210 _OV	=	0x00d2
                           0000D3   211 _RS0	=	0x00d3
                           0000D4   212 _RS1	=	0x00d4
                           0000D5   213 _F0	=	0x00d5
                           0000D6   214 _AC	=	0x00d6
                           0000D7   215 _CY	=	0x00d7
                                    216 ;--------------------------------------------------------
                                    217 ; overlayable register banks
                                    218 ;--------------------------------------------------------
                                    219 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        220 	.ds 8
                                    221 ;--------------------------------------------------------
                                    222 ; internal ram data
                                    223 ;--------------------------------------------------------
                                    224 	.area DSEG    (DATA)
      000008                        225 _counter::
      000008                        226 	.ds 2
      00000A                        227 _number::
      00000A                        228 	.ds 3
                                    229 ;--------------------------------------------------------
                                    230 ; overlayable items in internal ram
                                    231 ;--------------------------------------------------------
                                    232 	.area	OSEG    (OVR,DATA)
      00000D                        233 _main_k_65537_2:
      00000D                        234 	.ds 2
                                    235 ;--------------------------------------------------------
                                    236 ; Stack segment in internal ram
                                    237 ;--------------------------------------------------------
                                    238 	.area	SSEG
      00000F                        239 __start__stack:
      00000F                        240 	.ds	1
                                    241 
                                    242 ;--------------------------------------------------------
                                    243 ; indirectly addressable internal ram data
                                    244 ;--------------------------------------------------------
                                    245 	.area ISEG    (DATA)
                                    246 ;--------------------------------------------------------
                                    247 ; absolute internal ram data
                                    248 ;--------------------------------------------------------
                                    249 	.area IABS    (ABS,DATA)
                                    250 	.area IABS    (ABS,DATA)
                                    251 ;--------------------------------------------------------
                                    252 ; bit data
                                    253 ;--------------------------------------------------------
                                    254 	.area BSEG    (BIT)
                                    255 ;--------------------------------------------------------
                                    256 ; paged external ram data
                                    257 ;--------------------------------------------------------
                                    258 	.area PSEG    (PAG,XDATA)
                                    259 ;--------------------------------------------------------
                                    260 ; external ram data
                                    261 ;--------------------------------------------------------
                                    262 	.area XSEG    (XDATA)
                                    263 ;--------------------------------------------------------
                                    264 ; absolute external ram data
                                    265 ;--------------------------------------------------------
                                    266 	.area XABS    (ABS,XDATA)
                                    267 ;--------------------------------------------------------
                                    268 ; external initialized ram data
                                    269 ;--------------------------------------------------------
                                    270 	.area XISEG   (XDATA)
                                    271 	.area HOME    (CODE)
                                    272 	.area GSINIT0 (CODE)
                                    273 	.area GSINIT1 (CODE)
                                    274 	.area GSINIT2 (CODE)
                                    275 	.area GSINIT3 (CODE)
                                    276 	.area GSINIT4 (CODE)
                                    277 	.area GSINIT5 (CODE)
                                    278 	.area GSINIT  (CODE)
                                    279 	.area GSFINAL (CODE)
                                    280 	.area CSEG    (CODE)
                                    281 ;--------------------------------------------------------
                                    282 ; interrupt vector
                                    283 ;--------------------------------------------------------
                                    284 	.area HOME    (CODE)
      000000                        285 __interrupt_vect:
      000000 02 00 06         [24]  286 	ljmp	__sdcc_gsinit_startup
                                    287 ;--------------------------------------------------------
                                    288 ; global & static initialisations
                                    289 ;--------------------------------------------------------
                                    290 	.area HOME    (CODE)
                                    291 	.area GSINIT  (CODE)
                                    292 	.area GSFINAL (CODE)
                                    293 	.area GSINIT  (CODE)
                                    294 	.globl __sdcc_gsinit_startup
                                    295 	.globl __sdcc_program_startup
                                    296 	.globl __start__stack
                                    297 	.globl __mcs51_genXINIT
                                    298 	.globl __mcs51_genXRAMCLEAR
                                    299 	.globl __mcs51_genRAMCLEAR
                                    300 ;	.\displaynum.c:2: int counter=0;
      00005F E4               [12]  301 	clr	a
      000060 F5 08            [12]  302 	mov	_counter,a
      000062 F5 09            [12]  303 	mov	(_counter + 1),a
                                    304 	.area GSFINAL (CODE)
      000064 02 00 03         [24]  305 	ljmp	__sdcc_program_startup
                                    306 ;--------------------------------------------------------
                                    307 ; Home
                                    308 ;--------------------------------------------------------
                                    309 	.area HOME    (CODE)
                                    310 	.area HOME    (CODE)
      000003                        311 __sdcc_program_startup:
      000003 02 00 67         [24]  312 	ljmp	_main
                                    313 ;	return from main will return to caller
                                    314 ;--------------------------------------------------------
                                    315 ; code
                                    316 ;--------------------------------------------------------
                                    317 	.area CSEG    (CODE)
                                    318 ;------------------------------------------------------------
                                    319 ;Allocation info for local variables in function 'main'
                                    320 ;------------------------------------------------------------
                                    321 ;k                         Allocated with name '_main_k_65537_2'
                                    322 ;wait                      Allocated to registers r4 r5 
                                    323 ;------------------------------------------------------------
                                    324 ;	.\displaynum.c:5: int main()
                                    325 ;	-----------------------------------------
                                    326 ;	 function main
                                    327 ;	-----------------------------------------
      000067                        328 _main:
                           000007   329 	ar7 = 0x07
                           000006   330 	ar6 = 0x06
                           000005   331 	ar5 = 0x05
                           000004   332 	ar4 = 0x04
                           000003   333 	ar3 = 0x03
                           000002   334 	ar2 = 0x02
                           000001   335 	ar1 = 0x01
                           000000   336 	ar0 = 0x00
                                    337 ;	.\displaynum.c:7: P0_7=1;
                                    338 ;	assignBit
      000067 D2 87            [12]  339 	setb	_P0_7
                                    340 ;	.\displaynum.c:8: P3_3=0;
                                    341 ;	assignBit
      000069 C2 B3            [12]  342 	clr	_P3_3
                                    343 ;	.\displaynum.c:9: P3_4=1;
                                    344 ;	assignBit
      00006B D2 B4            [12]  345 	setb	_P3_4
                                    346 ;	.\displaynum.c:10: int k=-1;
      00006D 75 0D FF         [24]  347 	mov	_main_k_65537_2,#0xff
      000070 75 0E FF         [24]  348 	mov	(_main_k_65537_2 + 1),#0xff
                                    349 ;	.\displaynum.c:11: int wait=1;
      000073 7C 01            [12]  350 	mov	r4,#0x01
      000075 7D 00            [12]  351 	mov	r5,#0x00
                                    352 ;	.\displaynum.c:12: number[0]=1;
                                    353 ;	1-genFromRTrack replaced	mov	_number,#0x01
      000077 8C 0A            [24]  354 	mov	_number,r4
                                    355 ;	.\displaynum.c:13: number[1]=2;
      000079 75 0B 02         [24]  356 	mov	(_number + 0x0001),#0x02
                                    357 ;	.\displaynum.c:14: number[2]=3;
      00007C 75 0C 03         [24]  358 	mov	(_number + 0x0002),#0x03
                                    359 ;	.\displaynum.c:15: while(1){
      00007F                        360 00144$:
                                    361 ;	.\displaynum.c:35: k++;
      00007F 05 0D            [12]  362 	inc	_main_k_65537_2
      000081 E4               [12]  363 	clr	a
      000082 B5 0D 02         [24]  364 	cjne	a,_main_k_65537_2,00217$
      000085 05 0E            [12]  365 	inc	(_main_k_65537_2 + 1)
      000087                        366 00217$:
                                    367 ;	.\displaynum.c:37: if (k==0)
      000087 E5 0D            [12]  368 	mov	a,_main_k_65537_2
      000089 45 0E            [12]  369 	orl	a,(_main_k_65537_2 + 1)
      00008B 70 06            [24]  370 	jnz	00107$
                                    371 ;	.\displaynum.c:39: P3_3=0;
                                    372 ;	assignBit
      00008D C2 B3            [12]  373 	clr	_P3_3
                                    374 ;	.\displaynum.c:40: P3_4=1;
                                    375 ;	assignBit
      00008F D2 B4            [12]  376 	setb	_P3_4
      000091 80 24            [24]  377 	sjmp	00108$
      000093                        378 00107$:
                                    379 ;	.\displaynum.c:43: else if (k==1)
      000093 74 01            [12]  380 	mov	a,#0x01
      000095 B5 0D 06         [24]  381 	cjne	a,_main_k_65537_2,00219$
      000098 14               [12]  382 	dec	a
      000099 B5 0E 02         [24]  383 	cjne	a,(_main_k_65537_2 + 1),00219$
      00009C 80 02            [24]  384 	sjmp	00220$
      00009E                        385 00219$:
      00009E 80 06            [24]  386 	sjmp	00104$
      0000A0                        387 00220$:
                                    388 ;	.\displaynum.c:45: P3_3=1;
                                    389 ;	assignBit
      0000A0 D2 B3            [12]  390 	setb	_P3_3
                                    391 ;	.\displaynum.c:46: P3_4=0;
                                    392 ;	assignBit
      0000A2 C2 B4            [12]  393 	clr	_P3_4
      0000A4 80 11            [24]  394 	sjmp	00108$
      0000A6                        395 00104$:
                                    396 ;	.\displaynum.c:48: else if (k==2)
      0000A6 74 02            [12]  397 	mov	a,#0x02
      0000A8 B5 0D 06         [24]  398 	cjne	a,_main_k_65537_2,00221$
      0000AB E4               [12]  399 	clr	a
      0000AC B5 0E 02         [24]  400 	cjne	a,(_main_k_65537_2 + 1),00221$
      0000AF 80 02            [24]  401 	sjmp	00222$
      0000B1                        402 00221$:
      0000B1 80 04            [24]  403 	sjmp	00108$
      0000B3                        404 00222$:
                                    405 ;	.\displaynum.c:50: P3_3=0;
                                    406 ;	assignBit
      0000B3 C2 B3            [12]  407 	clr	_P3_3
                                    408 ;	.\displaynum.c:51: P3_4=0;
                                    409 ;	assignBit
      0000B5 C2 B4            [12]  410 	clr	_P3_4
      0000B7                        411 00108$:
                                    412 ;	.\displaynum.c:54: if(number[k]==0){
      0000B7 E5 0D            [12]  413 	mov	a,_main_k_65537_2
      0000B9 24 0A            [12]  414 	add	a,#_number
      0000BB F9               [12]  415 	mov	r1,a
      0000BC E7               [12]  416 	mov	a,@r1
      0000BD FB               [12]  417 	mov	r3,a
      0000BE 70 05            [24]  418 	jnz	00136$
                                    419 ;	.\displaynum.c:56: P1=0b11000000;
      0000C0 75 90 C0         [24]  420 	mov	_P1,#0xc0
      0000C3 80 46            [24]  421 	sjmp	00137$
      0000C5                        422 00136$:
                                    423 ;	.\displaynum.c:58: else if(number[k]==1)
      0000C5 BB 01 05         [24]  424 	cjne	r3,#0x01,00133$
                                    425 ;	.\displaynum.c:61: P1=0b11111001;
      0000C8 75 90 F9         [24]  426 	mov	_P1,#0xf9
      0000CB 80 3E            [24]  427 	sjmp	00137$
      0000CD                        428 00133$:
                                    429 ;	.\displaynum.c:64: else if(number[k]==2)
      0000CD BB 02 05         [24]  430 	cjne	r3,#0x02,00130$
                                    431 ;	.\displaynum.c:67: P1=0b10100100;
      0000D0 75 90 A4         [24]  432 	mov	_P1,#0xa4
      0000D3 80 36            [24]  433 	sjmp	00137$
      0000D5                        434 00130$:
                                    435 ;	.\displaynum.c:69: else if(number[k]==3)
      0000D5 BB 03 05         [24]  436 	cjne	r3,#0x03,00127$
                                    437 ;	.\displaynum.c:71: P1=0b10110000;
      0000D8 75 90 B0         [24]  438 	mov	_P1,#0xb0
      0000DB 80 2E            [24]  439 	sjmp	00137$
      0000DD                        440 00127$:
                                    441 ;	.\displaynum.c:73: else if(number[k]==4)
      0000DD BB 04 05         [24]  442 	cjne	r3,#0x04,00124$
                                    443 ;	.\displaynum.c:76: P1=0b10011001;
      0000E0 75 90 99         [24]  444 	mov	_P1,#0x99
      0000E3 80 26            [24]  445 	sjmp	00137$
      0000E5                        446 00124$:
                                    447 ;	.\displaynum.c:78: else if(number[k]==5)
      0000E5 BB 05 05         [24]  448 	cjne	r3,#0x05,00121$
                                    449 ;	.\displaynum.c:82: P1=0b10010010;
      0000E8 75 90 92         [24]  450 	mov	_P1,#0x92
      0000EB 80 1E            [24]  451 	sjmp	00137$
      0000ED                        452 00121$:
                                    453 ;	.\displaynum.c:85: else if(number[k]==6)
      0000ED BB 06 05         [24]  454 	cjne	r3,#0x06,00118$
                                    455 ;	.\displaynum.c:88: P1=0b10000010;
      0000F0 75 90 82         [24]  456 	mov	_P1,#0x82
      0000F3 80 16            [24]  457 	sjmp	00137$
      0000F5                        458 00118$:
                                    459 ;	.\displaynum.c:90: else if(number[k]==7)
      0000F5 BB 07 05         [24]  460 	cjne	r3,#0x07,00115$
                                    461 ;	.\displaynum.c:93: P1=0b11111000;
      0000F8 75 90 F8         [24]  462 	mov	_P1,#0xf8
      0000FB 80 0E            [24]  463 	sjmp	00137$
      0000FD                        464 00115$:
                                    465 ;	.\displaynum.c:95: else if (number[k]==8)
      0000FD BB 08 05         [24]  466 	cjne	r3,#0x08,00112$
                                    467 ;	.\displaynum.c:97: P1=0b10000000;
      000100 75 90 80         [24]  468 	mov	_P1,#0x80
      000103 80 06            [24]  469 	sjmp	00137$
      000105                        470 00112$:
                                    471 ;	.\displaynum.c:99: else if (number[k]==9)
      000105 BB 09 03         [24]  472 	cjne	r3,#0x09,00137$
                                    473 ;	.\displaynum.c:101: P1=0b10010000;
      000108 75 90 90         [24]  474 	mov	_P1,#0x90
      00010B                        475 00137$:
                                    476 ;	.\displaynum.c:111: if (k==3)k=-1;
      00010B 74 03            [12]  477 	mov	a,#0x03
      00010D B5 0D 06         [24]  478 	cjne	a,_main_k_65537_2,00242$
      000110 E4               [12]  479 	clr	a
      000111 B5 0E 02         [24]  480 	cjne	a,(_main_k_65537_2 + 1),00242$
      000114 80 02            [24]  481 	sjmp	00243$
      000116                        482 00242$:
      000116 80 06            [24]  483 	sjmp	00162$
      000118                        484 00243$:
      000118 75 0D FF         [24]  485 	mov	_main_k_65537_2,#0xff
      00011B 75 0E FF         [24]  486 	mov	(_main_k_65537_2 + 1),#0xff
                                    487 ;	.\displaynum.c:113: while (wait--);
      00011E                        488 00162$:
      00011E 8C 02            [24]  489 	mov	ar2,r4
      000120 8D 03            [24]  490 	mov	ar3,r5
      000122                        491 00140$:
      000122 8A 06            [24]  492 	mov	ar6,r2
      000124 8B 07            [24]  493 	mov	ar7,r3
      000126 1A               [12]  494 	dec	r2
      000127 BA FF 01         [24]  495 	cjne	r2,#0xff,00244$
      00012A 1B               [12]  496 	dec	r3
      00012B                        497 00244$:
      00012B EE               [12]  498 	mov	a,r6
      00012C 4F               [12]  499 	orl	a,r7
                                    500 ;	.\displaynum.c:114: wait=3;
      00012D 70 F3            [24]  501 	jnz	00140$
      00012F 7C 03            [12]  502 	mov	r4,#0x03
      000131 FD               [12]  503 	mov	r5,a
                                    504 ;	.\displaynum.c:118: }
      000132 02 00 7F         [24]  505 	ljmp	00144$
                                    506 	.area CSEG    (CODE)
                                    507 	.area CONST   (CODE)
                                    508 	.area XINIT   (CODE)
                                    509 	.area CABS    (ABS,CODE)
