#include<stdio.h>
main()
{
	int a[4][4]={10,20,30,40,50,60,70,80,90,10,20,30,40,50,60,70};
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
}
