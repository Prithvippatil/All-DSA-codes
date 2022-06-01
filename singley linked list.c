//singley linked list
#include<stdio.h>
struct num
{
    int n;
    struct num *next;
};typedef struct num *NODE;

NODE head;
NODE getnewnode();
NODE insert_end(NODE head);
NODE insert_beg(NODE head);
NODE insert_req(NODE head);
void disp(NODE head);
NODE del_end(NODE head);
NODE del_beg(NODE head);
NODE del_req(NODE head);

NODE getnewnode()
{
    NODE newn;
    int e;
    newn=(NODE)malloc(sizeof(struct num));
    if(newn==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        printf("Enter number:");
        scanf("%s",&newn->n);
        newn->n=e;
        newn->next=NULL;
    }
 return newn;
}

NODE insert_end(NODE head)
{
    NODE newn;
    NODE cur=head;
    newn=getnewnode();
    if(head==NULL)
    {
        head=newn;
        return newn;
    }
    else
    {
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=newn;
    }
    return head;
}

NODE insert_beg(NODE head)
{
    NODE newn;
    NODE cur=head;
    newn=getnewnode();
    if(head==NULL)
    {
        head=newn;
        return newn;
    }
    else
    {
       newn->next=head;
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
 head=(NODE)malloc(sizeof(struct num));
 head=NULL;
 printf("Enter size:\n");
 scanf("%d",&n);
 for(int i=0;i<=n;i++)
 {
 head=insert_end(head);
 }
display(head);
}
