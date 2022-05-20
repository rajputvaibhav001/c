/*SUM OF GIVEN SERIES
  1+1/2+1/3+.....*/
#include<stdio.h>
void main()
{
    int i,n;
    float sum=0;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1/i;
    }
    printf("Sum=%f",sum);
}