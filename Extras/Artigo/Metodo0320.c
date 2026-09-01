#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
#include<ctype.h>
#include"Metodos.h"
int main(){
    //definir variaveis
int opcao = 0;
int y = 0;
//Escolha do metodo
do{
IO_printf("%s", "\n0.Terminar\n");
//iniciar for
for(y = 1; y<=10; y++){
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
case 9:
method_09();
break;
case 10:
method_10();
break;
default:
IO_printf("Valor invalido!");
break;
}
    }while(opcao != 0);     //end do while
//encerrar 
IO_pause("Aperte ENTER para terminar");
}