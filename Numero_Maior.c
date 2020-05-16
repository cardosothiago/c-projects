#include<stdio.h>

	int main()
	{
		int numero1, numero2;
		printf( "Bem vindo!\nQual numero e maior?\n");
		printf( "Digite o Primeiro Numero:\n" );
		scanf("%d", &numero1);
		printf( "Digite o Segundo Numero:\n" );
		scanf("%d", &numero2);
		if( numero1>numero2 ){
		printf("%d e o numero maior",numero1);
		}
			else{
		printf("%d e o numero maior",numero2);
		}
		return 0;
	}
