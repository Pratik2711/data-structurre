

#include<stdio.h>
void enqueue();
void dequeue();
void traverse();
    int a[5],n,i,ch;
    int front=-1;
    int rear=-1;
    void main()
    {
        int n;
	printf("Enter the number\n");
	scanf("%d",&n);
    }    
void enqueue()
	     {
		if(rear==4)
			printf("Queue is overflow \n ");
    
		else
		{
			if(front==-1)
			{
				front=front+1;
				rear=rear+1;
			}
			else
			{
				rear=rear+1;
			} 
		printf("Enter the number to be enqueued\n");  
		scanf("%d",&a[rear]); 
		printf("%d is enqueued \n",a[rear]);
		}
	}

void dequeue()
	{
		if(front==-1)
			printf("queue is underflow \n"); 
		else
		{
			printf("%d is dequeued \n ",a[front]);
			front=front+1;
		  	if(front>rear)
			{
				front=-1;
				rear=-1;
			}
		}
	}
void traverse()
	{
		if(front==-1)
			printf("Queue is the underflow\n");
		else
		{
			for(i=front;i<=rear;i++)
				printf("%d\n",a[i]);
		}
	}


