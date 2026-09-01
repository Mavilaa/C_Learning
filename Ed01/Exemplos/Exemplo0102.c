/*Exemplo0005- v0.0 - 24 / 02 / 2026
Author:Gustavo martins de avila*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
//declarar a outra funcao
void method_01(void){
    //definir dado
    int x = 0;
    printf(" Metodo1\n");
    printf ( "\n\nApertar ENTER para continuar." );
    getchar();
//mostrar valor inicial
printf("\nx= %d", x);
printf("\n&x=%p\n", &x);
//ler do teclado
printf("Entre um numero inteiro: ");
scanf("%d", &x);getchar();
printf("x=%d", x);
}

//Metodo 2
void method_02(void){
//variaveis
double x = 0.0;
//identificando programa
printf("Method_02-Programa-0.0v\n");
//mostrar valor inicial
printf("%lf\n", x);
printf("Entre um valor real:");
scanf("%lf", &x);getchar();
//mostrar valor lido
printf("x= %lf\n", x);
//Encerrar
printf("Aperte enter para terminar");
getchar();
}

    //funcao principal
int main(int agrc, char* argv[]){
    //declarando variaveis
    int opcao = 0;
    int i = 0;
    //declarando informacoes
    printf("%s\n", "Exemplo0102 - Programa= 0.0v");
    printf("%s\n","Autor:Gustavo martins de avila");
    printf("\n");
    //acoes
        //comandos
do{
    printf("\nOpcoes:");
    printf("\n 0- Terminar\n");
    for(int i = 1; i<= 2; i++){
printf("%d-Metodo0%d\n", i, i);
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
    default:printf("\nErro:Opcao invalida.\n");
    }
}while(opcao != 0);
    printf ( "\n\nApertar ENTER para terminar." );
    getchar();
    return 0;
}
/*Exemplo0102 - Programa= 0.0v
Autor:Gustavo martins de avila


Opcoes:
 0- Terminar
1-Metodo01
2-Metodo02


Opcao: 2

Opcao: 2 Method_02-Programa-0.0v
0.000000
Entre um valor real:3.14159
x= 3.141590
Aperte enter para terminar

Opcoes:
 0- Terminar
1-Metodo01
2-Metodo02


Opcao: 0 

Opcao: 0

Apertar ENTER para terminar.*/