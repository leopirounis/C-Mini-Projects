#include <stdio.h>
#include <string.h> 
#include <math.h>


int main() {
    
    int a,b,sum,dif,prod,rem;
    int *p1 = &a;
    int *p2 = &b;

    printf("Enter integer 1: ");
    scanf("%d",p1);
    printf("Enter integer 2: ");
    scanf("%d",p2);
    
    sum = *p1 + *p2 ;
    dif = *p1 - *p2;
    prod = (*p1) * (*p2);
    rem = *p2 % *p1;

    printf("Sum: %d\n",sum);
    printf("Difference: %d\n",dif);
    printf("Product: %d\n",prod);
    printf("Remainder: %d\n",rem);
    
    return 0;  
}