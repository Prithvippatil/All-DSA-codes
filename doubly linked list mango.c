#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct mango
{
    int ripe;
    struct mango *next;
    struct mango *prev;
};
typedef struct mango *NODE;

NODE getnode()
{
   NODE newn;
   newn=(NODE)malloc(sizeof(struct mango));
   if(newn==NULL)
   {
     printf("not created");
     exit(0);
   }
  printf("Enter ripe level:");
  scanf("%d",&newn->ripe);
  newn->next = newn;
  newn->prev = newn;
  return newn;
}

NODE insert_end(NODE head)
{
    NODE newn,cur;
    newn=getnode();
    if(head==NULL)
    {
      head=newn;
      return newn;
    }
    cur=head;
    while(cur->next!=head)
    {
     cur = cur->next;
    }
 cur->next=newn;
 newn->prev=cur;
 newn->next=head;
 head->prev=newn;
 return head;
}
NODE fall_mangoes(NODE head)
{
    NODE temp,cur,temp2;
    temp=temp2=cur=head;
    cur=cur->next;
    while(cur->next!=head)
      {
          if(cur->ripe>=temp->ripe)
        {
          head=cur;
          cur=cur->next;
        }
  else    if(cur->ripe<=temp->ripe)
      {
          temp2=head->prev;
          temp2->next=cur;
          head=cur;
          cur->prev=temp2;
          printf("Fallen mango is:%d",temp->ripe);
          free(temp);
          //cur=cur->next;
      }
      cur=cur->next;
    }
 return head;
}
void count(NODE head)
{
    NODE cur;
    int count=0;
    if(head==NULL)
    {
        printf("List is empty");
    }
    cur=head;
    while(cur->next!=head)
    {
        count++;
        cur=cur->next;
    }
    count++;
    printf("\nNumber of mangoes remaining are:%d",count);
}


void display(NODE head)
{
    NODE cur;
    if(head==NULL)
    {
        printf("\nList is empty");
    }
    cur=head;
    printf("\nlist is\t");
    while(cur->next!=head)
    {
       printf("%d\t",cur->ripe);
       cur=cur->next;
    }
    printf("%d\t",cur->ripe);
}


int main()
{
    NODE head=NULL;
    for(int i=0;i<3;i++)
    {
       head=insert_end(head);
    }

        head=fall_mangoes(head);


    display(head);
    count(head);
}
