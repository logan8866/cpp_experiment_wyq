                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
                                      4 ; This file was generated Thu Apr 15 09:22:28 2021
                                      5 ;--------------------------------------------------------
                                      6 	.module test
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _Delay
                                     14 	.globl _CY
                                     15 	.globl _AC
                                     16 	.globl _F0
                                     17 	.globl _RS1
                                     18 	.globl _RS0
                                     19 	.globl _OV
                                     20 	.globl _F1
                                     21 	.globl _P
                                     22 	.globl _PS
                                     23 	.globl _PT1
                                     24 	.globl _PX1
                                     25 	.globl _PT0
                                     26 	.globl _PX0
                                     27 	.globl _RD
                                     28 	.globl _WR
                                     29 	.globl _T1
                                     30 	.globl _T0
                                     31 	.globl _INT1
                                     32 	.globl _INT0
                                     33 	.globl _TXD
                                     34 	.globl _RXD
                                     35 	.globl _P3_7
                                     36 	.globl _P3_6
                                     37 	.globl _P3_5
                                     38 	.globl _P3_4
                                     39 	.globl _P3_3
                                     40 	.globl _P3_2
                                     41 	.globl _P3_1
                                     42 	.globl _P3_0
                                     43 	.globl _EA
                                     44 	.globl _ES
                                     45 	.globl _ET1
                                     46 	.globl _EX1
                                     47 	.globl _ET0
                                     48 	.globl _EX0
                                     49 	.globl _P2_7
                                     50 	.globl _P2_6
                                     51 	.globl _P2_5
                                     52 	.globl _P2_4
                                     53 	.globl _P2_3
                                     54 	.globl _P2_2
                                     55 	.globl _P2_1
                                     56 	.globl _P2_0
                                     57 	.globl _SM0
                                     58 	.globl _SM1
                                     59 	.globl _SM2
                                     60 	.globl _REN
                                     61 	.globl _TB8
                                     62 	.globl _RB8
                                     63 	.globl _TI
                                     64 	.globl _RI
                                     65 	.globl _P1_7
                                     66 	.globl _P1_6
                                     67 	.globl _P1_5
                                     68 	.globl _P1_4
                                     69 	.globl _P1_3
                                     70 	.globl _P1_2
                                     71 	.globl _P1_1
                                     72 	.globl _P1_0
                                     73 	.globl _TF1
                                     74 	.globl _TR1
                                     75 	.globl _TF0
                                     76 	.globl _TR0
                                     77 	.globl _IE1
                                     78 	.globl _IT1
                                     79 	.globl _IE0
                                     80 	.globl _IT0
                                     81 	.globl _P0_7
                                     82 	.globl _P0_6
                                     83 	.globl _P0_5
                                     84 	.globl _P0_4
                                     85 	.globl _P0_3
                                     86 	.globl _P0_2
                                     87 	.globl _P0_1
                                     88 	.globl _P0_0
                                     89 	.globl _B
                                     90 	.globl _ACC
                                     91 	.globl _PSW
                                     92 	.globl _IP
                                     93 	.globl _P3
                                     94 	.globl _IE
                                     95 	.globl _P2
                                     96 	.globl _SBUF
                                     97 	.globl _SCON
                                     98 	.globl _P1
                                     99 	.globl _TH1
                                    100 	.globl _TH0
                                    101 	.globl _TL1
                                    102 	.globl _TL0
                                    103 	.globl _TMOD
                                    104 	.globl _TCON
                                    105 	.globl _PCON
                                    106 	.globl _DPH
                                    107 	.globl _DPL
                                    108 	.globl _SP
                                    109 	.globl _P0
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
                                    225 ;--------------------------------------------------------
                                    226 ; overlayable items in internal ram 
                                    227 ;--------------------------------------------------------
                                    228 	.area	OSEG    (OVR,DATA)
                                    229 ;--------------------------------------------------------
                                    230 ; Stack segment in internal ram 
                                    231 ;--------------------------------------------------------
                                    232 	.area	SSEG
      000008                        233 __start__stack:
      000008                        234 	.ds	1
                                    235 
                                    236 ;--------------------------------------------------------
                                    237 ; indirectly addressable internal ram data
                                    238 ;--------------------------------------------------------
                                    239 	.area ISEG    (DATA)
                                    240 ;--------------------------------------------------------
                                    241 ; absolute internal ram data
                                    242 ;--------------------------------------------------------
                                    243 	.area IABS    (ABS,DATA)
                                    244 	.area IABS    (ABS,DATA)
                                    245 ;--------------------------------------------------------
                                    246 ; bit data
                                    247 ;--------------------------------------------------------
                                    248 	.area BSEG    (BIT)
                                    249 ;--------------------------------------------------------
                                    250 ; paged external ram data
                                    251 ;--------------------------------------------------------
                                    252 	.area PSEG    (PAG,XDATA)
                                    253 ;--------------------------------------------------------
                                    254 ; external ram data
                                    255 ;--------------------------------------------------------
                                    256 	.area XSEG    (XDATA)
                                    257 ;--------------------------------------------------------
                                    258 ; absolute external ram data
                                    259 ;--------------------------------------------------------
                                    260 	.area XABS    (ABS,XDATA)
                                    261 ;--------------------------------------------------------
                                    262 ; external initialized ram data
                                    263 ;--------------------------------------------------------
                                    264 	.area XISEG   (XDATA)
                                    265 	.area HOME    (CODE)
                                    266 	.area GSINIT0 (CODE)
                                    267 	.area GSINIT1 (CODE)
                                    268 	.area GSINIT2 (CODE)
                                    269 	.area GSINIT3 (CODE)
                                    270 	.area GSINIT4 (CODE)
                                    271 	.area GSINIT5 (CODE)
                                    272 	.area GSINIT  (CODE)
                                    273 	.area GSFINAL (CODE)
                                    274 	.area CSEG    (CODE)
                                    275 ;--------------------------------------------------------
                                    276 ; interrupt vector 
                                    277 ;--------------------------------------------------------
                                    278 	.area HOME    (CODE)
      000000                        279 __interrupt_vect:
      000000 02 00 06         [24]  280 	ljmp	__sdcc_gsinit_startup
                                    281 ;--------------------------------------------------------
                                    282 ; global & static initialisations
                                    283 ;--------------------------------------------------------
                                    284 	.area HOME    (CODE)
                                    285 	.area GSINIT  (CODE)
                                    286 	.area GSFINAL (CODE)
                                    287 	.area GSINIT  (CODE)
                                    288 	.globl __sdcc_gsinit_startup
                                    289 	.globl __sdcc_program_startup
                                    290 	.globl __start__stack
                                    291 	.globl __mcs51_genXINIT
                                    292 	.globl __mcs51_genXRAMCLEAR
                                    293 	.globl __mcs51_genRAMCLEAR
                                    294 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  295 	ljmp	__sdcc_program_startup
                                    296 ;--------------------------------------------------------
                                    297 ; Home
                                    298 ;--------------------------------------------------------
                                    299 	.area HOME    (CODE)
                                    300 	.area HOME    (CODE)
      000003                        301 __sdcc_program_startup:
      000003 02 00 86         [24]  302 	ljmp	_main
                                    303 ;	return from main will return to caller
                                    304 ;--------------------------------------------------------
                                    305 ; code
                                    306 ;--------------------------------------------------------
                                    307 	.area CSEG    (CODE)
                                    308 ;------------------------------------------------------------
                                    309 ;Allocation info for local variables in function 'Delay'
                                    310 ;------------------------------------------------------------
                                    311 ;xms                       Allocated to registers 
                                    312 ;i                         Allocated to registers r6 r7 
                                    313 ;j                         Allocated to registers r4 r5 
                                    314 ;------------------------------------------------------------
                                    315 ;	test.c:6: void Delay(uint xms)
                                    316 ;	-----------------------------------------
                                    317 ;	 function Delay
                                    318 ;	-----------------------------------------
      000062                        319 _Delay:
                           000007   320 	ar7 = 0x07
                           000006   321 	ar6 = 0x06
                           000005   322 	ar5 = 0x05
                           000004   323 	ar4 = 0x04
                           000003   324 	ar3 = 0x03
                           000002   325 	ar2 = 0x02
                           000001   326 	ar1 = 0x01
                           000000   327 	ar0 = 0x00
      000062 AE 82            [24]  328 	mov	r6,dpl
      000064 AF 83            [24]  329 	mov	r7,dph
                                    330 ;	test.c:9: for(i=xms;i>0;i--)
      000066                        331 00106$:
      000066 EE               [12]  332 	mov	a,r6
      000067 4F               [12]  333 	orl	a,r7
      000068 60 1B            [24]  334 	jz	00108$
                                    335 ;	test.c:10: for(j=110;j>0;j--);
      00006A 7C 6E            [12]  336 	mov	r4,#0x6E
      00006C 7D 00            [12]  337 	mov	r5,#0x00
      00006E                        338 00104$:
      00006E EC               [12]  339 	mov	a,r4
      00006F 24 FF            [12]  340 	add	a,#0xFF
      000071 FA               [12]  341 	mov	r2,a
      000072 ED               [12]  342 	mov	a,r5
      000073 34 FF            [12]  343 	addc	a,#0xFF
      000075 FB               [12]  344 	mov	r3,a
      000076 8A 04            [24]  345 	mov	ar4,r2
      000078 8B 05            [24]  346 	mov	ar5,r3
      00007A EA               [12]  347 	mov	a,r2
      00007B 4B               [12]  348 	orl	a,r3
      00007C 70 F0            [24]  349 	jnz	00104$
                                    350 ;	test.c:9: for(i=xms;i>0;i--)
      00007E 1E               [12]  351 	dec	r6
      00007F BE FF 01         [24]  352 	cjne	r6,#0xFF,00129$
      000082 1F               [12]  353 	dec	r7
      000083                        354 00129$:
      000083 80 E1            [24]  355 	sjmp	00106$
      000085                        356 00108$:
      000085 22               [24]  357 	ret
                                    358 ;------------------------------------------------------------
                                    359 ;Allocation info for local variables in function 'main'
                                    360 ;------------------------------------------------------------
                                    361 ;tab                       Allocated to registers r7 
                                    362 ;i                         Allocated to registers r6 
                                    363 ;------------------------------------------------------------
                                    364 ;	test.c:13: void main()
                                    365 ;	-----------------------------------------
                                    366 ;	 function main
                                    367 ;	-----------------------------------------
      000086                        368 _main:
                                    369 ;	test.c:15: uchar tab = 0x01;
      000086 7F 01            [12]  370 	mov	r7,#0x01
                                    371 ;	test.c:19: for(i=0;i<8;i++)
      000088                        372 00109$:
      000088 7E 00            [12]  373 	mov	r6,#0x00
      00008A                        374 00105$:
                                    375 ;	test.c:21: P1 = ~(tab);
      00008A EF               [12]  376 	mov	a,r7
      00008B F4               [12]  377 	cpl	a
      00008C F5 90            [12]  378 	mov	_P1,a
                                    379 ;	test.c:22: Delay(100);
      00008E 90 00 64         [24]  380 	mov	dptr,#0x0064
      000091 C0 07            [24]  381 	push	ar7
      000093 C0 06            [24]  382 	push	ar6
      000095 12 00 62         [24]  383 	lcall	_Delay
      000098 D0 06            [24]  384 	pop	ar6
      00009A D0 07            [24]  385 	pop	ar7
                                    386 ;	test.c:23: tab = tab<<1;
      00009C EF               [12]  387 	mov	a,r7
      00009D 2F               [12]  388 	add	a,r7
      00009E FF               [12]  389 	mov	r7,a
                                    390 ;	test.c:19: for(i=0;i<8;i++)
      00009F 0E               [12]  391 	inc	r6
      0000A0 BE 08 00         [24]  392 	cjne	r6,#0x08,00119$
      0000A3                        393 00119$:
      0000A3 40 E5            [24]  394 	jc	00105$
                                    395 ;	test.c:27: tab = 0x01;
      0000A5 7F 01            [12]  396 	mov	r7,#0x01
      0000A7 80 DF            [24]  397 	sjmp	00109$
                                    398 	.area CSEG    (CODE)
                                    399 	.area CONST   (CODE)
                                    400 	.area XINIT   (CODE)
                                    401 	.area CABS    (ABS,CODE)
