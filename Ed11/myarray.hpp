#define _MYARRAY_HPP_
// dependencias
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
using std::ifstream ; // para ler arquivo 
template < typename T >

class Array{
private: 
T optional;
int length;
T *data;


public:
Array(int n, T initial){
optional = initial;
length = 0;
data = nullptr;
if(n> 0){
length = n;
data = new T[length];
}
}


void free(){
if(data != nullptr){

delete(data);
data = nullptr;
}
}

void set(int position, T value){
if(0<= position && position < length){

data[position] = value;
}
}

T get(int position){

T value = optional;

if(0 <= position && position < length){

value = data[position];

}

return(value);
}

void print(){
cout<<endl;
for(int x = 0; x < length; x++){

cout<<setw(3)<<x<<":"<<setw(9)<<data[x]<<endl;

}


cout<<endl;



}
void read(){

cout<<endl;

for(int x = 0; x < length; x++){


cout<<setw(3)<<x<<":";

cin>>data[x];


}

}

void fprint ( string fileName )
 {
 ofstream afile; // output file
 afile.open ( fileName );
 afile << length << endl;
 for ( int x = 0; x < length; x=x+1 )
 {
 afile << data[ x ] << endl;
 } // end for
 afile.close ( );
 } // end fprint ( )


void fread(string fileName){
    int n = 0;
ifstream afile;
afile.open(fileName);
afile>>n;
if(n <= 0){

cout<<"Espaco insuficiente";

}
else{

length = n;
data = new T[n];
for(int x = 0; x < length; x++){

afile>>data[x];
    
}
}
afile.close();
}

Array(){

length = 0;

data = nullptr;
}


Array(int length, int other[]){
if(length <= 0){


cout<<"Tamanho nao disponivel"<<endl;

}
else{

this->length = length;

data = new T[this->length];

for(int x = 0; x < length; x++){


data[x] = other[x];
}
}
}

Array(const Array& other){

if(other.length<= 0 ){

cout<<"Espaco invalido!"<<endl;

}
else{
length = other.length;

data = new T[other.length];

for(int x = 0; x < other.length; x++){


data[x] = other.data[x];

}
}
}


Array& operator=(const Array<T> other){
    
if(other.length<= 0 ){

cout<<"Espaco invalido!"<<endl;

}
else{

this->length = other.length;
this->data = new T[other.length];

for(int i = 0; i < other.length; i++){



data[i] = other.data[i];
}
}

return(*this);
}

bool operator==(const Array<T> other){

bool result = false;
int x = 0;

if(other.length == 0 || length !=other.length){


cout<<"Missing Data!"<<endl;

}
else{

x = 0;
result = true;
while(x< this->length && result){


result = result && (data[x] == other.data[x]);

x++;
}
}
return(result);
}


Array &operator+(const Array <T> other){

static Array <T> result(other);
 if ( other.length <= 0 )
 {
 cout << "\nERROR: Missing data.\n" << endl;
 }
 else{

for(int x = 0; x < this->length; x++){

result.data[x] = result.data[x] + this->data[x];  
}

 }


return(result);
}


const int getlength(){

return(length);


}

T& operator[](const int position){

static T value = optional;

if(position < 0 || length <= position){


cout<<endl<<"Posicao invalida"<<endl;



}else{


value = data[position];
}
return(value);
}



};











