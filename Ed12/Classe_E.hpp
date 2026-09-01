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

this->rows = 0;
this-> columns = 0;
data = nullptr;

}// construtor

matrix(int i, int j, T initial){
bool ok = true;

this->optional = initial;
this->rows = i;
this->columns = j;
data = new T*[rows];
if(data != nullptr){
for(int x = 0; x < rows; x++){

data[x] = new T[columns];
ok = ok &&(data[x]!= nullptr);
}
if(!ok){

data = nullptr;
}
}
}
~matrix(){
if(data != nullptr){
for(int x = 0; x < rows; x++){

delete(data);
data = nullptr;
}
}

}//destructor

void set(int row , int column, T value){
if(row < 0 || row >= rows || column < 0 || column >=columns){

std::cout<<"ERRO: Posicao invalida!"<<std::endl;

}
else{

data[row][column] = value;

}

}

T get(int row, int column){
T value = optional;
    if(row < 0 || row >= rows || column < 0 || column >=columns){
        
    std::cout<<"ERRO: Posicao invalida!"<<std::endl;
    }
    else{


        value = data[row][column];
    
    }

return(value);

}

void print(){

cout<<endl;
for(int x = 0; x < rows; x++){
for(int y = 0; y < columns; y++){


cout<<data[x][y]<<"\t";

}
cout<<endl;
}

}

void read(){
cout<<endl;
for(int x = 0; x < rows; x++){
for(int y = 0; y < columns; y++){

cout<<setw(2)<<x<<","<<setw(2)<<y<<":";
cin>>data[x][y];


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

void fread(string fileName){
ifstream afile;

int m = 0;

int n = 0;

afile.open(fileName);

afile>>m;

afile>>n;

if(m<= 0 || n <=0){



cout<<"Tamanho invalido!"<<endl;



}

else{

rows = m;

columns = n;

data = new T*[rows];

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

bool isZeros(){
bool result = false;
int x = 0;
int y = 0;
if(rows > 0 && columns > 0){


result = true;
while(x< rows && result){
y = 0;
while(y < columns && result){

result = result &&(data[x][y] == 0);

y++;
}

x++;
}

}

return(result);

}

bool operator!=(const matrix<T> &other){

int x = 0;
int y = 0;
 bool result = false;
if(rows > 0 && columns > 0){
while(x < rows&& !result){
y = 0;
while(y<columns && !result){

result = (data[x][y] != other.data[x][y]);

y++;
}


x++;
}

}

return(result);

}

matrix& operator-(const matrix<T> &other){

static matrix<T> result(1,1,0);
int x = 0;
int y = 0;
if(other.rows > 0 && other.columns > 0){

result.rows = rows;
result.columns = other.columns;
result.data = new T*[result.rows];
for(int x =0; x < result.rows; x++){

    result.data[x] = new T[result.columns];
}

for(int x = 0; x < rows; x++){

for(int y = 0; y < columns; y++){

result.data[x][y] = data[x][y] - other.data[x][y];
}

}

}

return(result);
}



matrix& operator*(const matrix<T> &other){

static matrix<T> result(1,1,0);
int x = 0;
int y = 0;
int sum = 0;
if(other.rows > 0 && other.columns > 0){

result.rows = rows;
result.columns = other.columns;
result.data = new T*[result.rows];
for(int x =0; x < result.rows; x++){

result.data[x] = new T[result.columns];
}

for(int x = 0; x < result.rows; x++){

for(int y = 0; y < result.columns; y++){

sum = 0;
for(int z = 0; z < columns; z++ ){

sum = sum +data[x][z]* other.data[z][y];

}
result.data[x][y] = sum;
}

}

}

return(result);
}

const int getrows(){

return(rows);

}

const int getcolumns(){

return(columns);



}

};


