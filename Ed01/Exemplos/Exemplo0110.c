/*Exemplo0005- v0.0 - 24 / 02 / 2026
Author:Gustavo martins de avila*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
    //funcao principal
int main(int agrc, char* argv[]){
    //declarando variaveis
    int opcao = 0;
    int i = 0;
    //declarando informacoes
    printf("%s\n", "Exemplo0110 - Programa= 0.0v");
    printf("%s\n","Autor:Gustavo martins de avila");
    printf("\n");
    //acoes
        //comandos
do{
    printf("\nOpcoes:");
    printf("\n 0- Terminar\n");
    for(int i = 1; i<= 10; i++){
printf("%d-Metodo-%d\n", i, i);
    }
    printf("\n");
    printf("\n%s", "Opcao: ");
    scanf("%d", &opcao);
    getchar();
    printf("\nOpcao: %d ", opcao);
  
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
    default:printf("\nErro:Opcao invalida.\n");
    }
}while(opcao != 0);
    printf ( "\n\nApertar ENTER para terminar." );
    getchar();
    return 0;
}
/*Exemplo0110 - Programa= 0.0v
Autor:Gustavo martins de avila


Opcoes:
 0- Terminar
1-Metodo-1
2-Metodo-2
3-Metodo-3
4-Metodo-4
5-Metodo-5
6-Metodo-6
7-Metodo-7
8-Metodo-8
9-Metodo-9
10-Metodo-10


Opcao: 10

Opcao: 10 Metodo 10- Programa - 0.0v
Autor: ________________________


 a=abc b= def

c=[abc]+[def]=abcdef
c=A
x = 5
w = 1
y = 3.500000
char = d
c=d
double = 3.14
c=3.140000
int = 10
c=10
bool = 1
c=1
chars = theldo
c=theldo
line = linha
c=linha

Aperte ENTER para continuar


Opcoes:
 0- Terminar
1-Metodo-1
2-Metodo-2
3-Metodo-3
4-Metodo-4
5-Metodo-5
6-Metodo-6
7-Metodo-7
8-Metodo-8
9-Metodo-9
10-Metodo-10


Opcao: 0

Opcao: 0

Apertar ENTER para terminar.*/