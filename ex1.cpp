#include <stdio.h>

int main() {
	int number, temp = 0;
	printf("enter number ==> ");
	scanf("%d", &number);
	
	for(int i = 0 ; i <= number ; i++) {
		temp += i;
	}
	printf("%d", temp);
	return 0;
}
