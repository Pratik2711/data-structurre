// name= Pratik Amrutsagar
//batch:s2
//singly linkedlist with two reference point.

#include<stdio.h>
#include<stdlib.h>
void createatstart();
void createatend();
void createatlocation();
void deleteatstart();
void deleteatend();
void deleteatlocation();
void traverse();
void search();
struct node
	{
	int data;
	struct node *next;
	};
	int ch;
	typedef struct node NODE;
	NODE *start=NULL,*p,*q,*last=NULL;
	int i,loc;

void main()
{
	

do
{
printf("enter your choice\n");
printf("1.create at start\n2.create at end\n3.create at given location\n4.delete at start\n5.delete at end\n6.delete at given location\n7.traverse\n 8.search\n 9.exit\n");
scanf("%d",&ch);
switch(ch)
        {
	     case 1:
		      createatstart();
		        break;
		case 2:	  
		        createatend(); 
		          break;   
		case 3:
		        createatlocation();
		          break;
		case 4:
		        deleteatstart();
		             break;
		case 5:
		        deleteatend();
		          break;
		case 6:
		        deleteatlocation();
		           break;
		case 7:
		         traverse();
		          break;
		case 8:    search();
		           break;
		case 9:    
		           break;
		           default:
		           printf("invalid choice\n");					
	}

}while(ch!=9);
}




void createatstart()
{
 	p=(NODE*)malloc(sizeof(NODE));
	printf("enter data\n");
	scanf("%d",&p->data);
	if(start==NULL)
	{
	   p->next=NULL;
	   start=p;
	   last=p;
	}
	else
        {
		p->next=start;
		start=p; 
		printf("%d is added\n",p->data);
	}
}
void traverse()
{
	if(start==NULL)
		printf("linked list is empty\n");
	else
	{
	q=start;
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
	}

}
void createatend()
{
p=(NODE*)malloc(sizeof(NODE));

		printf("\n enter the data\n");
		scanf("%d",&p->data);

	if(start==NULL)
	{
		p->next=NULL;
		start=p;
		last=p;
	}
	else
	{
		q=last;
		q->next=p;
		p->next=NULL;
		last=p;
		printf("%d is added\n",p->data);
        }
}

void createatlocation()
{
p=(NODE*)malloc(sizeof(NODE));
		printf("enter the location=\n");
		scanf("%d",&loc);
		printf("\n enter the data");
		scanf("%d",&p->data);

	if(start==NULL)
	{
	if(loc==1)
	{
		p->next=NULL;
		start=p;
		last=p;
		printf("%d is added\n",p->data);
	}
	else
		printf("\ninvalid location\n");
	}
	
	else
	{
	if(loc==1)
	{
		p->next=start;
		start=p;
		printf("%d is added\n",p->data);
	}
	
      	else
	{
		i=1;
		q=start;
	while(i<loc-1&&q!=NULL)
	{
		q=q->next;
		i=i+1;
	}
	if(q!=NULL)
	{
		p->next=q->next;
		q->next=p;
		printf("%d is added\n",p->data);
	
	if(q->next==NULL)
	{
	last=p;
	}
	}
	else
	{
	if(q!=NULL)
	{
	p->next=q->next;
	q->next=p;
	}
	else
		printf("\n location is invalid\n");
	}
	}
	}
}

void deleteatstart()
{
	if(start==NULL)
		printf("linked list is empty\n");
	else if(p->next=NULL)
	{
         p=start;
         start=NULL;
         last=NULL;
         printf("%d deleted",p->data);
         free(p);	
	}
	else
	{
		p=start;
		start=p->next;
		printf("%d deleted",p->data);
		free(p);
	}

}

void deleteatend()
{
if(start==NULL)
	{
		printf("linked list is empty,delete can't be perform\n ");
	}	
	else
	if(start->next==NULL)
	{
		p=start;
		start=NULL;
		last=NULL;
		printf("%d  deleted\n",p->data);
		free(p);
	}
	else
	{
		p=start;
	while(p->next!=NULL)
	{
		q=p;
		p=p->next;
	}
		q->next=NULL;
		last=q;
		printf("%d deleted\n",p->data);
		free(p);
	}
}

void deleteatlocation()
{
printf("enter the location");
	scanf("%d",&loc);	
	if(start==NULL)
		printf("linked list is empty\n");
	else
	{
	if(loc==1)
	{
	
	
		p=start;
		start=NULL;
		last=NULL;
		printf("%d deleted\n",p->data);		
		free(p);
	}
		i=1;
		p=start;
	while(i<loc && p!=NULL)
	{
		q=p;
		p=p->next;
		i=i+1;
	}
	if(p!=NULL)
	{
		q->next=p->next;
		if(p->next=NULL)
		last=q;
		printf("%d delete\n",p->data);
		free(p);
	}
	else
	printf("invalid location\n");
	}
}

void search()
             {
                int key,loc=1;
                if(start==NULL)
                                { 
                                 printf("linked list is empty there is no value in linked list\n");
                                }             
                else
                   {
                    printf("enter the element to be search\n");
                    scanf("%d",&key);
                    p=start;
                    while(p!=NULL)
                        {
                          if(key==p->data)
                          {
                          printf("the given number %d is present in linked list\n",key); 
                          printf("is on %d location\n",loc);
                          break;
                          } 
                          p=p->next;
                          loc++;  
                          }               
                  if(p==NULL)
                          {
                          printf("the given data is not present in linked list\n");
                          }         
                 }
              } 
              
