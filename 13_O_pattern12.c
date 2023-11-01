//1 6 11 16 21
//2 7 12 17 22
//3 8 13 18 23
//4 9 14 19 24
//5 10 15 20 25


#include<stdio.h>
main()
{
	int n=5,i,j,x;
	for(i=1;i<=n;i++)
	{
		x=i;
		for(j=1;j<=n;j++)
		{
			printf(" %d",x);
			x+=n;
		}
		printf("\n");
	}
}
