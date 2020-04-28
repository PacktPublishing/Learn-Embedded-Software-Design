#include <stdio.h>

unsigned int g_test;

static int a;
const int var_const = 23;

void local_func(void) {
    int x = 20;
    int y = 30;
    int sum;

    sum = x+y;
    printf("sum of two number: %d\n", sum);
    g_test = 30;
    a = 23;
}

/* Main program */
int main (void) {
    const int c_var;    // local varaiable -> stored in stack
    local_func();       //
    printf("Global variable: %d\n", g_test);
    a = 33;
    g_test = 43;
    printf("Static variable: %d\n", a);
    printf("Const variable: %d %d\n", var_const, c_var);
    return 0;
}
