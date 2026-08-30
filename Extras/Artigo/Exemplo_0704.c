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



int exemplos(int x, int y){

if(y <= x){
printf("%d.%s%d\n",  y,"Exemplo_", y );
exemplos(x, y + 1);
}


return (x);

} 



int main(){
int exemplo = 10;
int controle = 0;
int opcao = 0;
do{
printf("%s\n", "Escolha um exemplo: ");
printf("%s\n", "0.Terminar");
exemplos(exemplo, controle + 1);
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
    default:
    printf("%s", "Erro, Opcao invalida!");
    break;
}
}while(opcao != 0);
printf("%s\n", "Aperte ENTER para terminar");
getchar();


}




/*
int main(){
int opcao = 0;
do{
printf("%s\n", "Escolha um Exemplo: ");
printf("0.Terminar\n");
for(int i = 1; i <= 10; i++){

printf("%d.%s-%d\n", i, "Exemplo", i);



}
scanf("%d", &opcao);getchar();
switch(opcao){
    case 0:
    break;
    case 1:
    break;
    default:
    printf("%s", "Erro, Opcao invalida!");
    break;
}
}while(opcao != 0);


printf("%s", "Aperte ENTER para terminar");
getchar();

}

*/