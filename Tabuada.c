#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL,"");
	system("color f5");
	int num=1, mult, result;
	printf("\n\n\t\t\t\t\tSeja bem vindo ao mister tabuada........\n\n\n\n\n");
	printf("\t\t\t\tDigite um numero para qual deseja verficar a tabuada: ");
	scanf("%d", &mult);
	while (num<=10) {
		result=num*mult;
		printf("\n\t\t\t\t\t\t\t%d x %d = %d\n",mult,num,result);
		num++;
	}
}
