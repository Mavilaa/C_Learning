
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
#include<ctype.h>
#include"io.h"
void method_01(void){
//definir dados
int quantidade = 0;
int valor = 0;
int controle = 0;
//identificar
IO_id("Metodo_01-v0.0");
//ler do teclado
quantidade = IO_readint("Insira uma quantidade");
//repetir para a quantidade de vezes informada
controle = 1;
while(controle <= quantidade){

valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)),":"));
//mostrar valor lido
printf("\n%s%d\n", "valor = ", valor);
//passar para o proximo valor
controle = controle +1;
}//end while


printf("%s", "Aperte ENTER para continuar");
getchar();



}


bool positive ( int x )
{
// definir dado local
 bool result = false;
// testar a condicao
 if ( x > 0 )
 {
 result = true;
 } // end if
 return ( result );
} // end positive ( )


void method_02(void){
//definir dados
int quantidade = 0;
int valor = 0;
int controle = 0;
int contador = 0;
//Identificar
IO_id("Metodo_02-v0.0");
//Ler do teclado
quantidade = IO_readint("Insira uma quantidade");
controle = 1;
while(controle<= quantidade){
valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle)), ":"));/* isso aqui junta o valor de controle com uma string,
                                                                         depois com um : e depois junta com o valor que vc inseriu*/
//testar se valor for positivo
if(positive(valor >0)){

contador = contador +1;


}
controle = controle + 1;
//mostrar a quantidade de valores positivos

}
IO_printf("%s:%d\n", "Valores positivos", contador);
//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();

}





bool belongsTo ( int x, int inferior, int superior )
{
// definir dado local
 bool result = false;
// testar a condicao
 if ( inferior < x && x < superior )
 {
 result = true;
 } // end if
 return ( result );
} // end belongsTo ( )







void method_03(void){
//definir dados
int quantidade = 0;
int valor = 0;
int controle = 0;
int contador = 0;
//Identificar
IO_id("Metodo_03-v0.0");
//Ler do teclado
quantidade = IO_readint("Insira uma quantidade");
controle = 1;
while(controle<= quantidade){
valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle)), ":"));/* isso aqui junta o valor de controle com uma string,
                                                                         depois com um : e depois junta com o valor que vc inseriu*/
//testar se valor for positivo
if(belongsTo(valor, 0, 100)){

contador = contador +1;


}
controle = controle + 1;
//mostrar a quantidade de valores positivos

}
IO_printf("%s:%d\n", "Valores positivos e menores que 100 ", contador);
//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();


}

bool even (int x){
// definir dados
    bool result = false;
    if(x % 2 == 0){

        result = true;

    }// end if
    return (result);


}

void method_04(){
    //definir dados
//definir dados
int quantidade = 0;
int valor = 0;
int controle = 0;
int contador = 0;
//Identificar
IO_id("Metodo_04-v0.0");
//Ler do teclado
quantidade = IO_readint("Insira uma quantidade: ");
controle = 1;
while(controle <= quantidade){

    valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle) ), ":")); // ler o valor e o termo ao qual ele pertence
    if(belongsTo(valor, 0, 100)&& even(valor)){

contador  = contador +1;


    }

controle = controle + 1;


}
IO_printf("%s%d\n", "Quantidade de numeros [0,100] && pares:", contador);
//encerrar
printf("%s", "Aperte ENTER para continuar");
getchar();

}


int main(){
int x = 0;
do{
IO_printf("%s", "Escolha um metodo: ");
IO_printf("%s", "\n0_Terminar\n");
for(x = 0; x <=10; x ++){

IO_printf("%d.%s_%d\n", x , "Metodo", x);

}
x = IO_readint("Opcao: ");
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
default:
printf("%s\n", "Erro opcao invalida!");
break;
}
}while(x != 0);

printf("%s", "Aperte ENTER para continuar");
getchar();

}