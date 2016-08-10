/**************************************************************************************************
  Filename:       osal_task_event.c
  Revised:        $Date: 2015-12-02 $
  Revision:       $Revision: 00001 $

  Description:    This file contains the interface to the Drivers Service.

**************************************************************************************************/


/**************************************************************************************************
 *                                            INCLUDES
 **************************************************************************************************/
#include "main.h"


/**************************************************************************************************
 *                                            MACROS
 **************************************************************************************************/



/**************************************************************************************************
 *                                          CONSTANTS
 **************************************************************************************************/


/**************************************************************************************************
 *                                          TYPEDEFS
 **************************************************************************************************/


/**************************************************************************************************
 *                                      GLOBAL VARIABLES
 **************************************************************************************************/
//TASK MAC_TaskID;   // Task ID for internal task/event processing
TASK Hal_TaskID;
TASK SJ485_TaskID;
TASK SIM900A_TaskID;
TASK App_TaskID;   // Task ID for internal task/event processing


/**************************************************************************************************
 *                                      FUNCTIONS - API
 **************************************************************************************************/


/**************************************************************************************************
**************************************************************************************************/

