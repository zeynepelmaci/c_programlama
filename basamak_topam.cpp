#include<stdio.h>

int main () {
	
	int sayi, kalan, sayi2;
	int topb=0;
	
	printf("sayi giriniz ==> ");
	scanf("%d",&sayi);

	sayi2=sayi;
	
		while(sayi>0) {

			kalan = sayi % 10;
			
			sayi = sayi / 10;
			
			topb = topb + kalan;
			
		} 
		
	printf("%d sayisinin rakamlari toplami ==> %d  dir ",sayi2,topb);

}
