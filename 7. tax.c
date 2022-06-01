#include<stdio.h>
void read( int [], int);
void print( int [], int);
void total_tax(int [], int);
void total(int [], int);
void avg(int [], int);
int main()
{
    int n, a[10] ;
    printf("Enter the number of tax payers:");
    scanf("%d",&n);
    read(a,n);
    print(a,n);
    total_tax(a,n);
    total(a,n);
    avg(a,n);
    return 0;
}

void read( int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

    }
}
void print( int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n%d\t", a[i]);

    }
}

void total_tax(int a[], int n)
{
    int i, count=0;
     for(i=0; i<n; i++)
     {
         if(a[i] > 250000)
           count++;
     }

     printf("\nThe total number of tax payers who paid more than 2.5Lakhs=%d\n", count);

}
void total(int a[], int n)
{
    int i,s;
    for(i=0; i<n; i++)
    {
        if(a[i]>50000 && a[i]<150000)
            s++;
    }
 printf("The total number of tax payers who paid between 50000 and 150000 =%d\n", s);
}

void avg(int a[], int n)
{
    int i, sum=0;
    float avg;
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
        avg=sum/n;

    }
    printf(" The average tax collected is=%f\n", avg);
}
