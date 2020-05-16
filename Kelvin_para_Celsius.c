#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "");
	float Kelvin, Celsius;
	printf("Bem Vindo ao Conversor de Temperatura, Digite a temperatura Kelvin:\n");
	scanf ("%f", &Kelvin);
	Celsius = Kelvin - 273;
	printf ("%.0f em celsius é %.0f",Kelvin, Celsius);
	
}

	
