#include <stdio.h>

int main() {
	
	int number1,number2, sum = 0;
	
	printf("enter number 1 ==> ");
	scanf("%d", &number1);
	
	printf("enter number 2 ==> ");
	scanf("%d", &number2);
	
	for(int i = 1; i <= number2 ; i++) {
		sum += number1;
	}
	
	printf("%d x %d ==> %d",number1, number2,sum);
	
	return 0;
}
