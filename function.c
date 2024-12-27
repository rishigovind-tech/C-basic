#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}

void calc(){

    int num1, num2, result;
    char op ;
    printf("Enter the number 1\n");
    scanf("%d", &num1);
    printf("Enter the number 2\n");
    scanf("%d", &num2);
    printf("Select the operation(+,-,*,/,)\n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = sum(num1, num2);
        printf("The sum is %d", result);
        break;
    case '-':
        result = sub(num1, num2);
        printf("The sub is %d", result);
        break;
    case '*':
        result = mul(num1, num2);
        printf("The mul is %d", result);
        break;
    case '/':
        result = div(num1, num2);
        printf("The mul is %d", result);
        break;
    case '%':
        result = mod(num1, num2);
        printf("The mod is %d", result);
        break;
    default:
        printf("Invaild operation.....Enter another values...\n");
        calc();
    }  

}

int main()
{

calc();
   
}