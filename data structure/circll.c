/*
   
   Name : Pratik Amrutsagar.
   Roll No: 225
   program to Implement Circular Linked list.
*/

#include<stdio.h>
#include<stdlib.h>
void createatstart();
void createatend();
void createatloc();
void traverse();
void deleteatstart();
void deleteatend();
void deleteatloc();
void search();

	int ch,i,loc,num;

	struct node
	{
	int data;
	struct node *next;
	};
	typedef struct node NODE;
	NODE *start=NULL,*last=NULL,*p,*q;

void main()
{
	do
	{
		printf("1: Create at Start\n");
		printf("2: Create at End\n");
		printf("3: Create at given location\n");
		printf("4: Delete at Start\n");
		printf("5: Delete at End\n");
		printf("6: Delete at given location\n");
		printf("7: Traverse\n");
		printf("8: Exit\n");
	        printf("Enter your choice\n");
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
                            createatloc();
                            break;
		   
		   case 4:
                            deleteatstart();
                            break;
		   case 5:
                            deleteatend();
                            break;
		   case 6:
                            deleteatloc();
                             break;
                   case 7:
                           traverse();
                            break;
		   case 8:
                           
                            break;
                            default :
                            printf("Invalid choice\n");
                   }
	}
	while(ch!=8);
}
	
void createatstart()
{
        p=(NODE*)malloc(sizeof(NODE));
        printf("Enter the data\n");
        scanf("%d",&p->data);

	if(start==NULL)
	{
		p->next=p;
		start=p;
		last=p;
	}
	else
	{
		p->next=start;
		start=p;
		last->next=p;
	}
}


void createatend()
{
	p=(NODE*)malloc(sizeof(NODE));
	printf("Enter the data\n");
	scanf("%d",&p->data);

	if(start==NULL)
	{
		p->next=p;
		start=p;
		last=p;

	}
	else
	{
		q=start;
		while(q->next!=start)
                q=q->next;
		q->next=p;
		p->next=start;
		last=p;

        }
}


void createatloc()
{
	p=(NODE*)malloc(sizeof(NODE));
	printf("Enter the data\n");
	scanf("%d",&p->data);
	printf("Enter the location\n");
	scanf("%d",&loc);

	if(start==NULL)
	{
		if(loc==1)
		{
			p->next=p;
			start=p;
			last=p;
		}
		else
		        printf("Invalid location\n");
			free(p);
		}
	else
	{
		        if(loc==1)
			{
				p->next=NULL;
				start=p;
				last->next=p;
			}
		        else
		        {
			i=1;
			q=start;
			while(i<loc-1 && q!=last)
		        {
                                q=q->next;
                                i++;
			}
				
			if(i==loc-1)
			{					
				if(q==last)
				{
					p->next=start;
					q->next=p;
					last=p;
 				}
				else
				{
 	                                p->next=q->next;
				 	q->next=p;	                        
				}
			}
			else 
			{
			         printf("Invalid location.\n");         
			}
			}
		}
}


void traverse()
{
	if(start==NULL)
	{
		printf("Linkedlist is Empty\n");
	}
	else
        {
		p=start;
		while(p->next!=start)
		{
			printf("%d\t",p->data);
			p=p->next;
		}
		printf("%d \t",p->data);
	}
}


void deleteatstart()
	{
		if(start==NULL)
			printf("Delete cannot be perform\n");
			
		else if(start->next==start)
       	{
			p=start;
			start=NULL;
               last=NULL;
               printf("%d element is Deleted.\n",p->data);
			free(p);

        	}

		else
		{
			p=start;
			start=p->next;
			last->next=start;
			printf("%d element is Deleted.\n",p->data);
			free(p);
		}
	}


void deleteatend()
	{
		if(start==NULL)
			printf("Delete cannot be perform\n");
		
		else if(start->next==start)
		{
			p=start;
			start=NULL;
			last=NULL;
			printf("%d element is Deleted.\n",p->data);
			free(p);
		}
		else
		{
			p=start;
			while(p->next!=start)
			{
				q=p;
				p=p->next;
			}
				q->next=start;
				last=q;
				printf("%d element is Deleted.\n",p->data);
				free(p);
		}
	}



void deleteatloc()
	{
		printf("Enter the location\n");
		scanf("%d",&loc);

	    else
	    {
		if(loc==1)
		{
			if(start->next==start)
			{
				p=start;
				start=NULL;
				last=NULL;
				printf("%d element is Deleted.\n",p->data);
				free(p);
			
			}
			else
			{
				    p=start;
				    start=p->next;
				    last->next=start;
				    printf("%d element is Deleted.\n",p->data);
				    free(p);
		    }
		}
		else
		{
		    i=1;
		    p=start;
		    while(i<loc && p!=last)
		    {
		        q=p;
		        p=p->next;
		        i++;
		    }
		    
		        if(i==loc)
		        {
		            p->next=q->next;
		            if(p==last);
		            last=q;
		            printf("%d element is Deleted.\n",p->data);
		            free(p);
		        }
		        else
		            printf("Invalid Location\n");
		}
			}
		}

/*
Output :
1: Create at Start
2: Create at End
3: Create at given location
4: Delete at Start
5: Delete at End
6: Delete at given location
7: Traverse
8: Exit
Enter your choice
1
Enter the data
10
1: Create at Start
2: Create at End
3: Create at given location
4: Delete at Start
5: Delete at End
6: Delete at given location
7: Traverse
8: Exit
Enter your choice
2
Enter the data
20
1: Create at Start
2: Create at End
3: Create at given location
4: Delete at Start
5: Delete at End
6: Delete at given location
7: Traverse
8: Exit
Enter your choice
6
Enter the location
1
10 element is Deleted.
1: Create at Start
2: Create at End
3: Create at given location
4: Delete at Start
5: Delete at End
6: Delete at given location
7: Traverse
8: Exit
Enter your choice
6
Enter the location
1
20 element is Deleted.
1: Create at Start
2: Create at End
3: Create at given location
4: Delete at Start
5: Delete at End
6: Delete at given location
7: Traverse
8: Exit
Enter your choice
6
Enter the location
1
Delete cannot be perform
1: Create at Start
2: Create at End
3: Create at given location
4: Delete at Start
5: Delete at End
6: Delete at given location
7: Traverse
8: Exit
Enter your choice
6
Enter the location
1
Delete cannot be perform
1: Create at Start
2: Create at End
3: Create at given location
4: Delete at Start
5: Delete at End
6: Delete at given location
7: Traverse
8: Exit
Enter your choice
5
Delete cannot be perform
1: Create at Start
2: Create at End
3: Create at given location
4: Delete at Start
5: Delete at End
6: Delete at given location
7: Traverse
8: Exit
Enter your choice
8
*/

