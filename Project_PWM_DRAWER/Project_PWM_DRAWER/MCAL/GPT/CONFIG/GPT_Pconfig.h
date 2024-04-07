/*
 * GPT_Pconfig.h
 *
 * Created: 3/22/2021 4:45:50 PM
 *  Author: Mohamed_Ramezy
 */ 


#ifndef GPT_PCONFIG_H_
#define GPT_PCONFIG_H_

#define NUM_TIMERS_OPERATING				(1U)


/************************************************************************/
/*				Compiler Checks for Configurations                      */
/************************************************************************/
#if NUM_TIMERS_OPERATING > 3
	#pragma GCC error "There are only 3 timers in ATmega32A! Fix NUM_TIMERS_OPERATING to be of maximum 3."
#endif

#endif /* GPT_PCONFIG_H_ */