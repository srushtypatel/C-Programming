
#include<stdio.h>
main()
{
	int a,b;
	
printf("\n\n\t Input a:");
scanf("%d",&a);

printf("\n\n\t Input b:");
scanf("%d",&b);

	
	a+=b;
	printf("\n\n\t Addition.........");
	printf("\n\n\t a=%d",a);
	
	a-=b;
	printf("\n\n\t Substraction........");
	printf("\n\n\t a=%d",a);
	
	a*=b;
	printf("\n\n\t Multiplication........");
	printf("\n\n\t a=%d",a);
	
	a/=b;
	printf("\n\n\t Division.......");
	printf("\n\n\t a=%d",a);
}
