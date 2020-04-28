/*
*/
#include <stdio.h>

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
};


int main(void) {
    struct c_datatypes types = {'z', 5923, -4567, 432546781234, 2.132001e23, 2.132001e23, 3.45896,
                                520, "Iqram", 03245, 0xbe, 0xab };

    printf("%c\n", types.s_char);
    printf("%d\n",types.s_decimal);
    printf("%i\n",types.decimal);
    printf("%ld\n",types.s_32_bit);
    printf("%e\n",types.s_notion);
    printf("%E\n",types.s_notion_cap);
    printf("%f\n",types.f);
    printf("%o\n",types.u_oct);
    printf("%s\n",types.str);
    printf("%u\n",types.dec_int);
    printf("%x\n",types.u_hex);
    printf("%X\n",types.hex_cap);
    return 0;
}
