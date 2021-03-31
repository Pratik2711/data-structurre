/*NAME:Pratik Amrutsagar
Batch:S2
program to implement graph*/


#include<stdio.h>
#include<stdlib.h>

void Create();
void Delete();
void Print();

struct node
{
	int data;
	struct node *next;
};
	typedef struct node NODE;
	NODE *adj[5],*p,*q ;
	
int main()
{
	int ch,i;
	for(i=0;i<=4;i++)
		adj[i]=NULL;
	do
	{
		printf("1.Create a node\n");
		printf("2.Delete a node\n");
		printf("3.Display\n");
		printf("4.EXIT\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				Create();
				break;
			case 2:
				Delete();
				break;
			case 3:
				Print();
				break;
			case 4:
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(ch!=4);
	return 0;
}

void Create()
{
	int n,i,j;
	for(i=0;i<5;i++)
	{
		printf("How many vertices are connected to node %d\n",i+1);
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			p=(NODE *) malloc(sizeof (NODE));
			printf("Enter the number of node connected to the vertice %d\n",i+1);
			scanf("%d",&p->data);
			if(adj[i]==NULL)
			{
				p->next=NULL;
				adj[i]=p;
			}
			else
			{
				q=adj[i];
				while(q->next!=NULL)
					q=q->next;
				q->next=p;
				p->next=NULL;
			}
		}
	}
}

void Delete()
{
	int i;
	printf("Enter the number of node to be deleted\n");
	scanf("%d",&i);
	i--;
	if(adj[i]==NULL)
		printf("Node doesn't exist\n");
	else
	{
		q=adj[i]->next;
		adj[i]=NULL;
		while(q!=NULL)
		{
			p=q;
			q=q->next;
			free(p);
		}
		printf("Node is Deleted\n");
	}
}

void Print()
{
	int i,c;
	for(i=0;i<5;i++)
	{
		c=1;
		if(adj[i]==NULL)
			printf("%d node is Empty\n",i+1);
		else
		{
			q=adj[i];
			while(q!=NULL)
			{
				printf("Node no.%d, Link to node=%d\n",i+1,q->data);
				q=q->next;
			}
		}
	}
}
