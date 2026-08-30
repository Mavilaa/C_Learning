
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
#include<ctype.h>
#include"io.h"
#include"Metodos.h"
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
default:
printf("%s\n", "Erro opcao invalida!");
break;
}
}while(x != 0);

printf("%s", "Aperte ENTER para continuar");
getchar();

}