#include <stdio.h>

int main() {
	
	int sayi, i, sonuc;
	
	printf("bir sayi giriniz ==>");
	scanf("%d", &sayi);
	
	sonuc = 0;
	
	for(int i = 1 ; i<sayi ; i++) 
		
	sonuc = sonuc + i * i;
					
	
	

	printf("1 ile %d araligindaki sayilarin kareleri toplami ==> %d", sayi, sonuc);
	
}
