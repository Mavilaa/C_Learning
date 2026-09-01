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
#include"Extra_class.hpp"








void extra_01(){
   int n = 0;
    cout<<"Insira a quantidade:"<<endl;
    cin>>n;
Array<int> array1(n,0);
Array<int> array2(n,0);
int inf = 0;
int sup = 0;
bool z = true;
cout<<"Insira um valor para o limite inferior:"<<endl;
cin>>inf;
cout<<"Insira um valor para o limite superior:"<<endl;
cin>>sup;
array1.random_number(inf, sup);
array2.choose(inf, sup);
array1.print();
array2.print();

z = array1.different(array1, array2);


cout<<"As arrays sao iguais:  "<<z<<endl;
pause("Aperte ENTER para continuar");
}

void extra_02(){
   int n = 0;
    cout<<"Insira a quantidade:"<<endl;
    cin>>n;
Array<int> array1(n,0);
Array<int> array2(n,0);
int inf = 0;
int sup = 0;
int z = 0;
cout<<"Insira um valor para o limite inferior:"<<endl;
cin>>inf;
cout<<"Insira um valor para o limite superior:"<<endl;
cin>>sup;
array1.random_number(inf, sup);
array2.choose(inf, sup);
array1.print();
array2.print();
z = array1.differences(array1, array2);


cout<<"Quantidade de diferencas: "<<z<<endl;
pause("Aperte ENTER para continuar");
}