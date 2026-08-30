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
Array(int n , T initial){
optional = initial;
length = 0;
data = nullptr;
if(n > 0 ){
length = n ;
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

if(0<= position && position < length){

value = data[position];
}
return(value);
}

void print(){
    cout<<endl;
for(int x = 0; x < length; x++){


cout<<"["<<x<<"]"<<":"<<data[x]<<endl;


}
cout<<endl;
}


void random_number(int inf, int sup ){
srand(time(NULL));
for(int x = 0; x < length; x++){
int n = inf + rand()%(sup - inf + 1);

data[x] = n;

}
}

void fprint(string fileName){
ofstream afile;
afile.open(fileName);
afile<<length<<endl;
for(int x = 0; x < length; x++){
afile<<data[x]<<endl;
}

afile.close();
}

void fread(string fileName){
    int n = 0;
ifstream afile;
afile.open(fileName);

afile>>n;
if(n <= 0){

cout<<"Tamanho invalido!"<<endl;

}
else{
length = n;
data = new T[n]; // aloca espaço para a data

for(int x = 0; x < n; x++){

afile>>data[x];
}

}
afile.close();

}




T search_even(){
    int n[length] = {};
    int number = 0;
    int y = 0;
for(int x = 0; x < length; x++){

if(data[x] % 2 == 0 ){


n[y] = data[x];
if(n[y-1] > n[y]){

n[y] = n[y-1];
number = n[y];
}
else{

number = n[y];

}
y++;

}

}
return(number);
}

T search_even5(){
    int n[length] = {};
    int number = 0;
    int y = 0;
for(int x = 0; x < length; x++){

if(data[x] % 2 == 0 && data[x] % 5 == 0){

n[y] = data[x];
if(n[y-1] > n[y]){

n[y] = n[y-1];
number = n[y];
}
else{
number = n[y];
}
y++;
}
}

return(number);
}


T sum_array(int inf, int sup){
int soma = 0;
for(int x = inf; x <= sup ; x++){

soma = soma + data[x];


}

return(soma);
}

T avg_array(int inf, int sup){
int soma = 0;
int avg = 0;
int y = 0;
for(int x = inf; x <= sup ; x++){

soma = soma + data[x];

y++;
}

avg = soma/y;

return(avg);
}

T positive(){
bool x = true;
for(int y = 0; y < length; y++){

if(data[y] <=100 && data[y] >= 0 && x == true ){

x = true;
}
else{


    x = false;
}
}
return(x);

}

T getlength(string fileName){
    int x = 0;
ifstream afile;
afile.open(fileName);
afile>>x;


return(x);
}

T is_decrescent(){
bool y = true;
for(int x = 0; x < length; x++ ){

y = y &&(data[x]> data[x+1]);


}


return(y);

}

T search_array(int num, int inf, int sup){
bool y = false;
for(int x = inf; x <= sup; x++){

if(data[x] == num){


y = true;

}


}

return(y);

}

T multiply_array(int inf, int sup, int k){
int soma = 0;
for(int x = inf; x <= sup; x++){

soma = soma +(k*data[x]);


}

return(soma);

}

void sort_array_down(){
    int num = 0;
for(int x = 0; x < length; x++){
    
for(int y = 0; y < length; y++){

if(data[y] < data[y+1]){

num = data[y];
data[y] = data[y+1];
data[y+1] = num;

}

}
}


}




};