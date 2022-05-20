//SUM OF DIGIT
#include<stdio.h>
void main()
{
    int n,temp,sum=0,d;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("SUM OF DIGIT=%d",sum);
}