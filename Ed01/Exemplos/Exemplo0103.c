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

//Metodo 3
void method_03(void){
//definir variavel
char x = 'A';
//identificar programa
printf("Method_03-Programa-0.0v\n");
//Mostrar valor da variavel
printf("x= %c\n", x);
//novo valor da variavel
printf("Entrar com um caractere: ");
scanf("%c", &x);getchar();
//printar novo valor
printf("x=%c\n", x);
//encerrar
printf("Apertar ENTER para continuar");
getchar();
}

    //funcao principal
int main(int agrc, char* argv[]){
    //declarando variaveis
    int opcao = 0;
    int i = 0;
    //declarando informacoes
    printf("%s\n", "Exemplo0103 - Programa= 0.0v");
    printf("%s\n","Autor:Gustavo martins de avila");
    printf("\n");
    //acoes
        //comandos
do{
    printf("\nOpcoes:");
    printf("\n 0- Terminar\n");
    for(int i = 1; i<= 3; i++){
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
     case 3:
    method_03();
    break;
    default:printf("\nErro:Opcao invalida.\n");
    }
}while(opcao != 0);
    printf ( "\n\nApertar ENTER para terminar." );
    getchar();
    return 0;
}
/*Exemplo0103 - Programa= 0.0v
Autor:Gustavo martins de avila


Opcoes:
 0- Terminar
1-Metodo01
2-Metodo02
3-Metodo03


Opcao: 3

Opcao: 3 Method_03-Programa-0.0v
x= A
Entrar com um caractere: c
x=c
Apertar ENTER para continuar

Opcoes:
 0- Terminar
1-Metodo01
2-Metodo02
3-Metodo03


Opcao: 0

Opcao: 0

Apertar ENTER para terminar.*/