#include<stdio.h>
#include<stdlib.h>
struct node
{
int value;
struct node *left_child, *right_child;
};
struct node *new_node(int value)
{
struct node *tmp = (struct node *)malloc(sizeof(struct node));
tmp->value = value;
tmp->left_child = tmp->right_child = NULL;
return tmp;
}
void print(struct node *root_node) // displaying the nodes!
{
if (root_node != NULL)
{
print(root_node->left_child);
printf("%d \n", root_node->value);
print(root_node->right_child);
}
}
struct node* insert_node(struct node* node, int value) // inserting nodes!
{
if (node == NULL) return new_node(value);
if (value < node->value)
{
node->left_child = insert_node(node->left_child, value);
}
else if (value > node->value)
{
node->right_child = insert_node(node->right_child, value);
}
return node;
}

struct node* search(struct node* node, int value) {
if(!(node))
{
return NULL;
printf("NOT present");
}
if(value == (node)->data) {
return node;
} else if(value <(node)->data)
{
search(&((node)->left), value);
printf("Value is present");
} else if(value > (node)->data)
{
search(&((node)->right), value);
printf("Value is present");
}
}

int main()
{
struct node *root_node = NULL;
int n,m;
printf("Enter no.data:");
scanf("%d",&n);
printf("Enter root node:");
printf("Enter data:");
for(int i=0;i<n;i++)
{
   scanf("%d",&m);
   root_node=insert_node(root_node, m);
}
printf("\n");
print(root_node);

printf("Enter value to search:");
search(node,data);

return 0;
}
