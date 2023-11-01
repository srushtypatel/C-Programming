#include<stdio.h>
main()
{
	int n1,n2;
	char choice;
	
	printf("\n\n\t Input N1 :");
	scanf("%d",&n1);
	
	printf("\n\n\t Input N2 :");
	scanf("%d",&n2);
	
	printf("\n\n\tPress the + to Addtion :");
	printf("\n\n\tPress the - to Subtraction :");
	printf("\n\n\tPress the * to Multiplication :");
	printf("\n\n\tPress the / to Division :");
	
	printf("\n\n\t Enter your choice : ");
	scanf("%c",choice);

	switch(choice)
	
	{
		case '+':printf("press to + Addtion :",(n1+n2));
        break;
        
        case '-':printf("press to - Substraction :",(n1-n2));
        break;
        
        case '*':printf("press to * Multiplication :",(n1*n2));
        break;
        
        case '/':printf("press to / Division :",(n1/n2));
        break;
        
        case '%':printf("press to + Moduler :",(n1%n2));
        break;
        
        default :printf("dont valid number");
        break;
	}
	}
