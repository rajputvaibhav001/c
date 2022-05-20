//ARMSTRONG NUMBER
#include<stdio.h>
void main()
{
    int n,d,temp,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is armstrong number",temp);
    }
    else
    {
        printf("%d is not armstrong number",temp);
    }
}