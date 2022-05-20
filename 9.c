//SUM OF FIRST 20 NUMBERS
#include<stdio.h>
void main()
{
    int count=1,sum;
    for(count=1;count<=20;count++)
    {
        printf("%d\n",count);   
        sum=sum+count;  
    }
    printf("TOTAL=%d",sum);
}