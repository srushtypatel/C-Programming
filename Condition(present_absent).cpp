#include<stdio.h>
main()
{
	int present; //variable declaration
	printf("\n\n\t Enter any Number :");
	scanf("%d",&present);
	if(present==1)
	{
		printf("\n\n\t Welcome");
		printf("\n\n\t The student is present in the class..");
	}
	else
	{
		printf("\n\n\t sorry");
		printf("\n\n\t The student is absent in the class..");
	}
}

