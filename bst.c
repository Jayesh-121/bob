#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node* rlink;
        struct node* llink;
};
struct node* root=NULL;

void insert(int key){
struct node* ptr;
struct node* parent;
int flag=0;
struct node* newnode;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data=key;
newnode->llink=NULL;
newnode->rlink=NULL;
if(root==NULL)
{
root=newnode;
}
else
{
ptr=root;
while(ptr!=NULL)
{
if(key<ptr->data)
{
	parent=ptr;
	ptr=ptr->llink;
}
else if(key>ptr->data)
{
	parent=ptr;
	ptr=ptr->rlink;
}
else
{
flag=1;
}
}
if(flag==1)
{
	printf("the element exists\n");
}
else
{
	if(key>parent->data)
	{	parent->rlink=newnode;

	}
	else
	{
		parent->llink=newnode;
        }	
}
}
}

void delete();
void search(struct node* root, int key);
void pre();
void in();
void post();
		





void main(void){
	int ch;
	int x,a;
	while(1){
		printf("\n\tMENU\n\t====\n\t1. Insert\n\t2. Delete\n\t3. Search\n\t4. Preorder traversal\n\t5. Inorder traversal\n\t6. Postorder  traversal\n\t7. Exit\n\n\tEnter your choice\t");
	scanf("%d", &ch);
		switch(ch){
			case 1 : printf("\tEnter element to be inserted");
				 scanf("%d",&x);
				 insert(x);
					 break;
			case 2 : delete();
					 break;
			case 3 : printf("\tEnter the search element");
				 scanf("%d",&a)
				 search();
					 break;
			case 4 : pre();
					 break;
			case 5 : in();
					 break;
			case 6 : post();
					 break;
			case 7 : exit(0);
			default : printf("\tInvalid input\n");
		}
	}
}


