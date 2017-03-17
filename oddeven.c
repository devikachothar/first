#include<stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  if((n!=1)&&(n<0))
  {
  if(n%2==0)
   printf("Even");
   else
   printf("Odd");
   }
  else
     printf("Neither odd nor even");
   }  
