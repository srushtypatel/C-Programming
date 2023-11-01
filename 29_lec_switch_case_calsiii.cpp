#include<stdio.h>
main()
{
	int n1,n2,choice;
	
	printf("\n\n\t Input n1 :");
	scanf("%d",&n1);
	
	printf("\n\n\t Input n2 :");
	scanf("%d",&n2);
	
	printf("\n\n\t........Arithmatic Operation.........");
	printf("\n\n\t 1.Addtion");
	printf("\n\n\t 2.Subtraction");	
	printf("\n\n\t 3.Multiplication");
	printf("\n\n\t 4.Division");
	printf("\n\n\t....................................");
	
	printf("\n\n\t Enter your chioce :.............");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\n\n\t Ans for the Addition is : %d",(n1+n2));
		break;
		
		case 2:printf("\n\n\t Ans for the Subtraction is : %d",(n1-n2));
		break;
		
		case 3:printf("\n\n\t Ans for the multiplication is : %d",(n1*n2));
		break;
		
		case 4:printf("\n\n\t Ans for the Division is : %d",(n1/n2));
		break;
		
		default : printf("\n\n\t You have made wrong choice...");
		break;
	}
}
