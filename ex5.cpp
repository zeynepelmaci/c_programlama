#include <stdio.h>

int main() {
	int number, i, temp = 0;
	
	printf("enter number ==> ");
	scanf("%d", &number);
	
	for(i = 1 ; i <= number ; i++) {
		temp = temp + (i*i);
	}
	printf("sum ==> %d", temp);
	
	return 0;
}
