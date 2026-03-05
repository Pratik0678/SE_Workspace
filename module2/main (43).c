#include <stdio.h>

int main()
{
   char c;
   printf("enter alphabet");
   scanf("%c",&c);
   
   if(c=='a'|| c=='e' ||c=='i'||c=='o'||c=='u')
   {
       printf("it's a vowel ");
   }
   else
   {
       printf("it's a consonant");
   }
   
   
   //printf("your alphabet is %c",c);

    return 0;
}
