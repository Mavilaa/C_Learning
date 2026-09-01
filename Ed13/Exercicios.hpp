#include"ClasseC.hpp"

void method_01(){
contato pessoa1;
string nome = "";
bool x = false;
cout<<"Insira um nome para o contato:";
cin>>nome;
pessoa1.setNome(nome);
x = pessoa1.hasErro();
pessoa1.readName();
cout<<"Nome esta vazio:"<<x<<endl;
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

void method_02(){
contato pessoa1;
string fone = "";
cout<<"Insira um numero de telefone: ";
cin>>fone;
pessoa1.setFone(fone);
pessoa1.readPhone();
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

void method_03(){
contato pessoa1;
bool x = false;
string fone = "";
cout<<"Insira um numero de telefone: ";
cin>>fone;
getchar();
x = pessoa1.isvalidPhone(fone);
if(x){
pessoa1.setFone(fone);
pessoa1.readPhone();
}
else{
cout<<"Fone invalido!"<<endl;
}
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

void method_04(){
contato pessoa1;
string fone = "";
string nome = "";
bool x = false;
cout<<"Insira um nome para o contato:";
cin>>nome;
cout<<"Insira um numero de telefone: ";
cin>>fone;
getchar();
x = pessoa1.isvalidPhone(fone);
if(x){
pessoa1.setFone(fone);
pessoa1.setNome(nome);
pessoa1.fprint("Pessoa1.txt");
pessoa1.fread("Pessoa1.txt");
pessoa1.readName();
pessoa1.readPhone();
}
else{
cout<<"Fone invalido!"<<endl;
}
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

void method_05(){
contato pessoa1;
string fone = "";
string nome = "";
bool x = false;
cout<<"Insira um nome para o contato:";
cin>>nome;
cout<<"Insira um numero de telefone: ";
cin>>fone;
getchar();
x = pessoa1.isvalidPhone(fone);
if(x){
pessoa1.setFone(fone);
pessoa1.setNome(nome);
pessoa1.writeToFile("Pessoa1.txt");
}
else{
cout<<"Fone invalido!"<<endl;
}
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

void method_06(){
string fone1 = "";
string fone2 = "";
string nome = "";
cout<<"Insira um nome para o contato:";
cin>>nome;
cout<<"Insira o primeiro telefone: ";
cin>>fone1;
cout<<"Insira o segundo telefone: ";
cin>>fone2;
getchar();
contato pessoa1(nome, fone1, fone2);
pessoa1.readName();
pessoa1.readPhone();
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

void method_07(){
string fone1 = "";
string fone2 = "";
string nome = "";
int n = 0;
cout<<"Insira um nome para o contato:";
cin>>nome;
cout<<"Insira o primeiro telefone: ";
cin>>fone1;
cout<<"Insira o segundo telefone: ";
cin>>fone2;
getchar();
contato pessoa1(nome, fone1, fone2);
n = pessoa1.phones();
cout<<"Quantidade de telefones: "<<n<<endl;
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

void method_08(){
contato pessoa1;
string fone = "";
string fone2 = "";
string nome = "";
cout<<"Insira um nome para o contato:";
cin>>nome;
cout<<"Insira um numero de telefone: ";
cin>>fone;
pessoa1.setNome(nome);
pessoa1.setFone(fone);
cout<<"Insira um segundo numero de telefone: ";
cin>>fone2;
getchar();
pessoa1.setPhone2a(fone2);
pessoa1.readName();
pessoa1.readPhone();
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

void method_09(){
string fone1 = "";
string fone2 = "";
string fone3 = "";
string nome = "";
bool x = false;
cout<<"Insira um nome para o contato:";
cin>>nome;
cout<<"Insira o primeiro telefone: ";
cin>>fone1;
cout<<"Insira o segundo telefone: ";
cin>>fone2;
contato pessoa1(nome, fone1, fone2);
cout<<"Insira o novo segundo telefone: ";
cin>>fone3;
getchar();
pessoa1.setPhone2b(fone3);
x = pessoa1.hasErro();
if(x){
cout<<"Erro no contato!"<<endl;
}
pessoa1.readName();
pessoa1.readPhone();
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

void method_10(){
string fone1 = "";
string fone2 = "";
string nome = "";
bool x = false;
cout<<"Insira um nome para o contato:";
cin>>nome;
cout<<"Insira o primeiro telefone: ";
cin>>fone1;
cout<<"Insira o segundo telefone: ";
cin>>fone2;
getchar();
contato pessoa1(nome, fone1, fone2);
pessoa1.setPhone2c("");
x = pessoa1.hasErro();
if(x){
cout<<"Erro no contato!"<<endl;
}
pessoa1.readName();
pessoa1.readPhone();
cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}