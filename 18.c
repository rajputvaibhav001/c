//PRIME NUMBERS
#include<stdio.h>
void main()
{
    int i,flag,j;
    for(i=1;i<=99;i++)
    {
        flag=0;
        if(i>1)
        {
            for(j=2;j<=i-1;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }

            }

        }
        if(flag!=1)
        {
            printf("%d\n",i);
        }
    }
}