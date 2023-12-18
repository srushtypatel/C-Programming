//wap for mathematics programs..

#include<stdio.h>
main()
{
	int n1,n2,choise;
	
	printf("\n\n\t enter the value of num1:");
	scanf("%d",&n1);
	
	printf("\n\n\t enter the value of num2:");
	scanf("%d",&n2);
	
	 printf("\n\n\t...........................");
	 printf("\n\n\t 1.Addition:");
	 printf("\n\n\t 2.Substraction:");
	 printf("\n\n\t 3.Multiplication:");
	 printf("\n\n\t 4.Devide:");
	 printf("\n\n\t...........................");
	 
	 
	 
	 printf("\n\n\t enter your choise:");
	 scanf("%d",&choise);
	 
	 switch(choise)
	 {
	 	case 1:
	 		 printf("\n\n\t Addition:%d",n1+n2);
	 		 break;
	 		 
	 	case 2:
	 		 printf("\n\n\t Substraction:%d",n1-n2);
	 		 break;
	 		 
	 	case 3:
	 		 printf("\n\n\t Multiplication:%d",n1*n2);
	 		 break;
	 		 
	 	case 4:
	 		 printf("\n\n\t Devide:%d",n1/n2);
	 		 break;
	 		 
	 	default:
	 		printf("\n\n\t enter valid number...");
	 }
	 
	 
	 
}
