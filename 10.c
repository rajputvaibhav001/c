//FACTORIAL OF A POSITIVE NUMBER
#include<stdio.h>
void main()
{
    int fact=1,n,count;
    printf("Enter the value of n");
    scanf("%d",&n);
    count=1;
    while(count<=n)
    {
        fact=fact*count;
        count++;
    }
    printf("Factorial of %d is %d",n,fact);
}