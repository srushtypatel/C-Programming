#include<stdio.h>
main()
{
	int arr[40],size;
	int i,max;
	
	
	printf("\n\n\t Input the size of Array:");
	scanf("%d",&size);
	
	printf("\n\n\t .................................");
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t array[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n\t .................................");
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t array[%d]:%d",i,arr[i]);
		
	}
	
	printf("\n\n\t .................................");
	
	max=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	
	prinf("\n\n\t Maximum array element is:%d",max);
}

