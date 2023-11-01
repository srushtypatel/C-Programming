#include<stdio.h>
main()
{
	int i,no;
	
	printf("\n\n\t Input a number : \n");
	scanf("%d",&no);
	
	
	printf("\n\n Even numbers are..\n");
	i=2;
	while(i<=no)
	{
		printf(" %d",i);
		i=i+2;
	}
	
	printf("\n\n Odd numbers are..\n");
	i=1;
	while(i<no)
	{
		printf(" %d",i);
		
		i=i+2;
	}
}
