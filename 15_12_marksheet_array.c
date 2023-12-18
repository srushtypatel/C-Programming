#include<stdio.h>
main()
{
	int rollno,i,total=0;
	char name[30];
	int marks[5];
	float per=0;
	
	printf("\n\n\t Enter the student's roll number:");
	scanf("%d",&rollno);
	printf("\n\n\t Enter student's name:");
	scanf("%s",&name);
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Marks [%d] :",i);
		scanf("%d",&marks[i]);
	}
	
	
	printf("\n\n\t .............................................");
	
	printf("\n\n\t student's roll no:%d",rollno);
	printf("\n\n\t student's name:%s",name);
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Marks [%d] :%d",i,marks[i]);
		total=total+marks[i];
	}
	
	printf("\n\n\t Total of marks:%d",total);
	
	per=total/5;
	
	printf("\n\n\t persantage:%.2f",per);
	
	
	
}
