#include<stdio.h>
int main()
{
    char c[] = {'k','a','m','a','l'};
    char *ptr;
    int i;
    ptr = c;
    for(i=0;i<5;i++)
    {
        printf("%c char in %p \n",*ptr,ptr);
        ptr = ptr + 1;
    }
}