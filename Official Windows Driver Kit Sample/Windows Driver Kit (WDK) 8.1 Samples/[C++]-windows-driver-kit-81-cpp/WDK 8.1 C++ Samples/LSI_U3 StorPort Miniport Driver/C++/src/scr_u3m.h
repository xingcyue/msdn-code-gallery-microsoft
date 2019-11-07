/*++

THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

Copyright (c) Microsoft Corporation. All rights reserved

Module Name:

    scr_u3m.h

Abstract:

    Private header file for lsi_u3.sys modules.  This contains private
    structure and function declarations as well as constant values which do
    not need to be exported.

Environment:

    kernel mode only

Notes:


Revision History:

--*/


/*
*************************************************************************
*                                                                       *
*   Copyright 1994-2008 LSI Corporation. All rights reserved.           *
*                                                                       *
************************************************************************/


typedef unsigned long ULONG;

ULONG	SCRIPT[] = {
	0x808CF800L,	0x000004B4L,
	0x808CF803L,	0x00000234L,
	0x808CF802L,	0x0000078CL,
	0x808CF804L,	0x000008D0L,
	0x80880000L,	0x00000494L,
	0x7C027F00L,	0x00000000L,
	0x60000040L,	0x00000000L,
	0xE2DC0004L,	0x00000970L,
	0x725F0080L,	0x00000000L,
	0x808C0002L,	0x000001E4L,
	0xE1100004L,	0x000000B8L,
	0x72140000L,	0x00000000L,
	0x8084FB04L,	0x00000048L,
	0xF11C0004L,	0x00000000L,
	0x721C0000L,	0x00000000L,
	0x80840000L,	0xFFFFFFE8L,
	0x721D0000L,	0x00000000L,
	0x80840000L,	0xFFFFFFD8L,
	0x721E0000L,	0x00000000L,
	0x80840000L,	0xFFFFFFC8L,
	0x721F0000L,	0x00000000L,
	0x80840000L,	0xFFFFFFB8L,
	0xC1000008L,	0x0000096CL,	0x00000000L,
	0x98180000L,	0x00000000L,
	0xF11C0004L,	0x00000008L,
	0xE21C0004L,	0x000000B8L,
	0x48000000L,	0x00000000L,
	0x80880000L,	0x000003D8L,
	0x48000000L,	0x00000000L,
	0xC100000CL,	0x00000000L,	0x00000960L,
	0xE1100004L,	0x00000960L,
	0x72100000L,	0x00000000L,
	0x8084F801L,	0xFFFFFEF0L,
	0x7C10F800L,	0x00000000L,
	0xC0000004L,	0x00000964L,	0x00000134L,
	0xE0100004L,	0x00000138L,
	0xE1100004L,	0x0000013CL,
	0xC1000004L,	0x00000000L,	0x00000978L,
	0xC1000004L,	0x00000978L,	0x0000096CL,
	0x47000008L,	0x00000370L,
	0xE1100004L,	0x000000F0L,
	0xF25C0004L,	0x00000000L,
	0xC1000004L,	0x00000968L,	0x000000F0L,
	0xE1100004L,	0x0000013CL,
	0xE1DC0004L,	0x0000093CL,
	0x1E000000L,	0x00000018L,
	0x828B0000L,	0x00000018L,
	0x838A0000L,	0x00000084L,
	0x878A0000L,	0x00000104L,
	0x80880000L,	0x0000053CL,
	0x1A000000L,	0x00000010L,
	0x818B0000L,	0x00000040L,
	0x808A0000L,	0x00000038L,
	0x87820000L,	0x00000018L,
	0x0F000001L,	0x00000020L,
	0x808C0004L,	0x000006D8L,
	0x80880000L,	0x000000CCL,
	0x838A0000L,	0x00000034L,
	0x80880000L,	0x000004F4L,
	0x7A3C0C80L,	0x00000000L,
	0xC0000004L,	0x000009C4L,	0x00000210L,
	0x80000000L,	0x00000000L,
	0x88080000L,	0x00000930L,
	0x83830000L,	0x00000008L,
	0x0B000001L,	0x000000DFL,
	0x878B0000L,	0x00000078L,
	0x80880000L,	0x000004B0L,
	0x48000000L,	0x00000000L,
	0x98080000L,	0x0000FF12L,
	0x7C10F800L,	0x00000000L,
	0xE0100004L,	0x00000268L,
	0x72100000L,	0x00000000L,
	0xE1100004L,	0x0000026CL,
	0xC1000004L,	0x00000000L,	0x00000978L,
	0xC1000004L,	0x00000978L,	0x0000096CL,
	0x47000008L,	0x00000240L,
	0xE1100004L,	0x000000F0L,
	0x6A1C0200L,	0x00000000L,
	0xF21C0001L,	0x00000000L,
	0x80880000L,	0xFFFFFEC0L,
	0x0F000001L,	0x00000020L,
	0x808C0000L,	0xFFFFFD74L,
	0x808C0004L,	0x00000068L,
	0x808C0002L,	0x00000040L,
	0x808C0003L,	0x00000350L,
	0x808C0001L,	0x00000058L,
	0x808C0023L,	0x00000110L,
	0x808C0007L,	0x00000180L,
	0x80840F80L,	0x00000120L,
	0x60000040L,	0x00000000L,
	0x878B0000L,	0xFFFFFFA8L,
	0x90080000L,	0x00000000L,
	0x60000040L,	0x00000000L,
	0x9F030000L,	0x0000AA01L,
	0x0F000001L,	0x00000020L,
	0x80840004L,	0x000003C0L,
	0x80880000L,	0x00000558L,
	0x60000040L,	0x00000000L,
	0x87830000L,	0x000003A8L,
	0x0F000001L,	0x00000020L,
	0x808C0006L,	0x00000040L,
	0x808C0003L,	0x00000068L,
	0x80840002L,	0x000000B0L,
	0x60000040L,	0x00000000L,
	0x0F000001L,	0x00000020L,
	0x80840003L,	0x00000098L,
	0x60000040L,	0x00000000L,
	0x0F000001L,	0x00000020L,
	0x98080000L,	0x0000AA1CL,
	0x60000040L,	0x00000000L,
	0x0F000001L,	0x00000020L,
	0x80840004L,	0x00000068L,
	0x60000040L,	0x00000000L,
	0x0F000005L,	0x00000020L,
	0x98080000L,	0x0000AA15L,
	0x60000040L,	0x00000000L,
	0x0F000001L,	0x00000020L,
	0x80840001L,	0x00000038L,
	0x60000040L,	0x00000000L,
	0x0F000002L,	0x00000020L,
	0x98080000L,	0x0000AA0CL,
	0x60000040L,	0x00000000L,
	0x87830000L,	0x000002E8L,
	0x0F000001L,	0x00000020L,
	0x980C0001L,	0x0000AA14L,
	0x58000008L,	0x00000000L,
	0x60000040L,	0x00000000L,
	0x878B0000L,	0x00000020L,
	0x86820000L,	0x000002B8L,
	0x0E000001L,	0x0000094CL,
	0x868B0000L,	0x000002A8L,
	0x80880000L,	0x000001D8L,
	0x0F000001L,	0x00000020L,
	0x60000040L,	0x00000000L,
	0x878B0000L,	0xFFFFFFE8L,
	0x80880000L,	0xFFFFFFC0L,
	0x98080000L,	0x0000FF0EL,
	0x58000008L,	0x00000000L,
	0x60000040L,	0x00000000L,
	0x86830000L,	0x00000260L,
	0x1E000000L,	0x00000018L,
	0x98080000L,	0x0000FF0AL,
	0x58000008L,	0x00000000L,
	0x60000040L,	0x00000000L,
	0x86830000L,	0x00000238L,
	0x1E000000L,	0x00000018L,
	0x80880000L,	0x00000168L,
	0x54000000L,	0x000001F8L,
	0xE1100004L,	0x00000954L,
	0x710A0000L,	0x00000000L,
	0x69080000L,	0x00000000L,
	0x6C103C00L,	0x00000000L,
	0x720A0000L,	0x00000000L,
	0x6A600000L,	0x00000000L,
	0x7A4F2000L,	0x00000000L,
	0xF1030001L,	0x00000003L,
	0x7C4FDF00L,	0x00000000L,
	0xF1060001L,	0x00000002L,
	0xF1050001L,	0x00000001L,
	0xF1BC0001L,	0x00000000L,
	0x0F000001L,	0x00000020L,
	0x60000040L,	0x00000000L,
	0x6C1C1F00L,	0x00000000L,
	0x87830000L,	0x00000118L,
	0x72580000L,	0x00000000L,
	0x80840020L,	0x00000108L,
	0x0F000001L,	0x00000021L,
	0x60000040L,	0x00000000L,
	0x0F000001L,	0x00000022L,
	0x60000040L,	0x00000000L,
	0x6A1C0000L,	0x00000000L,
	0xE1100004L,	0x00000018L,
	0x781D0000L,	0x00000000L,
	0x791C0000L,	0x00000000L,
	0x791D0000L,	0x00000000L,
	0x791C0000L,	0x00000000L,
	0x791D0000L,	0x00000000L,
	0x791C0000L,	0x00000000L,
	0x791D0000L,	0x00000000L,
	0xE21C0002L,	0x000005E8L,
	0xE01C0002L,	0x000005D0L,
	0xF11C0004L,	0x00000000L,
	0xE21C0004L,	0x00000600L,
	0x7E100400L,	0x00000000L,
	0xF11C0004L,	0x00000000L,
	0xE01C0004L,	0x000005FCL,
	0xE1100004L,	0x00000604L,
	0xC1000004L,	0x00000000L,	0x00000978L,
	0xF1DC0004L,	0x00000004L,
	0xC1000004L,	0x00000978L,	0x0000096CL,
	0x60000048L,	0x00000000L,
	0x818B0000L,	0xFFFFFBCCL,
	0x808A0000L,	0xFFFFFBC4L,
	0x828A0000L,	0xFFFFFB6CL,
	0x8F8A0000L,	0xFFFFFC60L,
	0x838A0000L,	0xFFFFFBD0L,
	0x868A0000L,	0xFFFFFE18L,
	0x80880000L,	0x00000088L,
	0x74600F00L,	0x00000000L,
	0x781D0000L,	0x00000000L,
	0x6D080000L,	0x00000000L,
	0x7D1D0000L,	0x00000000L,
	0x791C0000L,	0x00000000L,
	0x791C0000L,	0x00000000L,
	0x791C0000L,	0x00000000L,
	0xE01D0001L,	0x0000069DL,
	0x7A1C0000L,	0x00000000L,
	0x6A1D0000L,	0x00000000L,
	0xE1100004L,	0x0000001CL,
	0x80880000L,	0xFFFFFF00L,
	0x721A0000L,	0x00000000L,
	0xE11C0004L,	0x00000958L,
	0x721C0000L,	0x00000000L,
	0x980C0001L,	0x0000AA05L,
	0x80880000L,	0xFFFFFA08L,
	0x58000008L,	0x00000000L,
	0x60000040L,	0x00000000L,
	0x9E030000L,	0x0000FF08L,
	0x7C027F00L,	0x00000000L,
	0x0E000001L,	0x00000944L,
	0x48000000L,	0x00000000L,
	0x98080000L,	0x0000FF07L,
	0xE11C0004L,	0x00000008L,
	0x741C0100L,	0x00000000L,
	0x80840001L,	0x00000018L,
	0xC1000004L,	0x000000F0L,	0x00000008L,
	0xC1000004L,	0x00000014L,	0x000000F0L,
	0xE1100004L,	0x00000010L,
	0xF11C0004L,	0x00000000L,
	0x721C0000L,	0x00000000L,
	0x8084F802L,	0x00000030L,
	0xE11C0004L,	0x000009BCL,
	0x7A1C0300L,	0x00000000L,
	0xF21C0004L,	0x00000000L,
	0xF11C0004L,	0x00000008L,
	0xE21C0004L,	0x00000010L,
	0x80880000L,	0xFFFFF948L,
	0x98080000L,	0x0000FF13L,
	0xC1000004L,	0x000000F0L,	0x00000014L,
	0xC1000004L,	0x00000008L,	0x000000F0L,
	0x7A1C0100L,	0x00000000L,
	0xE21C0004L,	0x00000008L,
	0x80880000L,	0xFFFFF918L,
	0xE0B40004L,	0x000007ECL,
	0xE0CC0004L,	0x000007E8L,
	0x01000001L,	0x00000000L,	0x00000000L,
	0x80880000L,	0x00000010L,
	0xE0CC0004L,	0x00000804L,
	0x01000001L,	0x00000000L,
	0x7E4C0180L,	0x00000000L,
	0x7F4D0080L,	0x00000000L,
	0x7F4E0080L,	0x00000000L,
	0x7F4F0080L,	0x00000000L,
	0x78570000L,	0x00000000L,
	0x87820000L,	0x000000A8L,
	0x0F000001L,	0x00000020L,
	0x80840002L,	0xFFFFFA64L,
	0x60000040L,	0x00000000L,
	0x87830000L,	0xFFFFFE8CL,
	0x0F000001L,	0x00000020L,
	0x80840004L,	0xFFFFFE7CL,
	0xE0D00004L,	0x00000878L,
	0xC1000008L,	0x000000C8L,	0x00000000L,
	0xF2D00004L,	0x0000004CL,
	0xF2DC0004L,	0x00000004L,
	0xC1000004L,	0x000009BCL,	0x000008ACL,
	0xC0000004L,	0x000009C0L,	0x000008A4L,
	0xC1000004L,	0x00000978L,	0x00000000L,
	0x7C027F00L,	0x00000000L,
	0x60000040L,	0x00000000L,
	0xC0000004L,	0x000009B8L,	0x000008D4L,
	0xC1000008L,	0x000009BCL,	0x00000000L,
	0x80880000L,	0xFFFFF804L,
	0x83820000L,	0xFFFFFDFCL,
	0x80880000L,	0xFFFFF92CL,
	0x7C10F800L,	0x00000000L,
	0xF11C0004L,	0x00000000L,
	0xE21C0004L,	0x0000096CL,
	0xE1100004L,	0x000000F0L,
	0xF25C0004L,	0x00000000L,
	0xE11C0004L,	0x00000968L,
	0xE21C0004L,	0x000000F0L,
	0x98080000L,	0x0000AA09L,
	0x90080000L,	0x00000000L,
	0x98080000L,	0x00000000L,
	0x98080000L,	0x0000000CL,
	0x98080000L,	0x00000007L,
	0x98080000L,	0x00000000L,
	0x80000000L,	0x00000000L,
	0xC0000004L,	0x00000000L,	0x00000000L,
	0xC0000004L,	0x00000000L,	0x00000000L,
	0x80000000L,	0x00000000L

};

ULONG R_base_Used[] = {
	0x00000088L,
	0x0000021DL
};

ULONG R_context_Used[] = {
	0x0000023FL
};

ULONG R_dataXferParmTable_Used[] = {
	0x00000255L
};

ULONG R_vars_Used[] = {
	0x00000073L,
	0x000000AAL,
	0x000000C6L,
	0x000000D0L,
	0x000000DAL,
	0x000000E0L,
	0x000000E6L,
	0x000000ECL,
	0x000000F2L,
	0x000000F8L,
	0x00000100L,
	0x00000112L,
	0x0000014AL,
	0x00000156L,
	0x0000015AL,
	0x00000160L,
	0x000001ACL,
	0x000001C8L,
	0x000001CFL,
	0x000001D1L,
	0x000001D4L,
	0x000001E4L,
	0x000001EBL,
	0x000001EDL,
	0x000001F2L,
	0x0000020FL,
	0x00000217L
};

ULONG R_runningCount_Used[] = {
	0x00000183L,
	0x00000222L
};

ULONG R_iovPtr_Used[] = {
	0x00000220L
};

#define A_ZERO	0x00000000L
#define A_patchValue	0x00000000L
#define A_SVDT_SEM_FREE	0x00000000L
#define A_SCSIMESS_COMMAND_COMPLETE	0x00000000L
#define A_SVDT_SEM_START	0x00000001L
#define A_SCSIMESS_EXTENDED_MESSAGE	0x00000001L
#define A_SCSIMESS_SYNCHRONOUS_DATA_REQ	0x00000001L
#define A_SVDT_SEM_QSEM	0x00000001L
#define A_SCSISTAT_CHECK_CONDITION	0x00000002L
#define A_SVDT_SEM_UNLOCK	0x00000002L
#define A_SCSIMESS_SAVE_DATA_POINTER	0x00000002L
#define A_SCSIMESS_WIDE_DATA_REQUEST	0x00000003L
#define A_SCSIMESS_RESTORE_POINTERS	0x00000003L
#define A_SVDT_SEM_REQ_SNS	0x00000003L
#define A_INTFLY_SET	0x00000004L
#define A_SCSIMESS_DISCONNECT	0x00000004L
#define A_SCSIMESS_PPR_DATA_REQUEST	0x00000004L
#define A_SVDT_SEM_NVCONFIG	0x00000004L
#define A_SCSIMESS_MESSAGE_REJECT	0x00000007L
#define A_SCSIMESS_BUS_DEVICE_RESET	0x0000000CL
#define A_ENID_MASK	0x0000000FL
#define A_LUN_MASK	0x0000001FL
#define A_SCSIMESS_SIMPLE_QUEUE_TAG	0x00000020L
#define A_SCSIMESS_IGNORE_WIDE_RESIDUE	0x00000023L
#define A_SCSIMESS_IDENTIFY	0x00000080L
#define A_SVDT_SEM_MASK_VALUE	0x000000F8L
#define A_INTFLY_MASK	0x000000FBL
#define A_Save_Pointers	0x0000AA01L
#define A_ScriptsAborted	0x0000AA05L
#define A_NVConfigInt	0x0000AA09L
#define A_SynchNegotComp	0x0000AA0CL
#define A_IgnoreWideRes	0x0000AA14L
#define A_PprNegotComp	0x0000AA15L
#define A_WideNegotComp	0x0000AA1CL
#define A_DeviceReset	0x0000FF07L
#define A_ResetFailed	0x0000FF08L
#define A_ParityMessageSent	0x0000FF0AL
#define A_MessageRejected	0x0000FF0EL
#define A_CheckCondition	0x0000FF12L
#define A_CAQueueFull	0x0000FF13L
#define Ent_Add2CaQueue      	0x0000071CL
#define Ent_burstRS_PA       	0x00000264L
#define Ent_CommandScriptStart	0x000000ECL
#define Ent_ContNegScript    	0x00000494L
#define Ent_DQ_entry         	0x0000096CL
#define Ent_DataOutJump1     	0x000001B8L
#define Ent_DataOutJump2     	0x0000062CL
#define Ent_JumpPatch        	0x00000048L
#define Ent_NopPatch         	0x00000204L
#define Ent_PhaseMisJump1    	0x00000828L
#define Ent_PhaseMisJump2    	0x000007F8L
#define Ent_PhaseMisJump64   	0x000007D4L
#define Ent_postDoneQ        	0x000000B0L
#define Ent_RejectMessage    	0x0000040CL
#define Ent_RestartScript    	0x0000061CL
#define Ent_SendErrorMessage 	0x0000046CL
#define Ent_scriptStopFlag   	0x00000958L
#define Ent_svdt             	0x00000978L


ULONG	LABELPATCHES[] = {
	0x0000000FL,
	0x00000015L,
	0x0000002DL,
	0x00000034L,
	0x0000003DL,
	0x0000003FL,
	0x00000047L,
	0x00000048L,
	0x0000004AL,
	0x0000004CL,
	0x0000004FL,
	0x00000051L,
	0x00000052L,
	0x00000056L,
	0x0000005AL,
	0x0000005BL,
	0x0000005DL,
	0x0000005FL,
	0x0000007FL,
	0x00000080L,
	0x00000084L,
	0x00000094L,
	0x00000098L,
	0x0000009BL,
	0x0000009DL,
	0x0000009EL,
	0x000000A2L,
	0x0000010CL,
	0x00000132L,
	0x00000170L,
	0x00000172L,
	0x00000176L,
	0x0000017CL,
	0x0000017EL,
	0x00000181L,
	0x00000185L,
	0x00000186L,
	0x000001A6L,
	0x000001B2L,
	0x000001C2L,
	0x000001CEL,
	0x000001D2L,
	0x000001DCL,
	0x000001EAL,
	0x000001EEL,
	0x000001F6L,
	0x000001F8L,
	0x000001FFL,
	0x0000021BL,
	0x00000224L,
	0x00000225L,
	0x00000227L,
	0x00000228L,
	0x0000022AL,
	0x00000231L,
	0x00000232L,
	0x00000234L,
	0x00000241L,
	0x00000243L,
	0x00000247L,
	0x00000249L
};

#define	INSTRUCTIONS	 0x00000124L