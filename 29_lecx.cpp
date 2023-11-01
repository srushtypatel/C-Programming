#include<stdio.h>
main()
{
	
	int rollno,total;
	int s1,s2,s3,s4,s5;
	float per;
	
	printf("\n\n\t Enter your rollno :");
	scanf("%d",&rollno);
	
	printf("\n\n\t Input s1:");
	scanf("%d",&s1);
	printf("\n\n\t Input s2:");
	scanf("%d",&s2);
	printf("\n\n\t Input s3:");
	scanf("%d",&s3);
	printf("\n\n\t Input s4:");
	scanf("%d",&s4);
	
	printf("\n\n\t Input s5:");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	
	printf("\n\n\t..........................");
	printf("\n\n\t rollno :%d",rollno);
	printf("\n\n\t You got percentage :%.2f %%",per);
	
	if(s1>40 && s2>40 && s3>40 && s4>40 && s5>40)
	
	{
		if(per>80)
		printf("\n\n\t Result A++");
		
		   else if(per>70)
		printf("\n\n\t Result A+");
		
			else if(per>60)
		printf("\n\n\t Result A");
		
			else if(per>50)
		printf("\n\n\t Result b");
		
			else if(per>45)
		printf("\n\n\t Result c");
		
		
	}
	
	else
	printf("\n\n\t Result :Fail");
}
