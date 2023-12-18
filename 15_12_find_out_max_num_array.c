//wap to find out maximum number from array..

#include<stdio.h>
main()
{
	int arr[20];
	int i,max;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Array[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n\t ................................................");
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Array[%d]:%d",i,arr[i]);
		
	}
	
	printf("\n\n\t ................................................");
	
	max=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	
	printf("\n\n\t The maximum array element is:%d",max);
	
	
	
	
}
