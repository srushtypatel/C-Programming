//WAP to get a number from the user to check whether the number is odd or even

#include<stdio.h>


	int check1(int Num);
	
	main()
	{
		int n,c;
		printf("\n\n Enter the number :");
		scanf("%d",&n);
		//printf("%d",n);
		c=check1(n);
	}
	
	int check1(int num)
	{
		//printf("%d",num);
		if(num%2==0)
		{	
		printf("\n\n Number is even!!");
		}
		else
		{
			printf("\n\n Number is odd!!!");
		}
	}
