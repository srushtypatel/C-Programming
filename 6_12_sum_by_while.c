//print sum of odd number....
#include<stdio.h>
main()
{
	
	int n,i,sum=0;

	
	i=2;
	while(i<=20)
	{
		printf("\n\n\t %d",i);
		sum=sum+i;
		
		i=i+2;
		
	}
	
	printf("\n\n\t sum of value:%d",sum);
}
