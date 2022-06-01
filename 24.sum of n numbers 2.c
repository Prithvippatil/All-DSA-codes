#include<stdio.h>
int sum(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
      sum=sum+i;
    }
    return sum;gh
}
void main()
{
    int n,c;
    scanf("%d",&n);
    c=sum(n);
    printf("%d",c);
}

