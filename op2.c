/*Bitwise Operator:
    Bitwise &
    Bitwise |
    Bitwise xor ^
a = 60 Binary value=>  111100
b = 30 Binary value=>  011110
Bitwise AND a&b   =>   011100 (28)

Bitwise OR   a|b  =>   111110 (62)
Bitwise xor  a^b  =>   100010 (34)

*/
/*
Left shift c = 6,  c<<2, 0110 => 11000
Right shift : c=6, 0110, c>>3 => 0001, 
*/
#include<stdio.h>
int main()
{
    int a=60,b=30,c=6;
    printf("Bitwise AND a & b = %d\n",a&b);
    printf("Bitwise OR a or b = %d\n",a|b);
    printf("Bitwise xor a ^ b = %d\n",a^b);
    printf("Left shift op res = %d\n",c<<2);
    printf("Rightshift result = %d\n",c>>3);
}
