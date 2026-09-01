#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include "math.h"

int main(){
    //definir dados
double r = 0.0;
double *pr = &r;
double area = 0.0;
//printar dado
printf("%s","Entre um valor para o raio: ");
scanf("%lf", &r);getchar();
//redefinir dados
*pr = r*10;
area = M_PI *pow(r,2)/2;
//printar novos dados
printf("%s%lf","\nNovo valor do raio: ", r );
printf("%s%lf", "\nArea do semicirculo: ", area);
//Encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;

}

/*Entre um valor para o raio: 10

Novo valor do raio: 100.000000
Area do semicirculo: 15707.963268
Aperte ENTER para terminar
*/