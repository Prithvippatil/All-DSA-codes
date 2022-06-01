#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
typedef struct node *NODE;
NODE getnode(int d);
NODE insert(NODE head, int data);
void check(NODE head);
void main()

{
  NODE head = NULL;
    int n, a;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        head = insert(head,a);
    }
    check(head);
}
NODE getnode(int d)
{
   NODE n =malloc(sizeof(struct node));
    n->data = d;
    n->next = NULL;
    return n;
}
NODE insert(NODE head, int data)
{
    NODE temp = getnode(data);
    if(head==NULL)
    return temp;
    struct node* cur = head;
    while(cur->next != NULL)
    cur = cur->next;
    cur->next = temp;
    return head;
}
void check(NODE head)
{
    struct node* cur = head;
    int sum = 0;
    while(cur!=NULL)
    {
        if(cur->next==NULL)
        {
            if(cur->data%2==0||cur->data%5==0)
            {
                printf("%d ", cur->data);
                sum =sum+cur->data;

           }
            break;
        }
        if((cur->data%2==0||cur->data%5==0) && cur->next->data%3==0)
        {
            printf("%d ", cur->data);
            sum =sum+cur->data;
        }
        cur = cur->next;
    }
    printf("\n%d", sum);
}
