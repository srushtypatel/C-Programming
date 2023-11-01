#include<stdio.h>
main()
{
	int num,rev,sum=0;
	
	printf("\n\n\t Input a Number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		rev=num%10;
		sum+=rev;
		num=num/10;
	}
	

	printf("\n\n\t The numbers of sum = %d",sum);
}
