#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
#include<ctype.h>
int main(){
//definir variaveis
    chars linha = "";
    int tamanho = 0;
    char x = 0;
    int y = 0;
    //ler do teclado
    linha = IO_readln("Insira uma linha de caracteres: ");
    //definir tamanho da linha
    tamanho = strlen(linha) -1;
    //loop for
    for(y =0; y<= tamanho; y++){


        x = linha[y];
        
        if(('0'<= x && x <='9') || ('a'<=x && x<='z') || ('A'<=x && x<='Z')){

            IO_printf("%d.%s%c\n", y, "Caractere: ", x);

        }// end if
    }//end for




IO_pause("Aperte ENTER para terminar"); // terminar


}