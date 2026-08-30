#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
void method_01(void){

int valor = 0;
valor =IO_readint("Defina um valor inteiro:");
if(valor %2 == 0 && valor <=0){
    IO_printf("%s(%d)\n", "Seu valor e negativo e par: ", valor);
}
if(valor %2 != 0 && valor >0){
IO_printf("%s(%d)\n", "Seu valor e positivo e impar: ", valor);

}
if(valor %2 != 0 && valor <0){
    IO_printf("%s(%d)\n", "Seu valor e' negativo e impar: ", valor);
}
if(valor %2 == 0 && valor > 0){
    IO_printf("%s(%d)\n", "Seu valor e positivo e par: ", valor);
}
}

void method_02(){
int valor = 0;
valor =IO_readint("Defina um valor inteiro:");

if(valor %2 == 0 && valor > -12){
    IO_printf("%s(%d)\n", "Seu valor e' par e maior que -12: ", valor);
}
if(valor %2 != 0 && valor < 25){
    IO_printf("%s(%d)\n", "Seu valor e' par e maior que -12: ", valor);
}
if(!(valor %2 != 0 && valor < 25)&& !(valor %2 == 0 && valor > -12)){

IO_printf("%s(%d)\n","Valor fora do intervalo: ", valor);

}
}


void method_03(){
int valor = 0;
valor =IO_readint("Defina um valor inteiro:");
if(valor >=15 && valor <= 54){
IO_printf("%s(%d)\n", "Seu valor esta entre os numeros (15:54): ", valor);

}
else{
    IO_printf("%s(%d)\n", "Seu valor NAO esta entre os numeros (15:54): ", valor);
}


}


int main(){
    //definir variaveis
    int opcao = 0;
    //loop para efetuar os metodos
    do{
        //escolha de metodos
    IO_printf("%s", "Escolha um metodo(0 | 1):");
    IO_printf("%s", "\n0-Terminar\n");
    //jeito facilitado para nao efetuar varios printfs)(loop for)
for(int i = 1; i <=3; i++){
IO_printf("%d.%s_%d\n", i , "Metodo", i);

}
scanf("%d", &opcao);getchar();
switch(opcao){
case 0:
break;
case 1:
method_01();
break;
case 2:
method_02();
break;
case 3:
method_03();
break;
default:
IO_printf("%s", "Erro opcao invalida");
break;

}
    }while(opcao != 0);

    }

