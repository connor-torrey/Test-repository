/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DOBRIGHTNESS_C
#define INCLUDE__VT3_POU__DOBRIGHTNESS_C

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
static const vt3_screen_initializer FAR __init_table__doBrightness[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__doBrightness[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const doBrightness_t FAR __const__doBrightness__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__doBrightness__param_init */

/* initialization of PROGRAM status */
void doBrightness__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__doBrightness; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&doBrightness, &__const__doBrightness__param_init, sizeof __const__doBrightness__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void doBrightness__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	doBrightness.ENO = doBrightness.EN;
	if ( ! doBrightness.EN )
	{
		return;
	}


	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/Tera_7/Programs/PLC_PRG_POUs/doBrightness
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
		BacklightTera = 114 + (int)(p_Brightness * 0.1);
	
	}

	/* end of PROGRAM body */
}



#endif /* INCLUDE__VT3_POU__DOBRIGHTNESS_C */

/* end of file */
