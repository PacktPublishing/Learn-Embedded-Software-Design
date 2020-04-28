/* Documenting the module
* This is simple C code example explains about C module structure. This is program runs
* infinite loop, press ctrl+c to terminate this program.
* Author: Iqram Ali
* Date: 20/04/202
*/
// Pre-processor section,
#include <stdio.h>	// Standard-I/O,Diamond braces for sys lib
// #include "ble.h"	// User header file or lib in quotes: ble header
// #include "gps.h" 	// User header file or lib in quotes: gps header

#define SET_GPIO_P1 1	// Macro constant to setgpio

unsigned int g_variable;    // Global declarations
/* Dummy functions */
void turn_on_ble(void) {	//Function definition
}
/* Dummy functions */
void turn_on_gps(void) {
}

int main(void) {		// Main entry point: execute functions
	g_variable = 1;
	while(SET_GPIO_P1) {   // Infinite loop
		turn_on_ble();	   // Perform ble on
		turn_on_gps();	   // Perform gps on
	}
	return 0;
}
