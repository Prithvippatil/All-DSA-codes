#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE*fp;
    char ch;
    int n,a;
    fp =  fopen("Student.txt","w");
    scanf("%d",&a);
    printf("Enter data:");
    while((ch=getchar())!=EOF)
    {
        for(int i=0;i<a;i++)
        {
         putc(ch,fp);
         putw(n,fp);
        }
    }
    fclose(fp);
    fp=fopen("Student.txt","r");
    while((ch=getc(fp))!=EOF)
    {
         for(int i=0;i<a;i++)
        {
          printf("%c",ch);
         printf("%d",n);
        }

    }
    fclose(fp);
}
