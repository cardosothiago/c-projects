#include<stdio.h>
#include<locale.h>

main(){
	int num;
	setlocale(LC_ALL, "");
	printf("Digite um número para averiguação\n");
	scanf("%d",&num);
	
		if (num%2==0)
		{
			printf("O numero é par",num);
		}
		else 
		{
			printf("O número é ímpar",num);
		}
}
