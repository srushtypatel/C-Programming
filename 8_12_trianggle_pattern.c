// print triangle pattern ..

/*
*
* *
* * *
* * * *
* * * * *
*/

#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
