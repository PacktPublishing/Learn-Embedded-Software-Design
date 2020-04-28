
#include <stdio.h>

// Add operator precedence over things
int main(void){
    long x,y,z; // Three local variables
    x=1; y=2;   // set the values of x and y
    z = x+4*y;  // arithmetic operation
    x++;        // same as x=x+1;
    y--;        // same as y=y-1;
    x = y<<2;   // left shift same as x=4*y;
    z = y>>2;   // right shift same as x=y/4;
    y += 2;     // same as y=y+2;

    return 0;
}
