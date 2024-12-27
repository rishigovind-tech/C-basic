#include <stdio.h>

int main()
{
    int num1,num2,result;
    char op;

    printf("Enter the number1\n");
    scanf("%d",&num1);
    printf("Enter the operation (+,-,*,/):\n");
    scanf(" %c",&op);
    printf("Enter the number2\n");
    scanf("%d",&num2);
    

    if (op=='+')
    {
        result=num1+num2;
        printf("the sum is %d",result);
    }
    else if (op=='-')
    {
        result=num1-num2;
        printf("the sub is %d",result);
    }
    else if (op=='*')
    {
        result=num1*num2;
        printf("the mul is %d",result);
    }
    else if (op=='/')
    {
        result=num1/num2;
        printf("the div is %d",result);
    }
    
    // else if (op='%')
    // {
    //     result=num1%num2;
    //     printf("the mod is %d",result);
    // }
    
    else{
        printf("Invaild Choice");
    }
    
    

    
    
}