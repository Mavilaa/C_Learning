#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
int main(){
//definir valores
int lado = 0;
int x = 0;
int area = 0;
//printar valor
printf("%s", "Escolha um valor inteiro para o lado do quadrado: ");
scanf("%d", &lado);getchar();
//redefinir valores
x = 2*lado;
area = pow(x,2);
//printar novos valores
printf("%s%d", "Lado do novo quadrado: ", x);
printf("%s%d", "\nArea do novo quadrado: ", area);
//encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;

}
/*Escolha um valor para o lado do quadrado: 10
Lado do novo quadrado: 20
Area do novo quadrado: 400
Aperte ENTER para continuar*/