#include"CTarefa.hpp"

void pause(){
cout<<"Aperte ENTER para continuar"<<endl;
getchar();


}


void method_01(){
    int x = 5;
    int array[x];
Num<double> *numeros = new Num<double>(5);
numeros->getNum();
numeros->transform_int();
numeros->print_signal();

delete(numeros);
pause();
}


void method_02(){
    int x = 5;
Num<int> *numeros = new Num<int>(x);
numeros->getNum();
numeros->transform_double();
numeros->print_signal();

delete(numeros);
pause();
}





void method_03(){
int x = 5;
Num<int> *numeros = new Num<int>(x);
numeros->print();

delete(numeros);
pause();

}



void method_04(){
int x = 5;
bool achou = false;
Num<string>* strings = new Num<string>(x);
strings->set_String();
achou = strings->contains("Gustavo");
cout<<"Esta contido:"<<achou<<endl;
delete(strings);
pause();

}



void method_05(){
int x = 5;
std::string s = "";
Num<string>* strings = new Num<string>(x);
strings->set_String();
strings->print();
s =strings->toUpperCase();
cout<<"String Maiuscula:"<<s<<endl;
strings->print();
delete(strings);
pause();

}

void method_06(){
int x = 5;
std::string s = "";
Num<string>* strings = new Num<string>(x);
strings->set_String();
strings->print();
s =strings->toLowerCase();
cout<<"String Minuscula:"<<s<<endl;
strings->print();
delete(strings);
pause();

}

void method_07(){
int x = 5;
std::string s = "";
Num<string>* strings = new Num<string>(x);
strings->set_String();
strings->print();
s =strings->replace('o', 'a');
cout<<"String replaced:"<<s<<"o=a"<<endl;
strings->print();
delete(strings);
pause();

}

void method_08(){
int x = 5;
std::string s = "";
Num<string>* strings = new Num<string>(x);
strings->set_String();
strings->print();
s =strings->encrypt();
cout<<"String encrypted:"<<s<<endl;
strings->print();
delete(strings);
pause();

}

void method_09(){
int x = 5;
std::string s = "";
Num<string>* strings = new Num<string>(x);
strings->set_String();
strings->print();
s =strings->decrypt();
cout<<"String decrypted:"<<s<<endl;
strings->print();
delete(strings);
pause();

}

void method_10(){
int x = 5;
int y = 0;
std::string s = "";
Num<string>* strings = new Num<string>(x);
strings->set_String();
strings->print();
y =strings->split();
cout<<"Quantidade total de strings separadas por espaço:"<<y<<endl;
delete(strings);
pause();

}

void method_11(){
    int x = 5;
    int partes = 0;
    char delimitador;
    Num<string>* strings = new Num<string>(x);
    
    strings->set_String();
    strings->print();
    
    cout << "Digite o caractere delimitador para a fragmentacao: ";
    cin >> delimitador; getchar();
    
    partes = strings->split_by(delimitador);
    cout<<"Quantidade total de fragmentos gerados: "<<partes<<endl;
    
    delete(strings);
    pause();
}

void method_12(){
    int x = 5;
    std::string s = "";
    Num<string>* strings = new Num<string>(x);
    
    strings->set_String();
    strings->print();
    
    s = strings->reverse_string();
    cout<<"String Invertida: "<<s<<endl;
    
    strings->print();
    
    delete(strings);
    pause();
}