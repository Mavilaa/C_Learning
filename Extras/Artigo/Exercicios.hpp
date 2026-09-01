#include<iostream>
#include <iomanip>
#include <fstream>
#include <string>
void pause ( std::string text )
{
 std::string dummy;
 std::cin.clear ( );
 std::cout << std::endl << text;
 std::cin.ignore( );
 std::getline(std::cin, dummy);
 std::cout << std::endl << std::endl;
} // end pause ( )
#include<limits>
#include"Exercicio_class.hpp"





void method_01(){
    int n = 0;
    cout<<"Insira a quantidade:"<<endl;
    cin>>n;
Array<int> array(n,0);
int inf = 0;
int sup = 0;
cout<<"Insira um valor para o limite inferior:"<<endl;
cin>>inf;
cout<<"Insira um valor para o limite superior:"<<endl;
cin>>sup;
array.random_number(inf, sup);
array.fprint("DADOS1.TXT");

pause("Aperte ENTER para continuar");
}





void method_02(){
Array<int> array(5,0);
int maior = 0;

array.fread("DADOS1.TXT");

maior = array.search_even();

cout<<"Maior valor par: "<<maior<<endl;


pause("Aperte ENTER para continuar");
}




void method_03(){
Array<int> array(5,0);
int maior = 0;

array.fread("DADOS1.TXT");

maior = array.search_even5();

cout<<"Maior valor par e multiplo de 5: "<<maior<<endl;


pause("Aperte ENTER para continuar");
}


void method_04(){
    int soma = 0;
Array<int> array(5,0);
int inf = 0;
int sup = 0;
int limite = 0;
array.fread("DADOS1.TXT");
limite = array.getlength("DADOS1.TXT");
cout<<"Insira um valor para o limite inferior:"<<"["<<0<<","<<limite<<"]:"<<endl;
cin>>inf;
cout<<"Insira um valor para o limite superior:"<<"["<<inf<<","<<limite<<"]:"<<endl;
cin>>sup;
soma = array.sum_array(inf, sup);

cout<<"Soma dos valores entre"<<"["<<inf<<","<<sup<<"]:"<<soma<<endl;
pause("Aperte ENTER para continuar");
}

void method_05(){
    int media = 0;
Array<int> array(5,0);
int limite = 0;
int inf = 0;
int sup = 0;
array.fread("DADOS1.TXT");
limite = array.getlength("DADOS1.TXT");
cout<<"Insira um valor para o limite inferior:"<<"["<<0<<","<<limite<<"]:"<<endl;
cin>>inf;
cout<<"Insira um valor para o limite superior:"<<"["<<inf<<","<<limite<<"]:"<<endl;
cin>>sup;
media = array.avg_array(inf, sup);

cout<<"Media dos valores entre"<<"["<<inf<<","<<sup<<"]:"<<media<<endl;
pause("Aperte ENTER para continuar");
}



void method_06(){
Array<int> array(5,0);
bool x = false;
array.fread("DADOS1.TXT");

x = array.positive();

cout<<"Todos os valores estao entre[0] e [100]: "<<x<<endl;


pause("Aperte ENTER para continuar");

}


void method_07(){
Array<int> array(5,0);
bool x = false;
array.fread("DADOS1.TXT");

x = array.is_decrescent();


cout<<"Esta em ordem decrescente: "<<x<<endl;


pause("Aperte ENTER para continuar");
}


void method_08(){
Array<int> array(5,0);
int limite = 0;
int inf = 0;
int sup = 0;
int num = 0;
bool x = false;
array.fread("DADOS1.TXT");
limite = array.getlength("DADOS1.TXT");
cout<<"Insira um valor para o limite inferior:"<<"["<<0<<","<<limite-1<<"]:"<<endl;
cin>>inf;
cout<<"Insira um valor para o limite superior:"<<"["<<inf<<","<<limite-1<<"]:"<<endl;
cin>>sup;
cout<<"Escolha um numero para procurar: "<<endl;
cin>>num;
x = array.search_array(num, inf, sup);

cout<<"Esta na array: "<<x<<endl;

pause("Aperte ENTER para continuar");
}

void method_09(){
Array<int> array(5,0);
int limite = 0;
int inf = 0;
int sup = 0;
int sum = 0;
array.fread("DADOS1.TXT");
limite = array.getlength("DADOS1.TXT");
cout<<"Insira um valor para o limite inferior:"<<"["<<0<<","<<limite-1<<"]:"<<endl;
cin>>inf;
cout<<"Insira um valor para o limite superior:"<<"["<<inf<<","<<limite-1<<"]:"<<endl;
cin>>sup;

sum = array.multiply_array(inf, sup, -1);

cout<<"Soma da array multiplicada pela constante: "<<sum<<endl;

pause("Aperte ENTER para continuar");
}

void method_10(){
Array<int> array(5,0);
array.fread("DADOS1.TXT");
array.sort_array_down();
array.print();


pause("Aperte ENTER para continuar");
}

