#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 100

int main() {
	
int aim,attempt,entry;

srand(time(NULL));
aim = rand() % 100 + 1; //burasi random yapilacak.
attempt = 1;


while (true) {
	printf("%d ile %d arasinda sayi giriniz (deneme %d) : ",MIN, MAX, attempt);
	scanf("%d", &entry);

	
	if(entry == aim) {
		printf("tebrikler %d denemede bildiniz :)", attempt);
		break;
	}
	
	attempt += 1;
	
	if(entry<aim){
		printf("daha b�y�k sayi giriniz.\n");
		
	}
	else {
		printf("daha k�c�k deger giriniz.\n");
	}
}



}
