#include<stdio.h>
main()
{
	int x,y,z;
	 printf("\n\n\t Enter x :");
	 scanf("%d",&x);
	 
	 printf("\n\n\t Enter y :");
	 scanf("%d",&y);
	 
	 z=x>y?x:y;
	 printf("\n\n\tThis  number is big : %d",z);
}
