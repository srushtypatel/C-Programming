#include<stdio.h>
main()
{
	int n,reversed=0,remainder,original;
	printf("\n\n\t Enter an integer : ");
	scanf("%d",&n);
	original=n;
	while(n !=0)
	{
		remainder = n%10;
		reversed = reversed * 10 + remainder;
		n/=10;
	}
	
	if(original == reversed)
	printf("\n\n\t %d IS PALIDROME.",original);
	
	else
	printf("\n\n\t %d IS NOT PALIDROME.",original);
}
