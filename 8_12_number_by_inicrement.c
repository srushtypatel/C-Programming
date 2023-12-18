//pattern of number always increment...
/*
1
2 3
4 5 6
7 8 9 10
*/

#include<stdio.h>
main()
{
	int i,j,k=1;
	
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",k++);
		}
		printf("\n");
	}
}
