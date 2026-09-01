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




int main(){
    //definir variaveis
    int opcao = 0;
    //loop para efetuar os metodos
    do{
        //escolha de metodos
    IO_printf("%s", "Escolha um metodo(0 | 1):");
    IO_printf("%s", "\n0-Terminar\n");
    //jeito facilitado para nao efetuar varios printfs)(loop for)
for(int i = 1; i <=1; i++){
IO_printf("%d.%s_%d\n", i , "Metodo", i);

}
scanf("%d", &opcao);getchar();
switch(opcao){
case 0:
break;
case 1:
method_01();
break;
default:
IO_printf("%s", "Erro opcao invalida");
break;

}
    }while(opcao != 0);

    }

