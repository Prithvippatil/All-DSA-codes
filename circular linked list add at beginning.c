//pgm to insert node at front of circular linked list
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
NODE insert_beg(NODE head);
NODE insert_end(NODE head);
NODE read();

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
NODE insert_beg(NODE head)
{
NODE new,cur=head;
new=read();
printf("p");
if(head==NULL)
{
   head=new;
   new->next=head;
   return head;
}
while(cur->next!=head)
{
  cur=cur->next;
}
cur->next=new;
new->next=head;
head=new;
return head;
}
NODE insert_end(NODE head)
{
NODE new,cur=head;
new=read();
printf("f");
if(head==NULL)
{
   new->next=head;
   return head;
}
else
{
   while(cur->next!=head)
   {cur=cur->next;}
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
int main()
{
 NODE head;
 int n;
 printf("Enter number of nodes: ");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
    {
   head=insert_beg(head);
 head=insert_end(head);
    }

}
