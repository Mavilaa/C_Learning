#include"MetodosT.h"
#include"io.h"
int main(){
    int opcao = 0;
    do{
printf("%s\n", "Escolha um metodo: ");
printf("%s\n", "0.Terminar");
for(int i = 1; i <=2; i++){

printf("%d.%s:%d\n", i, "Metodo", i);


}//end for
scanf("%d", &opcao);getchar();
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
printf("%s", "Metodo invalido!");
break;
}
}while(opcao != 0);


printf("%s\n","Aperte ENTER para terminar");
getchar();

}//end main