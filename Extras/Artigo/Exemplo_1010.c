#include <stdio.h>     // para entradas e saidas
#include <stddef.h>    // para definicoes basicas
#include <stdlib.h>    // para a biblioteca padrao
#include <string.h>    // para cadeias de caracteres
#include <stdarg.h>    // para tratar argumentos
#include <stdbool.h>   // para definicoes logicas
#include <ctype.h>     // para tipos padroes
#include <math.h>      // para definicoes matematicas
#include <time.h>      // para medir tempo
#include <wchar.h>     // para 16-bit characters
#include <iso646.h>    // para and, or, xor, not alternatives
#include "Exemplos.h"


void recursao(int x){

if(x> 0){
recursao(x-1);
printf("%d.%s-%d\n", x, "Metodo", x);                                     


}


}




int main(){
int x = 10;
int opcao = 0;
do{
printf("%s\n", "Escolha um metodo: ");
printf("%s\n", "0.Terminar");
recursao(x);
scanf("%d", &opcao);getchar();
switch(opcao){
case 0:
break;
case 1:
example_01();
break;
case 2:
example_02();
break;
case 3:
example_03();
break;
case 4:
example_04();
break;
case 5:
example_05();
break;
case 6:
example_06();
break;
case 7:
example_07();
break;
case 8:
example_08();
break;
case 9:
example_09();
break;
case 10:
example_10();
break;
default:
printf("%s\n", "ERRO:Metodo invalido!");
break;
}
}while(opcao != 0);




printf("%s\n", "Aperte ENTER para terminar");
getchar();



}