#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
int main(){
    //definir variaveis
char x = 0;
char y = 0;
char z = 0;

//identificar programa
IO_id("Programa0.0v");

//definir caracteres
x =IO_readchar("Entre um caractere para x: ");
y =IO_readchar("Entre um caractere para y: ");
z =IO_readchar("Entre um caractere para z: ");

//definir especificacoes
if(!(x >= y && x <=z )){
IO_printf("%s(%c)(%c)(%c)\n", "x nao esta entre y e z: ", x , y, z);



}

//definir especificacoes
if(x == y || x == z ){

IO_printf("%s(%c)(%c)(%c)\n", "x e' igual a z | x e' igual a y: ", x ,y ,z);

}

//encerrar
IO_pause("Aperte ENTER para terminar");

}