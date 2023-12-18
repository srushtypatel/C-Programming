// to demonstrate the read file
#include<stdio.h>
main()
{
	FILE*fptr;    //to access the file with pointer file type.
	
	char data[30]; // data to store in file
	//fopen (filename,mode);
	fptr=fopen("myfirstfile.txt","r");   //to open write mode
	
	if(fptr==NULL)
	{
		printf("\n\n file is not opened...."); //to check file will exist or not
	}
	else
	{
		while(fgets(data,30,fptr)!=NULL)
		{
			printf ("\n\n %s",data);
		}
		fclose(fptr);   //file is closed after reading
	}
	
}
