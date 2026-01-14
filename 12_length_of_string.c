#include <stdio.h>
#include <string.h> 
#include <math.h>


int main() {
    
    char text[100];
    char *(str_p)=text;
    int i;
    int count=0;

    printf("Input string: ");
    gets(text); // reads a line of text from standard input into your character array until a newline is found, and then appends '\0' (null).

    for (i=0;(*(str_p + i))!='\0';i++){

        count += 1;

    }

    printf("Length of string: %d ",count);
    
    return 0;  
}