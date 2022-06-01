//circular singly linked list
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 30

struct baggage
{
 char name[MAXSIZE];
 char destination[MAXSIZE];
 char source[MAXSIZE];
 int id;
 float weight;
 struct baggage *next;
};typedef struct baggage *NODE;

NODE getnode();
NODE insertend(NODE head);

void main()
{
  NODE head=NULL;
  int ch;
  while(1)
  {
   printf("Enter 1 for insert at front \t 2 for display");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1 :head=insertend(head);
               break;
       case 2:display(head);
               break;
       case 3 :exit(0);
       break;
       default:printf("invalid");
   }
  }
}

NODE getnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct baggage));
    if(newn==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    printf("Enter name, source,destination and ID");
    scanf("%s%s%s%d%f",newn->name,newn->source,newn->destination,&newn->id,&newn->weight);
    newn->next=newn;
    return newn;
}

NODE insertend(NODE head)
{
    NODE newn,cur;
    newn=getnode();
    if(newn==NULL)
    {
        head=newn;
        return head;
    }
    else
    {
        cur=head;
        while(cur->next!=head)
        {
            cur=cur->next;
        }
        cur->next=newn;
        newn->next=head;
    }
    return head;
}


void display(NODE head)
{
    NODE cur;
    if(head==NULL)
    {
        printf("List is empty");
    }
    cur=head;
    printf("list is");
    while(cur->next!=head)
    {
       printf("%s\t %s\t %s\t %d\t 0.2%f\t",cur->name,cur->source,cur->destination,cur->id,cur->weight);
       cur=cur->next;
    }
     printf("%s\t %s\t %s\t %d\t 0.2%f\t",cur->name,cur->source,cur->destination,cur->id,cur->weight);
}

void seach_id(NODE head)
{
    NODE cur;
    int i , flag=0;
    printf("Enter ID to search:")
    scanf("%d",&i);
    if(head==NULL)
    {
        printf("List is empty");
    }
    cur=head;
    while(cur->next!=head)
    {
        if(cur->id==i)
        {
            flag=1;
            printf("baggage details:")
            break;
        }
        if(cur->id==i)
        {
            //display data
        }
    }
    if(flag==0)
    {
        printf("ID not found");
    }
}

NODE delete_id(NODE head)
{
    NODE cur,prev;
    int n;
    printf("Enter ID to be deleted");
    scanf("%d",&n);
    if(head==NULL)
    {
        printf("List is empty");
    }
    cur=head;
    prev=NULL;
    if(i==cur->id)
    {
        flag=1;
        prinf("deleted id:");
        free(cur);
    }
    while(cur->next!=head)
    {
        if(i==cur->id)
        {
            flag=1;
            prev->next=cur->next;
            prinf("deleted id:");
            free(cur);
        }
    }
    if(cur->next==head)
    {
        if(i==cur->id)
        {
            flag=1;
            prev->next=cur->next;
            prinf("deleted id:");
            free(cur);
        }
    }
    if(flag==0)
    {
        printf("No baggage found");
    }
}
