#include"io.h"
#include"Metodos.h"
int main(){
 int opcao = 0;
 do{
 printf("%s\n", "Escolha um metodo: ");
 printf("%s\n", "0.Terminar");
 for(int i = 1; i <=2; i++){

printf("%d%s%d\n", i , ".Metodo: ", i);
 }//end for
 
opcao = IO_readint("Metodo:");
switch(opcao){
case 0 :
break;
case 1:
method_11();
break;
case 2:
method_12();
break;
default:
printf("%s", "Opcao invalida!");
break;
}
 }while(opcao != 0);

IO_pause("Aperte ENTER para terminar");

}