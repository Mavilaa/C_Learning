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
double x =0;
double y = 0;  
int z = 0;
int qtd = 0;
double valores = 0;
int w = 0;
//Ler do teclado
do{
x =IO_readint("Selecione um valor para o limite inferior: ");
y =IO_readint("Selecione um valor para o limite superior: ");}  while(x > y);//garantir que x < y
qtd = IO_readint("Escolha a quantidade de valores a serem testados: ");
//loop de for para decidir os valores
for(z = 1; z<= qtd; z++ )  {    

   valores = IO_readint("Escolha um valor: ");
     w = (int)valores;
if((x<valores && valores <y) && (w %2 == 0 && w < 6)){

IO_printf("%d.%s%lf \n", z , "Parte inteira par, < 6  e dentro do conjunto: ",  valores);


}// end if


}//end for

//encerrar
IO_pause("Aperte ENTER para continuar");



}//encerrar metodo 9


int main(){
    //definir variaveis
int opcao = 0;
int y = 0;
//Escolha do metodo
do{
IO_printf("%s", "\n0.Terminar\n");
//iniciar for
for(y = 1; y<=9; y++){
IO_printf("%d.%s_%d\n", y, "Metodo", y);

}       //end for
//ler do teclado
opcao = IO_readint("Escolha uma opcao: ");
//Escolha dos metodos
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
default:
IO_printf("Valor invalido!");
break;
}
    }while(opcao != 0);     //end do while
//encerrar 
IO_pause("Aperte ENTER para terminar");
}