# include <stdio.h>
int main()
{
  int x=45
  int*p
  p=&x;
  printf("address of x is %u\n",*p);
  printf("value of x is %d\n",*p);
  return 0;
}
