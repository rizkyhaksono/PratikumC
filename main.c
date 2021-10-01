#include <stdio.h>
#define bagi 4

int main()
{	
	int a, b, c, d;
	float h;
	float i;
	printf("Masukkan Nilai Pemograman Dasar : ");
	scanf("%d", &a);
	printf("Masukkan Nilai Kalkulus : ");
	scanf("%d", &b);
	printf("Masukkan Nilai PTI : ");
	scanf("%d", &c);
	printf("Masukkan Nilai Orkom : ");
	scanf("%d", &d);
	
	i = a+b+c+d;
	h =(a+b+c+d)/ bagi;
		
	printf("Total nilai anda adalah : %2.f", i);
	
	if(h>=75)
	{
		printf("\n\nKamu lulus!\n");
	}
	else
	{
		printf("Kamu tidak lulus!\n\n");
	}

	return 0;

}