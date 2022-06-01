#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book_details
{
    char book_name[50],author[20];
    int price,ISBN;
};

int main()
{
    FILE*fp;
    char ch;
    int n;
    fp =  fopen("book.txt","w");
     printf("Enter number of books:");
     scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        struct book_details input = scanf("%s",&ch)
    }


    fclose(fp);
    fp=fopen("hello.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}
