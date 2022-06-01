#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node * insertr(struct node *head)
{
    struct node *nw,*temp;
    nw=(struct node *)malloc(sizeof(struct node));
    nw->next=NULL;
    if(nw==NULL)
    {
        printf("\nMemomry not allocated");
        exit(0);
    }
    printf("\nEnter data:");
    scanf("%d",&nw->data);
    if(head==NULL)
    {
        head=nw;
    }
    else
    {
        for(temp=head;temp->next!=NULL;temp=temp->next);
        temp->next=nw;
    }
    return(head);
}

void merge(struct node **a,int k)
{
    int i,j;
    struct node *cur;
    for(i=0;i<k;i++)
    {
        cur=a[i];
        for(cur=a[i];cur->next!=NULL;cur=cur->next);
        cur->next=a[i+1];
    }
}

