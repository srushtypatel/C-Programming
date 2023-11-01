//number divisible by 5
//number divisible by 3
//number divisible by 5 & 3
//number not divisible by 5 or 3

#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t Enter any number :");
	scanf("%d",&num);
	

  if(num%5==0)
  {
  	if(num%3==0)
  	printf("This is divisable by 3 nd 5");
  	
  	else
  	printf("This is  only 5 divisable");
  }
  
  else if(num%3==0)
  {
  	if(num%5==0)
  	printf("This is divisable by 3 nd 5");
  	
  	else
  	printf("This is  only 3 divisable");
  }
  else 
  {
  	printf("number is not divisible by 5 & 3");
  }
}
