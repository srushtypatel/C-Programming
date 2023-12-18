#include<stdio.h>
main()
{
	int n1,n2,n3,max;
	
	
	printf("\n\n\t Enter the value of n1:");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter the value of n2:");
	scanf("%d",&n2);
	
	printf("\n\n\t Enter the value of n3:");
	scanf("%d",&n3);
	
	
	max=n1;
	if(max<n2)
	{
		max=n2;
	}
	if(max<n3)
	{
		max=n3;
	}
	
	
	printf("\n\n\t maximum element is %d",max);
}
