// DAYS OF THE WEEK

#include<stdio.h>
void main()
{
    int day;
    printf("Enter day number");
    scanf("%d",&day);
    
    switch(day)
    {
        case 1:printf("SUNDAY");
            break;
        case 2:printf("MONDAY");
            break;
        case 3:printf("TUESDAY");
            break;
        case 4:printf("WEDNESDAY");
            break;
        case 5:printf("THRUSDAY");
            break;
        case 6:printf("FRIDAY");
            break;
        case 7:printf("SATURDAY");
            break;
        default:printf("Ivalid Day Number");
            break;
    }
}