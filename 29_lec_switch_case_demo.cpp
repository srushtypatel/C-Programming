#include<stdio.h>
main()
{
	int day;
	printf("\n\n\t Enter the day:");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("\n\t Sunday..!");
			break;
			
			case 2:
			printf("\n\t Monday..!");
			break;
			
			case 3:
			printf("\n\t Tuesday..!");
			break;
			
			case 4:
			printf("\n\t Wensday..!");
			break;
			
			case 5:
			printf("\n\t Tuesday..!");
			break;
			
			case 6:
			printf("\n\t Friday..!");
			break;
			
			case 7:
			printf("\n\t Saturday..!");
			break;
			
			default  :
				printf("\n\t you have enterd invalid day...");
				break;
	}
}
