
#include <stdio.h>//c prg to implement a simple calculator to perform add,sub,multiply,and division based on a user,s choice
int main()
{
    float num1,num2,result;
    char op;
    printf("Simple Calculator using swicth-case\n");
    printf("..................................\n");
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);

        printf("Enter to numbers:");
        scanf("%f%F",&num1,&num2);
    switch(op)
    {
    case'+':
        result=num1+num2;
        printf("Result=%.2f\n",result);
        break;
    case'-':
        result=num1-num2;
        printf("Result=%.2f\n",result);
        break;
    case'*':
        result=num1*num2;
        printf("Result=%.2f\n",result);
        break;
    case'/':
        if(num2!=0)
            printf("Result=%.2f\n",num1/num2);
        else
            printf("Error! Division by zero is not allowed.\n");
        break;
    default:
        printf("Invalid operator!Please use +,-,*,or/.\n");
    }
    return 0;

}
