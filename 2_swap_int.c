#include <stdio.h>
#include <string.h> 
#include <math.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int a,b;
    int *p1 = &a;
    int *p2 = &b;

    printf("Enter integer 1: ");
    scanf("%d",p1);
    printf("Enter integer 2: ");
    scanf("%d",p2);

    swap(p1,p2);

    printf("Values after swapping: \n");
    printf("Integer 1: %d\n",*p1);
    printf("Integer 2: %d\n",*p2);
    
    
    return 0;  
}