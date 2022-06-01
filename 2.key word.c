#include<stdio.h>
void read(int [],int);
void chk(int[],int);

void main()
{
    int a[100],n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    read(a,n);
    chk(a,n);
}

void read(int a[],int n)
{
     printf("Enter elements of array:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}

void chk(int a[],int n)
{
    int k,i;
    printf("Enter key:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            printf("Key word found\n");
            printf("Index of number %d\n",i);
        }


    }
}
