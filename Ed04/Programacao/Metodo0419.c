#include"io.h"
#include"Metodos.h"

int main(){
    int opcao = 0;
    do{
IO_printf("%s", "Escolha um metodo\n");
IO_printf("0.Terminar\n");
for(opcao = 1; opcao <=10; opcao ++){

printf("%d.%s:%d\n", opcao, "Metodo", opcao);

}


opcao =IO_readint("Metodo:");
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
    default:
    IO_printf("%s", "Metodo invalido!");
}
}while(opcao != 0);

printf("Aperte ENTER para continuar");
getchar();
}