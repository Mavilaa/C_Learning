#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main (){
//definir dados
double v = 0.0;
double r = 0.0;
double a = 0.0;
double *pv = &v;
//printar dado
printf("%s", "Escolha um valor para o volume de uma esfera: ");
scanf("%lf", &v);getchar();
//redefinir dados
*pv= v/2;
r = cbrt(v)*3/4*1/M_PI;
a = pow(r,2)*4*M_PI;
//printar novos dados
printf("%s%lf", "Novo volume: ", v);
printf("%s%lf", "\nRaio da nova esfera: ", r );
printf("%s%lf", "\nArea da nova esfera: ", a);
//encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;
}
/*Novo volume: 27.000000
Raio da nova esfera: 0.716197
Area da nova esfera: 6.445775
Aperte ENTER para terminar*/