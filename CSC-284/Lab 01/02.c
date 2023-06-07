#include <stdio.h>

int main(void){
    int a, b, sum;
    printf("Enter two integer: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum: %d", sum);

    return 0;
}