#include <stdio.h>

int main() {
	
	int number,one = 0, ten = 0, hund = 0;
	
	printf("enter a number ==> ");
	scanf("%d", &number);
	
	one = number % 10;
	hund = number / 100;
	ten = (number%100) / 10;
	
	int sum = one + ten + hund;
	
	printf("sum ==> %d", sum);
	
	return 0;
}
