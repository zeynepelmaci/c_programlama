#include <stdio.h>

int main () {
	
	int sayi, sonuc, i;
			
	printf("bir sayi giriniz ==>>");
	scanf("%d", &sayi);
	printf("girdiginiz sayi ==>> %d\n", sayi);
		
	i = 1;
	sonuc = 0;
	
	while(i<=sayi){
		
		sonuc += i;
		i += 2;
		
	}
	
		printf("1 ile %d araliginda olan tek sayilarin toplami ==> %d", sayi, sonuc);
		
}
