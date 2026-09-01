#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
//definir valores
double l = 0.0;
double h = 0.0;
double x = 0.0;
double area = 0.0;
double perimetro = 0.0;
//printar valor
printf("%s", "Escolha um valor para o lado: ");
scanf("%lf", &l);getchar();
//redefinir dados
x = l*3/5;
h = l*sqrt(3)/2;
area = pow(l,2)*sqrt(3)/4;
perimetro = l*3;
//printar novos valores
printf("%s%lf","\nNovo lado do triangulo: ", x );
printf("%s%lf","\nNova altura do triangulo: ", h);
printf("%s%lf","\nNova Area do triangulo: ", area );
printf("%s%lf","\nNovo perimetro do triangulo: ", perimetro );
//encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;

}
/*Escolha um valor para o lado: 2.03

Novo lado do triangulo: 1.218000
Nova altura do triangulo: 1.758032
Nova Area do triangulo: 1.784402
Novo perimetro do triangulo: 6.090000
Aperte ENTER para continuar
*/