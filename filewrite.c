#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int i;
    char c;
    fp = fopen("input.txt","w+");
    char ch[30];
    int choice=1;
    while(1)
    {
        printf("do you want to continue (yes-1,no-0): ");
        scanf("%d",&choice); 
       if(choice==1)
       { 
            printf("Enter the string : ");
            scanf("%s",ch);
            fputs(ch,fp);
            fputc('\n',fp);         
       } 
       else{
          break;
       }
    }
    fseek(fp,0,SEEK_SET);
    printf("The entered contents in the file: ");
    while(1)
    {
        c = fgetc(fp);
        if(c!=EOF)
            printf("%c",c);
        else    
            break;
    }
    fclose(fp);
}