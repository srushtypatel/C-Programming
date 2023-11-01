#include<stdio.h>
main()
{
	char str[5][20];
	int i;
	
	for(i=0;i<=4;i++)
	{
		printf("\n\n\t Input aa string :");
		gets(str[i]);
	}
	for(i=0;i<=4;i++)
	printf("\n\n\t Output :-%s\n\n",str[i]);
}
