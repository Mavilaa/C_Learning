#include <iostream>
using std::cin ; // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream; // para ler arquivo
template<typename T>
class matrix{
private:
T** data;
int rows;
int columns;
T optional;
public:
matrix(){
this->data = nullptr;
this->rows = 0;
this->columns = 0;


}

matrix(int i, int j, T initial){
bool ok = true;

this->optional = initial;
this->rows = i;
this->columns = j;
data = new T*[rows];
if(data!= nullptr){
for(int x = 0; x < rows; x++){

data[x] = new T[columns];

ok = ok&& (data[x]!= nullptr);
}
if(!ok){

data = nullptr;
}
}
}

~matrix(){
if(data!= nullptr){
for(int x = 0; x < rows; x++){

delete(data);
data = nullptr;
}
}
}

void set(int row, int column, T value){
     
if(row<= 0 || row >= rows || column<= 0 || column>= columns){

cout<<"Posicao invalida!"<<endl;

}
else{


data[row][column] = value;
}

}

T get(int row, int column){
    T value = 0;
if(row<= 0 || row >= rows || column<= 0 || column>= columns){

cout<<"Posicao invalida!"<<endl;

}
else{

value = data[row][column];

}


return(value);
}


void print(){

for(int x = 0; x < rows; x++){

    cout<<endl;
for(int y = 0; y < columns; y++){


cout<<data[x][y]<<"\t";

}

cout<<endl;
}
}


void generaterandom(int inf, int sup){
srand(time(NULL));

for(int x = 0; x < rows; x++){

for(int y = 0; y < columns; y++){

data[x][y] = inf+ rand()%(sup-inf+1);

}
}
}



void fprint(string fileName){
ofstream afile;
afile.open(fileName);
afile<<rows<<endl;
afile<<columns<<endl;
for(int x = 0; x < rows; x++){

for(int y = 0; y < columns; y++){

afile<<data[x][y]<<endl;

}
}

afile.close();

}


void freadmatrix(string fileName){
ifstream afile;
afile.open(fileName);
afile>>rows;
afile>>columns;
data = new T*[rows];
if(data!= nullptr){
for(int x = 0; x < rows; x++){
data[x] = new T[columns];
}
for(int x = 0; x < rows; x++){

for(int y = 0; y < columns; y++){

afile>>data[x][y];
}
}
}
afile.close();
}

matrix &operator=(const matrix<T> &other){

if(other.rows == 0 || other.columns == 0){


cout<<"Tamanho invalido!"<<endl;

}
else{

this->rows = other.rows;
this->columns = other.columns;
this->data = new T*[rows];
for(int x = 0; x < rows; x++){

this->data[x] = new T [columns];

}
for(int x = 0; x < rows; x++){

for(int y = 0; y < columns; y++){

data[x][y] = other.data[x][y];

}

}

}
return(*this);

}


void multiply(int n){
for(int x = 0; x < rows; x++){

for(int y = 0; y < columns; y++){

data[x][y] = data[x][y]*n;

}

}


}


bool isidentity(){
bool teste = true;
for(int x = 0; x < rows; x++){

for(int y = 0; y < columns; y++){

if(x == y && teste){
cout<<"["<<x<<","<<y<<"]"<<data[x][y]<<endl;
teste = teste &&(data[x][y] == 1);
}

}



}

return(teste);
}


bool operator==(const matrix<T> &other){
bool result = true;
for(int x = 0; x < rows; x++){

for(int y = 0; y < columns; y++){

    result = result &&(data[x][y] == other.data[x][y]);

}

}

return(result);
}

int addmatrix(const matrix<T> &other){
int soma = 0;
for(int x = 0; x < rows; x++){
for(int y = 0; y < columns; y++){

    soma = soma + data[x][y] +other.data[x][y];

}

}

return(soma);

}

void addrows(int row1, int row2, int n){

int x = 0;
int soma = 0;
if(row1 >= 0 || row1<rows|| row2 >= 0 || row2<rows)

for(int y = 0; y < columns; y++){

soma = (data[row1][y] +data[row2][y])*n;

data[row1][y] = soma;

}

}

/*
criar a funcao , em que ela receba as linhas que vc quer operar, por exemplo, (2,3), linhas 2 e 3, somar o elemento 2,0 com 3,0 e depois multiplicar
pela constante e guardar na 2,0 e assim por seguinte até acabar as colunas. 
*/

void subtractrows(int row1, int row2, int n){

int x = 0;
int soma = 0;
if(row1 >= 0 || row1<rows|| row2 >= 0 || row2<rows)

for(int y = 0; y < columns; y++){

soma = (data[row1][y] - data[row2][y])*n;

data[row1][y] = soma;

}

}


int searchrows(int n){
int valor = -1;
bool result = true;
for(int x = 0; x < rows; x++){
for(int y = 0; y < columns; y++){

if(data[x][y] == n && result){


valor =  x;
result = false;
}

}


}

return(valor);
}

int searchcolumns(int n){
int valor = -1;
bool result = true;
for(int x = 0; x < rows; x++){
for(int y = 0; y < columns; y++){

if(data[x][y] == n && result){


valor =  y;
result = false;
}

}


}

return(valor);
}




void transpose(){
    int z = 0;
for(int x = 0; x < rows; x++){
for(int y = x+1; y < columns; y++){
z = data[x][y];
data[x][y] = data[y][x];
data[y][x] = z;
}

}

}

};
