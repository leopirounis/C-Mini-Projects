#include <stdio.h>
#include <string.h> 
#include <math.h>


int main() {
    int i,n,target;
    int flag=0;
    printf("Input array's size: ");
    scanf("%d",&n);

    // Initialize array given the size
    int A[n];  
    int *p=A;
    
    // Input the elements of array
    printf("Input Array's elements: \n");
    for (i=0;i<n;i++) {
        scanf("%d",p+i);
    }

    // Input the target element
    printf("Input element to search: ");
    scanf("%d",&target);

    //Linear search using pointers (and flag)
    for (i=0;i<n;i++) {
        if (target == *(p+i)){
            printf("The element was found in the position %d of the array",i+1);
            flag = 1;
            break;
        }   
    }
    if (flag == 0){
        printf("The element was not found");
    }

    return 0;  
}