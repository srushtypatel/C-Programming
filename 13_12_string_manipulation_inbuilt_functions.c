/* String munipakation..

strlen()- To find out the lenth of the string.
strcpy()- To copy one string to another.
strrev()- To reverse the string.
strupr()- To convert string in upercase.
strlwr()- To convert string in lowercase.
strcmp()- To compare two string.(without ignor case).
stricmp()- To  compare two string.(with ignore the case(upercase,lowercase)).
strcat()- To joint two string.
*/

#include<stdio.h>
#include<string.h>
main()
{
	char str[30],str1[30],str2[30],str3[30];
	int len;
	
	
	
	
	printf("\n\n\t Enter the string:");
	gets(str);
	
	printf("\n\n\t..............................................");
	
	len=strlen(str);
	printf("\n\n\t lenth of string:%d",len);
	
	printf("\n\n\t..............................................");
	
	strcpy(str1,str);
	printf("\n\n\t After copy string:%s",str1);
	
	printf("\n\n\t..............................................");
	
	strrev(str1);
	printf("\n\n\t After reverse string:%s",str1);
	
	printf("\n\n\t..............................................");
	
	printf("\n\n\t Enter the stirng2:");
	gets(str2);
	
	strupr(str2);
	printf("\n\n\t After convert in upercase:%s",str2);
	
	strlwr(str2);
	printf("\n\n\t After convert in lowercase:%s",str2);
	
	
	printf("\n\n\t..............................................");
	
	 if (strcmp(str,str1) ==0)
	{
		printf("\n\n\t strings are equal.....");
	}
	else
	{
		printf("\n\n\t string are not equal...");
	}
	
	
	printf("\n\n\t..............................................");
	
	
	printf("\n\n\t Input the string:");
	gets(str3);
	printf("\n\n\t After concatenate the two string:%s",strcat(str2,str3));
	
	
	
	
}
