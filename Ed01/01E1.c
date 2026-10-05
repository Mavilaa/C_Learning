#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
//Dados
double area = 0.0;
double r = 0.0;
double x = 0.0;
//Printar 
printf("%s", "Entre um valor para a area do circulo: ");
scanf("%lf", &area);getchar();
//Definicao dos ddos
 x= area*8;
 r = sqrt(x)/M_PI;
//Printar novo raio
 printf("%s%lf", "Nova raio da circunferencia: ", r);
 //Encerrar programa
 printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;
}
/*Entre um valor para a area do circulo: 3.14159
Nova raio da circunferencia: 1.595768
Aperte ENTER para terminar*/