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
    printf("Input array size: ");
    scanf("%d",&n);

    // Initialize arrays given the size
    int A[n],B[n];  
    int *p1=A,*p2=B;

    // Input the elements of arrays 1,2
    printf("Input Array 1 elements: \n");
    for (i=0;i<n;i++) {
        scanf("%d",p1+i);
    }

    printf("Input Array 2 elements: \n");
    for (i=0;i<n;i++) {
        scanf("%d",p2+i);
    }

    // Swap elements with pointers
    for (i=0;i<n;i++){
        int temp = *(p1+i);
        *(p1+i) = *(p2+i);
        *(p2+i) = temp;      
    }

    // Print the swapped arrays
    printf("First array after swapping: ");
    PrintArray(A,n);
    printf("Second array after swapping: ");
    PrintArray(B,n);

    return 0;  
}