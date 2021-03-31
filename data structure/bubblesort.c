/*
NAME:pratik amrutsagar
BATCH:S2
ROLL no:225
*/
#include<stdio.h>
	int p,i,j,a[100],n,p,temp;
void main()
{
	
	
	
	printf("enter the number of element you want to enter.\n");
	scanf("%d",&n);
	
		printf("Enter the elements in the array\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(a[j]>a[j+1])
					{
						temp=a[j+1];
						a[j+1]=a[j];
						a[j]=temp;
					}
				}
			}
			
			printf("sorted elements are\n");
			for(i=0;i<n;i++)
			{
				printf("%d \t",a[i]);
			}			
}

/*
output:
enter the number of element you want to enter.
7
Enter the elements in the array
45
75
65
15
35
25
75
sorted elements are
15 	25 	35 	45 	65 	75 	75 
*/


