#include<stdio.h>
void modify(int *x)
{
    *x = *x * 10;
    printf("address in x: %p\n",x);
}
int main()
{
    int a=10;
    modify(&a);
    printf("\naddress of a: %p\n",&a);
    printf("\na = %d",a);
}