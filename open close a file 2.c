#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE*fp;
    char ch;
    fp =  fopen("hello.txt","w");
    printf("Enter text");
    while((ch=getchar())!=EOF)
    {
        fputc(ch,fp);
        fclose(fp);
        printf("the file contains:");

    }
}
