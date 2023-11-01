#include<stdio.h>
main()
{
	int i,a[5],sum=0;
	for(i=0;i<=4;i++)
	{
		printf("\n\n\t a[%d] :",i);
		scanf("%d",&a[i]);
		
		sum=sum+a[i];
	}
	printf("\n\n\t The number of sum : %d",sum);
}
