#include <stdio.h>

int main() {
	int number, temp = 0;
	printf("enter number ==> ");
	scanf("%d", &number);
	
	for(int i = 0 ; i <= number ; i++) {
		if(i%2 == 0) {
			continue;
		}
		temp += i;
	}
	printf("sum of number ==> %d", temp);
	return 0;
}
