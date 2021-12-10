#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr = &a;
    printf("Data in ptr is %d\n",*ptr);
    printf("Address of a: %p\n",&a);
    printf("Address of a using ptr: %p\n",ptr);
    *ptr = *ptr + 20;
    printf("the value of a = %d",a);
    return 0;
}