#include <stdio.h>

int main() {
	
	int x,y,z,enbuyuk;
	
	printf("3 sayi giriniz ==> ");
	scanf("%d%d%d", &x, &y, &z);
	
	
	if(x<y) {
		
		if(x>z) {
			enbuyuk = x;
		}
		
		else {
			enbuyuk = z;
		}		
}

	else {
		if(y>z) { 
			enbuyuk = y;
		}
		else {
			enbuyuk = z;
		}
}
		
		printf("girilen en buyuk sayi ==> %d", enbuyuk);
	}
	
	

	
	

