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
NODE getnewnode2(NODE temp2,NODE temp1)
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct num));
    if(newn==NULL)
    {
        printf("Memory not allocated");
    }
    //else
    {
       // printf("Enter number:");
       // scanf("%d",&newn->n);
temp2->n==temp1->n;
        newn->next=NULL;
    }
 return newn;
}

NODE insertend(NODE head1)
{
    NODE newn=getnewnode();
    if(head1==NULL)
    {
        head1=newn;
        return newn;
    }
    else
    {
       NODE temp=head1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=newn;
        return head1;
    }
}

void display(NODE head1)
{
     if(head1==NULL)
    {
        printf("List is empty\n");
        return head1;
    }
    NODE temp=head1;
    while(temp!=NULL)
    {
        printf("%d", temp->n);
        temp=temp->next;

    }

}


NODE check(NODE head1,NODE head2)
{
    NODE temp1=head1;
    NODE temp2=head2;
    while(temp1->next!=NULL)
    {
        if((temp1->n)%2==0 &&(temp1->next->n==0))
      {

         head2= insertend(head2);
      }
      else if((temp1->n)%5==0 &&(temp1->next->n==0))
      {
        head2= insertend(head2);
      }
      if(temp1->next==NULL)
      {
          if((temp1->n)%2==0 ||(temp1->n)%5==0 )
          {
              head2= insertend(head2);
          }
      }
      temp1=temp1->next;
    }

}
int main()
{
    NODE head1=NULL;
    NODE head2=NULL;
    int u;
    printf("Enter size:");
    scanf("%d",&u);
    for(int i=0;i<u;i++)
    {
         head1= insertend(head1);
    }
    display(head1);
    display(head2);

}
