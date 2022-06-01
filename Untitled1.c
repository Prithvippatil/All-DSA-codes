#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define max 100


typedef struct input
{
    int top;
    int data[max];
}stack;


void push(stack *c);
void pop(stack*c);
int IsEmpty(stack *c);
void detect(stack *a , int p,int q);


int main()
{
    stack a,b;
    int n,i,m,p,q;
    a.top=-1;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);
     scanf("%d",&q);
      for(i=0;i<n;i++)
    {
        push(&a);
    }
        detect (&a,p,q);


        return 0;
}



void push(stack *s)
{
    s->top++;

     scanf("%d",&s->data[s->top]);
}


void pop(stack *s)
{
    s->top--;
}


int IsEmpty(stack *s)
{
    if(s->top==-1)
{
    return 1;
}

    else{return 0;}
}

void detect(stack *a,int p,int q )
{
    while(IsEmpty(a)!=1 )
    {
        for(int i=0;i<p;i++)
        {

            pop(a);
             printf("%d",*a->data);
        }
    }
}
