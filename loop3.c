#include<stdio.h>
int main()
{
    int inp;
    int dig;
    int nod=0;
    printf("Enter a number: ");
    scanf("%d",&inp);
    while(inp>0)
    {
        dig=inp%10;
        printf("lsd: %d\n",dig);
        inp=inp/10;
        nod = nod +1;
    }
    printf("You have entered %d no. of digits",nod);

    
}