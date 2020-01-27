#include <stdio.h>
const double PI = 3.14;

int main(){
 double r=0, area=0;
 printf("Enter radius : ");
 scanf("%lf", &r);
 area = PI*r*r;
 printf("area = %lf\n", area);
 
 return 0;
}
