#include"Exercicio_S02.h"
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

void recursao(int x ){
if(x> 0 ){
recursao(x-1);
printf("%d%s%d\n", x, ".Metodo-", x);



}



}






int main(){
int x = 0;
int n = 5;
do{
printf("%s\n", "Escolha um metodo: ");
printf("%s\n", "0.Terminar");
recursao(5);
scanf("%d", &x);getchar();
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
case 5:
method_05();
break;
default:
printf("%s\n", "Metodo Invalido!");
break;
}
}while(x != 0);


printf("%s\n", "Aperte ENTER para terminar");
getchar();


}