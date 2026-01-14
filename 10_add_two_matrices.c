#include <stdio.h>
#include <string.h> 
#include <math.h>


int main() {

    int i,j,A[3][3],B[3][3],C[3][3];
    int (*p1)[3] = A;
    int (*p2)[3] = B;
    int (*p3)[3] = C;

    // Input elements of matrices 1,2
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Input elements of Matrix1: ");
            scanf("%d",p1[i] + j);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Input elements of Matrix2: ");
            scanf("%d",p2[i] + j);
        }
    }

    // Add matrices 1,2
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            *(p3[i] + j) = *(p1[i] + j) + *(p2[i] + j) ;     
        }
    }

    //Print the sum of both matrices
    printf("Sum of both matrices:  \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",*(p3[i] + j)); 
        }
        printf("\n");  
    }
   
    return 0;  
}