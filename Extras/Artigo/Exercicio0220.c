#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
//metodo 1 
void method_01(void){
//definir variaveis
int valor = 0;
//definir valores
valor =IO_readint("Defina um valor inteiro:");

//criar especificacoes
if(valor %2 == 0 && valor <=0){
    IO_printf("%s(%d)\n", "Seu valor e negativo e par: ", valor);
}

//criar especificacoes
if(valor %2 != 0 && valor >0){
IO_printf("%s(%d)\n", "Seu valor e positivo e impar: ", valor);
}

//criar especificacoes
if(valor %2 != 0 && valor <0){
    IO_printf("%s(%d)\n", "Seu valor e' negativo e impar: ", valor);
}

//criar especificacoes
if(valor %2 == 0 && valor > 0){
    IO_printf("%s(%d)\n", "Seu valor e positivo e par: ", valor);
}

//encerrar
IO_pause("Aperte ENTER para continuar");
}
//metodo 2
void method_02(){
//definir variaveis
    int valor = 0;
    //definir valores
valor =IO_readint("Defina um valor inteiro:");

//criar especificacoes
if(valor %2 == 0 && valor > -12){
    IO_printf("%s(%d)\n", "Seu valor e' par e maior que -12: ", valor);
}

//criar especificacoes
if(valor %2 != 0 && valor < 25){
    IO_printf("%s(%d)\n", "Seu valor e' par e maior que -12: ", valor);
}

//criar especificacoes
if(!(valor %2 != 0 && valor < 25)&& !(valor %2 == 0 && valor > -12)){

IO_printf("%s(%d)\n","Valor fora do intervalo: ", valor);

}
//encerrar
IO_pause("Aperte ENTER para continuar");
}

//metodo 3
void method_03(){
    //definir variaveis
int valor = 0;

//definir valores
valor =IO_readint("Defina um valor inteiro:");

//criar especificacoes
if(valor >15 && valor < 54){
IO_printf("%s(%d)\n", "Seu valor esta entre os numeros (15:54): ", valor);

}

//criar especificacoes
else{
    IO_printf("%s(%d)\n", "Seu valor NAO esta entre os numeros (15:54): ", valor);
}

IO_pause("Aperte ENTER para continuar");
}

//metodo 4
void method_04(void){
    //definir variaveis
int valor = 0;

//definir valores
valor =IO_readint("Defina um valor inteiro:");

//criar especificacoes
if(valor >=15 && valor <= 54){
IO_printf("%s(%d)\n", "Seu valor esta entre os numeros (Incluindo 15 e 54)(15:54): ", valor);
}


//criar especificacoes
else{
    IO_printf("%s(%d)\n", "Seu valor NAO esta entre os numeros (15:54): ", valor);
}

//encerrar
IO_pause("Aperte ENTER para continuar");
}


//metodo 5
void method_05(void){
    //definir variaveis
int valor = 0;

//definir valores
valor =IO_readint("Defina um valor inteiro:");

//criar especificacoes
if(valor >20 && valor <= 24){
IO_printf("%s(%d)\n", "Seu valor esta na intersecao entre os conjuntos: (20:50) e [12:50] ", valor);
}


//criar especificacoes
if(valor >=12 && valor <= 24){
IO_printf("%s(%d)\n", "Seu valor pertence ao conjunto [12:50]: ", valor);
}


//criar especificacoes
if(valor >20 && valor < 50){
IO_printf("%s(%d)\n", "Seu valor pertence ao conjunto (20:50): ", valor);
}
//criar especificacoes

else{
    IO_printf("%s(%d)\n", "O valor pertence a nenhum dos conjuntos: ", valor);
}

//encerrar
IO_pause("Aperte ENTER para continuar");
}

//metodo 6
void method_06(void){
    //definir variaveis
int x = 0;
int y = 0;

//definir valores
x= IO_readint("Insira um valor inteiro para x: ");
y= IO_readint("Insira um valor inteiro para y: ");

//criar especificacoes
if(x % 2 != 0){
IO_printf("%s(%d)\n", "Seu numero(x) escolhido e' impar: ", x);


}

//criar especificacoes
if(y % 2 == 0){
IO_printf("%s(%d)\n", "Seu numero(y) escolhido e' par: ", y);


}

//criar especificacoes
if(!(y % 2 == 0) && !(x % 2 != 0)){
  IO_printf("%s(%d), (%d)\n", "Os numeros(x, y) escolhidos sao par e impar: ", x ,y); 
}


//encerrar
IO_pause("Aperte Enter para continuar");
}

//metodo 7
void method_07(void){
    //definir variaveis
int x = 0;
int y = 0;

//definir valores
x= IO_readint("Insira um valor inteiro para x: ");
y= IO_readint("Insira um valor inteiro para y: ");

//criar especificacoes
if(x % 2 != 0 && x > 0){
IO_printf("%s(%d)\n", "Seu numero(x) escolhido e' impar postivo: ", x);

}

//criar especificacoes
if(y % 2 == 0 && y <=0){
IO_printf("%s(%d)\n", "Seu numero(y) escolhido e' par negativo: ", y);


}

//criar especificacoes
if(!(x % 2 != 0 && x > 0) && !(y % 2 == 0 && y <=0)){
   IO_printf("%s(%d)\n", "Numero nao impar e positivo", x); 
  IO_printf("%s(%d)\n", "Numero nao par e negativo", y); 
}

//encerrar
IO_pause("Aperte Enter para continuar");

    
}

//metodo 8

void method_08(void){
    //definir variaveis
double x = 0.0;
double y = 0.0;
double z = 0.0;

//definir valores
x = IO_readdouble("Insira um valor para x: ");
y = IO_readdouble("Insira um valor para y: ");
z = y/2;

//criar especificacoes
if(x < z){
IO_printf("(%lf)<(%lf)\n", x, z);

}

//criar especificacoes
if(x = z){
IO_printf("(%lf)=(%lf)\n", x, z);


}

//criar especificacoes
if(x > z){
IO_printf("(%lf)>(%lf)\n", x, z);


}
//encerrar
IO_pause("Aperte ENTER para continuar");
}

//metodo 9

void method_09(void){

    //definir variaveis
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    //definir valores
    x = IO_readdouble("Insira um valor para x: ");
    y = IO_readdouble("Insira um valor para y: ");
    z = IO_readdouble("Insira um valor para z: ");

    //criar especificacoes
    if((y>= x && y <=z) && (x < z) ){

    IO_printf("y= %lf esta entre %lf e %lf", y , x , z);

    }
    
    
//criar especificacoes

if(!((y>= x && y <=z) && (x < z))){

IO_printf("%s(%lf)(%lf)(%lf)\n", "y nao esta entre x e z", y ,x, z);

}
//encerrar
IO_pause("Aperte ENTER para continuar");
}

//metodo 10

void method_10(void){
    //definir variaveis
  double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    //definir valores
    x = IO_readdouble("Insira um valor para x: ");
    y = IO_readdouble("Insira um valor para y: ");
    z = IO_readdouble("Insira um valor para z: ");
    //criar especificacoes
    if((y> x && y <z) && (x < z) ){

    IO_printf("y= %lf esta entre %lf e %lf", y , x , z);

    }


    //criar especificacoes
if(!((y> x && y <z) && (x < z))){

IO_printf("%s(%lf)(%lf)(%lf)\n", "y nao esta entre x e z", y ,x, z);

}
//encerrar
IO_pause("Aperte ENTER para continuar");



}


int main(){
    //definir variaveis
    int opcao = 0;
    //Identificar 
    IO_id("Programa-0.0v");
    //loop para efetuar os metodos
    do{
        //escolha de metodos
    IO_printf("%s", "Escolha um metodo(0 | 1):");
    IO_printf("%s", "\n0-Terminar\n");
    //jeito facilitado para nao efetuar varios printfs)(loop for)
for(int i = 1; i <=10; i++){
IO_printf("%d.%s_%d\n", i , "Metodo", i);

}
//metodos
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
case 7:
method_07();
break;
case 8:
method_08();
break;
case 9:
method_09();
break;
case 10:
method_10();
break;
default:
IO_printf("%s", "Erro opcao invalida");
break;

}
    }while(opcao != 0);

IO_pause("Aperte ENTER para terminar");
    }

