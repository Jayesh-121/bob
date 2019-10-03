#include<stdio.h>
#define MAX 100
int top,stack[100];
void push();
void pop();
void display();

int main()
{
int choice;
top=-1;

printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
do
{
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
 		{
		push();
	       	break;
		}
	case 2:
		{
		pop();
	       	break;
		}
	case 3:
		{
		display();
 	       	break;
		}
	case 4:
		{
		printf("exit point\n");
	       	break;
		}
        default:
		printf("enter a valid choice\n");
}
}
while(choice!=4);
	return 0;

}




void push()
{
 int x;
 if(top>=MAX)
{
 	printf("stack is overflowing\n");
}
else
{
printf("enter the value to be pushed\n"); 
scanf("%d",&x);
top++;
stack[top]=x;
}
}


void pop()
{
if(top<-1)
{
printf("stack is underflowing\n");
}
else
{
printf("the value popped is %d\n",stack[top]);
top--;
}
}

void display()
{
int i;
if(top>=0)
{
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
printf("\n");
}
else
{
printf("stack is empty\n");
}
}





