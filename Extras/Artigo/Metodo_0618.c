#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"Metodos.h"

int main(){
int x = 0;
do{
printf("%s\n", "Escolha um metodo: ");
printf("%s\n", "0.Terminar");
for(int i = 1; i <= 10; i++){

printf("%d.%s-%d\n", i, "Metodo", i);



}//end for
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
case 6:
method_06();
break;
case 7:
method_07();
break;
case 8:
method_08();
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