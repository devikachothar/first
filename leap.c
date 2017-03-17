#include<stdio.h>
void main()
{
 int year;
 scanf("%d",&year);
 while(year>4)
 {
 if(year%4==0)
   printf("Leap year");
   else
   printf("Not leap year");
 }  
 }
