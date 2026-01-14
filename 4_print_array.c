#include <stdio.h>
#include <string.h> 
#include <math.h>


int main() {
    
    int i,j,n;
    
    printf("Input array size: ");
    scanf("%d",&n);

    int A[n];  // <---- το ορίζω μετά την είσοδο του n αλλιως αν το εκανα πιο πάνω έχει error
    int *p=A;

    printf("Input elements: \n");
    for (i=0;i<n;i++) {
        scanf("%d",p+i);
    }

    printf("Array elements: \n");
    for (j=0;j<n;j++) {
        printf("%d ",*(p+j));

    }
    
    return 0;  
}