#include <stdio.h>
int main(){
    int number1, number2;
    int sum, difference, product;
    float quotient;
    printf("Enter the numbers: \n");
    scanf("%d %d", &number1, &number2);
    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    printf("Sum=%d, Difference=%d, Product=%d\n", sum, difference, product);
    if(number2 == 0){
        printf("The quotient is not defined.\n");
    }else{
        quotient= (float)number1/number2;
        printf("The quotient is %f \n",quotient);
    }
    return 0;
}