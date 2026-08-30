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

//Metodo 1

//Funcao principal

int main (  )
{
// definir dado
 int opcao = 0;
// identificar
 printf ( "%s\n", "Exemplo0200 - Programa = v0.0" );
 printf ( "%s\n", "Autor:Gustavo Martins de Avila" );
 printf ( "\n" ); // mudar de linha
// acoes
// repetir
 do{
printf("%s","Escolha um metodo:\n");
printf("%s", "0.Terminar\n");
for(int i =1; i <=10; i++ ){

IO_printf("%d.%s-%d\n", i, "Metodo",  i);

}
scanf("%d", &opcao);
getchar();
switch(opcao){

case 0:
break;
case 1:
method_01();
break;
default:
printf("%s", "Erro opcao invalida.\n");
break;

}

 }while(opcao !=0);
// encerrar
 IO_pause("Aperte ENTER para terminar");
 return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )





