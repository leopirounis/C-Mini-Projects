#include <stdio.h>
#include <string.h> 
#include <math.h>

// Η αντιγραφή string γίνεται και με άλλο τρόπο (με την χρήση της συνάρτησης strcpy(B,A))
int main() {
    
    char A[100],B[100];
    char *(str_p1)=A;
    char *(str_p2)=B;
    int i;


    printf("Input string: ");
    gets(A); 
    for (i=0;(*(str_p1 + i))!='\0';i++){

        *(str_p2 +i)=*(str_p1 +i);

    }

    printf("Original string: %s \n",str_p1);
    printf("Copied string: %s \n",str_p2);
    
    return 0;  
}