
#include <stdio.h>
int input()
{
  int a;
  printf("enter two number's");
  scanf("%d",&a);
  return a;
}
int compare(int a,int b)
{
  if(a>b)
    return a;
  else
    return b;
}

  
int main()
{
int x,y,largest;
x=input();
y=input();
largest =compare(x,y);
printf("the largest of %d,%d is %d\n",x,y, largest);
return 0;
  }