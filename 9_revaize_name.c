#include<stdio.h>
main()
{
	int rem,n;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		printf("%d ",rem);
		n=n/10;
	}
}
