#include<stdio.h>
void main()
{
  int a,b,c,greatest;
  scanf("%d%d%d",&a,&b,&c);
  greatest=a;
  if(b>a)
    greatest=b;
  if(c>greatest)
    greatest=c;
  printf("%d",c);
  }
