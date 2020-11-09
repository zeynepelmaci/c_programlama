#include <stdio.h>

int main() {
	int sayi;
	printf("istediginiz degeri giriniz :");
	scanf("%d",&sayi);
	printf("girdiginiz deger :%d\n", sayi);
	
	if(sayi<2) {
		printf("%d asal degildir " ,sayi);
		return(0);
	}
	
	for (int i=2; i<sayi;i++) {
	//printf("%d\n", i);	
		int kalan = sayi % i;
		if (kalan==0) {	
			printf("%d asal degildir " ,sayi);
			return(0);
		}
		
	}

	printf("%d asaldir ", sayi);
}

