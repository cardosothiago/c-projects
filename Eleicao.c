#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL, "");
	int lula=0, dilma=0, bolsonaro=0, cont, votos=0, numeleitores;
	printf("Digite o n�mero total de eleitores: ");
	scanf("%d", &numeleitores);
	while (votos<numeleitores) {
	printf("Para Lula digite:1 | Para Dilma digite:2 | Para Bolsonaro digite:3\n" );
	scanf("%d", &cont);
		if (cont==1) {
			lula++;
		}
		else if (cont==2) {
			dilma++;
		}
		else if (cont==3) {
			bolsonaro++;
		}
	votos++;
	}
	printf("Lula=%d, Dilma=%d, Bolsonaro=%d\n",lula, dilma, bolsonaro);
}