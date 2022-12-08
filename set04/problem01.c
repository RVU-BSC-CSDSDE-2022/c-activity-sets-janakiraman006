#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the value of x1\n");
  scanf("%f",x1);
  printf("Enter the value of y1\n");
  scanf("%f",y1);
  printf("Enter the value of x2\n");
  scanf("%f",x2);
  printf("Enter the value of y2\n");
  scanf("%f",y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
  float distance = pow((pow((x2-x1),2) + pow((y2-y1),2)),0.5);
  return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between the points (%f,%f) and (%f,%f) is %f\n",x1,y1,x2,y2,distance);
}
int main()
{
  float x1, x2, y1, y2, distance;
  input(&x1, &y1, &x2, &y2);
  distance = find_distance(x1, y1, x2, y2);
  output(x1, y1, x2, y2, distance);
  return 0;
}