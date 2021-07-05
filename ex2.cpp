#include <stdio.h>
#define PI 3.14

int main() {
	int r;
	
	printf("enter radius of circle ==> ");
	scanf("%d", &r);
	
	double area = PI*r*r;
	double circumference = 2*PI*r;
	
	printf("area of this circle ==> %.2lf\ncircumference of the circle ==> %.2lf", area, circumference);
	return 0;
}
