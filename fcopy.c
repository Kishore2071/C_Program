#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1 = fopen("dynarr.c","r");
    fp2 = fopen("new.c","w");
    while(1)
    {
        c = fgetc(fp1);
        if(c!=EOF)
            fputc(c,fp2);
        else    
            break;
    }
    printf("File contents copied successfully");
    fclose(fp1);
    fclose(fp2);
}