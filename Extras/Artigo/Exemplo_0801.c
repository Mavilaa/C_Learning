#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include "Exemplos.h"

void printar(int x){

if(x > 0){

printar(x-1);
printf("%d.%s-%d\n",x, "Exemplo", x );


}



}




int main(){
    //definir variaveis
int opcao = 10;
int escolha = 0;
do{
printf("%s\n", "Escolha uma opcao: ");
printf("%s\n", "0.Terminar");
printar(opcao);
scanf("%d", &escolha);getchar();
switch(escolha){
case 0:
break;
case 1:
example_01();
break;
case 2:
example_02();
break;
case 3:
example_03();
break;
case 4:
example_04();
break;
case 5:
example_05();
break;
case 6:
example_06();
break;
case 7:
example_07();
break;
case 8:
example_08();
break;
case 9:
example_09();
break;
case 10:
example_10();
break;
default:
printf("%s\n", "Exemplo invalido!");
break;
}
}while(escolha != 0);





printf("%s", "Aperte ENTER para terminar");
getchar();



}