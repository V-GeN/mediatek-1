/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/


/*******************************************************************************
 *
 * Filename:
 * ---------
 *   meta_data_type.h
 *
 * Project:
 * --------
 *   YUSU
 *
 * Description:
 * ------------
 *    header file of main function
 *
 * Author:
 * -------
 *   Lu.Zhang (MTK80251) 09/11/2009
 *
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 01 20 2010 lu.zhang
 * [ALPS00004332]Create META 
 * .
 *
 * 01 20 2010 lu.zhang
 * [ALPS00004332]Create META 
 * .
 *
 *
 * 
 *
 * 
 *
 *******************************************************************************/

#ifndef __META_DATA_TYPE_H__
#define __META_DATA_TYPE_H__



#define   MUX_KEY_WORD		    0x5A
#define   SOFT_FLOW_CTRL_BYTE   0x77

#define  ESC_NOT_DETECT 0
#define  ESC_DETECT     1

#define kal_bool	BOOL
#define KAL_TRUE	TRUE
#define KAL_FALSE	FALSE

//RX
#define  RS232_LOGGED_PRIMITIVE_TYPE   0x60
#define  RS232_PS_TRACE_TYPE           0x61
#define  RS232_PS_PROMPT_TRACE_TYPE    0x62
#define  RS232_COMMAND_TYPE_OCTET      0x63
#define  RS232_INJECT_PRIMITIVE_OCTET  0x64
#define  RS232_INJECT_UT_PRIMITIVE     0x65
#define  RS232_INJECT_APPRIMITIVE_OCTET     0x66



/* Define the rs232 frame states */
#define  STX_OCTET            0x55

#define  RS232_FRAME_STX               0
#define  RS232_FRAME_LENHI             1
#define  RS232_FRAME_LENLO             2
#define  RS232_FRAME_TYPE              3
#define  RS232_FRAME_LOCAL_LENHI       4
#define  RS232_FRAME_LOCAL_LENLO       5
#define  RS232_FRAME_PEER_LENHI        6
#define  RS232_FRAME_PEER_LENLO        7
#define  RS232_FRAME_COMMAND_DATA      8
#define  RS232_FRAME_COMMAND_HEADER    9
#define  RS232_FRAME_UT_DATA		   10
#define  RS232_FRAME_MD_DATA		   11
#define  RS232_FRAME_AP_INJECT_PIRIMITIVE_HEADER 12
#define  RS232_FRAME_AP_PRIM_LOCAL_PARA_DATA     13
#define  RS232_FRAME_AP_PRIM_PEER_DATA           14
#define  RS232_FRAME_CHECKSUM          15
#define  RS232_FRAME_KEYWORD		   16
#define  RS232_FRAME_SOFT_CTRL         17



typedef enum
{
	TST_NULL_COMMAND,
	TST_LOG_ON_OFF,
	TST_SET_PRIM_MOD_FILTER,
	TST_SET_PRIM_SAP_FILTER,
	TST_SET_PS_TRC_FILTER,
	TST_SET_L1_TRC_FILTER,
	TST_INJECT_STRING_TO_MODULE,
	TST_INJECT_AT_CMD,
	TST_REBOOT_TARGET_CMD,
	TST_SET_TRAP_FILTER,
	TST_READ_GLOBAL_VARIABLE,
	TST_WRITE_GLOBAL_VARIABLE,
	TST_EM_MODE_CONFIG,
	TST_SIM_FILE_INFO_REQ,
	TST_SIM_READ_REQ,
	TST_SIM_WRITE_REQ,
#ifdef __GEMINI__
  TST_SIM_2_FILE_INFO_REQ,
	TST_SIM_2_READ_REQ,
	TST_SIM_2_WRITE_REQ,
#endif //#ifdef __GEMINI__
	TST_FT_MODE_CONFIG,
	TST_NVRAM_EXCEPTION_CMD,
	TST_READ_MEMORY_ADDR_CMD,
    TST_NVRAM_STATISTIC_CMD,
#if defined(__PS_SERVICE__) && defined (__EM_MODE__) && 0
	TST_EM_MODE_POOL_CONFIG_CMD,
#endif
	TST_QUERY_MEMORY_RANGE_CMD,
	TST_FORCE_ASSERT_CMD,

#ifdef VOICE_RECOGNITION_TEST	
	TST_VRT_CMD = 0x32, 
#endif		

  TST_SET_DSP_FILTER_CMD = 0x33,
  TST_QUERY_SOFT_FC_CHAR_CMD,
  TST_KDWP_RECV_CMD,
  TST_KDWP_CONTROL_CMD,
  TST_FLUSH_SWDBG_CMD,
  TST_CTI_COMMAND_CMD,
	TST_WRITE_MEMORY_CMD,
	
	TST_GDI_SNAPSHOT_CMD,
	TST_SLEEP_MODE_CMD,
	TST_FILE_TRANSFER_CMD,

	TST_CONFIG_SWLA_CMD,
	TST_ST_START_CMD,
	TST_ST_STOP_CMD,
	TST_SET_TRAP_MSG_CMD,
	TST_REBOOT_FOR_MMI_AUTO_TEST_CMD,
	TST_UBDB_CMD,
	TST_SET_3G_FILTER_CMD,
	TST_VC_CMD,
	TST_SIMPLE_CMD,	
	TST_COMMAND_TYPE_LAST_CMD

}
tst_command_type;

enum module_type
{	
	MOD_NIL = 0,
	MOD_NVRAM,
	MOD_TST,
	MOD_TST_READER,
	MOD_ATCI,
	MOD_MM,
	MOD_CC,
	MOD_CISS,
	MOD_SMS,
	MOD_SIM,
	MOD_L4C,
	MOD_TCM,
	MOD_SMSAL,
	MOD_UEM,
	MOD_RAC,
	MOD_SMU,
	MOD_USAT,
	MOD_CSM,
	MOD_ENG,
	MOD_PHB,
	MOD_RRM,
	MOD_AS,
	MOD_RMC = MOD_AS,
	MOD_RMP = MOD_RMC,
	MOD_GPRS_RLC,
	MOD_GPRS_MAC,
	MOD_LAPDM,
	MOD_MPAL,
	MOD_REASM,
	MOD_SNDCP,
	MOD_SM,
	MOD_LLC,
	MOD_PPP,
	MOD_TDT,
	MOD_RLP,
	MOD_L2R,
	MOD_MMI,
	MOD_L1,
	MOD_L1HISR,
	MOD_L1SP,
	MOD_L1SPHISR,
	MOD_IDLE,
	MOD_DRVKBD,
	MOD_BMT,
	MOD_UART1_HISR,
	MOD_UART2_HISR,
	MOD_SIM_HISR,
	MOD_KEYPAD_HISR,
	MOD_GPT_HISR,
	MOD_RTC_HISR,
	MOD_TIMER,
	MOD_SYSTEM,
	MOD_SYSDEBUG,
	MOD_CUSTOM_BEGIN,
	MOD_FT = 0,
	LAST_MOD_ID = (MOD_SYSDEBUG + 16)

};



enum msg_type
{
	MSG_ID_INVALID_TYPE = 0,
	MSG_ID_MMCC_PROMPT_REJ,
	MSG_ID_MMCC_PROMPT_RSP,
	MSG_ID_MMCC_REL_REQ,
	MSG_ID_MMCC_EST_REQ,
	MSG_ID_MMCC_REEST_REQ,
	MSG_ID_MMCC_DATA_REQ,
	MSG_ID_MMSS_EST_REQ,
	MSG_ID_MMSS_DATA_REQ,
	MSG_ID_MMSS_REL_REQ,
	MSG_ID_MMSMS_REL_REQ,
	MSG_ID_MMSMS_DATA_REQ,
	MSG_ID_MMSMS_EST_REQ,
	MSG_ID_GMMREG_ATTACH_REQ, 
   	MSG_ID_GMMREG_DETACH_REQ,                     
   	MSG_ID_GMMREG_PLMN_SEARCH_REQ,
   	MSG_ID_GMMREG_START_REG_REQ,
   	MSG_ID_GMMREG_INIT_REQ,
   	MSG_ID_GMMREG_BAND_SEL_REQ,
   	MSG_ID_GMMREG_SEL_MODE_REQ, 
	MSG_ID_GMMAS_SIG_EST_CNF,        
	MSG_ID_GMMAS_SIG_EST_REJ,        
	MSG_ID_GMMAS_SIG_REL_IND,         
	MSG_ID_GMMAS_PAGE_IND,   
  	MSG_ID_GMMAS_DATA_IND,   
  	MSG_ID_GMMAS_SYNC_IND,
  	MSG_ID_GMMAS_NO_PLMN_IND,  
  	MSG_ID_GMMAS_CELL_INFO_IND,  
  	MSG_ID_GMMAS_STATE_CHANGE_IND,
  	MSG_ID_GMMAS_SYS_INFO_IND,       
  	MSG_ID_GMMAS_SIG_ERROR_IND,  
  	MSG_ID_GMMAS_SIG_EST_IND,
  	MSG_ID_GMMAS_SIG_ABORT_IND, 
  	MSG_ID_GMMAS_PLMN_LIST_IND,
	MSG_ID_LLGMM_TRIGGER_IND,
	MSG_ID_LLGMM_UNITDATA_IND,
	MSG_ID_LLGMM_STATUS_IND,
	MSG_ID_MNCC_SETUP_REQ = 601,
	MSG_ID_MNCC_SETUP_RES,
	MSG_ID_MNCC_REJ_REQ,
	MSG_ID_MNCC_CALL_CONF_REQ,
	MSG_ID_MNCC_ALERT_REQ,
	MSG_ID_MNCC_NOTIFY_REQ,
	MSG_ID_MNCC_DISC_REQ,
	MSG_ID_MNCC_REL_REQ,
	MSG_ID_MNCC_FACILITY_REQ,
	MSG_ID_MNCC_START_DTMF_REQ,
	MSG_ID_MNCC_STOP_DTMF_REQ,
	MSG_ID_MNCC_MODIFY_REQ,
	MSG_ID_MNCC_MODIFY_RES,
	MSG_ID_MNCC_HOLD_REQ,
	MSG_ID_MNCC_RETRIEVE_REQ,
	MSG_ID_MNCC_USER_INFO_REQ,
	MSG_ID_MNCC_CCBS_EST_RES,
	MSG_ID_MNCC_CCBS_SETUP_REQ,
	MSG_ID_MNCC_CCBS_REJ_REQ,
	MSG_ID_MNCC_ACM_UPDATE_REQ,
	MSG_ID_MMCC_DATA_IND,
	MSG_ID_MMCC_EST_CNF,
	MSG_ID_MMCC_EST_REJ,
	MSG_ID_MMCC_EST_INTR,
	MSG_ID_MMCC_EST_IND,
	MSG_ID_MMCC_REL_IND,
	MSG_ID_MMCC_ERR_IND,
	MSG_ID_MMCC_PROMPT_IND,
	MSG_ID_MMCC_REEST_CNF,
	MSG_ID_MMCC_REEST_START_IND,
	MSG_ID_MMCC_SYNC_IND,
	MSG_ID_CC_TIMER_EXPIRY,
	MSG_ID_CC_CODE_END =  MSG_ID_CC_TIMER_EXPIRY,
	MSG_ID_MNSS_BEGIN_REQ = 701,
	MSG_ID_MNSS_FAC_REQ,
	MSG_ID_MNSS_END_REQ,
	MSG_ID_MMSS_DATA_IND,
	MSG_ID_MMSS_EST_CNF,
	MSG_ID_MMSS_EST_REJ,
	MSG_ID_MMSS_EST_INTR,
	MSG_ID_MMSS_EST_IND,
	MSG_ID_MMSS_REL_IND,
	MSG_ID_MMSS_ERR_IND,
	MSG_ID_CISS_TIMER_EXPIRY,
	MSG_ID_CISS_CODE_END = MSG_ID_CISS_TIMER_EXPIRY,
	MSG_ID_GMMSMS_REG_STATE_IND = 801,
	MSG_ID_LLSMS_UNITDATA_IND,
	MSG_ID_MMSMS_EST_IND,
	MSG_ID_MMSMS_EST_CNF,
	MSG_ID_MMSMS_DATA_IND,
	MSG_ID_MMSMS_REL_IND,
	MSG_ID_MMSMS_ERR_IND,
	MSG_ID_MMSMS_EST_REJ,
	MSG_ID_SMS_TIMER_EXPIRY,
	MSG_ID_MMSMS_EST_INTR,	
	MSG_ID_SMS_SUBMIT,
	MSG_ID_SMS_SUBMIT_ABORT,
	MSG_ID_SMS_COMMAND,
	MSG_ID_SMS_COMMAND_ABORT,
	MSG_ID_SMS_DELIVER_REPORT_ACK,
	MSG_ID_SMS_DELIVER_REPORT_NACK,
	MSG_ID_SMS_SERVICE_REQ,
	MSG_ID_SMS_MORE_MSG_SEND_REQ,
	MSG_ID_SMS_MEM_AVL_NOTIF,
	MSG_ID_SMS_CODE_END = MSG_ID_SMS_MEM_AVL_NOTIF,
	MSG_ID_GMMSIM_GSM_ALGO_REQ = 901,
	MSG_ID_SIM_START_REQ,
	MSG_ID_SIM_START_CNF,
	MSG_ID_SIM_ERROR_IND,
	MSG_ID_SIM_MMI_READY_IND,
	MSG_ID_SIM_MM_READY_IND,
	MSG_ID_SIM_CC_READY_IND,
	MSG_ID_SIM_SMS_READY_IND,
	MSG_ID_SIM_RUN_ALGO_REQ,
	MSG_ID_SIM_RUN_ALGO_CNF,
	MSG_ID_SIM_READ_REQ,
	MSG_ID_SIM_READ_CNF,
	MSG_ID_SIM_WRITE_REQ,
	MSG_ID_SIM_WRITE_CNF,
	MSG_ID_SIM_INCREASE_REQ,
	MSG_ID_SIM_INCREASE_CNF,
	MSG_ID_SIM_SECURITY_REQ,
	MSG_ID_SIM_SECURITY_CNF,
	MSG_ID_SIM_FILE_INFO_REQ,
	MSG_ID_SIM_FILE_INFO_CNF,
	MSG_ID_SIM_SEEK_REQ,
	MSG_ID_SIM_SEEK_CNF,
	MSG_ID_SIM_DIAL_MODE_REQ,
	MSG_ID_SIM_DIAL_MODE_CNF,
	MSG_ID_SIM_STATUS_REQ,
	MSG_ID_SIM_STATUS_CNF,
	MSG_ID_SIM_TIMER_EXPIRY,
	MSG_ID_SIM_CODE_END = MSG_ID_SIM_TIMER_EXPIRY,
	MSG_ID_L4C_FIRST_CNF_MSG = 1001,
	MSG_ID_L4CCSM_CC_STARTUP_CNF = MSG_ID_L4C_FIRST_CNF_MSG,
	MSG_ID_L4CCSM_CC_ACM_RESET_CNF,
	MSG_ID_L4CCSM_CC_ACMMAX_SET_CNF,
	MSG_ID_L4CCSM_CC_CRSS_CNF,
	MSG_ID_L4CCSM_CC_CALL_DEFLECTION_CNF,
	MSG_ID_L4CCSM_CC_START_DTMF_CNF,
	MSG_ID_L4CCSM_CC_STOP_DTMF_CNF,
	MSG_ID_L4CCSM_CC_CALL_ACCEPT_CNF,
	MSG_ID_L4CCSM_CC_CALL_MODIFY_CNF,
	MSG_ID_L4CCSM_CC_CALL_SETUP_CNF,
	MSG_ID_L4CCSM_CC_CALL_DISC_CNF,
   	MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_CNF, 
	MSG_ID_L4CCSM_CC_DATA_ACTIVATE_CNF,
	MSG_ID_L4CCSM_CISS_EMLPP_END_CNF,
	MSG_ID_L4CCSM_CISS_CF_END_CNF,
	MSG_ID_L4CCSM_CISS_CW_END_CNF,
	MSG_ID_L4CCSM_CISS_CB_END_CNF,
	MSG_ID_L4CCSM_CISS_CLI_END_CNF,
	MSG_ID_L4CCSM_CISS_PUSSR_END_CNF,
   	MSG_ID_L4CCSM_CISS_USSR_END_CNF,           
	MSG_ID_L4CCSM_CISS_USSN_END_CNF,
	MSG_ID_L4CCSM_CISS_CCBS_END_CNF ,
   	MSG_ID_L4CUEM_SET_PROFILE_CNF,
	MSG_ID_L4CUEM_STARTUP_CNF,
	MSG_ID_L4CUEM_STORE_IMELODY_CNF,
	MSG_ID_L4CUEM_DELETE_IMELODY_CNF,
	MSG_ID_L4CPHB_STARTUP_CNF,
	MSG_ID_L4CPHB_SEARCH_CNF,
   	MSG_ID_L4CPHB_READ_CNF,                    
   	MSG_ID_L4CPHB_WRITE_CNF,
	MSG_ID_L4CPHB_DELETE_CNF,
	MSG_ID_L4CPHB_APPROVE_CNF,
	MSG_ID_L4CSMU_START_CNF,
	MSG_ID_L4CSMU_SECURITY_CNF,
	MSG_ID_L4CSMU_SET_PERSONALIZATION_CNF,
	MSG_ID_L4CSMU_PLMN_SEL_WRITE_CNF,
	MSG_ID_L4CSMU_SIM_ACCESS_CNF,
	MSG_ID_L4CSMU_PUCT_WRITE_CNF,
   	MSG_ID_L4CSMU_DIAL_MODE_CNF,               
	MSG_ID_L4CSMU_PUCT_READ_CNF,
   	MSG_ID_L4CSMSAL_INIT_CNF, 
   	MSG_ID_L4CSMSAL_READ_CNF,
   	MSG_ID_L4CSMSAL_SEND_CNF,
   	MSG_ID_L4CSMSAL_WRITE_CNF,
   	MSG_ID_L4CSMSAL_DELETE_CNF,
   	MSG_ID_L4CSMSAL_SEND_FROM_STORAGE_CNF,
   	MSG_ID_L4CSMSAL_SET_PARAMETER_CNF,
   	MSG_ID_NVRAM_STARTUP_CNF,
   	MSG_ID_L4C_LAST_CNF_MSG = MSG_ID_NVRAM_STARTUP_CNF,
    MSG_ID_L4C_FIRST_IND_MSG,
   	MSG_ID_L4CCSM_CC_ATTACH_IND = MSG_ID_L4C_FIRST_IND_MSG,
	MSG_ID_L4CCSM_CC_DETACH_IND,
	MSG_ID_L4CCSM_CC_CCM_IND,
	MSG_ID_L4CCSM_CC_CALL_MODIFY_IND,
	MSG_ID_L4CCSM_CC_CALL_SETUP_IND,
	MSG_ID_L4CCSM_CC_CALL_ALERT_IND,
	MSG_ID_L4CCSM_CC_CALL_CONNECT_IND,
	MSG_ID_L4CCSM_CC_CALL_DISC_IND,
	MSG_ID_L4CCSM_CC_CALL_REL_IND,
   	MSG_ID_L4CCSM_CC_PROGRESS_IND,
	MSG_ID_L4CCSM_CC_CALL_PROC_IND,
	MSG_ID_L4CCSM_CC_NOTIFY_SS_IND, 
	MSG_ID_L4CCSM_CC_AUTO_DTMF_START_IND,
	MSG_ID_L4CCSM_CC_AUTO_DTMF_COMPLETE_IND,
	MSG_ID_L4CCSM_CC_CCBS_CALL_DEACTIVATE_IND,
	MSG_ID_L4CCSM_CC_SS_NOTIFY_IND,
	MSG_ID_L4CCSM_CC_CALL_PREEMPT_IND,
	MSG_ID_L4CCSM_CISS_USSR_BEGIN_IND,
	MSG_ID_L4CCSM_CISS_USSN_BEGIN_IND,
	MSG_ID_L4CCSM_CISS_USSR_FAC_IND,
	MSG_ID_L4CCSM_CISS_USSN_FAC_IND,
	MSG_ID_L4CCSM_CISS_CB_FAC_IND,
	MSG_ID_L4CSMU_SECURITY_IND,
	MSG_ID_L4CSMSAL_CB_MSG_IND,     
	MSG_ID_L4CSMSAL_CB_DL_IND,      
	MSG_ID_L4CSMSAL_MEM_FULL_IND,
   	MSG_ID_L4CSMSAL_MEM_EXCEED_IND,
   	MSG_ID_L4CSMSAL_MEM_AVAILABLE_IND,
   	MSG_ID_L4CSMSAL_MSG_WAITING_IND,
   	MSG_ID_L4CSMSAL_NEW_MSG_PDU_IND,
   	MSG_ID_L4CSMSAL_NEW_MSG_TEXT_IND,
   	MSG_ID_L4CSMSAL_NEW_MSG_INDEX_IND,
	MSG_ID_L4C_LAST_IND_MSG,
	MSG_ID_L4C_CODE_END = MSG_ID_L4C_LAST_IND_MSG,
	MSG_ID_TAF_EXT_PDP_ACTIVATE_IND = 1501,
	MSG_ID_TCM_PDP_ACTIVATE_REQ,
	MSG_ID_SMREG_PDP_ACTIVATE_IND,
	MSG_ID_SMREG_PDP_ACTIVATE_CNF,
	MSG_ID_SMREG_PDP_ACTIVATE_REJ,
	MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF,
	MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ,
	MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP,
	MSG_ID_TCM_TIMER_EXPIRY,
	MSG_ID_TAF_DATA_IND,
	MSG_ID_SN_DATA_IND,
	MSG_ID_SN_UNITDATA_IND,
	MSG_ID_TCM_PDP_MODIFY_REQ,
	MSG_ID_SMREG_PDP_MODIFY_IND,
	MSG_ID_SMREG_PDP_MODIFY_CNF,
	MSG_ID_SMREG_PDP_MODIFY_REJ,
	MSG_ID_TCM_PDP_DEACTIVATE_REQ,
	MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND,
	MSG_ID_SMREG_PDP_DEACTIVATE_IND,
	MSG_ID_SMREG_PDP_DEACTIVATE_CNF,
	MSG_ID_TAF_LINK_FREE_IND,
	MSG_ID_TCM_CODE_END = MSG_ID_TAF_LINK_FREE_IND,
	MSG_ID_MNCC_SETUP_IND = 1601,
	MSG_ID_MNCC_SETUP_CNF,
	MSG_ID_MNCC_SETUP_COMPL_IND,
	MSG_ID_MNCC_REJ_IND,
	MSG_ID_MNCC_CALL_PROC_IND,
	MSG_ID_MNCC_PROGRESS_IND,
	MSG_ID_MNCC_ALERT_IND,
	MSG_ID_MNCC_NOTIFY_IND,
	MSG_ID_MNCC_DISC_IND,
	MSG_ID_MNCC_REL_IND,
	MSG_ID_MNCC_REL_CNF,
	MSG_ID_MNCC_FACILITY_IND,
	MSG_ID_MNCC_START_DTMF_CNF,
	MSG_ID_MNCC_STOP_DTMF_CNF,
	MSG_ID_MNCC_MODIFY_IND,
	MSG_ID_MNCC_MODIFY_CNF,
	MSG_ID_MNCC_SYNC_IND,
	MSG_ID_MNCC_HOLD_CNF,
	MSG_ID_MNCC_RETRIEVE_CNF,
	MSG_ID_MNCC_USER_INFO_IND,
	MSG_ID_MNCC_CONGESTION_CTRL_IND,
	MSG_ID_MNCC_CCBS_EST_IND,
	MSG_ID_MNCC_CCBS_RECALL_IND,
	MSG_ID_MNCC_AOC_IND,
	MSG_ID_MNCC_SIG_CON_REEST_IND,
	MSG_ID_MNCC_SIG_CON_REEST_CNF,
   	MSG_ID_L4CCSM_CC_STARTUP_REQ,
   	MSG_ID_L4CCSM_CC_ACM_RESET_REQ,
	MSG_ID_L4CCSM_CC_ACMMAX_SET_REQ,
	MSG_ID_L4CCSM_CC_CALL_DEFLECTION_REQ,
	MSG_ID_L4CCSM_CC_CRSS_REQ,
	MSG_ID_L4CCSM_CC_CALL_ACCEPT_REQ,
	MSG_ID_L4CCSM_CC_CALL_DISC_REQ,
	MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ,
	MSG_ID_L4CCSM_CC_CALL_SETUP_REQ,
	MSG_ID_L4CCSM_CC_DATA_ACTIVATE_REQ,
	MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_REQ,
	MSG_ID_L4CCSM_CC_START_DTMF_REQ,
	MSG_ID_L4CCSM_CC_STOP_DTMF_REQ,
	MSG_ID_CSMTDT_ACTIVATE_CNF,
	MSG_ID_CSMTDT_ACTIVATE_CNF_NEG,
	MSG_ID_CSML2R_ACTIVATE_CNF,
	MSG_ID_CSML2R_ACTIVATE_CNF_NEG,
	MSG_ID_CSML2R_UPGRADE_PROPOSAL_IND,
	MSG_ID_CSML2R_XID_IND,
	MSG_ID_CSML2R_TEST_CNF,
	MSG_ID_CSML2R_TEST_CNF_NEG,
	MSG_ID_CSML2R_DISC_IND,
	MSG_ID_CSML2R_UNITDATA_IND,
	MSG_ID_L4CCSM_CISS_CF_BEGIN_REQ ,
	MSG_ID_L4CCSM_CISS_CW_BEGIN_REQ ,
	MSG_ID_L4CCSM_CISS_CB_BEGIN_REQ ,
	MSG_ID_L4CCSM_CISS_EMLPP_BEGIN_REQ ,
	MSG_ID_L4CCSM_CISS_CLI_BEGIN_REQ ,
	MSG_ID_L4CCSM_CISS_CCBS_BEGIN_REQ ,
	MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ ,
	MSG_ID_L4CCSM_CISS_CB_FAC_RES ,
	MSG_ID_L4CCSM_CISS_USSR_FAC_RES ,
	MSG_ID_L4CCSM_CISS_USSN_FAC_RES ,
	MSG_ID_L4CCSM_CISS_END_RES ,
	MSG_ID_MNSS_BEGIN_IND,
	MSG_ID_MNSS_FAC_IND,
	MSG_ID_MNSS_END_IND,
	MSG_ID_CSM_TIMER_EXPIRY,
	MSG_ID_CSM_CODE_END  = MSG_ID_CSM_TIMER_EXPIRY,		
	MSG_ID_L4CSMSAL_INIT_REQ = 1701,
	MSG_ID_L4CSMSAL_DE_INIT_REQ,
	MSG_ID_L4CSMSAL_DELETE_REQ,
	MSG_ID_L4CSMSAL_DE_PERSONALIZATION_ACK,
	MSG_ID_L4CSMSAL_READ_REQ,
	MSG_ID_L4CSMSAL_WRITE_REQ,
	MSG_ID_L4CSMSAL_SEND_REQ,
	MSG_ID_L4CSMSAL_SEND_FROM_STORAGE_REQ,
	MSG_ID_L4CSMSAL_SEND_ABORT,
	MSG_ID_L4CSMSAL_SET_PARAMETER_REQ,
	MSG_ID_SMSAL_TIMER_EXPIRY,
	MSG_ID_L4CSMSAL_CBCH_REQ,
	MSG_ID_SMSAL_AS_CB_PAGE_IND,	
	MSG_ID_SMS_DELIVER,
	MSG_ID_SMS_SUBMIT_REPORT_ACK,
	MSG_ID_SMS_SUBMIT_REPORT_NACK,
	MSG_ID_SMS_STATUS_REPORT,
	MSG_ID_SMS_MEM_AVL_NOTIF_CNF,
	MSG_ID_SMSAL_CODE_END = MSG_ID_SMS_MEM_AVL_NOTIF_CNF,	
	MSG_ID_L4CSMU_START_REQ = 1801,
	MSG_ID_L4CSMU_SECURITY_REQ,
	MSG_ID_L4CSMU_SET_PERSONALIZATION_REQ,
	MSG_ID_L4CSMU_PLMN_SEL_WRITE_REQ,
	MSG_ID_L4CSMU_SIM_ACCESS_REQ,
	MSG_ID_L4CSMU_PUCT_WRITE_REQ,
	MSG_ID_L4CSMU_PUCT_READ_REQ,
	MSG_ID_L4CSMU_DIAL_MODE_REQ,
	MSG_ID_SMU_CODE_END = MSG_ID_L4CSMU_DIAL_MODE_REQ,
	MSG_ID_DRVUEM_AUDIO_PLAY_FINISH_IND = 1901,
	MSG_ID_DRVUEM_KEYPAD_IND,
	MSG_ID_DRVUEM_KEY_POWER_ON_IND,
	MSG_ID_DRVUEM_ALARM_POWER_ON_IND,
	MSG_ID_DRVUEM_PMIC_IND,
	MSG_ID_DRVUEM_VM_RECORD_FULL_IND,
	MSG_ID_DRVUEM_VM_PLAY_FINISH_IND,
	MSG_ID_DRVUEM_GPIO_DETECT_IND,
	MSG_ID_DRVUEM_RTC_PERIOD_IND,
	MSG_ID_L4CUEM_SET_PROFILE_REQ,
	MSG_ID_L4CUEM_STARTUP_REQ,
	MSG_ID_L4CUEM_STORE_IMELODY_REQ,
	MSG_ID_L4CUEM_DELETE_IMELODY_REQ,
	MSG_ID_UEM_CODE_END = MSG_ID_L4CUEM_DELETE_IMELODY_REQ,
	MSG_ID_L4CRAC_ACT_REQ = 2001,
	MSG_ID_L4CRAC_REG_REQ,
	MSG_ID_L4CRAC_DEREG_REQ,
	MSG_ID_L4CRAC_PLMN_LIST_REQ,
	MSG_ID_L4CRAC_PLMN_SEL_REQ ,	
	MSG_ID_L4CRAC_CLASS_CHANGE_REQ,
   	MSG_ID_GMMREG_ATTACH_CNF,
   	MSG_ID_GMMREG_ATTACH_REJ,
   	MSG_ID_GMMREG_DETACH_CNF,
   	MSG_ID_GMMREG_DETACH_IND,   
   	MSG_ID_GMMREG_PLMN_LIST_IND, 
   	MSG_ID_GMMREG_NW_INFO_IND,      
   	MSG_ID_GMMREG_STATUS_IND,
   	MSG_ID_MMIAS_CELL_POWER_LEVEL_IND,
   	MSG_ID_RAC_CODE_END = MSG_ID_MMIAS_CELL_POWER_LEVEL_IND,
	MSG_ID_L4CPHB_STARTUP_REQ = 2201,
	MSG_ID_L4CPHB_READ_REQ,
	MSG_ID_L4CPHB_ADD_REQ,
	MSG_ID_L4CPHB_UPDATE_REQ,
	MSG_ID_L4CPHB_DELETE_REQ,
	MSG_ID_L4CPHB_SEARCH_REQ,
	MSG_ID_L4CPHB_APPROVE_REQ,
	MSG_ID_L4CPHB_WRITE_REQ,
	MSG_ID_PHB_CODE_END = MSG_ID_L4CPHB_APPROVE_REQ,
	MSG_ID_GRR_DATA_REQ = 2701,
	MSG_ID_GRR_UNITDATA_REQ,
	MSG_ID_MAC_RLC_UL_CON_IND,
	MSG_ID_MAC_RLC_FAILURE_IND,
	MSG_ID_MAC_RLC_DATA_REQ,
	MSG_ID_MAC_RLC_ACK_IND,
	MSG_ID_MAC_RLC_SWITCH_TO_DL,
	MSG_ID_MAC_RLC_READY_IND,
	MSG_ID_MAC_RLC_PDCH_REL_IND,
	MSG_ID_T3182_TIMEOUT,
	MSG_ID_T3184_TIMEOUT,
	MSG_ID_T3198_TIMEOUT,
	MSG_ID_RMPC_RLC_ACCESS_FAILURE_IND,
	MSG_ID_RMPC_RLC_RESEL_FAILURE_IND,
	MSG_ID_MPAL_RR_FLUSH_RESP,	
	MSG_ID_GPRS_RLC_DL_CODE_BEGIN,
	MSG_ID_MAC_RLC_SWITCH_TO_UL = MSG_ID_GPRS_RLC_DL_CODE_BEGIN,
	MSG_ID_MAC_RLC_DL_CON_IND,
	MSG_ID_MAC_RLC_DL_DATA_BLK_IND,
	MSG_ID_MAC_RLC_ACK_REQ,
	MSG_ID_REASM_RLC_REASM_DONE_IND,
	MSG_ID_GMMAS_START_TEST_MODE_REQ,
	MSG_ID_GRR_READY_REQ,
	MSG_ID_GPRS_RLC_COMMON_CODE_BEGIN,
	MSG_ID_MAC_RLC_REL_IND = MSG_ID_GPRS_RLC_COMMON_CODE_BEGIN,
	MSG_ID_GPRS_RLC_CODE_END = MSG_ID_MAC_RLC_REL_IND,	
	MSG_ID_GMMAS_SIM_INFO_RESET_REQ = 2401,		 
	MSG_ID_GMMAS_ABORT_SEARCH_REQ,
	MSG_ID_GMMAS_PLMN_SRCH_REQ,
	MSG_ID_GMMAS_PLMN_SEL_REQ,
	MSG_ID_GMMAS_BAND_CHANGE_REQ,				
	MSG_ID_GMMAS_PLMN_SEL_MODE_CHANGE_REQ,	
	MSG_ID_GMMAS_SERVICE_CHANGE_REQ,			
	MSG_ID_MPAL_RR_BSIC_SYNC_CNF,			 
	MSG_ID_MPAL_RR_NEIGHBOR_BSIC_IND,	 
	MSG_ID_MPAL_RR_DATA_IND,  
	MSG_ID_RMPC_RRM_COMMON_CODE_END = MSG_ID_MPAL_RR_DATA_IND,
	MSG_ID_RMPC_RRM_CELL_SEL_REQ,
	MSG_ID_RMPC_RRM_STATE_IND,
	MSG_ID_RMPC_RRM_HPLMN_SRCH_REQ,
	MSG_ID_MPAL_RR_SEARCH_RF_IND,
	MSG_ID_RMPC_RRM_STOP_SERV_CNF,
	MSG_ID_T_RECOVERY_EXPIRY,		
	MSG_ID_SIM_RR_READY_IND,		
	MSG_ID_RRM_CODE_END = MSG_ID_MPAL_RR_SEARCH_RF_IND,
	MSG_ID_GMMAS_REGN_STATUS_UPDATE_REQ = 2501, 
	MSG_ID_GMMAS_DATA_REQ,					 
	MSG_ID_GMMAS_SIG_ABORT_REQ,			 
	MSG_ID_GMMAS_SIG_EST_REQ,				 
   	MSG_ID_GMMAS_ACT_REQ,
   	MSG_ID_GMMAS_SEL_MODE_CHANGE_REQ,
   	MSG_ID_GMMAS_ASSIGN_REQ,
	MSG_ID_MAC_RMPC_RESEL_REQ,
	MSG_ID_MAC_RMPC_PKT_ACCESS_REQ,
	MSG_ID_MAC_RMPC_ACCESS_RESULT_IND,
	MSG_ID_MAC_RMPC_MEAS_ORDER_IND,
	MSG_ID_MAC_RMPC_ENTER_IDLE_REQ,
	MSG_ID_MAC_RMPC_MEAS_MAP_IND,
	MSG_ID_MAC_RMPC_DL_ASSIGN_RESULT_IND,
	MSG_ID_RLC_RMPC_RESEL_REQ,
	MSG_ID_RRM_RMPC_CELL_SEL_DONE_IND,
	MSG_ID_RRM_RMPC_START_HPLMN_SRCH_TIMER_REQ,
	MSG_ID_RRM_RMPC_STOP_SERV_REQ,		 
	MSG_ID_RRM_RMPC_STOP_NET_LIST_IND,	 
	MSG_ID_MPAL_RR_NEIGHBOR_MEAS_IND,	 
	MSG_ID_MPAL_RR_NC_MEASUREMENT_IND,	 
	MSG_ID_MPAL_RR_EXTENDED_MEAS_IND,	  
	MSG_ID_MPAL_RR_SERV_IDLE_MEAS_IND,	 
	MSG_ID_MPAL_RR_SERV_DEDI_MEAS_IND,	 
	MSG_ID_T3158_EXPIRY,
	MSG_ID_T3162_EXPIRY,
	MSG_ID_T3178_EXPIRY,
	MSG_ID_T3186_EXPIRY,
	MSG_ID_T3170_EXPIRY,
	MSG_ID_T3172_EXPIRY,				 
	MSG_ID_T3174_EXPIRY,
	MSG_ID_T3176_EXPIRY,
	MSG_ID_SERV_CELL_SI_TIMER_EXPIRY,
	MSG_ID_SI_TIMER_EXPIRY,
	MSG_ID_RESEL_PROCESS_TIMER_EXPIRY,
	MSG_ID_OLD_CELL_TIMER_EXPIRY,
	MSG_ID_MAC_TIMER_EXPIRY,
	MSG_ID_RESEL_TIMER_EXPIRY,
	MSG_ID_PENALTY_BASE_TIMER_EXPIRY,
	MSG_ID_HPLMN_TIMER_EXPIRY,
	MSG_ID_MPAL_RR_PKT_EXT_MEASUREMENT_IND, 
	MSG_ID_LAST_RESEL_TIMER_EXPIRY,
	MSG_ID_NON_DRX_TIMER_EXPIRY,
	MSG_ID_NC_NON_DRX_TIMER_EXPIRY,
	MSG_ID_MM_NON_DRX_TIMER_EXPIRY,
	MSG_ID_T3200_TIMER_EXPIRY,
	MSG_ID_T_RESEL_TIMER_EXPIRY,
	MSG_ID_MPAL_RR_RACH_CNF,								 
	MSG_ID_MPAL_RR_HANDOVER_FAIL_IND,
	MSG_ID_MPAL_RR_HANDOVER_SUCCESS_IND,
	MSG_ID_MPAL_RR_DEDICATED_CHANNEL_CONNECT_CNF,	 
	MSG_ID_MPAL_RR_DEDICATED_CHANNEL_DISCONNECT_CNF, 
	MSG_ID_MPAL_RR_DEDICATED_CHANNEL_RECONNECT_CNF,	 
	MSG_ID_MPAL_RR_FREQUENCY_REDEFINITION_CNF,		 
	MSG_ID_MPAL_RR_CHANNEL_MODE_MODIFY_CNF,			 
	MSG_ID_MPAL_RR_CIPHERING_MODE_COMMAND_CNF,		 
	MSG_ID_MPAL_RR_CLOSE_TCH_LOOP_CNF,					 
	MSG_ID_MPAL_RR_OPEN_TCH_LOOP_CNF,					 
	MSG_ID_MAC_RMPC_CS_PAGE_IND,
	MSG_ID_RMP_CODE_END = MSG_ID_MAC_RMPC_CS_PAGE_IND,
	MSG_ID_LAPDM_RR_ESTB_CONF,
	MSG_ID_LAPDM_RR_ESTB_IND,
	MSG_ID_LAPDM_RR_REL_IND,
	MSG_ID_LAPDM_RR_REL_CONF,
	MSG_ID_LAPDM_RR_SUS_CONF,
	MSG_ID_LAPDM_RR_RESUME_CONF,
	MSG_ID_LAPDM_RR_RECON_CONF,
	MSG_ID_LAPDM_RR_DATA_IND,
	MSG_ID_LAPDM_RR_UNITDATA_IND,
	MSG_ID_LAPDM_RR_ERROR_IND,	 
	MSG_ID_EMO_TIMER_EXPIRY,
	MSG_ID_T3110_TIMER_EXPIRY,
	MSG_ID_T3134_TIMER_EXPIRY,
	MSG_ID_T3142_TIMER_EXPIRY,
	MSG_ID_T3146_TIMER_EXPIRY,
	MSG_ID_TMA_TIMER_EXPIRY,
	MSG_ID_T3122_TIMER_EXPIRY,			
	MSG_ID_T3126_TIMER_EXPIRY,			
	MSG_ID_CSRR_T3110_TIMER_EXPIRY,	
	MSG_ID_SMSAL_AS_CBCH_REQ,
	MSG_ID_SMSAL_AS_CB_UPDATE_REQ,
	MSG_ID_REEST_TIMER_EXPIRY,			
	MSG_ID_MMIAS_PREFER_PLMN_CHANGE_REQ,
	MSG_ID_RMPC_CODE_END = MSG_ID_MMIAS_PREFER_PLMN_CHANGE_REQ,	
	MSG_ID_RLC_MAC_RESOURCE_REQ = 2801,
	MSG_ID_RLC_MAC_REL_REQ,
	MSG_ID_RLC_MAC_UL_DATA_IND,
	MSG_ID_RLC_MAC_ACK_RES,
	MSG_ID_RMPC_MAC_MEAS_REPORT_IND,
	MSG_ID_RMPC_MAC_RESEL_FAIL_IND,
	MSG_ID_RMPC_MAC_UL_ASSIGN_IND,
	MSG_ID_RMPC_MAC_DL_ASSIGN_IND,
	MSG_ID_RMPC_MAC_SUSPEND_TBF_REQ,
	MSG_ID_RMPC_MAC_RESUME_TBF_REQ,
	MSG_ID_RMPC_MAC_STATUS_IND,
	MSG_ID_MPAL_RR_TRANSFER_DATA_IND,
	MSG_ID_MPAL_RR_EGPRS_TRANSFER_DATA_IND,	 
	MSG_ID_MPAL_RR_READY_TO_SEND_IND,
	MSG_ID_MPAL_RR_PDTCH_DISCONN_CNF, 
	MSG_ID_MAC_RMPC_COMMON_CODE_BEGIN,
	MSG_ID_MPAL_RR_PDTCH_CONNECT_IND = MSG_ID_MAC_RMPC_COMMON_CODE_BEGIN,
	MSG_ID_MPAL_RR_INT_MEASUREMENT_IND,	
	MSG_ID_MAC_RMPC_COMMON_CODE_END = MSG_ID_MPAL_RR_INT_MEASUREMENT_IND,
	MSG_ID_T3164_EXPIRY,
	MSG_ID_T3166_EXPIRY,
	MSG_ID_T3168_EXPIRY,
	MSG_ID_T3180_EXPIRY,
	MSG_ID_T3188_EXPIRY,
	MSG_ID_T3190_EXPIRY,
	MSG_ID_T3192_EXPIRY,
	MSG_ID_GPRS_MAC_CODE_END = MSG_ID_T3192_EXPIRY,
	MSG_ID_RR_LAPDM_DATA_REQ = 2901,
	MSG_ID_RR_LAPDM_UNITDATA_REQ,
	MSG_ID_RR_LAPDM_ESTB_REQ,
	MSG_ID_RR_LAPDM_SUS_REQ,
	MSG_ID_RR_LAPDM_RESUME_REQ,
	MSG_ID_RR_LAPDM_RECON_REQ,
	MSG_ID_RR_LAPDM_REL_REQ,
	MSG_ID_RR_LAPDM_MDL_REL_REQ,	
	MSG_ID_RR_LAPDM_DTX_REQ,	 
	MSG_ID_LAPDM_UL_DATA_REQ,	 
	MSG_ID_LAPDM_DL_DATA_IND,	 
	MSG_ID_LAPDM_CODE_END = MSG_ID_LAPDM_DL_DATA_IND,
	MSG_ID_RLC_REASM_BEGIN_REASM_IND = 3001,
	MSG_ID_REASM_CODE_END = MSG_ID_RLC_REASM_BEGIN_REASM_IND,	
	MSG_ID_RR_MPAL_SEARCH_RF_REQ = 3101,
	MSG_ID_RR_MPAL_BSIC_SYNC_REQ,
	MSG_ID_RR_MPAL_SPECIFIC_SYNC_REQ,
	MSG_ID_RR_MPAL_SERV_BCCH_MONITOR_REQ,
	MSG_ID_RR_MPAL_CCCH_MONITOR_REQ,
	MSG_ID_RR_MPAL_PAGE_MODE_CHANGE_REQ,
	MSG_ID_RR_MPAL_RACH_REQ,
	MSG_ID_RR_MPAL_STOP_RACH_REQ,
	MSG_ID_RR_MPAL_DEDICATED_CHANNEL_CONNECT_REQ,
	MSG_ID_RR_MPAL_DEDICATED_CHANNEL_DISCONNECT_REQ,
	MSG_ID_RR_MPAL_HANDOVER_REQ,
	MSG_ID_RR_MPAL_HANDOVER_STOP_REQ,
	MSG_ID_RR_MPAL_DEDICATED_CHANNEL_RECONNECT_REQ,
	MSG_ID_RR_MPAL_FREQUENCY_REDEFINITION_REQ,
	MSG_ID_RR_MPAL_CHANNEL_MODE_MODIFY_REQ,
	MSG_ID_RR_MPAL_CIPHERING_MODE_COMMAND_REQ,
	MSG_ID_RR_MPAL_CLOSE_TCH_LOOP_REQ,
	MSG_ID_RR_MPAL_OPEN_TCH_LOOP_REQ,
	MSG_ID_RR_MPAL_DAI_TEST_REQ,
	MSG_ID_RR_MPAL_POWER_CLASS_REQ,
	MSG_ID_RR_MPAL_CELL_OPTION_UPDATE_REQ,
	MSG_ID_RR_MPAL_EXTENDED_MEAS_REQ,
	MSG_ID_RR_MPAL_NEIGHBOR_MEAS_REQ,
	MSG_ID_RR_MPAL_NEIGHBOR_BSIC_START_REQ,
	MSG_ID_RR_MPAL_NEIGHBOR_BSIC_STOP_REQ,
	MSG_ID_RR_MPAL_NEIGHBOR_SYS_INFO_READ_REQ,
	MSG_ID_RR_MPAL_NEIGHBOR_SYS_INFO_STOP_REQ,
	MSG_ID_RR_MPAL_NET_LIST_START_REQ,
	MSG_ID_RR_MPAL_NET_LIST_STOP_REQ,
	MSG_ID_RR_MPAL_MONITOR_PBCCH_REQ,
	MSG_ID_RR_MPAL_STOP_MONITOR_PBCCH_REQ,
	MSG_ID_RR_MPAL_MONITOR_PCCCH_REQ,
	MSG_ID_RR_MPAL_NCELL_PBCCH_REQ,
	MSG_ID_RR_MPAL_STOP_NCELL_PBCCH_REQ,
	MSG_ID_RR_MPAL_NC_MEASUREMENT_REQ,
	MSG_ID_RR_MPAL_STOP_NC_MEASUREMENT_REQ,
	MSG_ID_RR_MPAL_PKT_EXT_MEASUREMENT_REQ,
	MSG_ID_RR_MPAL_INT_MEASUREMENT_REQ,
	MSG_ID_RR_MPAL_PDTCH_CONNECT_REQ,
	MSG_ID_RR_MPAL_RRBP_REQ,
	MSG_ID_RR_MPAL_CTRL_REQ,
	MSG_ID_RR_MPAL_DATA_REQ,
	MSG_ID_RR_MPAL_PKT_TIMING_ADV_PWR_CTRL_REQ,
	MSG_ID_RR_MPAL_PDCH_RELEASE_REQ,
	MSG_ID_RR_MPAL_PDTCH_DISCONN_REQ,
	MSG_ID_RR_MPAL_CBCH_CONFIG_REQ,
	MSG_ID_RR_MPAL_CBCH_START_REQ, 
	MSG_ID_RR_MPAL_CBCH_STOP_REQ,
	MSG_ID_RR_MPAL_CBCH_SKIP_REQ,
	MSG_ID_T3124_EXPIRY,
	MSG_ID_MPAL_CODE_END = MSG_ID_T3124_EXPIRY,
	MSG_ID_FLC_RLP_RR_REQ,
	MSG_ID_FLC_RLP_RNR_REQ,
	MSG_ID_FLC_RLP_XID_REQ,
	MSG_ID_LLSMS_UNITDATA_REQ = 3201,
	MSG_ID_LLTOM_UNITDATA_REQ,
	MSG_ID_LLGMM_UNITDATA_REQ,
	MSG_ID_LLGMM_ASSIGN_REQ,
	MSG_ID_LLGMM_TRIGGER_REQ,
	MSG_ID_LLGMM_SUSPEND_REQ,
	MSG_ID_LLGMM_RESUME_REQ,
	MSG_ID_LLSND_UNITDATA_REQ,
	MSG_ID_LLSND_DATA_REQ,
	MSG_ID_LLSND_XID_REQ,
	MSG_ID_LLSND_XID_RES,
	MSG_ID_LLSND_ESTABLISH_REQ,
	MSG_ID_LLSND_ESTABLISH_RES,
	MSG_ID_LLSND_RELEASE_REQ,
	MSG_ID_LLSND_CREATE_REG_REQ,
	MSG_ID_LLSND_SAPI_MEM_XID,
	MSG_ID_LLSND_RNR_STOP,
	MSG_ID_GRR_DATA_IND,
	MSG_ID_GRR_UNITDATA_IND,
	MSG_ID_GRR_STATUS_IND,
	MSG_ID_SAPI_MEM_FLOW_ON_REQ,
	MSG_ID_RLC_LLC_FLOW_CONTROL_OFF,
	MSG_ID_LL_TIMER_EXPIRY,
	MSG_ID_LL_CIPHER_RSP,
	MSG_ID_LL_DECIPHER_RSP,
	MSG_ID_RLC_LLC_RNR_TRIGGER,
	MSG_ID_LLSND_SAPI_ACT_REQ,
	MSG_ID_LLSND_SAPI_DEACT_REQ,
	MSG_ID_LLC_CODE_END = MSG_ID_LLSND_SAPI_DEACT_REQ,
	MSG_ID_SN_DATA_REQ = 3301,
	MSG_ID_SN_UNITDATA_REQ,
	MSG_ID_SN_XID_REQ,
	MSG_ID_LLSND_UNITDATA_IND,
	MSG_ID_LLSND_XID_IND,
	MSG_ID_LLSND_XID_CNF,
	MSG_ID_LLSND_DATA_IND,
	MSG_ID_LLSND_DATA_CNF,
	MSG_ID_LLSND_RESET_IND,
	MSG_ID_LLSND_ESTABLISH_IND,
	MSG_ID_LLSND_ESTABLISH_CNF,
	MSG_ID_LLSND_RELEASE_IND,
	MSG_ID_LLSND_RELEASE_CNF,
	MSG_ID_LLSND_STATUS_IND,
	MSG_ID_SNSM_ACTIVATE_IND,
	MSG_ID_SNSM_DEACTIVATE_IND,
	MSG_ID_SNSM_MODIFY_IND,
	MSG_ID_SNSM_SEQUENCE_IND,
	MSG_ID_SND_SAPI_ACK_CH_TIMEOUT,
	MSG_ID_SND_FLC_SUSPEND_RESUME,
	MSG_ID_SND_ACTIVATE_IND,
	MSG_ID_SND_ACTIVATE_RSP,
	MSG_ID_SND_DEACTIVATE_IND,
	MSG_ID_SND_DEACTIVATE_RSP,
	MSG_ID_SND_MODIFY_EST,
	MSG_ID_SND_MODIFY_EST_RSP,
	MSG_ID_SND_MODIFY_REL,
	MSG_ID_SND_MODIFY_REL_RSP,
	MSG_ID_SND_UNITDATA_IND,
	MSG_ID_SND_UNITDATA_TX_REQ,
	MSG_ID_SND_DATA_IND,
	MSG_ID_SND_DATA_TX_REQ,
	MSG_ID_SND_RESET_IND,
	MSG_ID_SND_ALL_SAPI_RESET,
	MSG_ID_SND_ALL_MAP_NSAPI_RESET,
	MSG_ID_SND_DATA_ERROR,
	MSG_ID_SND_ALL_MAP_NSAPI_STATUS_REQ,
	MSG_ID_SND_COMPRESS_RSP,
	MSG_ID_SND_DECOMPRESS_RSP,
	MSG_ID_SND_CODE_END = MSG_ID_SND_DECOMPRESS_RSP,
	MSG_ID_L4CPPP_ACTIVATE_REQ = 3501,
	MSG_ID_L4CPPP_DEACTIVATE_REQ,
	MSG_ID_L4CPPP_RESUME_REQ,
	MSG_ID_L4CPPP_ACTIVATE_CNF,
	MSG_ID_L4CPPP_DEACTIVATE_CNF,
	MSG_ID_L4CPPP_DEACTIVATE_IND,
	MSG_ID_L4CPPP_RESUME_CNF,
	MSG_ID_L4CPPP_ESCAPE_IND,
	MSG_ID_PPP_FLC_DATA_RESUME_IND,
	MSG_ID_PPP_CODE_END = MSG_ID_PPP_FLC_DATA_RESUME_IND,
	MSG_ID_NVRAM_STARTUP_REQ = 4001,
	MSG_ID_NVRAM_READ_IND,
	MSG_ID_NVRAM_RESET_REQ,
	MSG_ID_NVRAM_RESET_CNF,
	MSG_ID_NVRAM_READ_REQ,
	MSG_ID_NVRAM_READ_CNF,
	MSG_ID_NVRAM_WRITE_REQ,
	MSG_ID_NVRAM_WRITE_CNF,
	MSG_ID_NVRAM_VM_RECORD_REQ,
	MSG_ID_NVRAM_VM_WRITE_REQ,
	MSG_ID_NVRAM_VM_STOP_REQ,
	MSG_ID_NVRAM_VM_WRITE_HEADER_REQ,
	MSG_ID_NVRAM_CODE_END = MSG_ID_NVRAM_VM_WRITE_HEADER_REQ,
	MSG_ID_UART_READY_TO_READ_IND = 3901,
	MSG_ID_UART_READY_TO_WRITE_IND,
	MSG_ID_UART_DSR_CHANGE_IND,
	MSG_ID_UART_ESCAPE_DETECTED_IND,
	MSG_ID_BMT_CHARGER_IN_IND,
	MSG_ID_BMT_CHARGER_OUT_IND,
	MSG_ID_BMT_ADC_DATA_REQ,
	MSG_ID_BMT_ADC_DATA_CONF,
	MSG_ID_MPHC_POWER_SCAN_REQ = 5000,
	MSG_ID_MPHC_MANUSEL_PWRSCAN_REQ,
	MSG_ID_MPHC_BSIC_SYNC_REQ,
	MSG_ID_MPHC_SPECIFIC_SYNC_REQ,
	MSG_ID_MPHC_SERV_BCCH_MONITOR_REQ,
	MSG_ID_MPHC_IDLE_CCCH_START_REQ,
	MSG_ID_MPHC_CCCH_UPDATE_REQ,
	MSG_ID_MPHC_PAGE_MODE_CHANGE_REQ,
	MSG_ID_MPHC_RANDOM_ACCESS_REQ,
	MSG_ID_MPHC_RACH_ABORT_REQ,
	MSG_ID_MPHC_IMMED_ASSIGN_REQ,
	MSG_ID_MPHC_CHANNEL_ASSIGN_REQ,
	MSG_ID_MPHC_CHANNEL_RELEASE_REQ,
	MSG_ID_MPHC_HANDOVER_REQ,
	MSG_ID_MPHC_HANDOVER_ACCESS_STOP_REQ,
	MSG_ID_MPHC_CHANNEL_RECONNECT_REQ,
	MSG_ID_MPHC_FREQUENCY_REDEFINITION_REQ,
	MSG_ID_MPHC_CHANNEL_MODE_MODIFY_REQ,
	MSG_ID_MPHC_CIPHERING_MODE_COMMAND_REQ,
	MSG_ID_MPHC_CLOSE_TCH_LOOP_REQ,
	MSG_ID_MPHC_OPEN_TCH_LOOP_REQ,
	MSG_ID_MPHC_DAI_TEST_REQ,
	MSG_ID_MPHC_POWER_CLASS_REQ,
	MSG_ID_MPHC_CELL_OPTION_UPDATE_REQ,
	MSG_ID_MPHC_EXTENDED_MEAS_REQ,
	MSG_ID_MPHC_NEIGHBOR_MEAS_REQ,
	MSG_ID_MPHC_NEIGHBOR_BSIC_START_REQ,
	MSG_ID_MPHC_NEIGHBOR_BSIC_STOP_REQ,
	MSG_ID_MPHC_NEIGHBOR_SYS_INFO_READ_REQ,
	MSG_ID_MPHC_NEIGHBOR_SYS_INFO_STOP_REQ,
	MSG_ID_MPHC_CBCH_CONFIG_REQ,
	MSG_ID_MPHC_CBCH_START_REQ,
	MSG_ID_MPHC_CBCH_STOP_REQ,
	MSG_ID_MPHC_CBCH_SKIP_REQ,
	MSG_ID_MPHC_DEACTIVATE_REQ,
	MSG_ID_MPHC_POWER_SCAN_CNF,
	MSG_ID_MPHC_MANUSEL_PWRSCAN_CNF,
	MSG_ID_MPHC_BSIC_SYNC_CNF,
	MSG_ID_MPHC_UNITDATA_IND,
	MSG_ID_MPHC_RANDOM_ACCESS_CNF,
	MSG_ID_MPHC_IMMED_ASSIGN_CNF,
	MSG_ID_MPHC_CHANNEL_ASSIGN_CNF,
	MSG_ID_MPHC_CHANNEL_RELEASE_CNF,
	MSG_ID_MPHC_HANDOVER_CNF,
	MSG_ID_MPHC_HANDOVER_ACCESS_START_IND,
	MSG_ID_MPHC_HANDOVER_CONNECTED_IND,
	MSG_ID_MPHC_HANDOVER_ACCESS_STOP_CNF,
	MSG_ID_MPHC_CHANNEL_RECONNECT_CNF,
	MSG_ID_MPHC_FREQUENCY_REDEFINITION_CNF,
	MSG_ID_MPHC_CHANNEL_MODE_MODIFY_CNF,
	MSG_ID_MPHC_CIPHERING_MODE_COMMAND_CNF,
	MSG_ID_MPHC_CLOSE_TCH_LOOP_CNF,
	MSG_ID_MPHC_OPEN_TCH_LOOP_CNF,
	MSG_ID_MPHC_EXTENDED_MEAS_IND,
	MSG_ID_MPHC_BLOCK_QUALITY_IND,
	MSG_ID_MPHC_SERV_IDLE_MEAS_IND,
	MSG_ID_MPHC_SERV_DEDI_MEAS_IND,
	MSG_ID_MPHC_NEIGHBOR_MEAS_IND,
	MSG_ID_MPHC_NEIGHBOR_BSIC_IND,
	MSG_ID_L1TASK_WAKEUP,
	MSG_ID_TST_INJECT_STRING = 6000,
	MSG_ID_TIMER_EXPIRY =  9000,
	MSG_ID_FT = 9500,
	MSG_ID_END  =  (9000+1000)
};

enum sap_type
{
	INVALID_SAP = 0,
	GMMREG_SAP,
	MM_SMS_SAP,
	MM_CC_SAP,
	MM_SS_SAP,
	MM_AS_SAP,
	MM_SIM_SAP,
	GMM_SM_SAP,
	MNCC_SAP,
	MNSMS_SAP,
	MMREG_SAP,
	MNSS_SAP,
	CSM_TDT_SAP,
	CSM_L2R_SAP,
	CSM_SIM_SAP,
	CSM_L4C_SAP,
	SMSAL_L4C_SAP,
	UEM_L4C_SAP,
	PHB_L4C_SAP,
	SMU_L4C_SAP,
	TCM_L4C_SAP,
	RAC_L4C_SAP,
	UART_L4C_SAP,
	RRM_RMPC_SAP,
	RMC_LAPDM_SAP,
	RLC_MAC_SAP,
	RLC_RMPC_SAP,
	RLC_MPAL_SAP,
	RLC_REASM_SAP,
	MAC_RMPC_SAP,
	RRM_MPAL_SAP,
	RMPC_MPAL_SAP,
	MAC_MPAL_SAP,
	MMI_AS_SAP,
	SMSAL_AS_SAP,
	LLC_GMM_SAP,
	LLC_RLC_SAP,
	LLC_SNDCP_SAP,
	LLC_SMS_SAP,
	GMM_RLC_SAP,
	SNDCP_REG_SAP,
	SM_SNDCP_SAP,
	SMREG_SAP,
	PPP_L4C_SAP,
	PPP_TCM_SAP,
	L2R_RLP_SAP,
	SNDCP_PPP_SAP,
	PS_NVRAM_SAP,
	PS_SIM_SAP,
	MMI_L4C_SAP,
	SME_SAP,
	SME_READER_SAP,
	SME_TIMER_SAP,
	DATA_MPAL_SAP,
	L1_L1_SAP,
	L1_MPAL_SAP,
	MPAL_L1_SAP,
	DRIVER_PS_SAP,
	STACK_TIMER_SAP,
	TST_FT_SAP = 200,
	LAST_SAP_CODE = STACK_TIMER_SAP
};

/* Header of every structure */
typedef struct
{
   tst_command_type  command_type;
   kal_uint16        cmd_len;
}
tst_command_header_struct;


typedef struct
{
   tst_command_header_struct  command;
   kal_uint16                 received_cmd_length;
   kal_uint16                 received_data_length;
   kal_uint8                  *header_buf;
   kal_uint8                  *command_buf;
}
tst_current_handle_command;


typedef enum module_type       module_type;
typedef enum sap_type          sap_type;
typedef enum msg_type          msg_type;



typedef struct
{
   kal_uint16     local_len;
   kal_uint16     peer_len;
}
tst_inject_primitive_header_struct;

typedef struct
{
	char	start_byte;
	int		frame_len;
	char	frame_type;
	char	*uData;
	char	checksum;
	
}tst_frame_header;


typedef struct
{
   tst_inject_primitive_header_struct inject_prim;
   kal_uint16     received_prim_header_length;
   kal_uint16     received_buf_para_length;
   kal_uint8      *header_ptr;
   kal_uint8      *buf_ptr;
}
tst_current_handle_rs232_frame;



typedef struct
{
	kal_uint16	received_data_length;
	kal_uint16  data_length;
	kal_char	*data;
	kal_char    *iterator;
}
tst_current_handle_ut_primitive;



typedef struct local_para_struct {
	kal_uint8	 ref_count;
	kal_uint16	 msg_len;

} local_para_struct;

#if 0
typedef struct peer_buff_struct {
	kal_uint16	pdu_len;
	kal_uint8	ref_count;
	kal_uint8   pb_resvered;
	kal_uint16	free_header_space;
	kal_uint16	free_tail_space;
} peer_buff_struct;



typedef struct ilm_struct {
   module_type       src_mod_id;
   module_type       dest_mod_id;
   sap_type          sap_id;
   msg_type          msg_id;
   local_para_struct *local_para_ptr;
   peer_buff_struct  *peer_buff_ptr;
} ilm_struct;

#endif

#endif
