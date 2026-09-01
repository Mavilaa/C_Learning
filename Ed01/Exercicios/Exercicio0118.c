#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
    //definir dados
double x = 0.0;
double *px = &x;
double y = 0;
double *py = &y;
double z = 0;
double *pz = &z;
double vol = 0.0;
//printar dados
printf("%s", "Entre um valor para o comprimento: ");
scanf("%lf", &x);getchar();
printf("%s", "Entre um valor para a largura: ");
scanf("%lf", &y);getchar();
printf("%s", "Entre um valor para a altura: ");
scanf("%lf", &z);getchar();
//redefinir valores
*px = x*5;
*py = y*5;
*pz = z*5;
vol = x*y*z;
//printar novos valores
printf("%s%lf","\nNovo valor do comprimento: ", x);
printf("%s%lf","\nNovo valor da largura: ", y);
printf("%s%lf","\nNovo valor da altura: ", z);
printf("%s%lf", "\nNovo volume do paralelepipedo: ", vol);
//Encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;
}
/*Entre um valor para o comprimento: 20
Entre um valor para a largura: 10
Entre um valor para a altura: 10

Novo valor do comprimento: 100.000000
Novo valor da largura: 50.000000
Novo valor da altura: 50.000000
Novo volume do paralelepipedo: 250000.000000
Aperte ENTER para terminar*/