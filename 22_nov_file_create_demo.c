// to demostrate creat file
#include<stdio.h>
main()
{
 FILE *fptr;
 
 fptr=fopen("myfirstfile.txt","w");
 
 if(fptr==NULL)
 {
  printf("\n\n File is not openend....");
 }
 
}

