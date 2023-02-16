#include <stdio.h>

int main(void) {

    float num1, num2 , sum;

    char operator;

    printf("Enter operator ->  (+)(-)(*)(/): ");
    scanf("%c",&operator);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            sum = num1 + num2;
            printf("%.2f + %.2f = %.2f\n",num1 ,num2 ,sum);
            break;

        case '-':
            sum = num1 - num2;
            printf("%.2f - %.2f = %.2f\n",num1 ,num2 ,sum); 
            break;

        case '/':
            sum = num1 / num2;
            printf("%.2f / %.2f = %.2f\n",num1 ,num2 ,sum);
            break;

        case '*' :
            sum = num1 * num2;
            printf("%.2f * %.2f = %.2f\n",num1 ,num2 ,sum);
            break;

    }
    return 0 ;
    
}

