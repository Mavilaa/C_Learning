#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"exemplos.h"

int main(){
int x = 0;
do{
printf("%s\n", "Escolha um metodo: ");
printf("%s\n", "0.Terminar");
for(int i = 1; i <= 10; i++){

printf("%d.%s-%d\n", i, "Exemplo", i);



}//end for
scanf("%d", &x);getchar();

switch(x){
case 0:
break;
case 1:
example_01();
break;
default:
printf("%s", "Erro metodo invalido!");
break;
}//end switch
}while(x != 0);
//encerrar

printf("%s", "Aperte ENTER para terminar");
getchar();
}