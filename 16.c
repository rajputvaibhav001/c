//RANGE OF ARMSTRONG NUMBERS
#include<stdio.h>
void main()
{
    int i,d,sum,temp;
    
    for(i=100;i<=999;i++)
    {
        sum=0;
        temp=i;
        while(temp>0)
        {
            d=temp%10;
            sum=sum+d*d*d;
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d\n",sum);
        }
    }
}