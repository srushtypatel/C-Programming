#include<stdio.h>
main()
{
	int a[5],i,element,flag=0;
	for(i=0;i<=4;i++)
	{
		printf("\n\n\t Array of value :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\n\n\t a[%d] : %d",i,a[i]);
	}
	printf("\n\n\t Enter the your search element :");
	scanf("%d",&element);
	for(i=0;i<4;i++)
	{
		if(element==a[i])
		flag=1;
	}
	if(flag)
		printf("\n\n\tElement found");
	else
		printf("\n\n\tElement not found");
	
}
