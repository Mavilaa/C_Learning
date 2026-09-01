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
double vol = 0.0;
//printar valor
printf("%s","Entre um valor para o raio: ");
scanf("%lf", &r);getchar();
//redefinir valores
*pr = r*5/8;
vol = (pow(r,3)*4/3)*M_PI;
//printar novos valores
printf("%s%lf","\nNovo valor do raio: ", r );
printf("%s%lf", "\n Volume da esfera: ", vol);
//Encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;
}
/*Entre um valor para o raio: 8

Novo valor do raio: 5.000000
 Volume da esfera: 523.598776
Aperte ENTER para terminar*/