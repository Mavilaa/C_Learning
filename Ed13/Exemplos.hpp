#include"Contato.hpp"


void example_01(){
    contato pessoa1;
    ref_contato pessoa2 = nullptr;
    ref_contato pessoa3 = new contato();

cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}



void example_02(){

contato pessoa1;
ref_contato pessoa2 = nullptr;
ref_contato pessoa3  = new contato();

pessoa1.setNome("Theldo");
pessoa1.setFone("111");
pessoa3->setNome("Gustavo");
pessoa3->setFone("333");

cout<<"Pessoa1-{"<<pessoa1.getNome()<<","<<pessoa1.getFone()<<"}"<<endl;
cout<<"Pessoa3-{"<<pessoa3->getNome()<<","<<pessoa3->getFone()<<"}"<<endl;

cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}




void example_03(){
contato pessoa1;
ref_contato pessoa2 = nullptr;
ref_contato pessoa3 = new contato();


pessoa1.setNome("Theldo");
pessoa1.setFone("111");
pessoa3->setNome("Gustavo");
pessoa3->setFone("333");

cout<<"pessoa1-"<<pessoa1.toString()<<endl;
cout<<"pessoa3-"<<pessoa3->toString()<<endl;



cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}





void example_04(){

contato pessoa1("Theldo", "111");
ref_contato pessoa2 = nullptr;
ref_contato pessoa3 = new contato("Gustavo", "333");

cout<<"pessoa1-"<<pessoa1.toString()<<endl;
cout<<"pessoa3-"<<pessoa3->toString()<<endl;


cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}



void example_05(){
contato pessoa1("Theldo", "111");
ref_contato pessoa2 = nullptr;
ref_contato pessoa3 = new contato("", "333");


cout<<"Pessoa1-"<<pessoa1.toString()<<"("<<pessoa1.getErro()<<")"<<endl;
cout<<"Pessoa3-"<<pessoa3->toString()<<"("<<pessoa3->getErro()<<")"<<endl;

cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}


void example_06(){
contato pessoa1("Theldo", "111");
ref_contato pessoa2 = nullptr;
ref_contato pessoa3 = new contato("Gustavo", "333");

if(!pessoa1.hasErro()){
cout<<"pessoa1-"<<pessoa1.toString()<<endl;
}
else{
cout<<"pessoa1 tem erro"<<"("<<pessoa1.getErro()<<")"<<endl;
}

if(!pessoa3->getErro()){

cout<<"pessoa3"<<pessoa3->toString()<<endl;
}
else{
cout<<"pessoa1 tem erro"<<"("<<pessoa3->getErro()<<")"<<endl;
}


cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}



void example_07(){
contato pessoa1("Theldo", "111");
ref_contato pessoa2 = nullptr;
ref_contato pessoa3 = new contato("", "333");

if(!pessoa1.hasErro()){
cout<<"pessoa1-"<<pessoa1.toString()<<endl;
}
else{
cout<<"pessoa1 tem erro"<<"("<<pessoa1.getErro()<<")"<<endl;
}

if(!pessoa3->getErro()){

cout<<"pessoa3"<<pessoa3->toString()<<endl;
}
else{

cout<<"Pessoa3 tem erro: "<<pessoa3->getErro()<<endl;
}


cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}



void example_08(){
contato pessoa1("Theldo", "111");
ref_contato pessoa2 = nullptr;
ref_contato pessoa3 = new contato("Gustavo", "333");
ref_contato pessoa4 = nullptr;

pessoa2 = new contato(pessoa1);
if(pessoa2){
cout<<"pessoa2-"<<pessoa2->toString()<<endl;
}
else{
cout<<"pessoa2 tem erro"<<"("<<pessoa2->getErro()<<")"<<endl;
}
if(pessoa3){
pessoa2 = new contato(*pessoa3);
if(pessoa2){
cout<<"pessoa2-"<<pessoa2->toString()<<endl;
}
else{
cout<<"pessoa2 tem erro"<<"("<<pessoa3->getErro()<<")"<<endl;
}

if(pessoa4){
pessoa2 = new contato(*pessoa4);
if(pessoa2){
cout<<"pessoa2-"<<pessoa2->toString()<<endl;
}
else{
cout<<"pessoa2 tem erro"<<"("<<pessoa3->getErro()<<")"<<endl;
}
}


cout<<"Aperte ENTER para continuar"<<endl;
getchar();
}

}
void example_09(){
contato pessoa[3];
int x = 0;


pessoa[0].setNome("Theldo");
pessoa[0].setFone("111");

pessoa[1].setNome("Gustavo");
pessoa[1].setFone("222");

pessoa[2].setNome("Arthur");
pessoa[2].setFone("333");

for(x = 0; x < 3; x++){

cout<<x<<":"<<pessoa[x].toString()<<endl;

}
}



void example_10(){
ref_contato pessoa[3];
int x = 0;


pessoa[0] = new contato("Theldo", "111");
pessoa[1] = new contato("Gustavo", "222");
pessoa[2] = new contato("Arthur", "333");

for(x = 0; x < 3; x++){

cout<<x<<":"<<pessoa[x]->toString()<<endl;

}
}