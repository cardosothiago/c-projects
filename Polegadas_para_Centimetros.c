#include <stdio.h>
#include <math.h>

main(){
	float polegadas, cm;
	printf("Digite o valor em polegadas\n");
	scanf("%f", &polegadas);
	cm = polegadas * 2.54;
	printf("%.2f em centimetros e %.2f", polegadas, cm);
}
