#include<stdio.h>
#define n 4
int queue[n],rear=-1,front=0;    // Global Variables

void insert()
{
  int ele;  //local variable
  if(rear>=n-1)
  printf("\n queue is overflow");
  else
  {
    printf("\n insert the element to put in the queue");
    scanf("%d",&ele);
    rear++;  
    queue[rear]=ele;
    }
}

void delet()
    {
	if(rear==-1|| front>rear)
	printf("\n queue is underflow");
	else
	printf("\n delete %d ",queue[front]);
	if(front==rear)
	{
	  front=-1;
	  rear=-1;
	}
	front++;
     }

void display()
	{
	  int i;
	  if(rear==-1)
	  printf("\n queue is empty");
	  else
	  {
	    printf("\n the elements of queue are ");
	    for(i=front;i<=rear;i++)
	    printf("%d",queue[i]);
	    }
	}

int main()
	    {
	       int ch;
	     
	       do
	       {
		 printf("\n *****QUEUE IMPLEMENTATION USING ARRAY***** ");
		 printf("\n enter option 1 for insert");
		 printf("\n enter option 2 for delete");
		 printf("\nenter option 3 for display");
		 printf("\nenter option 4 for exit");
		 printf("\nenter your choice");
		 scanf("%d",&ch);
		 switch(ch)
		 {
		   case 1:insert();
			  break;
		   case 2:delet();
			  break;
		   case 3:display();
			  break;
		   
		   	
		   default:printf("\n enter the valid choice");
		   }
		   }while(ch!=4);
           return 0;
        }