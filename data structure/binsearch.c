/* name= Pratik Amrutsagar
Batch:S2
Roll no:225
program to impliment binary search.*/

#include<stdio.h>
void main()
{
int a[10],i,key,mid,high=9,low=0;
printf("enter the elements in sorted way\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
printf("%d\t",a[i]);
}
printf("\nenter the key which you want to search\n");
scanf("%d",&key);
while(low<=high)		
	{
	  mid=(low+high)/2;
	  if(key==a[mid])
	  {
	   printf("search is successful\n key is present at %d location\n",mid+1);
	   break;
	  }
	  else
	  {
	   if(key<a[mid])
	   high=mid-1;
	   else
	   low=mid+1;
	  }
	  
	}
if(key!=a[mid])
printf("search is unsuccessful\n");
}

/*
enter the elements in sorted way
10
20
30
40
50
60
70
80 
90
100
10	20	30	40	50	60	70	80	90	100	
enter the key which you want to search
80
search is successful
 key is present at 8 location
osdl@osdl-OptiPlex-390:~/pratikexp11$ ./a.out
enter the elements in sorted way
11      
12
13
14
15
16
17 
18
19
20
11	12	13	14	15	16	17	18	19	20	
enter the key which you want to search
88
search is unsuccessful

*/





