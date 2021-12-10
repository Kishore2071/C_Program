#include<stdio.h>
int main()
{
    int a=10;
    void *p;
    p = (void *)a;
    printf("in void ptr: %d",*((int*)p));
}