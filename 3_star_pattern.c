#include <stdio.h>
#include <string.h> 
#include <math.h>


int main() {
    int i,j,N;
    printf("Give the size: ");
    scanf("%d",&N);

    for (i=1;i<2*N;i++){
        for (j=1;j<=N;j++){
            if ((i==1 && (j==1 || j==N))||
                (i==N &&(j==1 || j==N))||
                (i==2*N-1 &&(j==1 || j==N))){
                    printf(" ");
                }
            else if (i==1 || i==N || i==2*N-1 || j==1 || j==N){
                printf("*");

            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    
    
    return 0;  
}