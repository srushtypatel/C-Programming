#include <stdio.h>
main() 
{
    char ch;
    
    printf("\n\n\tENTER A CHARCTER: ");
    scanf("%c",&ch); 

    switch(ch) 
	{
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("\n\n\t%c IS A VOWEL.\n", ch);
            break;
        default:
            printf("\n\n\t%c IS A CONSONENT.\n", ch);
            break;
    }
}
	
