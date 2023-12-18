#include<stdio.h>
main()
{
	int element,i,a[5],flag=0;
	
	for(i=0;i<=4;i++)
	{
		printf("\n\n\t Array Of Element :");
		scanf("%d",&a[i]);
	}	
	for(i=0;i<=4;i++)
	{
		printf("\n\n\t Array Element [%d] : %d",i,a[i]);
	}
	printf("\n\n\t Enter element you found : ");
	scanf("%d",&element);
	for(i=0;i<=4;i++)
	{
		if(element==a[i])
		flag=1;
	}
	if(flag)
	printf("\n\n\t Elemnt Found...");
	
	else
	printf("\n\n\t Element was not Found...");
}
