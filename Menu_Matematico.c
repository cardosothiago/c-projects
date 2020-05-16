#include<stdio.h>
#include<locale.h>
#define Sair 4 
#define Fatorial 1
#define Primo 2
#define Parouimpar 3
void fatorial();
void primo();
void parouimpar();
void menuprincipal();

main() {
	int menu;
	setlocale(LC_ALL, "");
	while(menu != 4)
	{
		menuprincipal();
		scanf("%d", &menu);
		system("cls");
	
		if (menu==1)
		{
			fatorial();
		}

		if (menu==2) 
		{
			primo();
		}
	
		if (menu==3) 
		{
			parouimpar();
		}
	
		if (menu < 1 || menu > 4 )
		{
			printf("\n\n*******************************************************************************\n\n\n");
			printf("   Opção inválida, clique em qualquer tecla para voltar ao menu principal.\n\n\n");
			printf("*******************************************************************************\n\n\n\n\n\n");
			system("pause");
			system("cls");
		}	
  	}
}
void fatorial()
	{
		int fat, i;
	printf("\t\t\t\t**********************\n");
	printf("\t\t\t\t      Fatorial        \n");
	printf("\t\t\t\t**********************\n");
	printf("Digite um número inteiro: ");
	scanf("%d", &fat);
	i=fat-1;
	while (i>0)
	{
		fat = fat*i;
		i--;
	}
	printf("O fatorial é %d.\n", fat);
	system("pause");
	system("cls");
	}
	
void primo()
	{
		int nump, div=2, k;
	printf("\t\t\t\t**********************\n");
	printf("\t\t\t\t      Primo           \n\n");
	printf("\t\t\t\t**********************\n\n");
	printf("Digite um número inteiro: ");
	scanf("%d", &nump);
	k = nump - 1;
	while( k > 1) 
	{
	if (nump%k == 0) 
	{
		div++;
	}
		k--;
	}
	if (div > 2)
	
	{
		printf("O número %d não é primo.\n", nump);
	}
	else 
	{
		printf("O número %d é primo.\n", nump);
	}
	system("pause");
	system("cls");
	}
	
	void parouimpar()
	{
		int num;
	printf("\t\t\t\t**********************\n");
	printf("\t\t\t\t    Par ou ímpar      \n\n");
	printf("\t\t\t\t**********************\n\n");
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	if (num%2==0)
	{
		printf("O número %d é par.\n", num);
	}
	else
	{
		printf("O número %d é ímpar.\n", num);
	}
	system("pause");
	system("cls");
	}
	
	void menuprincipal()
	{
	printf("\t\t\t\t**********************\n\n");
	printf("\t\t\t\t         MENU          \n\n");
	printf("\t\t\t\t**********************\n\n");
	printf("\t\t\t\t  1.Fatorial\n\n");
	printf("\t\t\t\t  2.Primo\n\n");
	printf("\t\t\t\t  3.Par ou ímpar\n\n");
	printf("\t\t\t\t  4.Sair\n\n");
	printf("\t\t\t\t**********************\n\n");
	printf("\t\t\t\t O que deseja fazer?\n");
	}
