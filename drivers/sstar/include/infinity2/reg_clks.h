#ifndef __REG_CLKS_H
#define __REG_CLKS_H

/* generated by CLK_DT_GEN_5 */
/* CLK FILENAME: I3\iNfinity3e_Clock_Table_20161111_v0p2.xls */
/* REG FILENAME: I3\20161109\iNfinity3e_reg_CLKGEN.xls, I3\20161109\iNfinity3e_reg_pm_sleep.xls, I3\20161109\iNfinity3e_reg_block.xls */

#define    REG_CKG0_BASE                  0x1F201600 //0x100B
//#define    REG_SC_GP_CTRL_BASE           0x1F226600
//#define    REG_PM_SLEEP_CKG_BASE         0x1F001C00

//====NORMAL_CKG_REG==============================================

#define    REG_CKG_UART0_BASE   (REG_CKG0_BASE+(0x13<<2))
#define    REG_CKG_UART0_OFFSET (8)
#define    REG_CKG_UART1_BASE   (REG_CKG0_BASE+(0x14<<2))
#define    REG_CKG_UART1_OFFSET (0)
#define    REG_CKG_UART2_BASE   (REG_CKG0_BASE+(0x14<<2))
#define    REG_CKG_UART2_OFFSET (8)
#define    REG_CKG_FUART_BASE   (REG_CKG0_BASE+(0x17<<2))
#define    REG_CKG_FUART_OFFSET (0)
#define    REG_CKG_FUARTSYN_BASE   (REG_CKG0_BASE+(0x17<<2))
#define    REG_CKG_FUARTSYN_OFFSET (4)
#endif
