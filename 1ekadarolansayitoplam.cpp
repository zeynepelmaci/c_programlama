#include <stdio.h>

int main () {
	int wanted;
	long result = 1;
	
	printf("istediginiz sayiyi giriniz :");
	scanf("%d", &wanted);
	printf("girdiginiz sayi :%d\n", wanted);
	
	if(wanted<1) {
		return 0;
	}
	
	for(int i=wanted; i>=1; i--) {
		result = result + i;
	}
	
	printf("sonuc :%lld", result); 

	
}
