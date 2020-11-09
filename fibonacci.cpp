#include<stdio.h>

int main() {
	
	int max;
	printf("maximum degeri giriniz :");
	scanf("%d",&max);
	printf("girdiginiz max deger :%d\n", max);
	
	int current,previous,fibonacci;
	current = 1;
	previous = 0;
	fibonacci = 1;	

	while(fibonacci<=max) {
	
		fibonacci = fibonacci + previous;
		previous = current;
		current = fibonacci;
		printf("%d\n", fibonacci);
	}
	
	}
