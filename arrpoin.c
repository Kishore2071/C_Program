#include<stdio.h>
int i;
void updatearr(int *p)
{
    //int i;
    printf("starting address: %p\n",p);
    for(i=0;i<4;i++)
    {
        *(p+i)  = *(p + i) * 10;
        //p[i] = p[i] * 10;
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    //int i;
    printf("address of a = %p\n",&a[0]);
    updatearr(a);
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
}