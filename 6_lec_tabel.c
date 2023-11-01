#include<stdio.h>
main()
{
	int num,i=1;
	printf("\n\nEnter the number :");
	scanf("%d",&num);
	
	while(i<=100)
	{
		printf("\n %d X %d = %d",num,i,i*num);
		i++;
	}
}
