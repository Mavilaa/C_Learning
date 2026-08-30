#include"Stack.hpp"

class fila {
private:
struct Celula {
int valor;
Celula* proximo;
};
Celula* inicio;
Celula* fim;

public:
fila() {
inicio = nullptr;
fim = nullptr;
}

~fila() {
while (inicio != nullptr) {
Celula* temp = inicio;
inicio = inicio->proximo;
delete temp;
}
}

fila* push(int n) {
Celula* new_cell = new Celula();
new_cell->valor = n;
new_cell->proximo = nullptr;
if (inicio == nullptr) {
inicio = new_cell;
fim = new_cell;
} else {
fim->proximo = new_cell;
fim = new_cell;
}
return this;
}

fila* pop() {
if (inicio == nullptr) {
throw FilaVaziaException();
}
Celula* cell = inicio;
inicio = inicio->proximo;
if (inicio == nullptr) {
fim = nullptr;
}
delete(cell);
return this;
}

int compare(fila* other) {
if (other == nullptr) return 1;
Celula* cell1 = inicio;
Celula* cell2 = other->inicio;
int dif = 0;
int achou = 0;
while (cell1 != nullptr && cell2 != nullptr && achou == 0) {
if (cell1->valor != cell2->valor) {
dif = cell1->valor - cell2->valor;
achou = 1;
}
cell1 = cell1->proximo;
cell2 = cell2->proximo;
}
if (achou == 1) return(dif);
if (cell1 != nullptr && cell2 == nullptr) return 1;
if (cell1 == nullptr && cell2 != nullptr) return -1;
return 0;
}

fila* join(fila* other) {
if (other != nullptr) {
Celula* cell = other->inicio;
while (cell != nullptr) {
this->push(cell->valor);
cell = cell->proximo;
}
}
return this;
}

int search(int value) {
Celula* cell = inicio;
int x = 0;
while (cell != nullptr && x == 0) {
if (cell->valor == value) {
x = 1;
}
cell = cell->proximo;
}
return(x);
}

fila* mergeUp(fila* other) {
fila* nova_fila = new fila();
Celula* cell1 = inicio;
Celula* cell2 = other->inicio;
while (cell1 != nullptr || cell2 != nullptr) {
int x = 0;
if (cell1 != nullptr && (cell2 == nullptr || cell1->valor < cell2->valor)) {
x = cell1->valor;
cell1 = cell1->proximo;
} else if (cell2 != nullptr && (cell1 == nullptr || cell2->valor < cell1->valor)) {
x = cell2->valor;
cell2 = cell2->proximo;
} else {
x = cell1->valor;
cell1 = cell1->proximo;
cell2 = cell2->proximo;
}
if (nova_fila->inicio == nullptr || nova_fila->fim->valor != x) {
nova_fila->push(x);
}
}
return nova_fila;
}

fila* intQueue_mergeDown(fila* other) {
fila* nova_fila = new fila();
Celula* cell1 = inicio;
Celula* cell2 = other->inicio;
while (cell1 != nullptr || cell2 != nullptr) {
int x = 0;
if (cell1 != nullptr && (cell2 == nullptr || cell1->valor > cell2->valor)) {
x = cell1->valor;
cell1 = cell1->proximo;
} else if (cell2 != nullptr && (cell1 == nullptr || cell2->valor > cell1->valor)) {
x = cell2->valor;
cell2 = cell2->proximo;
} else {
x = cell1->valor;
cell1 = cell1->proximo;
cell2 = cell2->proximo;
}
if (nova_fila->inicio == nullptr || nova_fila->fim->valor != x) {
nova_fila->push(x);
}
}
return nova_fila;
}

void print() {
Celula* atual = inicio;
while (atual != nullptr) {
cout << "[ " << atual->valor << " ] ";
atual = atual->proximo;
}
cout << endl;
}
};