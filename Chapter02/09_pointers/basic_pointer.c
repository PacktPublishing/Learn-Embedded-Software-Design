/* Description: In this C module you have macro that starts with E is the error
* condition. W means warning.
* By deafult E&W macro constant is in disable state.
* In order to understand the concepts you can enable and disable it
* by replace 0 with 1.
*/
#include <stdio.h>

/* Toggle this below macro to enable and disable */
#define E1_MODIFYING_CONST_PTR_OBJ 0
#define E2_MODIFYING_CONST_PTR 0

// Simple function assigns argument to pointer and increment it
void ptr_to_var(int arg){
    int *ptr = NULL;
    ptr = &arg;
    (*ptr)++;
    printf("ptr_to_var is :%d\n", *ptr);
}

// Simple function assigns pointe rargument to pointer and increment it
void ptr_to_ptr(int *arg){
    int *ptr = NULL;
    ptr = arg;
    (*ptr)++;
    printf("ptr_to_ptr is :%d\n", *ptr);
}

// Simple function, pointer to constant
void ptr_to_constant(int arg) {
    int a = 30;
    const int *ptr = &arg;
#if E1_MODIFYING_CONST_PTR_OBJ
    // Modifying object pointed using pointer is not legal.
    // error: read-only variable is not assignable
    *ptr =23;
#endif
    // This is legal pointer can point to different object
    ptr = &a;
    printf("ptr_to_constant is :%d\n", *ptr);
}

// Simple function constant pointer to variable
void cont_ptr_to_ptr(int *arg){
    int *const ptr = arg;
    // ptr = arg;
    (*ptr)++; /* Valid */
    *ptr = 33;
#if E2_MODIFYING_CONST_PTR
    // Not legal, const pointer read only
    int a = 32;
    ptr = &a;
#endif
    printf("cont_ptr_to_ptr is :%d\n", *ptr);
}

int main(void) {
    int a =20;
    // passiing int variable
    ptr_to_var(a);
    // passing pointer arg
    ptr_to_ptr(&a);
    ptr_to_constant(a);
    cont_ptr_to_ptr(&a);

    printf("value of a is :%d\n", a);

    return 0;
}
