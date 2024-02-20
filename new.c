#include <stdio.h>
int main() {    

    int number3, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number3, &number2);

    // calculate the sum
    sum = number3 + number2;      
    
    printf("%d + %d = %d", number3, number2, sum);
    return 0;
}
