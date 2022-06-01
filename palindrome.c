#include <stdio.h>
int comp(int);
int main()
{
 int a,c,N,rev,last;
 printf("Enter number:");
 scanf("%d",&a);
 N=a;
 c=comp(a);
 if(N==last)
 {
  printf("Palindrome");
 }
 else
 {
  printf("Not palindrome");
 }
 return 0;
}

int comp(int a)
{
    int i=1,rev,last;
    while(a!=0)
    {
        last=a%10;
        rev=(rev*10)+last;
        a=a/10;

    }
     return last;
}
