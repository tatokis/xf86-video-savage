/* $XFree86: xc/programs/Xserver/hw/xfree86/drivers/savage/savage_regs.h,v 1.10 2001/11/04 22:17:48 alanh Exp $ */

#ifndef _SAVAGE_REGS_H
#define _SAVAGE_REGS_H

/* These are here until xf86PciInfo.h is updated. */

#ifndef PCI_CHIP_S3TWISTER_P
#define PCI_CHIP_S3TWISTER_P	0x8d01
#endif
#ifndef PCI_CHIP_S3TWISTER_K
#define PCI_CHIP_S3TWISTER_K	0x8d02
#endif
#ifndef PCI_CHIP_SUPSAV_MX128
#define PCI_CHIP_SUPSAV_MX128		0x8c22
#define PCI_CHIP_SUPSAV_MX64		0x8c24
#define PCI_CHIP_SUPSAV_MX64C		0x8c26
#define PCI_CHIP_SUPSAV_IX128SDR	0x8c2a
#define PCI_CHIP_SUPSAV_IX128DDR	0x8c2b
#define PCI_CHIP_SUPSAV_IX64SDR		0x8c2c
#define PCI_CHIP_SUPSAV_IX64DDR		0x8c2d
#define PCI_CHIP_SUPSAV_IXCSDR		0x8c2e
#define PCI_CHIP_SUPSAV_IXCDDR		0x8c2f
#endif
#ifndef PCI_CHIP_PROSAVAGE_DDR
#define PCI_CHIP_PROSAVAGE_DDR	0x8d03
#define PCI_CHIP_PROSAVAGE_DDRK	0x8d04
#endif

#define S3_SAVAGE3D_SERIES(chip)  ((chip>=S3_SAVAGE3D) && (chip<=S3_SAVAGE_MX))

#define S3_SAVAGE4_SERIES(chip)  ((chip==S3_SAVAGE4)            \
                                  || (chip==S3_PROSAVAGE)       \
                                  || (chip==S3_TWISTER)         \
                                  || (chip==S3_PROSAVAGEDDR))

#define	S3_SAVAGE_MOBILE_SERIES(chip)	((chip==S3_SAVAGE_MX) || (chip==S3_SUPERSAVAGE))

#define S3_SAVAGE_SERIES(chip)    ((chip>=S3_SAVAGE3D) && (chip<=S3_SAVAGE2000))

#define S3_MOBILE_TWISTER_SERIES(chip)   ((chip==S3_TWISTER)    \
                                          ||(chip==S3_PROSAVAGEDDR))

/* Chip tags.  These are used to group the adapters into 
 * related families.
 */

enum S3CHIPTAGS {
    S3_UNKNOWN = 0,
    S3_SAVAGE3D,
    S3_SAVAGE_MX,
    S3_SAVAGE4,
    S3_PROSAVAGE,
    S3_TWISTER,
    S3_PROSAVAGEDDR,
    S3_SUPERSAVAGE,
    S3_SAVAGE2000,
    S3_LAST
};

#define BIOS_BSIZE			1024
#define BIOS_BASE			0xc0000

#define SAVAGE_NEWMMIO_REGBASE_S3	0x1000000  /* 16MB */
#define SAVAGE_NEWMMIO_REGBASE_S4	0x0000000 
#define SAVAGE_NEWMMIO_REGSIZE		0x0080000	/* 512kb */
#define SAVAGE_NEWMMIO_VGABASE		0x8000

#define BASE_FREQ			14.31818	

#define FIFO_CONTROL_REG		0x8200
#define MIU_CONTROL_REG			0x8204
#define STREAMS_TIMEOUT_REG		0x8208
#define MISC_TIMEOUT_REG		0x820c

#define SAVAGE_NEWMMIO_REGBASE_S3	0x1000000  /* 16MB */
#define SAVAGE_NEWMMIO_REGBASE_S4	0x0000000
#define SAVAGE_NEWMMIO_REGSIZE		0x0080000	/* 512kb */
#define SAVAGE_NEWMMIO_VGABASE		0x8000

#define	 ADVANCED_FUNC_CTRL     0x850C	

/*
 * CR/SR registers MMIO offset
 * MISC Output Register(W:0x3c2,R:0x3cc) controls CR is 0X83Cx or 0X83Bx
 * but do we need to set MISC Output Register ???
 * (Note that CRT_ADDRESS_REG and CRT_DATA_REG are assumed to be COLOR)???
 */
#define MMIO_BASE_OF_VGA3C0             0X83C0
#define MMIO_BASE_OF_VGA3D0             0X83D0

#define ATTR_ADDRESS_REG        \
    (MMIO_BASE_OF_VGA3C0 + (0x03C0 - 0x03C0))
#define ATTR_DATA_WRITE_REG     \
    (MMIO_BASE_OF_VGA3C0 + (0x03C0 - 0x03C0))
#define ATTR_DATA_READ_REG      \
    (MMIO_BASE_OF_VGA3C0 + (0x03C1 - 0x03C0))
#define VIDEO_SUBSYSTEM_ENABLE  \
    (MMIO_BASE_OF_VGA3C0 + (0x03C3 - 0x03C0))
#define SEQ_ADDRESS_REG         \
    (MMIO_BASE_OF_VGA3C0 + (0x03C4 - 0x03C0))
#define SEQ_DATA_REG            \
    (MMIO_BASE_OF_VGA3C0 + (0x03C5 - 0x03C0))
#define DAC_PIXEL_MASK_REG      \
    (MMIO_BASE_OF_VGA3C0 + (0x03C6 - 0x03C0))
#define DAC_PEL_MASK            \
    (MMIO_BASE_OF_VGA3C0 + (0x03C6 - 0x03C0))
#define DAC_STATUS_REG          \
    (MMIO_BASE_OF_VGA3C0 + (0x03C7 - 0x03C0))
#define DAC_ADDRESS_READ_REG    \
    (MMIO_BASE_OF_VGA3C0 + (0x03C7 - 0x03C0))
#define DAC_ADDRESS_WRITE_REG   \
    (MMIO_BASE_OF_VGA3C0 + (0x03C8 - 0x03C0))
#define DAC_DATA_REG            \
    (MMIO_BASE_OF_VGA3C0 + (0x03C9 - 0x03C0))
#define DAC_DATA_REG_PORT       \
    (MMIO_BASE_OF_VGA3C0 + (0x03C9 - 0x03C0))
#define MISC_OUTPUT_REG_WRITE   \
    (MMIO_BASE_OF_VGA3C0 + (0x03C2 - 0x03C0))
#define MISC_OUTPUT_REG_READ    \
    (MMIO_BASE_OF_VGA3C0 + (0x03CC - 0x03C0))
#define GR_ADDRESS_REG          \
    (MMIO_BASE_OF_VGA3C0 + (0x03CE - 0x03C0))
#define GR_DATA_REG             \
    (MMIO_BASE_OF_VGA3C0 + (0x03CF - 0x03C0))
#define WAKEUP_REG              \
    (MMIO_BASE_OF_VGA3C0 + (0x0510 - 0x03C0))

#define CRT_ADDRESS_REG         \
    (MMIO_BASE_OF_VGA3D0 + (0x03D4 - 0x03D0))
#define CRT_DATA_REG            \
    (MMIO_BASE_OF_VGA3D0 + (0x03D5 - 0x03D0))
#define SYSTEM_CONTROL_REG      \
    (MMIO_BASE_OF_VGA3D0 + (0x03DA - 0x03D0))

/* GX-3 Configuration/Status Registers */
#define S3_SHADOW_STATUS              0x48C0C
#define S3_BUFFER_THRESHOLD           0x48C10
#define S3_OVERFLOW_BUFFER            0x48C14
#define S3_OVERFLOW_BUFFER_PTR        0x48C18

#define ENABLE_BCI                        0x08   /* MM48C18_3 */
#define ENABLE_COMMAND_OVERFLOW_BUF       0x04   /* MM48C18_2 */
#define ENABLE_COMMAND_BUF_STATUS_UPDATE  0x02   /* MM48C18_1 */
#define ENABLE_SHADOW_STATUS_UPDATE       0x01   /* MM48C0C_0 */


#define MEMORY_CTRL0_REG            0xCA
#define MEMORY_CTRL1_REG            0xCB
#define MEMORY_CTRL2_REG            0xCC

#define MEMORY_CONFIG_REG           0x31

/* bitmap descriptor register */
#define S3_GLB_BD_LOW                      0X8168
#define S3_GLB_BD_HIGH                     0X816C
#define S3_PRI_BD_LOW                      0X8170
#define S3_PRI_BD_HIGH                     0X8174
#define S3_SEC_BD_LOW                      0X8178
#define S3_SEC_BD_HIGH                     0X817c


/**** S3 streams processor*****/

#define EXT_MISC_CTRL2              0x67
/* CR67[2] = 1 : enable stream 1 */
#define ENABLE_STREAM1              0x04
/* CR67[1] = 1 : enable stream 2 */
#define ENABLE_STREAM2              0x02
/* mask to clear CR67[2,1] */
#define NO_STREAMS                  0xF9
/* CR67[3] = 1 : Mem-mapped regs */
#define USE_MM_FOR_PRI_STREAM       0x08
#define HDM_SHIFT                   16
#define HDSCALE_4                   (2 << HDM_SHIFT)
#define HDSCALE_8                   (3 << HDM_SHIFT)
#define HDSCALE_16                  (4 << HDM_SHIFT)
#define HDSCALE_32                  (5 << HDM_SHIFT)
#define HDSCALE_64                  (6 << HDM_SHIFT)

/* Old Streams */

#define ENABLE_STREAMS_OLD	    0x0c
#define NO_STREAMS_OLD		    0xf3
/* CR69[0] = 1 : Mem-mapped regs */
#define USE_MM_FOR_PRI_STREAM_OLD   0x01


#define SELECT_IGA1                 0x4026
#define SELECT_IGA2_READS_WRITES    0x4f26

#define MEM_PS1                     0x10    /*CRCA_4 :Primary stream 1*/
#define MEM_PS2                     0x20    /*CRCA_5 :Primary stream 2*/
#define MEM_SS1                     0x40    /*CRCA_6 :Secondary stream 1*/
#define MEM_SS2                     0x80    /*CRCA_7 :Secondary stream 2*/

/*
 * There are two different streams engines used in the Savage line.
 * The old engine is in the 3D, 4, Pro, and Twister.
 * The new engine is in the 2000, MX, IX, and Super.
 */

/* Stream Processor 1 */

/* Primary Stream 1 Frame Buffer Address 0 */
#define PRI_STREAM_FBUF_ADDR0           0x81c0
/* Primary Stream 1 Frame Buffer Address 0 */
#define PRI_STREAM_FBUF_ADDR1           0x81c4
/* Primary Stream 1 Stride */
#define PRI_STREAM_STRIDE               0x81c8
/* Primary Stream 1 Frame Buffer Size */
#define PRI_STREAM_BUFFERSIZE           0x8214

/* Secondary stream 1 Color/Chroma Key Control */
#define SEC_STREAM_CKEY_LOW             0x8184
/* Secondary stream 1 Chroma Key Upper Bound */
#define SEC_STREAM_CKEY_UPPER           0x8194
/* Blend Control of Secondary Stream 1 & 2 */
#define BLEND_CONTROL                   0x8190
/* Secondary Stream 1 Color conversion/Adjustment 1 */
#define SEC_STREAM_COLOR_CONVERT1       0x8198
/* Secondary Stream 1 Color conversion/Adjustment 2 */
#define SEC_STREAM_COLOR_CONVERT2       0x819c
/* Secondary Stream 1 Color conversion/Adjustment 3 */
#define SEC_STREAM_COLOR_CONVERT3       0x81e4
/* Secondary Stream 1 Horizontal Scaling */
#define SEC_STREAM_HSCALING             0x81a0
/* Secondary Stream 1 Frame Buffer Size */
#define SEC_STREAM_BUFFERSIZE           0x81a8
/* Secondary Stream 1 Horizontal Scaling Normalization (2K only) */
#define SEC_STREAM_HSCALE_NORMALIZE	0x81ac
/* Secondary Stream 1 Horizontal Scaling */
#define SEC_STREAM_VSCALING             0x81e8
/* Secondary Stream 1 Frame Buffer Address 0 */
#define SEC_STREAM_FBUF_ADDR0           0x81d0
/* Secondary Stream 1 Frame Buffer Address 1 */
#define SEC_STREAM_FBUF_ADDR1           0x81d4
/* Secondary Stream 1 Frame Buffer Address 2 */
#define SEC_STREAM_FBUF_ADDR2           0x81ec
/* Secondary Stream 1 Stride */
#define SEC_STREAM_STRIDE               0x81d8
/* Secondary Stream 1 Window Start Coordinates */
#define SEC_STREAM_WINDOW_START         0x81f8
/* Secondary Stream 1 Window Size */
#define SEC_STREAM_WINDOW_SZ            0x81fc
/* Secondary Streams Tile Offset */
#define SEC_STREAM_TILE_OFF             0x821c
/* Secondary Stream 1 Opaque Overlay Control */
#define SEC_STREAM_OPAQUE_OVERLAY       0x81dc


/* Stream Processor 2 */

/* Primary Stream 2 Frame Buffer Address 0 */
#define PRI_STREAM2_FBUF_ADDR0          0x81b0
/* Primary Stream 2 Frame Buffer Address 1 */
#define PRI_STREAM2_FBUF_ADDR1          0x81b4
/* Primary Stream 2 Stride */
#define PRI_STREAM2_STRIDE              0x81b8
/* Primary Stream 2 Frame Buffer Size */
#define PRI_STREAM2_BUFFERSIZE          0x8218

/* Secondary Stream 2 Color/Chroma Key Control */
#define SEC_STREAM2_CKEY_LOW            0x8188
/* Secondary Stream 2 Chroma Key Upper Bound */
#define SEC_STREAM2_CKEY_UPPER          0x818c
/* Secondary Stream 2 Horizontal Scaling */
#define SEC_STREAM2_HSCALING            0x81a4
/* Secondary Stream 2 Horizontal Scaling */
#define SEC_STREAM2_VSCALING            0x8204
/* Secondary Stream 2 Frame Buffer Size */
#define SEC_STREAM2_BUFFERSIZE          0x81ac
/* Secondary Stream 2 Frame Buffer Address 0 */
#define SEC_STREAM2_FBUF_ADDR0          0x81bc
/* Secondary Stream 2 Frame Buffer Address 1 */
#define SEC_STREAM2_FBUF_ADDR1          0x81e0
/* Secondary Stream 2 Frame Buffer Address 2 */
#define SEC_STREAM2_FBUF_ADDR2          0x8208
/* Multiple Buffer/LPB and Secondary Stream 2 Stride */
#define SEC_STREAM2_STRIDE_LPB          0x81cc
/* Secondary Stream 2 Color conversion/Adjustment 1 */
#define SEC_STREAM2_COLOR_CONVERT1      0x81f0
/* Secondary Stream 2 Color conversion/Adjustment 2 */
#define SEC_STREAM2_COLOR_CONVERT2      0x81f4
/* Secondary Stream 2 Color conversion/Adjustment 3 */
#define SEC_STREAM2_COLOR_CONVERT3      0x8200
/* Secondary Stream 2 Window Start Coordinates */
#define SEC_STREAM2_WINDOW_START        0x820c
/* Secondary Stream 2 Window Size */
#define SEC_STREAM2_WINDOW_SZ           0x8210
/* Secondary Stream 2 Opaque Overlay Control */
#define SEC_STREAM2_OPAQUE_OVERLAY      0x8180

/* streams registers for old engine */
#define PSTREAM_CONTROL_REG		0x8180
#define COL_CHROMA_KEY_CONTROL_REG	0x8184
#define SSTREAM_CONTROL_REG		0x8190
#define CHROMA_KEY_UPPER_BOUND_REG	0x8194
#define SSTREAM_STRETCH_REG		0x8198
#define COLOR_ADJUSTMENT_REG		0x819C
#define BLEND_CONTROL_REG		0x81A0
#define PSTREAM_FBADDR0_REG		0x81C0
#define PSTREAM_FBADDR1_REG		0x81C4
#define PSTREAM_STRIDE_REG		0x81C8
#define DOUBLE_BUFFER_REG		0x81CC
/* updated by peterzhu,original define is DOUBLE_BUFFER_REG*/
#define MULTIPLE_BUFFER_REG		0x81CC
#define SSTREAM_FBADDR0_REG		0x81D0
#define SSTREAM_FBADDR1_REG		0x81D4
#define SSTREAM_STRIDE_REG		0x81D8
#define SSTREAM_VSCALE_REG		0x81E0
#define SSTREAM_VINITIAL_REG		0x81E4
#define SSTREAM_LINES_REG		0x81E8
#define STREAMS_FIFO_REG		0x81EC
#define PSTREAM_WINDOW_START_REG	0x81F0
#define PSTREAM_WINDOW_SIZE_REG		0x81F4
#define SSTREAM_WINDOW_START_REG	0x81F8
#define SSTREAM_WINDOW_SIZE_REG		0x81FC
#define FIFO_CONTROL			0x8200
#define PSTREAM_FBSIZE_REG		0x8300
#define SSTREAM_FBSIZE_REG		0x8304
#define SSTREAM_FBADDR2_REG		0x8308

#define SUBSYS_STAT_REG			0x8504

#define SRC_BASE			0xa4d4
#define DEST_BASE			0xa4d8
#define CLIP_L_R			0xa4dc
#define CLIP_T_B			0xa4e0
#define DEST_SRC_STR			0xa4e4
#define MONO_PAT_0			0xa4e8
#define MONO_PAT_1			0xa4ec

#define TILED_SURFACE_REGISTER_0        0x48c40
#define TILED_SURFACE_REGISTER_1        0x48c44
#define TILED_SURFACE_REGISTER_2        0x48c48
#define TILED_SURFACE_REGISTER_3        0x48c4c
#define TILED_SURFACE_REGISTER_4        0x48c50
                                                
#define TILED_SURF_BPP4    0x00000000  /* bits 31-30=00 for  4 bits/pixel */
#define TILED_SURF_BPP8    0x40000000  /* bits 31-30=01 for  8 bits/pixel */
#define TILED_SURF_BPP16   0x80000000	/* bits 31-30=10 for 16 bits/pixel */
#define TILED_SURF_BPP32   0xC0000000  /* bits 31-30=11 for 32 bits/pixel */

/* Streams Processor macros */
#define H_Shift                 0
#define H_Mask                  (((1L << 11) - 1) << H_Shift)
#define W_Shift                 16
#define W_Mask                  (((1L << 11) - 1) << W_Shift)

#define Y_Shift                 0
#define Y_Mask                  (((1L << 11) - 1) << Y_Shift)
#define X_Shift                 16
#define X_Mask                  (((1L << 11) - 1) << X_Shift)

#define XY(x,y)      ((((x+1)<<X_Shift)&X_Mask) | (((y+1)<<Y_Shift)&Y_Mask))
#define WH(w,h)      ((((w-1)<<W_Shift)&W_Mask) | (((h)<<H_Shift)&H_Mask))


/*
 * CR88_4 =1 : disable block write
 * the "2D" is partly to set this apart from "BLOCK_WRITE_DISABLE"
 * constant used for bitmap  descriptor
 */
#define DISABLE_BLOCK_WRITE_2D      0x10 
#define BLOCK_WRITE_DISABLE         0x0

/* CR31[0] set = Enable 8MB display memory through 64K window at A0000H. */
#define ENABLE_CPUA_BASE_A0000      0x01  

/* Constants for CR69. */

#define CRT_ACTIVE	0x01
#define LCD_ACTIVE	0x02
#define TV_ACTIVE	0x04
#define CRT_ATTACHED	0x10
#define LCD_ATTACHED	0x20
#define TV_ATTACHED	0x40


/*
 * reads from SUBSYS_STAT
 */
#define STATUS_WORD0            (INREG(0x48C00))
#define ALT_STATUS_WORD0        (INREG(0x48C60))
#define MAXLOOP			0xffffff
#define IN_SUBSYS_STAT()	(INREG(SUBSYS_STAT_REG))

#define MAXFIFO		0x7f00

#define inStatus1() (VGAHWPTR(pScrn))->readST01( VGAHWPTR(pScrn) )


/*
 * unprotect CRTC[0-7]              
 * CR11_7 = 0: Writing to all CRT Controller registers enabled      
 *        = 1: Writing to all bits of CR0~CR7 except CR7_4 disabled 
 */                                                                 
#define UnProtectCRTC()                 \
do {                                    \
    uchar byte;                          \
    OUTREG8(CRT_ADDRESS_REG,0x11);      \
    byte = INREG8(CRT_DATA_REG) & 0X7F; \
    OUTREG16(CRT_ADDRESS_REG,byte << 8 | 0x11); \
} while (0)

/*                                  
 * unlock extended regs                     
 * CR38:unlock CR20~CR3F            
 * CR39:unlock CR40~CRFF            
 * SR08:unlock SR09~SRFF            
 */                                 
#define UnLockExtRegs()                 \
do {                                    \
    OUTREG16(CRT_ADDRESS_REG,0X4838);   \
    OUTREG16(CRT_ADDRESS_REG,0XA039);   \
    OUTREG16(SEQ_ADDRESS_REG,0X0608);   \
} while (0)

#define VerticalRetraceWait()           \
do {                                    \
	INREG8(CRT_ADDRESS_REG);            \
	OUTREG8(CRT_ADDRESS_REG, 0x17);     \
	if (INREG8(CRT_DATA_REG) & 0x80) {  \
		int i = 0x10000;                \
		while ((INREG8(SYSTEM_CONTROL_REG) & 0x08) == 0x08 && i--) ; \
		i = 0x10000;                                                  \
		while ((INREG8(SYSTEM_CONTROL_REG) & 0x08) == 0x00 && i--) ; \
	} \
} while (0)

/*
 * Jiayo Hsu, Mar 21, 2002             
 * modify this to scalable schema,because different chips have differnt regs,          
 * besides add in patch code for  Paramount(SuperSavage) from 2K
 */
#define InI2CREG(a,reg)                                 \
do {                                                    \
	OUTREG8(CRT_ADDRESS_REG, reg);                      \
	if (psav->Chipset == S3_SUPERSAVAGE)                \
	   OUTREG8(CRT_DATA_REG, INREG8(CRT_DATA_REG)); 	\
	a = INREG8(CRT_DATA_REG);                           \
} while (0)

#define OutI2CREG(a,reg)                        \
do {                                            \
	OUTREG8(CRT_ADDRESS_REG, reg);				\
	if (psav->Chipset == S3_SUPERSAVAGE)		\
	   OUTREG8(CRT_DATA_REG, a); 				\
	OUTREG8(CRT_DATA_REG, a);                   \
} while (0)

#if 0 /* tim's code */
/*
 * NOTE: don't remove 'VGAIN8(vgaCRIndex);'.
 * If not present it will cause lockups on Savage4.
 * Ask S3, why.
 */
#define VerticalRetraceWait(psav) \
{ \
        VGAIN8(psav->vgaIOBase+4); \
	VGAOUT8(psav->vgaIOBase+4, 0x17); \
	if (VGAIN8(psav->vgaIOBase+5) & 0x80) { \
		while ((VGAIN8(psav->vgaIOBase + 0x0a) & 0x08) == 0x08) ; \
		while ((VGAIN8(psav->vgaIOBase + 0x0a) & 0x08) == 0x00) ; \
	} \
}
#endif /* tim's code */
 
#define HZEXP_COMP_1		0x54
#define HZEXP_BORDER		0x58
#define HZEXP_FACTOR_IGA1	0x59

#define VTEXP_COMP_1		0x56
#define VTEXP_BORDER		0x5a
#define VTEXP_FACTOR_IGA1	0x5b

#define EC1_CENTER_ON	0x10
#define EC1_EXPAND_ON	0x0c

#endif /* _SAVAGE_REGS_H */
