#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
    //definir dados
int lado1 = 0;
int lado2 = 0;
int x =0;
int y =0;
int area =0;
int perimetro =0;
//printar valores
printf("%s", "Escolha um valor para dar para um lado: ");
scanf("%d", &lado1);getchar();
printf("%s", "Escolha um valor para dar para outro lado: ");
scanf("%d", &lado2);getchar();
//redefinir dados
x = lado1*1/3;
y= lado2*1/3;
perimetro = 2*x+2*y;
area = x*y;
//printar novos valores
printf("%s%d", "\nLado1 do novo retangulo: ", x);
printf("%s%d", "\nLado2 do novo retangulo: ", y);
printf("%s%d", "\nPerimetro do novo retangulo: ", perimetro);
printf("%s%d", "\nArea do novo retangulo: ", area);
//encerrar
printf("%s", "\nAperte ENTER para terminar");
getchar();
return 0;
}
/*Escolha um valor para dar para um lado: 3
Escolha um valor para dar para outro lado: 6

Lado1 do novo retangulo: 1
Lado2 do novo retangulo: 2
Perimetro do novo retangulo: 6
Area do novo retangulo: 2
Aperte ENTER para terminar*/