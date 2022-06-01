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
NODE swap(NODE head )
{
    NODE temp=head;
    NODE cur=temp->next->next;
    //printf("\nt");
    while(cur->next!=NULL)
    {

    head=temp->next;
    temp->next->next=temp;
    temp->next=cur;

return head ;
    }

}
int main()
{
    NODE head=NULL;
    int u;
    printf("Enter size:");
    scanf("%d",&u);
    for(int i=0;i<u;i++)
    {
         head= insertend(head);
    }
    display(head);
    head=swap(head);
    printf("\n");
    display(head);
}
