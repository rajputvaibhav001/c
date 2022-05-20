//RANGE OF PALLINDROME NUMBERS
#include<stdio.h>
void main()
{
    int rev,i,temp,d;
    for(i=100;i<=999;i++)
    {
        rev=0;
        temp=i;
        while(temp>0)
        {
            d=temp%10;
            rev=rev*10+d;
            temp=temp/10;
        }
        if(rev==i)
        printf("%d\n",i);
    }
}