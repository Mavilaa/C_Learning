#include"Tarefa.hpp"


void recursao(int n){
if(n > 0){
recursao(n-1);
cout<<n<<".Metodo-"<<n<<endl;

}

}





int main(){
int n = 12;
int opcao = 0;
do{
cout<<"Escolha um metodo:"<<endl;
cout<<"0.Terminar"<<endl;
recursao(n);
cin>>opcao;getchar();
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
case 11:
method_11();
break;
case 12:
method_12();
break;
default:
cout<<"Erro: Exemplo nao existente."<<endl;
break;
}
}while(opcao != 0);


cout<<"Aperte ENTER para terminar"<<endl;
getchar();

}