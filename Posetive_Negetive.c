#include<stdio.h>
main()
{
	int number;
	
	printf("\n\n\tEnter the number :");
	scanf("%d",&number);
	
	if(number<0)
	{
	number=number*-1;
	printf("\n\n\tPositive number is %d",number);
    }
	else
	{
	number=number*-1;
	printf("\n\n\tNegative number is %d",number);
    }
}
