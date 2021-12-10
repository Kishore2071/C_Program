#include<stdio.h>
int main()
{
    int a[]={10,20,23};
    char c='k';
    int i;
    int *p;
    char *cp;
    p =  &c;
    cp = a;
    printf("Data in int pointer p : %c in address %p",*p,p);
    for(i=0;i<3;i++)
    {
        printf("\nData in char ptr: %d in address %p\n",*cp,cp);
        //cp = (char *) ((int *) cp + 1);
        cp = cp + 8;
    }
    return 0;
}