// write a program to check number is odd or even

#include<stdio.h>
int ans(int num)
{
	return!(num&1);
}
main()
{
	int num;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	if(ans(num))
	{
		printf("the number is even.");
	}
	else
	{
		printf("the number id odd");
	}
}

