#include<stdio.h>
main()
{
	char str1[10],str2[20];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	
	printf("strings are :\n");
	puts(str1);
	puts(str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("\n\n\t Strings are equale");
	}
	else
	{
		printf("\n\n\t Strings are not equale");
	}
}
