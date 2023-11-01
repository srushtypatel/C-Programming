#include<stdio.h>
main()
{
	int sum,i,no;
	
	printf("\n\nInput a number:\n");
	scanf("%d",&no);
	
	printf("\n Numbers are :");
	i=1;
	while(i<=no)
	{
		printf("%d +",i);
		sum=sum+i;
		
		i=i+1;
	}
	
	printf("\n\n sum of the all numbers :%d",sum);
}  
