#include"MetodosT.h"
#include"io.h"
int main(){
    int opcao = 0;
    do{
printf("%s\n", "Escolha um metodo: ");
printf("%s\n", "0.Terminar");
for(int i = 0; i <=10; i++){

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
printf("%s", "Metodo invalido!");
break;
}
}while(opcao != 0);


printf("%s\n","Aperte ENTER para terminar");
getchar();

}//end main