#include"MetodosE.h"
#include"io.h"
int main(){
    int opcao = 0;
    do{
printf("%s\n", "Escolha um metodo: ");
printf("%s\n", "0.Terminar");
for(int i = 1; i <=10; i++){

printf("%d.%s:%d\n", i, "Metodo", i);


}//end for
scanf("%d", &opcao);getchar();
switch(opcao){
case 0 :
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
default:
printf("%s", "Metodo invalido!");
break;
}
}while(opcao != 0);


printf("%s","Aperte ENTER para terminar");
getchar();

}//end main