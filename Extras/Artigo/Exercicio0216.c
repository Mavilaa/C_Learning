#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
//metodo 1 
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
//metodo 2
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

//metodo 3
void method_03(){
int valor = 0;
valor =IO_readint("Defina um valor inteiro:");
if(valor >15 && valor < 54){
IO_printf("%s(%d)\n", "Seu valor esta entre os numeros (15:54): ", valor);

}
else{
    IO_printf("%s(%d)\n", "Seu valor NAO esta entre os numeros (15:54): ", valor);
}

IO_pause("Aperte ENTER para continuar");
}

//metodo 4
void method_04(void){
int valor = 0;
valor =IO_readint("Defina um valor inteiro:");
if(valor >=15 && valor <= 54){
IO_printf("%s(%d)\n", "Seu valor esta entre os numeros (Incluindo 15 e 54)(15:54): ", valor);
}
else{
    IO_printf("%s(%d)\n", "Seu valor NAO esta entre os numeros (15:54): ", valor);
}
IO_pause("Aperte ENTER para continuar");
}

//metodo 5
void method_05(void){
int valor = 0;
valor =IO_readint("Defina um valor inteiro:");
if(valor >20 && valor <= 24){
IO_printf("%s(%d)\n", "Seu valor esta na intersecao entre os conjuntos: (20:50) e [12:50] ", valor);
}
if(valor >=12 && valor <= 24){
IO_printf("%s(%d)\n", "Seu valor pertence ao conjunto [12:50]: ", valor);
}
if(valor >20 && valor < 50){
IO_printf("%s(%d)\n", "Seu valor pertence ao conjunto (20:50): ", valor);
}
else{
    IO_printf("%s(%d)\n", "O valor pertence a nenhum dos conjuntos: ", valor);
}

IO_pause("Aperte ENTER para continuar");
}

//metodo 6
void method_06(void){
int x = 0;
int y = 0;
x= IO_readint("Insira um valor inteiro para x: ");
y= IO_readint("Insira um valor inteiro para y: ");
if(x % 2 != 0){
IO_printf("%s(%d)\n", "Seu numero(x) escolhido e' impar: ", x);


}
if(y % 2 == 0){
IO_printf("%s(%d)\n", "Seu numero(y) escolhido e' par: ", y);


}
if(!(y % 2 == 0) && !(x % 2 != 0)){
  IO_printf("%s(%d), (%d)\n", "Os numeros(x, y) escolhidos sao par e impar: ", x ,y); 
}
IO_pause("Aperte Enter para continuar");
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
for(int i = 1; i <=6; i++){
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
case 4:
method_04();
break;
case 5:
method_05();
break;
case 6:
method_06();
break;
default:
IO_printf("%s", "Erro opcao invalida");
break;

}
    }while(opcao != 0);

IO_pause("Aperte ENTER para terminar");
    }

