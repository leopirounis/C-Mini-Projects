#include <stdio.h>
#include <string.h> 
#include <math.h>


int main() {
    int i,j,A[3][3];
    int (*p)[3] = A;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Input elements of 3x3 matrix: ");
            scanf("%d",p[i] + j);
        }
    }
    printf("Elements of 3x3 matrix:  \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",*(p[i] + j)); 
        }
        printf("\n");   //<--- να αλλάζει γραμμή όταν τελείωνουν οι στήλες της γραμμής που τύπωσε
    }
    return 0;  
}