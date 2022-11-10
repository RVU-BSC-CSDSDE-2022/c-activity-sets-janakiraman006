#include <stdio.h>
#include <math.h>
int main(){
    int num1, num2, x1, x2, y1, y2;
    float distance;
    
    printf("Enter the X and Y Coordinates of First Point: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the X and Y Coordinates of Second Point: ");
    scanf("%d %d", &x2, &y2);
    
    num1 = x2 - x1;
    num2 = y2 - y1;
    distance = sqrt((num1 * num1) + (num2 * num2));
    
    printf("Distance: %.2f", distance);
    return 0;
}
