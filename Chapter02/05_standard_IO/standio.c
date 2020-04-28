/* Add the marker
* 
*/
#include <stdio.h>

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

    return 0;
}
