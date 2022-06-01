//pgm
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100

struct playlist
{
    char song[MAXSIZE];
    int time;
    struct playlist *prev;
    struct playlist *next;
};
typedef struct playlist *NODE;
NODE getnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct playlist));
    if(newn==NULL)
    {
        printf("list not created");
        exit(0);
    }
    printf("Enter song name and time");
    scanf("%s%d",newn->song,&newn->time);
    newn->next = newn;
    newn->prev = newn;
  return newn;
}
NODE insert_end (NODE head)
{
   NODE newn,cur;
    newn=getnode(head);
    if(head==NULL)
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
        newn->prev=cur;
        newn->next=head;
        cur->next=newn;

}

void main()
{
 int choice;
 NODE head=NULL;

 while(1)
 {
     printf("press 1 for inserting song at front\npress 2 to find highest duration\n");
     scanf("%d",&choice);

     switch(choice)
     {
         case 1:head=insert_end(head);
         break;
         case 2:highest_duration(head);
         break;
         default:printf("Invalid key");
     }
 }

}
