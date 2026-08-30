#include"Exercicios.hpp"

void recursao(int n){
if(n > 0){
recursao(n-1);
cout<<n<<".Exercicio-"<<n<<endl;
}
}

int main(){
int opcao = 0;
int n = 10;
do{
cout<<"Escolha um Metodo: "<<endl;
cout<<"0.Terminar"<<endl;
recursao(n);
cin>>opcao;
getchar();
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
cout<<"Exemplo invalido!"<<endl;
break;
}
}while(opcao != 0);

cout<<"Aperte ENTER para terminar"<<endl;
getchar();
}