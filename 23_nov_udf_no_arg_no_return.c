// no arg no return value

#include<stdio.h>

void sum();   //declaration

void main()
{
	sum();  // calling

}

void sum(void)  //defination
{
	int a,b,c;
	printf("\n\n enter the value of A:");
	scanf("%d",&a);
	printf("\n\n enter the value of B:");
	scanf("%d",&b);
	
	c=a+b;
	printf("\n sum of value =%d",c);
}


