// PALLINDROME NUMBER
#include<stdio.h>
void main()
{
    int n,rev,d,temp;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("%d is pallindrome number",temp);
    }
    else
    {
        printf("%d is not a pallindrome number",temp);
    }
}