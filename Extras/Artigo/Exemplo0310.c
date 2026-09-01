#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
/*
 Exemplo0200 - v0.0. - 10 / 03 / 2026
 Author: Gustavo Martins de Avila
*/

//metodo 1 
void method_01(void){
    //definir dados
int x = 0;
//identificar
IO_id("Metodo_01-Programa-v0.0");

//Ler valor do teclado
x= IO_readint("Insira um valor para x");
//start while
while(x>0){
//mostrar valor atual
IO_println(IO_toString_d(x));
x--;

}//end while

//encerrar
IO_pause("Aperte ENTER para continuar");

}// end method_01

void method_02(){
    //definir dados
int x = 0;
int y = 0;
//identificar
IO_id("Metodo_02-Programa-v0.0");

//Ler valor do teclado
x= IO_readint("Insira um valor para x:");
//repetir x vezes
y = x;
while(y>0){
//mostrar valor atual
IO_println(IO_toString_d(y));
y--;                                        //Descrescente
//Isso serve para conservar a variavel x, caso a precise no futuro
}//end while

//encerrar
IO_pause("Aperte ENTER para continuar");

    
}

void method_03(){
    //definir dados
int x = 0;
int y = 0;
//identificar
IO_id("Metodo_03-Programa-v0.0");

//Ler valor do teclado
x= IO_readint("Insira um valor para x:");
//repetir x vezes
y = 1;
while(y<=x){
//mostrar valor atual
IO_println(IO_toString_d(y));
y++;                                        //Crescente
//Isso serve para conservar a variavel x, caso a precise no futuro
}//end while

//encerrar
IO_pause("Aperte ENTER para continuar");

    
}

void method_04(){
    //definir dados
int x = 0;
int y = 0;
int z = 0;
//identificar
IO_id("Metodo_04-Programa-v0.0");

//Ler valor do teclado
x= IO_readint("Insira um valor para x:");
//repetir(x)vezes
//inicio teste variacao
for(y= 1; y <=x; y++){
    //ler valor de z
z = IO_readint("Valor z= ");


IO_printf("%d.%d\n", y,z );

}   //end for

//encerrar
IO_pause("Aperte ENTER para continuar");

    

}

void method_05(){
    //definir dados
int x = 0;
int y = 0;
int z = 0;
//identificar
IO_id("Metodo_05-Programa-v0.0");

//Ler valor do teclado
x= IO_readint("Insira um valor para x:");
//repetir(x)vezes
//inicio teste variacao
for(y = x; y >=1; y--){
    //ler valor de z
z = IO_readint("Valor z= ");


IO_printf("%d.%d\n", y,z );

}   //end for

//encerrar
IO_pause("Aperte ENTER para continuar");

    
}

void method_06(){
    //definir dados
int x = 0;
int y = 0;
chars palavra = IO_new_chars(STR_SIZE);
int tamanho = 0;
//identificar
IO_id("Metodo_06-Programa-v0.0");
//Ler palavra
palavra = IO_readstring("Entrar com uma palavra: ");
//repetir para cada letra
tamanho = strlen(palavra) -1;           // Isso serve para tirar o caractere nulo ao final da string
//teste variacao
for(y = tamanho; y>=1; y--) 
{
IO_printf("%d:[%c]\n", y, palavra[y]);  // isso significa que y vai ter o tamanho da frase ou palavra que escolheu e,
                                        // vai tirando as letras da ultima ate a primeira


} // end for
//encerrar
IO_pause("Aperte ENTER para continuar");


}

void method_07(){
       //definir dados
int x = 0;
int y = 0;
chars palavra = IO_new_chars(STR_SIZE);
int tamanho = 0;
//identificar
IO_id("Metodo_07-Programa-v0.0");
//Ler palavra
palavra = IO_readstring("Entrar com uma palavra: ");
//repetir para cada letra
tamanho = strlen(palavra) -1;           // Isso serve para tirar o caractere nulo ao final da string
//teste variacao
for(y = 0; y<= tamanho; y++) 
{
IO_printf("%d:[%c]\n", y, palavra[y]);  // isso significa que y vai ter o tamanho da frase ou palavra que escolheu e,
                                        // vai colocando as letras da primeira ate a ultima 


} // end for
//encerrar
IO_pause("Aperte ENTER para continuar");


}


void method_08(){
    //definir variaveis
int inferior = 0;
int superior = 0;
int x = 0;
//Identificar programa
IO_id("Metodo_08-Programa-v0.0");
//Ler valores
inferior =IO_readint("Limite inferior do intervalo: ");
superior = IO_readint("Limite superior do intervalo: ");
//inicio teste variacao
for(x = inferior; x <= superior; x++){
//mostrar valor atual
IO_printf("%d\n", x);

} // end for


//encerrar
IO_pause("Aperte ENTER para continuar");
}   //end method




void method_09(){
    //definir variaveis
double inferior = 0.0;
double superior = 0.0;
double passo = 0.0;
double x = 0.0;
//Identificar programa
IO_id("Metodo_09-Programa-v0.0");
//Ler valores
inferior =IO_readdouble("Limite inferior do intervalo: ");
superior = IO_readdouble("Limite superior do intervalo: ");
passo = IO_readdouble("Variacao no intervalo(passo):  "); // quantidade que vai ser adicionada/ retirada de x 
//inicio teste variacao
for(x = superior; x >= inferior; x= x - passo){
//mostrar valor atual
IO_printf("%lf\n", x);

} // end for


//encerrar
IO_pause("Aperte ENTER para continuar");


}


void method_10(){
       //definir variaveis
double inferior = 0.0;
double superior = 0.0;
double passo = 0.0;
double x = 0.0;
//Identificar programa
IO_id("Metodo_09-Programa-v0.0");
//Ler valores
inferior =IO_readdouble("Limite inferior do intervalo: ");
do{
superior = IO_readdouble("Limite superior do intervalo");
}while(inferior >= superior);
do{
passo = IO_readdouble("Variacao no intervalo(passo)");
}while(passo <= 0.0);
//inicio teste variacao
for(x = superior; x >= inferior; x= x - passo){
//mostrar valor atual
IO_printf("%lf\n", x);

} // end for


//encerrar
IO_pause("Aperte ENTER para continuar");


}

/*
*/ 

int main(){
    //definir dados
    int  x =0;
    //repetir ate parar 
    do{
        //identificar programa
        IO_id("Exemplo0300-Programa-v0.0");
        //ler opcao
        IO_println("Opcoes:");
        IO_println("\n0.Terminar\n");
        for(int i = 1; i <=10; i++){

            IO_printf("%d.%s_%d\n", i , "Metodo", i);

        } // end for

        //escolher metodos
     x = IO_readint("Escolha um metodo:"); 
switch(x){
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
} //end switch
    }while (x != 0); // end do-while loop

IO_pause("Aperte ENTER para continuar"); // encerrar programa

}