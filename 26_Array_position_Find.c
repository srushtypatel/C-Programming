#include<stdio.h>
main()
{
	int a[20],i,x,n;
	printf("\n\n\t How many elements?");
	scanf("%d",&n);
	

	for(i=0;i<=n;++i)
	{
		printf("\n\n\t Array elements:");
		scanf("%d",&a[i]);
	}
	printf("\n\n\t Enter element to search :");
	scanf("%d",&x);
	
	for(i=0;i<n;++i)
	if(a[i]==x)
	break;
	
	if(i<n)
	printf("\n\n\t ELEMENT FOUND AT INDEX %d",i);
	else
	printf("\n\n\t ELEMENT NOT FOUND");
	
	
}
