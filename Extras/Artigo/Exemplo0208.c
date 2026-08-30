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
//Metodo 4
void method_04(void){
    //definir dados
 double x = 0.0;
 //identificar
 IO_id("Metodo_04- Programa-0.0v");
//ler do teclado
x= IO_readdouble("Entrar com valor real: ");
//testar valor
if(x>=1.0 && x <=10.0){
    IO_printf("%s(%lf)\n", "Valor dentro do Intervalo[1-10]", x);

}
else{
    IO_printf("%s(%lf)\n", "Valor fora do Intervalo[1-10]",x);
}

//testar valor

if(x<1.0){
IO_printf("%s(%lf)\n", "Valor abaixo do Intervalo[1-10]", x);

}
else if(x > 10){

IO_printf("%s(%lf)\n", "Valor acima do Intervalo[1-10]", x);

}
//encerrar programa
IO_pause("Aperte enter para continuar\n");
}

void method_05(void){
char x = '_';
//identificar
 IO_id("Metodo_05- Programa-0.0v");
//ler do teclado
x= IO_readchar("Entrar com um caractere: ");
//testar valor
if(('a'<=x)&& (x <= 'z')){
    IO_printf("%s(%c)\n", "Letra minuscula", x );
}
else{
    IO_printf("%s(%c)\n", "Valor diferente de minuscula", x );
}
//testar valor
if(('A'<= x)&&(x<='Z')){

IO_printf("%s(%c)\n", "Letra maiuscula", x );

}
else{
    //testar valor
    if(('0'<= x)&&(x<= '9')){


        IO_printf("%s(%c)\n", "Algarismo", x );
    }
    else{

         IO_printf("%s(%c)\n", "Valor diferente de Algarismo", x );
    }

}


IO_pause("Aperte ENTER para continuar");
}

void method_06(void){
    //definir dado
    char x = '_';
//identificar
 IO_id("Metodo_06- Programa-0.0v");
//ler do teclado
x= IO_readchar("Entrar com um caractere: ");
//testar valores
if(('a'<= x && x <='z')||('A'<=x && x<='Z')){

IO_printf("%s(%c)\n", "Letra: ", x);
}
else{

    IO_printf("%s(%c)\n", "Valor diferente de letra", x);
}
//end if



IO_pause("Aperte ENTER para continuar");
}
void method_07(void){
//definir dado
    char x = '_';
//identificar
 IO_id("Metodo_07- Programa-0.0v");
//ler do teclado
x= IO_readchar("Entrar com um caractere: ");
//testar valores
 if ( ! ( ( 'a' <= x && x <= 'z' ) || // NAO (minuscula OU
 ( 'A' <= x && x <= 'Z' ) ) ){
    IO_printf("%s(%c)\n", "Valor diferente de letra: ", x);

}
else{
IO_printf("%s(%c)\n", "letra: ", x);

}
//encerrar programa
IO_pause("Aperte ENTER para continuar");
}

void method_08(void){
    //definir dado
    char x = '_';
//identificar
 IO_id("Metodo_08- Programa-0.0v");
//ler do teclado
x= IO_readchar("Entrar com um caractere['0', 'A', 'a'] ");

switch(x){

case '0':
IO_printf("%s(%c==%d)\n", "Valor igual do simbolo zero: ",x ,x );
break;
case 'A':
IO_printf("%s(%c==%d)\n", "Valor da letra 'A': ");
break;
case 'a':
IO_printf("%s(%c==%d)\n", "Valor da letra 'a': ");
break;
default:
IO_printf("%s(%c==%d)\n", "Valor diferente das opcoes['0', 'A', 'a']", x , x);

}//end switch
//Encerrar programa
IO_pause("Aperte ENTER para continuar");
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
for(int i =1; i <=8; i++ ){

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
printf("%s", "Erro opcao invalida.\n");
break;

}

 }while(opcao !=0);
// encerrar
 IO_pause("Aperte ENTER para terminar");
 return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )





