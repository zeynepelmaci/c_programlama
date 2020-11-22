#include <stdio.h>

int main() {
	
	int yil;
	int yil2;
	int gun, ay, yas, saat, dakika, saniye;

	printf("hangi yildayiz :%d", yil);
	scanf("%d", &yil);
	
	
	printf("dogdugunuz yil :%d", yil2);
	scanf("%d", &yil2);
	
	
	yas = yil - yil2;
	printf("%d yasinizdasiniz.\n", yas);
	
	ay = yas * 12;
	printf("%d ayliksiniz.\n", ay);
	
	gun = yas * 365;
	printf("%d gunluksunuz.\n", gun);
	
	saat = gun * 24;
	printf("%d saattir dunyadasiniz.\n",saat);
	
	dakika = saat * 60;
	printf("%d dakikadir dunyadasiniz.\n", dakika);
	
	saniye = dakika * 60;
	printf("%d saniyedir dunyadasiniz.\n", saniye);
	
}
