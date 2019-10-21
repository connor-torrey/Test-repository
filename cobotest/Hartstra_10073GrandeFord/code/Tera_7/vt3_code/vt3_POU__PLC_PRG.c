/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__PLC_PRG_C
#define INCLUDE__VT3_POU__PLC_PRG_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_extra.h"
#include "version_vt3_runtime.h"
#include "version_pdfrender.h"
#include "vt3_POU__GET_POWER_FAIL.h"
#include "vt3_POU__SET_POWER_FAIL_SHUTDOWN.h"
#include "vt3_POU__SHUTDOWN.h"
#include "vt3_POU__REBOOT.h"
#include "vt3_POU__INIT_SD_USB.h"
#include "vt3_POU__WRITE_EL_TO_SD.h"
#include "vt3_POU__WRITE_EL_TO_USB.h"
#include "vt3_POU__WRITE_EL_ENUM.h"
#include "vt3_POU__WRITE_EL.h"
#include "vt3_POU__WRITE_EL_PRIVATE.h"
#include "vt3_POU__INIT_BYTEARRAY_P.h"
#include "vt3_POU__INIT_BYTEARRAY_R.h"
#include "vt3_POU__check_touchcalibration.h"
#include "vt3_POU__req_touchcalibration.h"
#include "vt3_POU__mountUSB.h"
#include "vt3_POU__mountSD.h"
#include "vt3_POU__umountUSB.h"
#include "vt3_POU__umountSD.h"
#include "vt3_POU__lcdSetBlank.h"
#include "vt3_POU__get_prj_version.h"
#include "vt3_POU__get_prj_version_byte.h"
#include "vt3_POU__ARR_BYTE_version.h"
#include "vt3_POU__BYTE_TO_ASCII.h"
#include "vt3_POU__ST_TRANSLATE.h"



/* initializers of addressed variables */

/* table of initializators of addressed variables */
static const vt3_screen_initializer FAR __init_table__PLC_PRG[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__PLC_PRG[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const PLC_PRG_t FAR __const__PLC_PRG__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__PLC_PRG__param_init */

/* initialization of PROGRAM status */
void PLC_PRG__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__PLC_PRG; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&PLC_PRG, &__const__PLC_PRG__param_init, sizeof __const__PLC_PRG__param_init);

	/* initialize function block instances */
}

/* PROGRAM Core execution */
static void PLC_PRG__core(void)
{
	/* local variables */
	/* end of local variables */

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/Tera_7/Programs/PLC_PRG
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
		assignIO__call();
	    doBrightness__call();
	    usbUpdate__call();
	    outputs__call();
	    
	    if (parametersCode != 1234) // --> BE SURE THAT THIS CODE IS EQUAL TO parametersCode INIT VALUE!!!
	    {
	        INIT_BYTEARRAY_P__call();
	        INIT_BYTEARRAY_R__call();
	        REBOOT__call();
	    } 
	
	    if (SaveP)
	    {
	        SaveP = (FALSE);
	        (void)save_bytearray_P();
	    }
	    
	    if (SaveR)
	    {
	        SaveR = (FALSE);
	        (void)save_bytearray_R();
	    }
	
	
	}

	/* end of PROGRAM body */
}

/* PROGRAM execution */
void PLC_PRG__call(void)
{
	/* start task time variable */
	DWORD vt3_task_PLC_PRG_start_time = 0;

	/* preamble: conditional execution */
	PLC_PRG.ENO = PLC_PRG.EN;
	if ( ! PLC_PRG.EN )
	{
		/* resetting vt3_task_run_time_PLC_PRG */
		vt3_task_run_time_PLC_PRG = 0;
		return;
	}

	/* getting task start timestamp */
	vt3_task_PLC_PRG_start_time = vt3_get_ms_since_start(0);

	/* actual PLC_PRG call */
	PLC_PRG__core();

	/* getting task end timestamp */
	vt3_task_run_time_PLC_PRG = vt3_get_ms_since_start(vt3_task_PLC_PRG_start_time);
}



#endif /* INCLUDE__VT3_POU__PLC_PRG_C */

/* end of file */
