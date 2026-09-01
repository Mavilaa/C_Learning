#include"Exemplos.hpp"

int main ( int argc, char** argv )
{
 int x = 0; 

 do
 {
 cout << "EXEMPLO1401 - Programa - v0.0\n " << endl;

 cout << "Opcoes " << endl;
 cout << " 0 - parar " << endl;
 cout << " 1 - testar definicoes " << endl;

 cout << endl << "Entrar com uma opcao: ";
 cin >> x;

 switch ( x )
 {
 case 0:
 method_00 ( );
 break;
 case 1:
 method_01 ( );
 break;
 default:
 cout << endl << "ERRO: Valor invalido." << endl;
 } 
 }
 while ( x != 0 );

 return ( 0 );
}