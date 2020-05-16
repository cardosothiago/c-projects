#include <stdio.h>
#include <math.h>

main(){

    float kmh, ms;
    
printf("Digite a velocidade em km/h\n");
scanf("%f", &kmh);
ms = kmh / 3.6;
printf(" %.2f em ms e %.2f", kmh, ms);
}
