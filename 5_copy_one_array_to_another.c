#include <stdio.h>
#include <string.h> 
#include <math.h>


void PrintArray(int *arr,int size){
    int i;
    for (i=0;i<size;i++){
        printf("%d, ",*(arr + i));
    }
}

int main() {
    
    int i,n;
    printf("Input array's size: ");
    scanf("%d",&n);

    int A[n],B[n];  
    int *source_p=A,*dest_p=B;

    printf("Input source Array's elements: \n");
    for (i=0;i<n;i++) {
        scanf("%d",source_p+i);
    }

    for (i=0;i<n;i++){

        *(dest_p+i)=*(source_p+i);

    }

    printf("Destination Array after copying: ");
    PrintArray(B,n);


    return 0;  
}