#include <stdio.h>

int main()
{
    char op;
    float num1,num2,result=0;

    printf("\n Please enter an operator(+,-,*,/): ");
    scanf("%c, &op");

    printf("\n Please enter the two values of the operand: num1,num2 : ");
    scanf("%f%f", &num1,&num2);

    switch(op)
    {
    case '+':
        result=num1+num2;
        break;
    case '-':
        result=num1-num2;
        break;
    case '*':
        result=num1*num2;
        break;
    case '/':
        result=num1/num2;
        break;
    default:
        printf("\n Error! Please enter a valid operator");
    }
    printf("\n The result of  %f %c %f  = %f", num1, op, num2, result);

    return 0;
}
