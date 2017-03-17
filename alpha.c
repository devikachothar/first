#include<stdio.h>
#include<ctype.h>
void main()
{
  char n;
  scanf("%c",&n);
  if(isalpha(n)==0)
    printf("Not an alphabet");
    else
    printf("Alphabet");
    }
