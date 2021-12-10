//function gets input and return values
#include<stdio.h>
int z;  //global var
void mulitiplication(int x,int y)
{
   // x & y are local variables
    z = x*y;
}
void addition(int x,int y)
{
    z = x + y;
}
int main()
{
    int a,b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    mulitiplication(a,b);
    printf("Multiplication result: %d\n",z);
    addition(a,b);
    printf("Addition result: %d",z);
}