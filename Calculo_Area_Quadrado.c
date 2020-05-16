#include<stdio.h>
#include<math.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "");
	float lado, area;
	printf("Digite o valor do lado do quadrado\n");
	scanf("%f", &lado);
	area = lado * lado;
	printf("de acordo com o lado %.2f a área do quadrado é %.2f", lado, area);
}
