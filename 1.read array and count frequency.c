#include<stdio.h>
void read(int[],int);
void freq(int[],int);
void main()
{
    int a[100],n;
    printf("Enter size of array:");
    scanf("%d",&n);
    read(a,n);
    freq(a,n);
}

void read(int a[],int n)
{
  printf("Enter elements of array:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}

void freq(int a[],int n)
{
    int count=0,count1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
         count++;
        }
        else
        {
            count1++;
        }
    }
    printf("Number of positive elements are:%d\n",count);
    printf("Number of negative elements are:%d\n",count1);
}
