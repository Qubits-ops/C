#include <stdio.h>

#define PI 3.14159

int main(){
  double area = 0.0, radius = 0.0;
  printf("Enter radius: ");
  scanf("%lf",&radius);
  area = PI * radius * radius;
  printf("radius of %.1lf meters; area is %.1lf sq. meters\n",radius,area);
  return 0;

}




