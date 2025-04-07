#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* left;
    struct node* right; 
}node;

node*cretenode(int data){
    node* newnode = (node*)malloc(sizeof(node));
if(!newnode){
    printf("memory error\n");
    exit(1);
}
newnode->data = data;
newnode->left = NULL;
newnode->right = NULL;
return newnode;
}
int main()
{
    cretenode(54);
 return 0;
}