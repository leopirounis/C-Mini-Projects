#include <stdio.h>
#include <string.h> 
#include <math.h>

//Function of printing an array
void PrintArray(int *arr,int size){
    int i;
    for (i=0;i<size;i++){
        printf("%d, ",*(arr + i));
    }
}

int main() {
    // Input size
    int i,n;
    printf("Input array's size: ");
    scanf("%d",&n);

    // Initialize array given the size
    int A[n],B[n];  
    int *source_p=A,*reversed_p=B;
    
    // Input the elements of array
    printf("Input Array's elements: \n");
    for (i=0;i<n;i++) {
        scanf("%d",source_p+i);
    }
    
    // Reverse the array using pointers
    for (i=0;i<n;i++){
        *(reversed_p+i) = *(source_p + (n-1-i));
    }

    // Print the reversed array
    printf("Reversed array is : ");
    PrintArray(B,n);

    return 0;  
}