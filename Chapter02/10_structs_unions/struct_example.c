#include <stdio.h>
#include <stdint.h>

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

void simple_struct_example(void) {
    iot_device_t iot;

    iot.dev_name = "IoT_1";
    iot.location = "Stockholm";
    iot.device_id = 101;

    printf("dev_name: %s\n", iot.dev_name);
    printf("location: %s\n", iot.location);
    printf("device_id: %d\n", iot.device_id);
}

void struct_init_example(void) {
    // Initialisation method1, initalise struct member in sequence
    complex_num_t complex_number = {2, 3};
    printf("a:%d->i:%d\n", complex_number.a, complex_number.i);
    // Initialisation method2, you can initalise in different order
    complex_num_t cn = { .i = 4, .a = 3};
    printf("a:%d->i:%d\n", cn.a, cn.i);
}

int main(void) {
    simple_struct_example();
    struct_init_example();
    return 0;
}
