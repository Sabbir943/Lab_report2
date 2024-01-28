/*Write a C program to find whether a given year is a leap year or not.
Test Data : 2016
Expected Output :
2016 is a leap year.
*/
#include<stdio.h>
int main()
{
    //input any year:
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("%d is a leap year");
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not leap year",year);
    }
}