#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
#include<ctype.h>

void method_01(){
    //Definir variaveis
chars palavra = IO_new_chars(STR_SIZE);
int tamanho = 0;
int y = 0;
char x = '\0';
//ler do teclado
 palavra = IO_readstring("Insira uma palavra: ");
 //definir tamanho da palvra
tamanho = strlen(palavra)-1;

//loop de for para definir as Letras maiusculas menores que K
for(y = 0; y<= tamanho; y++) 
{
                    
x =  palavra[y];
if(('A'<=x && x<= 'Z') && ('A'<=x && x< 'K')){
IO_printf("%s %d: [%c]\n", "Letra maiuscula menor que 'K': " ,y, x );
}

} // end for

//encerrar
IO_pause("Aperte ENTER para continuar");

} // encerrar metodo 1











int main(){
    //definir variaveis
int opcao = 0;
int y = 0;
//Escolha do metodo
do{
IO_printf("%s", "\n0.Terminar\n");
//iniciar for
for(y = 1; y<=1; y++){
IO_printf("%d.%s_%d\n", y, "Metodo", y);

}       //end for
//ler do teclado
opcao = IO_readint("Escolha uma opcao: ");
//Escolha dos metodos
switch(opcao){
case 0:
break;
case 1:
method_01();
break;
default:
IO_printf("Valor invalido!");
break;
}
    }while(opcao != 0);     //end do while
//encerrar 
IO_pause("Aperte ENTER para terminar");
}