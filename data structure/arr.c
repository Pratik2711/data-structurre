#include<stdio.h>
void main()
	{
		int arr[10],i,j,n,ch,temp;
		printf("enter the number\n");
		for(i=0;i<10;i++)
		{
		 scanf("%d",&arr[i]);
		}
		printf("number is\n");
		for(i=0;i<10;i++)
		{
		printf("%d\t",arr[i]);
		}
	for(i=0;i<9;i++)
	{
	for(j=0;j<9-i-1;j++)
	{
	 if(a[i]>a[j])
	 {
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	 }
	}
	}
	for(i=0;i<10;i++)
	{
	printf("%d",a[i]);
	}
}
