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
template <typename T>
class Array{
private:
T optional;
int length;
T *data;
public:
Array(int n , T initial){
optional = initial;
length = 0;
data = nullptr;
if(n > 0){
length = n;
data = new T[length];
}
}

void free(){
if(data != nullptr){

delete (data);
data = nullptr;

}
}

void set(int position, int n){
if(0 <= position && position < length){

data[position] = n;

}

}

T get(int position){

T value = optional;

if(0<= position && position < length){

value = data[position];
}
return(value);
}

void random_number(int inf, int sup ){
srand(time(NULL));
for(int x = 0; x < length; x++){
int n = inf + rand()%(sup - inf + 1);

data[x] = n;

}
}



void print(){
    cout<<endl;
for(int x = 0; x < length; x++){


cout<<"["<<x<<"]"<<":"<<data[x]<<endl;


}
cout<<endl;
}

T different( const Array <T> array1, const Array <T> array2){
bool y = true;

for(int x = 0; x < length; x++){
    
if(array1.data[x] == array2.data[x]&& y){


y = true;


}else{

y = false;

}
}

return(y);
}

T differences( const Array <T> array1, const Array <T> array2){
int z = 0;
if(array1.length == array2.length){
for(int x = 0; x < length; x++){
    
if(array1.data[x] != array2.data[x]){



z++;

}
}
}else{


cout<<"Tamanhos diferentes de array"<<endl;

}

return(z);
}

void choose(int inf, int sup){
int x = 0;
for(int y = 0; y < length; y++){
cout<<"Escolha valores entre: "<<"["<<inf<<","<<sup<<"]:"<<"["<<y<<"]";
cin>>x;

data[y] = x;
}


}





};