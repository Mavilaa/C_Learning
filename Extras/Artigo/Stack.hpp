#include <iostream>
using std::cin ;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <string>
using std::string;
#include <fstream>
using std::ofstream;
using std::ifstream;
void pause(){
cout<<"Aperte ENTER para continuar";
getchar();
}
class PilhaVaziaException {};
class PilhaInsuficienteException {};
class FilaVaziaException {};

class pilha{
private:
struct Celula{
int valor;
Celula *proximo;
};
Celula* topo;
public:
pilha(){
topo = nullptr;
}

~pilha() {
while (topo != nullptr) {
Celula* temp = topo;
topo = topo->proximo;
delete temp;
}
}

void push(int n){
Celula* new_cell = new Celula();
new_cell->valor = n;
new_cell->proximo = topo;
topo = new_cell;
}

int pop(){
if (topo == nullptr) {
throw PilhaVaziaException();
}
int x = 0;
Celula* cell = topo;
x = cell->valor;    
topo = topo->proximo;
delete(cell);
return(x);
}

int dup(){
if (topo == nullptr) {
throw PilhaVaziaException();
}
int x = 0;
Celula* cell = new Celula();
cell->valor = topo->valor;
cell->proximo = topo;
topo = cell;
x = cell->valor;
return(x);
}

void swap(){
if (topo == nullptr || topo->proximo == nullptr) {
throw PilhaInsuficienteException();
}
int x = 0;
Celula* cell = topo;
x = topo->valor;
topo->valor = topo->proximo->valor;
topo->proximo->valor = x;
}

int get_size(){
int tamanho = 0;
Celula* cell = topo;
while(cell != nullptr){
cell = cell->proximo;
tamanho++;
}
return(tamanho);
}

void invert() {
Celula* anterior = nullptr;
Celula* atual = topo;
Celula* proximoNo = nullptr;
while (atual != nullptr) {
proximoNo = atual->proximo; 
atual->proximo = anterior;  
anterior = atual;           
atual = proximoNo;          
}
topo = anterior; 
}

void print(){
Celula* atual = topo;
while (atual != nullptr) {
cout << "[ " << atual->valor << " ]\n";
atual = atual->proximo;
}
}
};