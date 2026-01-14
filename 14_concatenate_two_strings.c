#include <stdio.h>
#include <string.h> 
#include <math.h>

int main() {
    
    char text1[100],text2[100];
    
    printf("Input string 1: ");
    gets(text1); 
    printf("Input string 2: ");
    gets(text2); 

    
    strcat(text1, " "); // Add space between
    strcat(text1,text2); // Concatenate text1 with text2 

    printf("Concatenated string: %s ",text1);
    
    return 0;  
}