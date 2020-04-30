/* Description: This module helps understand the basic usage of printf() and scanf()
*
*  ********************
*  Note:
*   1. sizeof is depends upon both compiler and machine ISA.
*   2. scanf() gets the user input from keyboard  and this makes the code vulnerable to
*       Buffer overflow issues and oher undesirable behavior.
*   3. scanf()  user input does not go straight to the program, first it stored in a buffer,
*       a small amount of memory reserved. Data left in the buffer when the program wants to read
*       from the input source, and the scanf() function will read this data instead of waiting for
*       the user to type something. Immediate action is to use the function fflush(stdin),to flush
*       the stream, but it's not  good practice. Downfall  with that approach is not portable.
*       your code may not work properly in other compiler.
*
*  Recommendation : Consider using fgets() instead of scanf()).
*
*  ********************
*  Author: Iqram Ali
*/
#include <stdio.h>

void f1_so() {
    char a;
    int b;
    long c;

    unsigned char x;
    unsigned int y;
    unsigned long z;

    float f,g;
    char d, buf [10];
    int arg;

    printf ("Enter a signed byte, int, and long\n");
    arg = scanf ("%c %d %ld", &a, &b, &c);
    printf ("%d values entered\n", arg);

    printf ("Enter an unsigned byte, int, and long\n");
    arg = scanf ("%c %u %lu", &x, &y, &z);
    printf ("%d values entered\n", arg);

    printf ("Enter a character and a string\n");
    arg = scanf ("%c %9s", &d, buf);
    printf ("%d values entered\n", arg);

    printf ("Enter two floating-point numbers\n");
    arg = scanf ("%f %f", &f, &g);
    printf ("%d values entered\n", arg);
}

int main(void) {
    printf("Hello from Learning Embedded Software Design!\n");
    int cc = 68;
    float x = 2.3;
    printf("cc = %c %d %#x\n",cc, cc, cc);
    printf("x = %2.1f %2.3f\n",x, x);
    printf("%x", 15);
    printf("%#x\n", 15);
    printf("%X\n", 10);
    printf("%#X\n", 10);
    printf("%o\n", 18);
    printf("%#o\n",18);
    printf("%4d\n", 323); //right justified
    printf("%-4d\n", 323); //left justified
    printf("%+d\n", 19);
    printf("%+d\n", -23);
    printf("%.2s\n", "Iqram");

    f1_so();
    return 0;
}
