#include<stdio.h>  // Biblioteca para utilizar printf e scanf
#include<locale.h> // Para usar o setlocale
void imc ();
main() {
	system("color F1"); // Seleciona a cor de fundo e cor de fonte
	setlocale(LC_ALL, ""); // Usado para acentuar as palavras corretamente
	float massa, h, imc; // Vari�veis float
	printf("\n\n\t\t\t ____________________________________________\n\n\n\n");        //
	printf("\t\t\t\t Bem vindo ao calculador de IMC\n\n");                           // Tela inicial, Menu usando printf
	printf("\n\n\t\t\t ____________________________________________\n\n\n\n");      //
	system("pause");  // Pausa a tela atual
	system("cls");    // Limpa a tela para seguir o pr�ximo comando
	printf("\n\n\t\t\t _______________________________________________\n\n\n\n");
	printf("\t\t\t\tAgora digite o seu peso em kg: ");  
	scanf("%f", &massa);                                                              // Escrever e Ler
	printf("\t\t\t\tDigite a sua altura em metros: ");                             
	scanf("%f", &h);
	imc = massa/(h*h);  // C�lculo IMC
	printf("\n\n\t\t\t      O seu �ndice de massa corporal �: %.2fkg/m�\n\n", imc);  // 
	printf("\n\n\t\t\t _______________________________________________\n\n\n\n");   //    Tela final e resultado
 	system("pause");  // Pausa novamente
	system("cls");    // Limpa novamente
}
