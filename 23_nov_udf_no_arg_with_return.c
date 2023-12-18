// no argue with return..

#include<stdio.h>
int table(void);  //declaration

void main()
{	
	int i,n,k;
	k=table();  //calling
}

int table(void)  //definition
{
	int i,n,k;
	
	printf("\n enter the any number:");
	scanf("%d",&n);

	k=i*n;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d =%d\n",n,i,i*n);
	}
	return k;
}


