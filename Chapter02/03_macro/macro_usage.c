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
*  *********
*  TIP: Key benefits with macro constant is global text replace. Avoid magic number in the code and
*       its recommended to use macro.
* *********
*  Author: Iqram Ali
*/
#include <stdio.h>
#include <math.h>

// F1: This simple method to define macro constant

#define PI 3.14

// Use undef to ddisbla the macro definition
#define M_32_bit

/* F2: Advance usage of preprocess macro function like object, here the expression is
   check if(exp==0) if not it raise the warning */
#define WARN_IF(EXP) \
do { if (EXP) \
        fprintf (stderr, "Warning: " #EXP "\n"); } \
while (0)

// F3: Simple function like macro, it compare two numbers and find max from two numbers
#define MAX(A, B)  ((A) > (B) ? (A) : (B))


// F1: simple function that use macro constant that replace PI
void f1_area_of_sq(int radius) {
    int area;
    area = PI * pow(radius, 2);
    printf("Area of cicle: %d\n", area);

}

// F4: Preprocessor conditional compiling
void f4_simple_condition(void) {
#ifdef M_32_bit
    printf("Compiling for M_32_bit\n");
#else
    printf("Compiling for M_64_bit\n");
#endif
}

/* F4: Logical expression in macro condition */
void f5_condition_logic(void) {
#if defined(M_32_bit) || defined(x86_32)
    printf("Executing statement for 32-bit\n");
#else
    printf("Executing statement for 64-bit\n");
#endif
}

int main(void) {
    int a = 7, b;
    f1_area_of_sq(8);

    WARN_IF(a);
    WARN_IF(0);

    b = MAX(2,3);
    printf("Max number is: %d\n", b);

    f4_simple_condition();
    f5_condition_logic();

    return 0;
}
