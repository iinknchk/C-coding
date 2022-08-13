#include <stdio.h>

int main()
{
   int a, b, num=1;


   printf("Please input first number : ");
   scanf("%d", &a);
   printf("Please input second number : ");
   scanf("%d", &b);

   int x = abs(a), y = abs(b);

   while(y != 0)
   {
       int t = y;
       y = x%y;
       x = t;
   }
   num = x;

   printf("\nThe greatest common divisor is %d\n",abs(num));
    return 0;
}
