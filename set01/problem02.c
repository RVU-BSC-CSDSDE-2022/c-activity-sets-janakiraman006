#include <stdio.h>
int main(void)
{
  int a,b,c;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  c = a+b;
  printf("sum of %d and %d is %d\n",a,b,c);
  return 0;
}