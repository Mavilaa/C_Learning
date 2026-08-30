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
#include "Tarefas.h"


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
printf("%d.%s-%d\n", x+1, "Extra", 1);
printf("%d.%s-%d\n", x+2, "Extra", 2);
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
case 11:
break;
default:
printf("%s\n", "ERRO:Metodo invalido!");
break;
}
}while(opcao != 0);




printf("%s\n", "Aperte ENTER para terminar");
getchar();



}