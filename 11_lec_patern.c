#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=20;i++)
	{
		for(j=20;j>=i;j--)
		{
			printf(" + ");
		}
		printf("\n");
	}
}
