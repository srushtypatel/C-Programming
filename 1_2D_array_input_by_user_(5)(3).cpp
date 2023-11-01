#include<stdio.h>
main()
{
	int i,j,a1[5][3];
	
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("\n\n\t INPUT ELEMENT  [%d] [%d] :",i,j);
			scanf("%d",&a1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a1[i][j]);
    	}
		printf("\n"); 
	}
}
