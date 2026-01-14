#include <stdio.h>
#include <string.h> 

int len(char *string){
    int i = 0;
    while (string[i] != '\0'){
        i++;
    }
    return i; 
}


int main() {
    
    char A[100],B[100];
    char *(str_p1)=A;
    char *(str_p2)=B;
    int i,length_A;

    printf("Input string: ");
    gets(A);
    
    length_A = len(str_p1); 

    for (i=0;i<length_A;i++){

        *(str_p2 + i) = *(str_p1 + length_A - 1 - i);              

    }

    printf("Reversed string is : %s ",str_p2);
    
    return 0;  
}