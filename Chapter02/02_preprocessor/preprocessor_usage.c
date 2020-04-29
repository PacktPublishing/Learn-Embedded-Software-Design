/* Description: Basic use case of header file inclusion in the c module
*  What happens include the header file more than once and this may lead to errors, if the header
*  file defines structure types or typedefs, and is certainly wasteful. Therefore, its important
*  to prevent multiple inclusion of a header file.
*  Author : Iqram Ali
*/

#include <stdio.h>
#include "ble.h" // Custom header file is included here
#include "ble.h"


// Function definition
unsigned int ble_init(void) {
    printf("Initialising BLE\n");
    return 0;
}

unsigned int ble_pair(void) {
    printf("pairing BLE device BLE\n");
    return 0;
}

unsigned int ble_broadcast_data(void) {
    printf("Broadcasting the data\n");
    return 0;
}

unsigned int ble_disconnect(void) {
    printf("Disconnecting the module\n");
    return 0;
}

int main(int argc, char const *argv[]) {
    /* code */
    ble_init();
    ble_pair();
    ble_broadcast_data();
    ble_disconnect();
    return 0;
}
