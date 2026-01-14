#include <stdio.h>
#include <string.h> 
#include <math.h>

int main() {
    char text1[100],text2[100];

    printf("Input string 1: ");
    fgets(text1,sizeof(text1),stdin); 
    printf("Input string 2: ");
    fgets(text1,sizeof(text2),stdin);

    // Function that compares strings strcmp().Check out the img for what it returns
    if (strcmp(text1,text2) == 0){
        printf("The strings are equal");
    }else{
        printf("The strings are not equal");
    }
    return 0;  
}