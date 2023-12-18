// enter value by input use and count how many even or odd numbers...

#include<stdio.h>
main()
{
	int i,no,range=0,count=0;
	
	printf("\n\n\t enter the value:");
	scanf("%d",&no);
	
	
	printf("\n\n\t odd numbers are:");
	i=1;
	while(i<=no)
	{
		printf("\n\n\t %d",i);
		
		i=i+2;
		range++;
	}
	printf("\n\n\t range of numbers:%d",range);
	
	printf("\n\n\t even numbers are:");
	i=2;
	while(i<=no)
	{
		printf("\n\n\t %d",i);
		
		i=i+2;
		count++;
		
	}
	printf("\n\n\t range of numbers:%d",count);
	
	
}
