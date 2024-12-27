#include <stdio.h>

int main()
{

    int num1,num2,result;
    char op;

    printf("Enter the number 1\n");
    scanf("%d",&num1);
    printf("Select the operation(+,-,*,/)\n");
    scanf(" %c",&op);
    printf("Enter the number 2\n");
    scanf("%d",&num2);
    

    switch (op)
    {
    case '+':
        result=num1+num2;
        printf("The sum is %d",result);
        break;
    case '-':
        result=num1-num2;
        printf("The sub is %d",result);
        break;
    case '*':
        result=num1*num2;
        printf("The mul is %d",result);
        break;
    case '/':
        result=num1/num2;
        printf("The div is %d",result);
        break;
    case '%':
        result=num1%num2;
        printf("The mod is %d",result);
        break;
    default:
        printf("Invaild operation");
        
    }
}