/* Description: This module is simplified example for the Book learning Embedded Software Design
*  Chapter 2 struct examples. Fundamental usage of struct in C is provided below.
*  Module convetion info
*  x: unsigned int start from 1 and it increment upon the features avilable in this module
*  Enable macro by defining 1 and 0 to disable
*
*  *** Macro name convetions ***
*  E(x): Error condition for example E1 or E2.
*  W(x): Warning condition in this below module, W1 or W2
*  M(x) : Methods to solve. M1 : method1 or m2: method2. Its not binary approach in C. There are
*  plenty of ways to implement same thing.
*  ******* Function name convetions ****
*  Additional comments on top of each function that start with F(x)
*  F(x) : Feature avilable in the form of functions.
*  Author: Iqram Ali
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define M1_ARRAY_OF_STRUCT_INIT 1
#define M2_IC_ARRAY_OF_STRUCT_INIT 0

// Simple composite type of IoT device
typedef struct {
    const char * dev_name;
    const char *location;
    unsigned char device_id;
} iot_device_t;

typedef struct {
    int a;
    int i;
}complex_num_t;

/* F1: simple struct example */
void f1_simple_struct_example(void) {
    iot_device_t iot;

    iot.dev_name = "IoT_1";
    iot.location = "Stockholm";
    iot.device_id = 101;
    printf("===== Function 1 output =====\n");
    printf("dev_name: %s\n", iot.dev_name);
    printf("location: %s\n", iot.location);
    printf("device_id: %d\n", iot.device_id);
}

/* F2: Intialising struct in an arbitary way */
void f2_struct_init_arbitarly(void) {
    // Initialisation method1, initalise struct member in sequence
    complex_num_t complex_number = {2, 3};
    printf("===== Function 2 output =====\n");
    printf("a:%d->i:%d\n", complex_number.a, complex_number.i);
    // Initialisation method2, you can initalise in different order
    complex_num_t cn = { .i = 4, .a = 3};
    printf("a:%d->i:%d\n", cn.a, cn.i);
}


/* F3: nested structure */
typedef struct {
    bool state;
}gps_t;

typedef struct {
    bool state;
}ble_t;

typedef struct {
    iot_device_t iot;
    gps_t gps;
    ble_t ble;
}device_t;

device_t dev_obj;
void f3_publish_dev_info(void) {
    device_t *device = &dev_obj;
    device->iot.dev_name = "IoT_6";
    device->gps.state = false;
    device->ble.state = true;

    printf("===== Function 3 output =====\n");
    printf("dev_name: %s\n", device->iot.dev_name);
    // Here on means true: 1 viceversa for false
    printf("gps_state: %s\n", device->gps.state ? "on": "off" );
    printf("ble_state: %s\n", device->ble.state ? "on": "off");
}

/* F4: Creating array of struct */
void f4_struct_array(void) {
    int i;
#if M1_ARRAY_OF_STRUCT_INIT
    device_t device_list[3] = {
        {"IoT_10", false, true},
        {"IoT_11", false, true},
        {"IoT_12", false, true}
    };
#endif

#if M2_IC_ARRAY_OF_STRUCT_INIT
    device_t device_list[] = {
        {"IoT_10", false, true},
        {"IoT_11", false, true},
        {"IoT_12", false, true}
    };
#endif
    printf("===== Function 4 output =====\n");
    for (i=0; i < 3; i++) {
        printf("dev_name: %s\n", device_list[i].iot.dev_name);
        printf("gps_state: %s\n", device_list[i].gps.state ? "on": "off" );
        printf("ble_state: %s\n", device_list[i].ble.state ? "on": "off");
    }
}

int main(void) {
    f1_simple_struct_example();
    f2_struct_init_arbitarly();
    f3_publish_dev_info();
    f4_struct_array();
    return 0;
}
