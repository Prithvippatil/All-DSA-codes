#include<stdio.h>
void read(int m[]);
int small(int m[]);
int call(int m[]);
int b(int m[]);
int search(int m[],int a);
int main()
{ int g,gre,k,less;



    int m[11];

    read(m);
    g=call(m);
    gre=search(m,g);
    k=small(m);
    less=search(m,k);
    b(m);
    printf("month of the year they spent less:%d\n month of the year they spent more:%d\n",less,gre);

}
void read(int m[] )
{int i;

   for(i=0;i<12;i++)
    {printf("Enter expenditure of month\n");
    scanf("%d",&m[i]);;
    }


}



int call(int m[])
{
 int i,temp,g;
temp=m[0];
    for(i=1;i<12;i++)
   {

    if(m[i]>temp)
    { temp=m[i];

    }


}g=temp;
return g;
}

int small(int m[])
{ int i,temp;
temp=m[0];
    for(i=1;i<12;i++)
   {

    if(m[i]<temp)
    { temp=m[i];
    }

   }
   int k=temp;
   return k;
   }

int search(int m[],int a)
{
    int i,j;
    for(i=0;i<12;i++)
    {
        if(m[i]==a)
        j=i+1;
    }
    return j;
}
int b(int m[])
{int i;
    for(i=0;i<12;i++)
    {
        if(m[i]>=3500)
        {
            printf("Money spent is more than 3500 in month: %d\n",i+1);
        }
    }
}
