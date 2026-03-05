#include <stdio.h>

int main()
{
   int userid =4689;
   int pass =1234;
   
   int newuserid,newpass;
   
   printf("Enter User Id:");
   scanf("%d",&newuserid);
   
   printf("Enter password:");
   scanf("%d",&newpass);
   
   if(userid==newuserid && pass==newpass)
   {
       printf("Login success");
   }
   else
   {
       printf("Login Fail");
   }
    return 0;
}
