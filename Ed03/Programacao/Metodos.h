#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
#include<ctype.h>

void method_01(void){
    //Definir variaveis
chars palavra = IO_new_chars(STR_SIZE);
int tamanho = 0;
int y = 0;
char x = '\0';
//ler do teclado
 palavra = IO_readstring("Insira uma palavra: ");
 //definir tamanho da palvra
tamanho = strlen(palavra)-1;

//loop de for para definir as Letras maiusculas menores que K
for(y = 0; y<= tamanho; y++) 
{
                    
x =  (char)palavra[y];
if(('A'<=x && x<= 'Z') && ('A'<=x && x< 'K')){
IO_printf("%s %d: [%c]\n", "Letra maiuscula menor que 'K': " ,y, x );
}

} // end for

//encerrar
IO_pause("Aperte ENTER para continuar");

} // encerrar metodo 1

void method_02(void){
    //definir variaveis
chars palavra = IO_new_chars(STR_SIZE);
int y = 0;
int tamanho = 0;
char x = '\0';
//ler do teclado
palavra  = IO_readstring("Insira uma palavra ");
//definir tamanho
tamanho = strlen(palavra) -1;
//loop for
for(y = 0; y <=tamanho; y++){


char x = palavra[y];
if(('a'<=x && x<= 'z') && ('k'<x && x <='z')){

    IO_printf("%d: [%c]", y, x);

}//fim do if

}// fim do loop for

//encerrar
IO_pause("Aperte ENTER para continuar");
}//encerrar metodo 2



void method_03(void){
    //Definir variaveis
chars palavra = IO_new_chars(STR_SIZE);
int tamanho = 0;
int y = 0;
char x = '\0';
//ler do teclado
 palavra = IO_readstring("Insira uma palavra: ");
 //definir tamanho da palvra
tamanho = strlen(palavra)-1;

//loop de for para definir as Letras maiusculas menores que K
for(y = tamanho ; y>= 0; y--) 
{
                    
x =  palavra[y];
if(('A'<=x && x<= 'Z') && ('A'<=x && x< 'K')){
IO_printf("%s %d: [%c]\n", "Letra maiuscula menor que 'K': " ,y, x );
}

} // end for

//encerrar
IO_pause("Aperte ENTER para continuar");


}

void method_04(void){
    //definir variaveis
chars palavra = "";
int y = 0;
int tamanho =0;
//Ler do teclado
palavra = IO_readstring("Insira uma palavra: ");
//definir tamanho da palavra
tamanho = strlen(palavra)-1;
//loop for
for(y = 0; y <= tamanho; y++){


IO_printf("%d: [%c]", y, palavra[y]);


}// terminar loop for


IO_pause("Aperte ENTER para continuar");// encerrar o programa

}

void method_05(void){
chars palavra = "";
int y = 0;
int tamanho =0;
//Ler do teclado
palavra = IO_readstring("Insira uma palavra: ");
//definir tamanho da palavra
tamanho = strlen(palavra)-1;
//loop for
for(y = tamanho; y >=0 ; y--){


IO_printf("%d: [%c]", y, palavra[y]);


}// terminar loop for


IO_pause("Aperte ENTER para continuar");// encerrar o programa


}

void method_06(void){
  //definir variaveis
chars palavra = "";
int y = 0;
int tamanho =0;
char x = '0';
//Ler do teclado
palavra = IO_readstring("Insira uma palavra: ");
//definir tamanho da palavra
tamanho = strlen(palavra)-1;
//loop for
for(y = 0; y <= tamanho; y++){


x = palavra[y];
if((x % 2 != 0) && !('a'<= x && x <= 'z') && !('A'<= x && x <= 'Z') ){

IO_printf("%d: [%c]", y, palavra[y]);


}

}// terminar loop for


IO_pause("Aperte ENTER para continuar");// encerrar o programa

}


void method_07(void){
//definir variaveis
int x =0;
int y = 0;
int z = 0;
int qtd = 0;
int valores = 0;
//Ler do teclado
x =IO_readint("Selecione um valor para o limite inferior: ");
y =IO_readint("Selecione um valor para o limite superior: ");
qtd = IO_readint("Escolha a quantidade de valores a serem testados: ");
//loop de for para decidir os valores
for(z = 1; z<= qtd; z++ )  {    

   valores = IO_readint("Escolha um valor: ");
     
if((x<=valores && valores <=y) && (valores % 5 == 0)){

IO_printf("%d.%s%d \n", z , "Multiplo de 5 e dentro do conjunto: ",  valores);


}// end if


}//end for



IO_pause("Aperte ENTER para continuar");
}// terminar metodo 7

void method_08(void){
//definir variaveis
int x =0;
int y = 0;
int z = 0;
int qtd = 0;
int valores = 0;
//Ler do teclado
x =IO_readint("Selecione um valor para o limite inferior: ");
y =IO_readint("Selecione um valor para o limite superior: ");
qtd = IO_readint("Escolha a quantidade de valores a serem testados: ");
//loop de for para decidir os valores
for(z = 1; z<= qtd; z++ )  {    

   valores = IO_readint("Escolha um valor: ");
     
if((x<=valores && valores <=y) && (valores % 5 != 0 && valores % 3 == 0)){

IO_printf("%d.%s%d \n", z , "Multiplo de 3, nao de 5, e dentro do conjunto: ",  valores);


}// end if


}//end for

//encerrar
IO_pause("Aperte ENTER para continuar");

}//encerrar metodo 8



void method_09(void){
//definir variaveis
double x =0.0;
double y = 0.0;  
int z = 0;
int qtd = 0;
double valores = 0.0;
int w = 0;
//Ler do teclado
do{
x =IO_readdouble("Selecione um valor para o limite inferior: ");
y =IO_readdouble("Selecione um valor para o limite superior: ");}  while(x > y);//garantir que x < y
qtd = IO_readint("Escolha a quantidade de valores a serem testados: ");
//loop de for para decidir os valores
for(z = 1; z<= qtd; z++ )  {    

   valores = IO_readdouble("Escolha um valor: ");
     w = (int)valores;
     IO_printf("%d", w);
if((x<valores && valores <y) && (w %2 == 0 && w < 6)){

IO_printf("%d.%s%lf \n", z , "Parte inteira par, < 6  e dentro do conjunto: ",  valores);


}// end if


}//end for

//encerrar
IO_pause("Aperte ENTER para continuar");

}//encerrar metodo 9


void method_10(void){
    //definir variaveis
double x =0.0;
double y = 0.0;  
int z = 0;
int qtd = 0;
double valores = 0.0;
int w = 0;
bool condicao = false;
double s = 0.0;
do{
//Ler do teclado
x =IO_readdouble("Selecione um valor para o limite inferior: ");
y =IO_readdouble("Selecione um valor para o limite superior: ");
//garantir que o intervalo esteja entre 0 e 1
if((0<x && x<1) && (0<y && y<1)){

condicao = 1;
}
else{
}
}while(condicao != 1);//end do while


qtd = IO_readint("Escolha a quantidade de valores a serem testados: ");
//loop de for para decidir os valores
for(z = 1; z<= qtd; z++ )  {    

   valores = IO_readdouble("Escolha um valor: ");
     w = (int)valores;
     s = valores - w;
if((x<s && s <y)){

IO_printf("%d.%s%lf \n", z , "Parte fracionaria dentro do conjunto: ",  s);


}// end if


}//end for

//encerrar
IO_pause("Aperte ENTER para continuar");

}

