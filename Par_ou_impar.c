#include<stdio.h>
#include<locale.h>

main(){
	int num;
	setlocale(LC_ALL, "");
	printf("Digite um n�mero para averigua��o\n");
	scanf("%d",&num);
	
		if (num%2==0)
		{
			printf("O numero � par",num);
		}
		else 
		{
			printf("O n�mero � �mpar",num);
		}
}
