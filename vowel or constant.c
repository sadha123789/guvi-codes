#include<stdio.h>
int main()
{
char c;
int islowercasevowel,uppercasevowel;
printf("enter the alphabet");
scanf("%c",&c);
islowercasevowel=(c='a'||c='e'||c='i'||c='o'||c='u');
isuppercasevowel=(c='A'||c='E'||c='I'||c='O'||c='U');
if(lowercasevowel||isuppercasevowel)
  printf("%c is a vowel.",c);
  else
  printf("%c is a constant.",c);
  return 0;
  }
