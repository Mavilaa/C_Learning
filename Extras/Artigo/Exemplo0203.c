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

void method_01 ( void )
{
    //definir dado
    int x = 0;
 // identificar
 IO_id ( "Metodo_01 - Programa - v0.0" );
 //comandos
 x =IO_readint("Entrar com um valor inteiro: ");
if(x==0){
IO_printf("%s(%d)\n", "Valor igual a zero", x);
}

if(x !=0){

IO_printf("%s(%d)\n", "Valor diferente de zero", x);
}
 // encerrar
 IO_pause ( "\nApertar ENTER para continuar.\n" );
}

//Metodo 2

void method_02(void){
        //definir dado
    int x = 0;
 // identificar
 IO_id ( "Metodo_02 - Programa - v0.0" );
 //comandos
 x =IO_readint("Entrar com um valor inteiro: ");
if(x==0){
IO_printf("%s(%d)\n", "Valor igual a zero", x);
}

else{

IO_printf("%s(%d)\n", "Valor diferente de zero", x);
}
 // encerrar
 IO_pause ( "\nApertar ENTER para continuar.\n" );

}  
//Metodo 3
void method_03(void){
        //definir dado
    int x = 0;
 // identificar
 IO_id ( "Metodo_03 - Programa - v0.0" );

 //comandos
 x =IO_readint("Entrar com um valor inteiro: ");

 //testar valor
if(x==0){
IO_printf("%s(%d)\n", "Valor igual a zero", x);
}

else{

IO_printf("%s(%d)\n", "Valor diferente de zero", x);
}
if(x>0){
    IO_printf("%s%d", "Valor maior que zero: ", x);
}
else{
 IO_printf("%s%d", "Valor menor que zero: ", x);

}
 // encerrar
 IO_pause ( "\nApertar ENTER para continuar.\n" );


}

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
for(int i =1; i <=3; i++ ){

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
case 2:
method_02();
break;
case 3:
method_03();
break;
printf("%s", "Erro opcao invalida.\n");
break;

}

 }while(opcao !=0);
// encerrar
 IO_pause("Aperte ENTER para terminar");
 return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )





