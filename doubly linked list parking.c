//pgm doubly linked list
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100

struct details
{
    char cname[MAXSIZE];
    char name[MAXSIZE];
    int slot;
    int number_plate;
    struct details *next;
    struct details *prev;
};
typedef struct details *NODE;

NODE getnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct details));
    if(newn==NULL)
    {
        printf("list not created");
        exit(0);
    }
    printf("Enter car name, owner name, slot alloted and number plate:");
    scanf("%s%s%d%d",newn->cname,newn->name,&newn->slot,&newn->number_plate);
    newn->next = NULL;
    newn->prev = NULL;
  return newn;
}

void display(NODE head)
{
    NODE cur;
    if(head==NULL)
    {
        printf("List is empty");
    }
    cur=head;
    printf("\tLIST IS:");
    while(cur!=NULL)
    {
        printf("\n %s",cur->cname);
        cur=cur->next;

    }
}
NODE insert_end(NODE head)
{
    NODE newn,cur;
    newn=getnode();
    if(head==NULL)
    {
        head=newn;
        return head;
    }
    else
    {
        cur=head;
        while(cur->next!=NULL)
        {
            cur=cur->next;

        }
        newn->prev=cur;
        cur->next=newn;
    }
    return head;
}
void search(NODE head)
{
    NODE cur;
    int f,flag=0;
    printf("Enter the slot number:");
    scanf("%d",&f);
    if(head==NULL)
    {
        printf("List is empty");
    }
    cur=head;
    while(cur!=NULL)
    {
        if(cur->slot==f)
        {
            printf("Details of car in that slot: %s\n%s\n%d\n%d",cur->cname,cur->name,cur->slot,cur->number_plate);
            flag=1;
        }
        cur=cur->next;
    }
    if(flag==0)
        {
            printf("Car not found");

        }
}

void number_of_cars(NODE head)
{
    NODE cur;
    int count=0;
    if(head==NULL)
    {
        printf("List is empty");
    }
    cur=head;
    while(cur!=NULL)
    {
        count++;
        cur=cur->next;
    }
    printf("Total number of cars :%d",count);
}
NODE delete_car(NODE head)
{
    NODE cur,temp;
    int i,flag=0;
    printf("Enter car number plate to be deleted:");
    scanf("%d",&i);
    if(head==NULL)
    {
        printf("List is empty");
        exit(0);
    }
    cur=head;
    temp=cur;
    if(head->next==NULL)
    {
        if(i==head->number_plate)
      {
        flag=1;
        printf("Deleted car is:%s",head->cname);
        head=NULL;
      }
    }
    cur=cur->next;
    while(cur->next!=NULL)
    {
        if(head->number_plate==i)
        {
            head=head->next;
            printf("deleted car:%s",cur->cname);
            free(cur);
        }
        if(i==cur->number_plate)
        {
            flag=1;
            printf("deleted car:",cur->cname);
            temp->next=cur->next;
            cur->next->prev=temp;
            free(cur);
        }
        temp=cur;
        cur=cur->next;
    }
    if(cur->next==NULL)
    {
        if(i==cur->number_plate)
        {
            flag=1;
            temp->next=NULL;
            cur->prev=NULL;
            printf("deleted car:",cur->cname);
            free(cur);
        }
    }
    if(flag==0)
    {
        printf("No car found");
    }
   return head;
}
void main()
{
    NODE head=NULL;
    int ch;
    while(1)
  {
   printf("\n\n Enter \n 1 for insert\n 2 for display \n 3 to display details of car at specific slot \n 4 to count the number of cars \n 5 to delete specific car");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1 :head=insert_end(head);
               break;
       case 2 :display(head);
               break;
       case 3 :search(head);
               break;
       case 4 :number_of_cars(head);
               break;
       case 5 :head=delete_car(head);
               break;
       default:("No match found");
   }
  }
}


//temp->next=cur->next;
//cur->next->prev=temp;

