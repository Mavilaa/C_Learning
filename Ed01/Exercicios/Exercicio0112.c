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
int perimetro = 0;
int area = 0;
//printar valor
printf("%s", "Escolha um valor inteiro para o lado do quadrado: ");
scanf("%d", &lado);getchar();
//definir valores
x = lado/4;
perimetro = x*4;
area = pow(x,2);
//printar novos valores
printf("%s%d","Perimetro do novo quadrado: ", perimetro);
printf("%s%d","\nArea do novo quadrado: ", area );
//encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;

}

/*Escolha um valor inteiro para o lado do quadrado: 100
Perimetro do novo quadrado: 100
Area do novo quadrado: 625
Aperte ENTER para continuar
*/