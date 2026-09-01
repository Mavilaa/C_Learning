#include"Fila.hpp"

void method_01(){
try {
pilha pilha1;
pilha1.push(1);
pilha1.push(2);
pilha1.print();
} catch (PilhaVaziaException& e) {
cout << "Erro: Pilha vazia" << endl;
} catch (PilhaInsuficienteException& e) {
cout << "Erro: Elementos insuficientes na pilha" << endl;
}
pause();
}

void method_02(){
try {
pilha pilha1;
int x = 0;
pilha1.push(1);
pilha1.push(2);
x = pilha1.pop();
pilha1.print();
cout<<"Valor retirado:"<<x<<endl;
} catch (PilhaVaziaException& e) {
cout << "Erro: Pilha vazia ao tentar retirar" << endl;
}
pause();
}

void method_03(){
try {
pilha pilha1;
int x = 0;
pilha1.push(1);
pilha1.push(2);
x = pilha1.dup();
pilha1.print();
cout<<"Valor duplicado:"<<x<<endl;
} catch (PilhaVaziaException& e) {
cout << "Erro: Pilha vazia ao tentar duplicar" << endl;
}
pause();
}

void method_04(){
try {
pilha pilha1;
int x = 0;
pilha1.push(1);
pilha1.push(2);
pilha1.push(3);
pilha1.swap();
cout<<"Tamanho:"<<x<<endl;
pilha1.print();
} catch (PilhaInsuficienteException& e) {
cout << "Erro: Elementos insuficientes para trocar" << endl;
}
pause();
}

void method_05(){
try {
pilha pilha1;
int x = 0;
pilha1.push(1);
pilha1.push(2);
pilha1.push(3);
pilha1.invert();
pilha1.print();
} catch (PilhaVaziaException& e) {
cout << "Erro: Pilha vazia ao tentar inverter" << endl;
}
pause();
}

void method_06() {
try {
fila fila1;
fila1.push(10)->push(20)->push(30);
fila1.print();
} catch (FilaVaziaException& e) {
cout << "Erro: Fila vazia" << endl;
}
pause();
}

void method_07() {
try {
fila fila1;
fila1.push(10)->push(20);
fila1.print();
fila1.pop();
fila1.print();
fila1.pop();
fila1.pop();
} catch (FilaVaziaException& e) {
cout << "Erro: Tentativa de pop em fila vazia" << endl;
}
pause();
}

void method_08() {
try {
fila fila1;
fila fila2;
fila1.push(1)->push(2)->push(3);
fila2.push(1)->push(2)->push(5);
int resultado = fila1.compare(&fila2);
cout << "Resultado da comparacao: " << resultado << endl;
} catch (FilaVaziaException& e) {
cout << "Erro: Fila vazia durante a comparacao" << endl;
}
pause();
}

void method_09() {
try {
fila fila1;
fila fila2;
fila1.push(1)->push(2);
fila2.push(3)->push(4);
fila1.join(&fila2);
fila1.print();
} catch (FilaVaziaException& e) {
cout << "Erro: Fila vazia durante a juncao" << endl;
}
pause();
}

void method_10() {
try {
fila fila1;
fila1.push(10)->push(20)->push(30);
int encontrado = fila1.search(20);
cout << "Resultado da busca (20): " << encontrado << endl;
} catch (FilaVaziaException& e) {
cout << "Erro: Fila vazia durante a busca" << endl;
}
pause();
}

void method_E1() {
try {
fila fila1;
fila fila2;
fila1.push(1)->push(3)->push(5);
fila2.push(2)->push(3)->push(6);
fila* resultado = fila1.mergeUp(&fila2);
resultado->print();
delete resultado;
} catch (FilaVaziaException& e) {
cout << "Erro: Fila vazia durante o mergeUp" << endl;
}
pause();
}

void method_E2() {
try {
fila fila1;
fila fila2;
fila1.push(5)->push(3)->push(1);
fila2.push(6)->push(3)->push(2);
fila* resultado = fila1.intQueue_mergeDown(&fila2);
resultado->print();
delete resultado;
} catch (FilaVaziaException& e) {
cout << "Erro: Fila vazia durante o mergeDown" << endl;
}
pause();
}