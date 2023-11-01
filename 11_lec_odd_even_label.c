#include<stdio.h>
main()
{
	int num;
	
	printf("\n Enter the number :");
	scanf("%d",&num);
	
	if(num%2==0)
	goto even;
	
	else 
	  goto odd;
	  
	  even :
	  	printf("\n The number is even.....");
	  	exit(0);
	  	
	  	odd :
	  		printf("\n The number is odd....");
	  		exit(0);
}
