#include <stdio.h>
void main()
{
int a,b,c;
printf("enter the three numbers\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
if(a>c)
printf("greatest number is %d",a);
else
printf("greatest number is %d",c);
}
else{
if(b>c)
printf("greatest number is %d",b);
else
printf("greatest number is %d",c);
}
return(0);
}