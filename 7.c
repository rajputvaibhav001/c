//SIMPLE CALCULATER USING SWITCH CASE
#include<stdio.h>
void main()
{
    int a,b,result;
    char operator;
    printf("Enter the values of a and b");
    scanf("%d %d ",&a,&b);
    printf("Enter the operator");
    scanf("%c",&operator);
    switch(operator)
    {
        case '+':result=a+b;
                 printf("%d+%d=%d",a,b,result);
                 break;
        case '-':result=a-b;
                 printf("%d-%d=%d",a,b,result);
                 break;
        case '*':result=a*b;
                 printf("%d*%d=%d",a,b,result);
                 break;
        case '/':result=a/b;
                 printf("%d/%d=%d",a,b,result);
                 break;
       default:printf("INVALID OPERATOR");
    }
}