#include <stdio.h>
// #include <conio.h>
int main()
{
   int a ;
   printf("enter the value of a :");
   scanf("%d", &a);
   printf("rem is %d\n", a % 2);
   if (a % 2 == 0)
   {
      printf("number is even"); 
   }
   else
   {
      printf("number is odd"); 
   }

   return 0;
}