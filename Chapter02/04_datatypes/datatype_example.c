/* Description: This module is just covers the basic datat types in C language
*  It just print the explicit value of types that is initialised in struct and its size also
*  printed.
*  ********************
*  Note: sizeof is depends upon both compiler and machine ISA.
*  ********************
*  Author: Iqram Ali
*/
#include <stdio.h>
#include <stdlib.h>

struct c_datatypes{
    unsigned char s_char;
    int s_decimal;
    signed int decimal;
    long s_32_bit;
    float s_notion;
    float s_notion_cap;
    float f;
    unsigned u_oct;
    char *str;
    unsigned int dec_int;
    unsigned char u_hex;
    unsigned char hex_cap;
    unsigned short int s_var;
    short s;
    unsigned long uli;
};


int main(void) {
    struct c_datatypes types = {'z', 5923, -4567, 432546781234, 2.132001e23, 2.132001e23, 3.45896,
                                520, "Iqram", 03245, 0xbe, 0xab, 18, 29, 34568098, L'x9b1' };

    printf("%c->size:%zu\n", types.s_char, sizeof(types.s_char));
    printf("%d->size:%zu\n",types.s_decimal, sizeof(types.s_decimal));
    printf("%i->size:%zu\n",types.decimal, sizeof(types.decimal));
    printf("%ld->size:%zu\n",types.s_32_bit, sizeof(types.s_32_bit));
    printf("%e->size:%zu\n",types.s_notion, sizeof(types.s_notion));
    printf("%E->size:%zu\n",types.s_notion_cap, sizeof(types.s_notion_cap));
    printf("%f->size:%zu\n",types.f, sizeof(types.f));
    printf("%o->size:%zu\n",types.u_oct, sizeof(types.u_oct));
    printf("%s->size:%zu\n",types.str, sizeof(types).str);
    printf("%u->size:%zu\n",types.dec_int, sizeof(types.dec_int));
    printf("%x->size:%zu\n",types.u_hex, sizeof(types.u_hex));
    printf("%X->size:%zu\n",types.hex_cap, sizeof(types.hex_cap));
    printf("%d->size:%zu\n",types.s_var, sizeof(types.s_var));
    printf("%d->size:%zu\n",types.s, sizeof(types.s));
    printf("%lu->size:%zu\n",types.uli, sizeof(types.uli));
    printf("Sizeof struct: %zu\n", sizeof(types));

    return 0;
}
