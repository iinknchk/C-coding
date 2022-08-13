#include <stdio.h>

int main() {
  int a,b,num;
  scanf("%d", &a);
  scanf("%d", &b);
  if (a < b)
  {
    num = a;
  }
  else
  {
    num = b;
  }
  while ((a % num)!= 0 || ((b % num)!= 0))
    {
      num = num - 1;
    }
  printf("%d", num);

    return 0;
}