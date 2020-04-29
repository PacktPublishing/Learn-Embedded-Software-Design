/* Description: Basic use case of header file inclusion in the c module
*  What happens include the header file more than once and this may lead to errors, if the header
*  file defines structure types or typedefs, and is certainly wasteful. Therefore, its important
*  to prevent multiple inclusion of a header file.
*  ***************************
*           Preprocessor functions list in C
*  #include <stdio.h>   includes contents of stdio.h
*  #error text          display text as compile time error
*  #warning text        display text as compile time warning
*  #pragma              compiler specific options
*  #define M            define M
*  #undef M             undefine M
*  #if (condition)      conditional compiling
*  #ifdef M             compiled if M is defined
*  #ifndef M            compiled if M is not defined
*  #elif (condition)	conditional compiling
*  #else                conditional compiling
*  #endif               end conditional section
*  defined()            is macro defined.
*  !defined()           is macro not defined
*  M ## D               combines M and D into MD
*  #M                   treat M as string "M"
*  **************************
*  Author : Iqram Ali
*/

#include <stdio.h>
#include "ble.h" // Custom header file is included here
#include "ble.h"

#if defined ARM_32
    printf("%s\n", );
    #include "arm_config.h"
#else
    #include "host_config.h"
#endif

// Function definition
unsigned int ble_init(void) {
    #if ARM_32
        printf("Initialising BLE in ARM target\n");
    #else
        printf("Emulating Initialising BLE in host\n");
    #endif
    return 0;
}

unsigned int ble_pair(void) {
    #if ARM_32
        printf("pairing BLE device\n");
    #else
        printf("pairing BLE device in host\n");
    #endif
    return 0;
}

unsigned int ble_broadcast_data(void) {
    #if ARM_32
        printf("Broadcasting the data\n");
    #else
        printf("Broadcasting the data in host\n");
    #endif
    return 0;
}

unsigned int ble_disconnect(void) {
    #if ARM_32
        printf("Disconnecting the module\n");
    #else
        printf("Emulating Disconnect in host\n");
    #endif
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
