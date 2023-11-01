#include<stdio.h>
main()
{
	int n;
	
	printf("\n\n\tEnter any number");
	scanf("%d",&n);
	
	if(n>=0)
	{
		if(n==0)
		printf("\n\n\t Number is Zero...");
		
		else
		printf("\n\n\t Number is positive...");
	}
	
	else
	{
		printf("\n\n\t Number is negative...");
	}
}
