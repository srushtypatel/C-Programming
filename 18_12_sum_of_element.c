// enter element from user and find out sum.....

#include<stdio.h>
main()
{
	int element,i,a[5],sum=0;
	
	for(i=0;i<=4;i++)
	{
		printf("\n\n\t Array Of Element :");
		scanf("%d",&a[i]);
	}
	
	printf("\n\n\t ....................................");
	   for(i=0;i<=4;i++)	
		{
		printf("\n\n\t Array Element [%d] : %d",i,a[i]);
		sum=sum+a[i];
	    }
	    
	    printf("\n\n\t sum of element:%d",sum);
}
