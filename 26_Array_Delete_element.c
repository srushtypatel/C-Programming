#include<stdio.h>
main()
{
	int array[20];
	int i,n,index;
	
	printf("ENTER THE SIZE OF ARRAY : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n Input array[%d] : ",i);
		scanf("%d",&array[i]);
	}
	
	printf("Enter the value to be removed : ",i);
	scanf("%d",&index);
	
	if(index>n)
		printf("\n\n Array index out of range....");
	
	else
	{
		for(i=index;i<n;i++)
		{
			array[i]=array[i+1];
		}
		for(i=0;i<n-1;i++)
		{
			printf("\n\n array[%d] : %d",i,array[i]);
		}
	}	
}
