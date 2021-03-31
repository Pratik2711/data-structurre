#include<stdio.h>
#include<stdio.h>
void enqueue();
void dequeue();
void traverse();
    int a[5],n,i,ch;
    int size=5;
    int front=-1;
    int rear=-1;
    void main()
    {
	do
	{
	printf("Enter your choice \n");
	printf("1:Enqueue\n2:Dequeue\n3.Traverse\n4:Exit\n");
	scanf("%d",&ch);
		switch(ch)
		{ 
		case 1:  
			enqueue();  
			break;
 
		case 2: 
			dequeue();
			break;
		case 3:
			traverse();
			break;
		case 4:
			break;
               
		default :
			printf("Invalid choice\n"); 
		}       
	}while(ch!=4);
    }


void enqueue()
              {
               
                                        
                                            if(front==-1)
                                             {             
                                          front=(front+1)%size;
                                          rear=(rear+1)%size;
                                           }
                                           else
                                           {
                                           rear=(rear+1)%size;
                                           }             
                                       
                                        printf("enter the value\n");
                                        scanf("%d",&a[rear]);
                                        printf("%d is enqueued\n",a[rear]);
              
              }
              
              
void dequeue()
               {
                if ((front%size)>(rear%size))
                printf("circular queue underflow\n");
                else
                {
                printf("%d is dequed\n",a[front]);
                front=(front+1)%size;
                if((front%size)==(rear+1)%size)
                {
                front=-1;
                rear=-1;
                }
                }
               }              
                
void traverse()
                {
                int i;
                 if(front%size>rear)
			printf(" circular queue is the underflow\n");
		else
		{
			for(i=(front%size);i<=((i)%size);i++) 
	
				printf("%d\n",a[i]);
		}
                
                
                }
