// to demonstrate the write file 
#include<stdio.h>
main()
{
	FILE*fptr;    //to access the file with pointer file type.
	
	char data[30]="   world"; // data to store in file
	//fopen (filename,mode);
	fptr=fopen("myfirstfile.txt","a");   //to open write mode
	
	if(fptr==NULL)
	{
		printf("\n\n file is not opened...."); //to check file will exist or not
	}
	else
	{
		if(fptr!=EOF)    //EOF=end of file
		{
			fputs(data, fptr);   //to write data into file
		}
	}
	
}
