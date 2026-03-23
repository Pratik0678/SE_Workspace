#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ch[50]="mango";
    char ch2[50];
    do
    {
        printf("what is your fav. Fruit");
        scanf("%s",&ch2);
    }
    while(strcmp(ch,ch2)!=0);
    
    printf("Answer is Correct");
  
    return 0;
}