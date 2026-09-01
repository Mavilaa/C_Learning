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
#include"Exemplos.h"
#include"Tarefas.h"


void recursao(int x ){
if(x>0){
recursao(x-1);
printf("%d.%s-%d\n", x, "Metodo"  ,x);

}



}


int main(){
int x = 0;
int opcao = 10;
do{
printf("%s\n", "Escolha uma opcao: ");

printf("%s\n", "0.Terminar");

recursao(opcao);
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
    printf("%s\n", "Erro: Exemplo invalido!");
    break;
}
}while(x != 0);

printf("%s", "Aperte ENTER para terminar");
getchar();

}