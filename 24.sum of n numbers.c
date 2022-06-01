#include<stdio.h>
int sum(int n)
{
    int sum=0;
    sum=(n*(n+1))/2;
    return sum;
}

void main()
{
    int n,c;
    scanf("%d",&n);
    c=sum(n);
    printf("%d",c);
}
