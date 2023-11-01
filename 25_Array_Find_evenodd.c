#include<stdio.h>
main()
{
	int n,i,odd=0,even,a[1000];
	
	printf("\n\n\t Enter size of array :");
	scanf("%d",&n);
	
	printf("\n\n\t Enter element in the array :");
	for(i=0;i<=n;i++)
	{
		printf("\n\n\t Input Number :");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
	
	if(a[i]%2==0)
	even++;
	else
	odd++;
}
printf("\n\n\t Even number of array %d",even);
printf("\n\n\t Odd number of arary %d",odd);
}
