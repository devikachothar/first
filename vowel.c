#include<stdio.h>
#include<ctype.h>
void main()
{
   char n;
   scanf("%c",&n);
   if(isalpha(n)!=0)
   {  if((n=='a')||(n=='e')||(n=='i')||(n=='o')||(n=='u')||(n=='A')||(n=='E')||(n=='I')||(n=='O')||(n=='U'))
      printf("Vowel");
      else
      printf("Consonant");
      }
      else
      printf("Not Alphabet");
      }
  
