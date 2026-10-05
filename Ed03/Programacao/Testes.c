#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"

//Loops de for para tanto caracteres e numeros, achei meio complicadinho quando se colocam varias condicoes e ai tem que printar tal coisa enfim chatao





int main (){
double x = 0;
int qtd = 0;//definir a quantidade de numeros que serao printados
int y = 0;
int w = 0;                  //Para que eu consiga printar la em baixo somente o valor inteiro de x, 
                            //mesmo x sendo um valor real, eu tenho que declarar w como int nao double
qtd =IO_readint("Quantidade de numeros que serao printados: ");
for(y = qtd -1; y>=0; y--){

x = IO_readdouble("Insira um valor: ");

IO_printf("%d.%lf\n", y ,x);
 w = (int) x;
 if(w % 2 == 0){                                        // condicao: ser par(Se w/ 2 tem resto = 0)

IO_printf("%d.%s%d\n", y, "Valores que passaram: ", w);
//somente passa a parte inteira do numero ou seja somente a parte inteira e testada pela condicao
/*Tambem tem jeito de fazer definindo um double e tirando a parte inteira do double e, fazendo com que essa parte real somente seja lida num conjunto.
*/
 }
}



IO_pause("Aperte ENTER para continuar");


}














void palavras (){

    chars palavra = "";
char letra = '\0';
int tamanho = 0;
int y = 0; // essa vai ser a variavel necessaria para o loop de for 
palavra = IO_readstring("Insira uma palavra: ");
//SEMPRE definir o tamanho apos definir a palavra ne obvio
tamanho = strlen(palavra) -1;        //isso aqui serve para vc ler o tamanho da palavra e tirar o caractere nulo ao final dela.
for(y = 0; y <= tamanho; y++){


letra = (char)palavra[y];               //Coloquei o char para garantir que vai ler caractere por caractere

IO_printf("%d.%c\n", y, letra);             //LEMBRAR DE COLOCAR A VARIAVEL LETRA QUE CRIEI AQUI NAO A PALAVRA DENOVO


}

IO_pause("Aperte ENTER para terminar");


}

/*                                              **********OBS*************
    chars palavra = "";
char letra = '\0';
int tamanho = 0;
int y = 0; // essa vai ser a variavel necessaria para o loop de for 
palavra = IO_readstring("Insira uma palavra: ");
//SEMPRE definir o tamanho apos definir a palavra ne obvio
tamanho = strlen(palavra) -1;        //isso aqui serve para vc ler o tamanho da palavra e tirar o caractere nulo ao final dela.
for(y tamanho ; y >= 0; y--){


letra = (char)palavra[y];               //Coloquei o char para garantir que vai ler caractere por caractere

IO_printf("%d.%c\n", y, letra);             //LEMBRAR DE COLOCAR A VARIAVEL LETRA QUE CRIEI AQUI NAO A PALAVRA DENOVO


}

IO_pause("Aperte ENTER para terminar");

*/

//essa funcao que ta ai em cima faz de tras para frente ao inves da funcao normal.