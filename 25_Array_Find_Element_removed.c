#include<stdio.h>
main()
{
	int arr[20];
	int i,n,index;
	
	printf("ENTER THE SIZE OF ARRAY :");
	scanf("%d",n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t INPUT ARRAY [%d] :",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\n\tENTER THE VALUE TO BE REMOVED :");
	scanf("%d",&index);
	if(index>n)
	printf("\n\n\tARRAY INDEX OUT OF RANGE....");
	else
	{
		for (i=index;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		for(i=0;i<n-1;i++)
		{
			printf("\n\n\t ARRAY[%d] : %d",i,arr[i]);
		}
	}
}
