/*
 *	$Source: /u1/X/xterm/RCS/VTparse.h,v $
 *	$Header: VTparse.h,v 10.101 86/12/01 21:49:38 jg Rel $
 */

/* @(#)VTparse.h       X10/6.6B 12/26/86 */
#define	CASE_GROUND_STATE	0
#define	CASE_IGNORE_STATE	(CASE_GROUND_STATE+1)
#define	CASE_IGNORE_ESC		(CASE_IGNORE_STATE+1)
#define	CASE_IGNORE		(CASE_IGNORE_ESC+1)
#define	CASE_BELL		(CASE_IGNORE+1)
#define	CASE_BS			(CASE_BELL+1)
#define	CASE_CR			(CASE_BS+1)
#define	CASE_ESC		(CASE_CR+1)
#define	CASE_VMOT		(CASE_ESC+1)
#define	CASE_TAB		(CASE_VMOT+1)
#define	CASE_SI			(CASE_TAB+1)
#define	CASE_SO			(CASE_SI+1)
#define	CASE_SCR_STATE		(CASE_SO+1)
#define	CASE_SCS0_STATE		(CASE_SCR_STATE+1)
#define	CASE_SCS1_STATE		(CASE_SCS0_STATE+1)
#define	CASE_SCS2_STATE		(CASE_SCS1_STATE+1)
#define	CASE_SCS3_STATE		(CASE_SCS2_STATE+1)
#define	CASE_ESC_IGNORE		(CASE_SCS3_STATE+1)
#define	CASE_ESC_DIGIT		(CASE_ESC_IGNORE+1)
#define	CASE_ESC_SEMI		(CASE_ESC_DIGIT+1)
#define	CASE_DEC_STATE		(CASE_ESC_SEMI+1)
#define	CASE_ICH		(CASE_DEC_STATE+1)
#define	CASE_CUU		(CASE_ICH+1)
#define	CASE_CUD		(CASE_CUU+1)
#define	CASE_CUF		(CASE_CUD+1)
#define	CASE_CUB		(CASE_CUF+1)
#define	CASE_CUP		(CASE_CUB+1)
#define	CASE_ED			(CASE_CUP+1)
#define	CASE_EL			(CASE_ED+1)
#define	CASE_IL			(CASE_EL+1)
#define	CASE_DL			(CASE_IL+1)
#define	CASE_DCH		(CASE_DL+1)
#define	CASE_DA1		(CASE_DCH+1)
#define	CASE_TBC		(CASE_DA1+1)
#define	CASE_SET		(CASE_TBC+1)
#define	CASE_RST		(CASE_SET+1)
#define	CASE_SGR		(CASE_RST+1)
#define	CASE_CPR		(CASE_SGR+1)
#define	CASE_DECSTBM		(CASE_CPR+1)
#define	CASE_SUN_EMU		(CASE_DECSTBM+1)
#define	CASE_DECREQTPARM	(CASE_SUN_EMU+1)
#define	CASE_DECSET		(CASE_DECREQTPARM+1)
#define	CASE_DECRST		(CASE_DECSET+1)
#define	CASE_HIDDEN		(CASE_DECRST+1)
#define	CASE_DECALN		(CASE_HIDDEN+1)
#define	CASE_GSETS		(CASE_DECALN+1)
#define	CASE_DECSC		(CASE_GSETS+1)
#define	CASE_DECRC		(CASE_DECSC+1)
#define	CASE_DECKPAM		(CASE_DECRC+1)
#define	CASE_DECKPNM		(CASE_DECKPAM+1)
#define	CASE_IND		(CASE_DECKPNM+1)
#define	CASE_NEL		(CASE_IND+1)
#define	CASE_HTS		(CASE_NEL+1)
#define	CASE_RI			(CASE_HTS+1)
#define	CASE_SS2		(CASE_RI+1)
#define	CASE_SS3		(CASE_SS2+1)
#define	CASE_CSI_STATE		(CASE_SS3+1)
#define	CASE_OSC		(CASE_CSI_STATE+1)
#define	CASE_RIS		(CASE_OSC+1)
#define	CASE_LS2		(CASE_RIS+1)
#define	CASE_LS3		(CASE_LS2+1)
#define	CASE_LS3R		(CASE_LS3+1)
#define	CASE_LS2R		(CASE_LS3R+1)
#define	CASE_LS1R		(CASE_LS2R+1)
#define	CASE_PRINT		(CASE_LS1R+1)
#define	CASE_TO_STATUS		(CASE_PRINT+1)
#define	CASE_FROM_STATUS	(CASE_TO_STATUS+1)
#define	CASE_SHOW_STATUS	(CASE_FROM_STATUS+1)
#define	CASE_HIDE_STATUS	(CASE_SHOW_STATUS+1)
#define	CASE_ERASE_STATUS	(CASE_HIDE_STATUS+1)
#define	CASE_XTERM_SAVE		(CASE_ERASE_STATUS+1)
#define	CASE_XTERM_RESTORE	(CASE_XTERM_SAVE+1)
