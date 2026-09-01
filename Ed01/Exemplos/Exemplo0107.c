/*Exemplo0005- v0.0 - 24 / 02 / 2026
Author:Gustavo martins de avila*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
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
//Metodo 4
void method_04(){
bool x = false;
int y = 0;
// identificar
 printf ("EXEMPLO0104 - Programa - v0.0\n");
 //printar variavel x
 printf("x= %d\n", x);
 //printar y
 printf("Entrar com um valor logico(0 ou 1): ");
 scanf("%d", &y);getchar();
 //printar x quando y nao e igual a 0
x =(y!= 0);
printf("%d\n", x);
//encerrar
printf("Aperte ENTER para continuar");
getchar();

}
//Metodo 5

/**
 Method_05.
*/
void method_05 ( void )
{
// definir dado
 char x [80] = "abc"; // definir variavel com tamanho e valor inicial
 char *px = &x[0]; // definir alternativa para acesso via endereco
// identificar
 printf ( "\n%s\n", "Method_05 - Programa - v0.0" );
// mostrar valor inicial
 printf ( "\n%s%s\n", "x = ", x );
// OBS.: O formato para caracteres -> %s
// ler do teclado
 printf ( "Entrar com uma cadeia de caracteres: " );
 scanf ( "%s", x );
// OBS.: Nao devera' ser usado o endereco dessa vez !
// O tamanho do valor NAO devera' ultrapassar 80 símbolos.
 getchar ( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido
 printf ( "%s%s\n", "x = ", x );
// ler do teclado (forma alternativa para acesso via endereco)
 printf ( "Entrar com outra cadeia de caracteres: " );
 scanf ( "%s", px );getchar( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido (forma alternativa para acesso via endereco)
 printf ( "%s%s\n", "x = ", px );
// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // a
}
//Metodo 6
void method_06(void){
    //variaveis
int x = 0;
int y = 0;
int z = 0;
int *py = &y;

//identificar
printf ( "\nMethod_06 - Programa - v0.0\n" );
//valores iniciais
printf("x= %d\n", x);
printf("y= %d\n", y);
//ler do teclado
printf("Entre um valor para inteiro x:");
scanf("%d", &x);
getchar();
printf("Entre um valor para inteiro py:");
scanf("%d", py);
getchar();
//operar valores
z= x*y;
//printar z
printf("%d*%d= %d\n", x, y, z);
printf("Aperte ENTER para continuar");
getchar();
}
void method_07(void){
//variaveis
char x [80]= "abc";
char y [80]= "def";
char z [80];
strcpy(z,"");
//identificar
printf ( "\n%s\n", "Method_07 - Programa - v0.0" );
// mostrar valores iniciais e comprimentos das cadeias
printf("x= %s\n", x, strlen(x));
printf("y= %s\n", y, strlen(y));
//ler do teclado
printf("Entrar com caracteres: ");
scanf("%s", x);getchar();
printf("Entrar com  outros caracteres: ");
scanf("%s", y);getchar();
//operar valores
strcpy(z,x);
strcat(z,y);
//mostrar valor resultante
printf("%s= %s*%s\n",z ,x ,y);
// operar valores (forma alternativa)
 strcpy ( z, strcat ( strdup(x), y ) );  
 //mostrar valor resultante
 printf("%s= %s*%s\n", z,x,y );
 //encerrar 
 printf("Aperte ENTER para continuar\n");
 getchar();  
}
    //funcao principal
int main(int agrc, char* argv[]){
    //declarando variaveis
    int opcao = 0;
    int i = 0;
    //declarando informacoes
    printf("%s\n", "Exemplo0107 - Programa= 0.0v");
    printf("%s\n","Autor:Gustavo martins de avila");
    printf("\n");
    //acoes
        //comandos
do{
    printf("\nOpcoes:");
    printf("\n 0- Terminar\n");
    for(int i = 1; i<= 7; i++){
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
    default:printf("\nErro:Opcao invalida.\n");
    }
}while(opcao != 0);
    printf ( "\n\nApertar ENTER para terminar." );
    getchar();
    return 0;
}
/*Exemplo0107 - Programa= 0.0v
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


Opcao: 7

Opcao: 7
Method_07 - Programa - v0.0
x= abc
y= def
Entrar com caracteres: gus
Entrar com  outros caracteres: tavo
gustavo= gus*tavo
gustavo= gus*tavo
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


Opcao: 0

Opcao: 0

Apertar ENTER para terminar.*/