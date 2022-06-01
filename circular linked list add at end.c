//pgm to insert node at end of circular linked list
#include<stdio.h>
#include<stdlib.h>
struct student
{
 char name[20];
 int roll;
 struct student*next;
};
typedef struct student *NODE;
NODE getnode();
NODE insert_end(NODE head);
NODE read();
NODE display();

NODE getnode()
{
NODE new;
new=(NODE)malloc(sizeof(struct student));
if(new==NULL)
{
printf("Empty");
exit(0);
}
new->next = NULL;
return new;
}
NODE insert_end(NODE head)
{
NODE new,cur=head;
new=read();
if(head==NULL)
{
   new->next=new;
   return new;
}
else
{
   while(cur->next!=head)
   cur=cur->next;
}
cur->next=new;
new->next=head;
}
NODE read()
{
  NODE temp;
  temp=getnode();
  printf("Enter name and roll number:");
  scanf("%s%d",temp->name,&temp->roll);
  return temp;
}
NODE display()
{
    NODE head;
    NODE temp;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%s%d",temp->name,&temp->roll);
        }
    }
}
int main()
{
 NODE head;
 head=read();
 head = insert_end(head);
 display();
}
