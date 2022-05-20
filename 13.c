//REVERSE OF A NUMBER
#include<stdio.h>
void main()
{
    int n,d,rev;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("Reverse of the given number is %d",rev);
}