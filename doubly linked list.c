#include<stdio.h>
struct num
{
    int n;
    struct num *next;
    struct num *prev;
};typedef struct num *NODE;

NODE getnewnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct num));
    if(newn==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        printf("Enter number:");
        scanf("%s",&newn->n);
       // newn->n=e;
        newn->next=NULL;
        newn->prev=NULL;
    }
 return newn;
}

NODE insert_beg(NODE head)
{
     NODE newn;
    //NODE cur=head;
    newn=getnewnode();
     if(head==NULL)
    {
        head=newn;
        return newn;
    }
    else
    {
       newn->next=head;
       head->prev=newn;
       head=newn;
    }
    return head;
}


void display(NODE head)
{
    NODE cur;
    cur=head;
    while(cur!=NULL)
    {
        printf("%d",cur->n);
        cur=cur->next;
    }
}

void main()
{
 int n;
NODE head=getnewnode;
 printf("Enter size:\n");
 scanf("%d",&n);
 for(int i=0;i<=n;i++)
 {
 head=insert_beg(head);
 }
 display(head);
}
