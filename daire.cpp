#include <stdio.h>
#define PI 3.14159

int main() {
	double r;
	
	printf("yaricap giriniz :");
	scanf("%lf",&r);
	printf("girdiginiz yaricap :%f\n", r);
	
	double A,C;
	
	A = PI * r *r;
	C = 2 * PI * r;
	
	printf("alan:%f metrekare\n", A);
	printf("cevre:%f cm\n", C);
	
	
	
}
