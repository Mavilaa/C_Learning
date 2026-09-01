#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
//definir dados
double b = 0.0;
double h = 0.0;
double x = 0.0;
double area = 0.0;
//printar dados
printf("%s", "Escolha um valor para a base: ");
scanf("%lf", &b);getchar();
printf("%s", "Escolha um valor para a altura: ");
scanf("%lf", &h);getchar();
//redefinir dados
x = h*3;
area = (b*x)/2;
//printar novos dados
printf("%s%lf","\nNova altura do triangulo: ", x );
printf("%s%lf","\nNova Area do triangulo: ", area );
//encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;

}
/*Escolha um valor para a base: 3.14
Escolha um valor para a altura: 2.03

Nova altura do triangulo: 6.090000
Nova Area do triangulo: 9.561300
Aperte ENTER para continuar
*/