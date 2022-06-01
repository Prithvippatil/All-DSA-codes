#include<stdio.h>
#include<strings.h>

 struct student
{
    int r;
    char name[20];
    float per;

};
void read( struct student a[],int n);
void display( struct student a[],int n);
 struct student b[10];
void main()
{int n;

    printf("Enter the no of students\n");
    scanf("%d",&n);
    read(b,n);
    display(b,n);
}
void read(struct student b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d %s %f",&b[i].r,&b[i].name,&b[i].per);


    }
}
void display( struct student b[],int n)
{int i;
    for(i=0;i<n;i++)
    {
        printf("%d %s %f",b[i].r,b[i].name,b[i].per);


    }

}
