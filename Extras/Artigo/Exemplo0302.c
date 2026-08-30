#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include"io.h"
/*
 Exemplo0200 - v0.0. - 10 / 03 / 2026
 Author: Gustavo Martins de Avila
*/

//metodo 1 
void method_01(void){
    //definir dados
int x = 0;
//identificar
IO_id("Metodo_01-Programa-v0.0");

//Ler valor do teclado
x= IO_readint("Insira um valor para x");
//start while
while(x>0){
//mostrar valor atual
IO_println(IO_toString_d(x));
x--;

}//end while

//encerrar
IO_pause("Aperte ENTER para continuar");

}// end method_01

void method_02(){
    //definir dados
int x = 0;
int y = 0;
//identificar
IO_id("Metodo_01-Programa-v0.0");

//Ler valor do teclado
x= IO_readint("Insira um valor para x:");
//repetir x vezes
y = x;
while(y>0){
//mostrar valor atual
IO_println(IO_toString_d(y));
y--;
//Isso serve para conservar a variavel x, caso a precise no futuro
}//end while

//encerrar
IO_pause("Aperte ENTER para continuar");

    
}






/*
*/ 

int main(){
    //definir dados
    int  x =0;
    //repetir ate parar 
    do{
        //identificar programa
        IO_id("Exemplo0300-Programa-v0.0");
        //ler opcao
        IO_println("Opcoes:");
        IO_println("\n0.Terminar\n");
        for(int i = 1; i <=2; i++){

            IO_printf("%d.%s_%d\n", i , "Metodo", i);

        } // end for

        //escolher metodos
     x = IO_readint("Escolha um metodo:"); 
switch(x){
case 0:
break;
case 1:
method_01();
break;
case 2:
method_02();
break;
default:
IO_printf("%s", "Erro opcao invalida");
break;
} //end switch
    }while (x != 0); // end do-while loop

IO_pause("Aperte ENTER para continuar"); // encerrar programa

}