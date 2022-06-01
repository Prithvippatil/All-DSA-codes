#include<stdio.h>
struct num
{
    int n;
    struct num *next;
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
        scanf("%d",&newn->n);

        newn->next=NULL;
    }
 return newn;
}

NODE insertend(NODE head)
{
    NODE newn=getnewnode();
    if(head==NULL)
    {
        head=newn;
        return newn;
    }
    else
    {
       NODE temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=newn;
        return head;
    }
}

void display(NODE head)
{
     if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    NODE temp=head;
    while(temp!=NULL)
    {
        printf("%d--->", temp->n);
        temp=temp->next;

    }
}

NODE shift(NODE head,int n)
{
    NODE temp=head;
    NODE cur=head;
    NODE temp1=head;
    int i;


    for(i=0;i<=n;i++)
    {
       head=head->next;
        while(cur->next!=NULL)
    {
        cur=cur->next;
    }
       for(i=0;i<=n-1;i++)
    {
        temp1=temp1->next;
    }
    }


temp1->next=NULL;
cur->next=temp;


    return head;
}

int main()
{
    NODE head=NULL;
    int u,n;
    printf("Enter size:");
    scanf("%d",&u);
    for(int i=0;i<u;i++)
    {
         head= insertend(head);
    }
    display(head);
    printf("Enter place:");
    scanf("%d",&n);
    head=shift(head,n);
    printf("\n");
    display(head);
}
