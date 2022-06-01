#include<stdio.h>
struct num
{
    int n;
    struct num *next;
};typedef struct num *NODE;

NODE head;
NODE getnewnode();
NODE insertend(NODE head);
void display(NODE head);
void delete(NODE head, int pos);

NODE getnewnode()
{
    NODE newn;
    int e;
    newn=(NODE)malloc(sizeof(struct num));
    if(newn==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        printf("Enter number:");
        scanf("%s",&newn->n);
        newn->n=e;
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

void deleten(NODE head, int pos)
{
   // struct Node* temp = head;
   // struct Node* previous;
   NODE temp=head;
   NODE previous;
    //int size = calcSize(head);

//    if(pos<1 || pos>size){
        //printf("Enter valid position\n");
        //return;
   // }

    int d=0;
    while (d!=pos)
    {

        previous = temp;
        temp = temp->next;
        d++;
    }

   previous->next = temp->next;
    printf("Value %d, deleted \n",temp->n);

    free(temp);

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

int main()
{
    NODE head = NULL;
    int pos,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       head= insertend(head);
    }
    scanf("%d",&pos);
    deleten(head, pos);
    display(head);

}
