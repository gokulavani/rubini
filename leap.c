#include<stdio.h>
int main()
{
int a;
printf("Enter the year\n");
scanf("%d",&a);
if(a%4==0)
printf("The given year is leap year");
else
printf("The given year is not a leap year");
}
