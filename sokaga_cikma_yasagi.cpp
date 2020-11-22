#include<stdio.h>

int main () {
	
	int cevap;
	
	printf("haftasonu mu? ");
	scanf("%d", &cevap);
	
	if(cevap==1) {
		
		printf("saat 10-20 arasi serbest");
	}
	else {
				if(cevap!=0) {
					printf("cevabiniz hayir ise lutfen 0 giriniz!!");
					return 0;
				}
		printf("20 yas alti veya 65 yas ustu musun? ");
		scanf("%d", &cevap);
		 
		 if(cevap==1) {
		 	printf("calisiyor musun? ");
		 	scanf("%d", &cevap);
		 	 
				if(cevap==1) {
					printf("tum gun serbest");
				}
				else {
						if(cevap!=0) {
						printf("cevabiniz hayir ise lutfen 0 giriniz!!");
						return 0;
					}
					printf("10-16 arasi serbest");
				}
		 }
		 else {
			 	if(cevap!=0) {
				printf("cevabiniz hayir ise lutfen 0 giriniz!!");
				return 0;
			}
		 	printf("tum gun serbest");
		 }
	}
	
	
}
