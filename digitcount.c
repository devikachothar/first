#include<stdio.h>
void main()
{
   int n,i,count=0;
   scanf("%d",&n);
   while(n>0)
   { count++;
     n/=10;
     }
     printf("%d",count);
   }  
