#include<stdio.h>
#include<stdlib.h>
void enter();
void list();
//void sort();
struct node
	{
	int data;
	struct node *next;
	};
	int ch,count=0;
	typedef struct node NODE;
	NODE *start=NULL,*p,*q;
void main()
{
   do
   {
     printf("1.enter the numbers for sorting\n2.check your entered elements\n3.exit\n");
     scanf("%d",&ch);
     switch(ch)
     	{
     	  case 1:
     	  	 enter();
     	  	 break;
     	  
     	  case 2:
     	  	 list();
     	  	 break;
     	  	 
     	 // case 3:
     	  	// sort();
     	  
     	  case 3:
     	  	 break;
     	  	 default:
     	  	 	printf("invalid choice\n");
     	         
     	
     	}
     	}
     	while(ch!=3);
}


void enter()
{
p=(NODE*)malloc(sizeof(NODE));

		printf("\n enter the number\n");
		scanf("%d",&p->data);

	if(start==NULL)
	{
		p->next=NULL;
		start=p;
	}
	else
	{
		q=start;
	while(q->next!=NULL)
		q=q->next;
		q->next=p;
		p->next=NULL;
        }
}

void list()
{
	if(start==NULL)
		printf("not entered number yet\n");
	else
	{
	q=start;
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
		count++;
	}
	printf("%d\n",count);
	}

}

void sort()
{
  int i,j;
  p=start;
  for(i=0;i<count-1;i++)
  		{
  		for(j=0;j<count-i-1;j++)
  		{
  		 if(p>p->next)
  		 {
  		  
  		 
  		 }
  		}
  		}

}


