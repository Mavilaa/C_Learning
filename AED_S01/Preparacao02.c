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
#include"preparacao.h"

void escolha(int x){

if (x > 0){
    

escolha(x-1);
printf("%d.%s-%d\n",x, "Metodo", x );

}//end if

}//end escolha





int main(){
int opcao = 5;
int x = 0;
do{
printf("%s\n", "Escolha um metodo: ");
printf("%s\n", "0.Terminar");
escolha(opcao);
scanf("%d", &x);getchar();
switch(x){
    case 0:
    break;
    case 1:
    method_01();
    break;
      case 2:
    method_02();
    break;
    default:
    printf("%s\n", "Metodo invalido!");
    break;
}
}while(x != 0);
printf("%s\n", "Aperte ENTER para terminar");
getchar();
}