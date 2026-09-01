#include"CErros.hpp"
#include<cctype>
#include<string>
template< typename T>
class Num:public Erro{
private:
T* data;
char* sinal;
int length;
public:

Num(){
data = nullptr;
sinal = nullptr;
int length = 0;

}

~Num(){
if (data != nullptr) delete[] data;
if (sinal != nullptr) delete[] sinal;

}


Num(int n){
if(n > 0){
data = new T[n];
sinal = new char[n];
length = n;
}
else{
data = nullptr;
sinal = nullptr;
int length = 0;
}

}


std::string getErroMsg(){
    /*
if(getErro() == x){


return(getErroMsg());
}*/

return(NO_ERROR);

}

void getNum(){
for(int x = 0; x < length; x++){
    cout<<"Digite o numero["<<x<<"]:";
cin>>this->data[x];
if(data[x] > 0){
this->sinal[x] = '+';
}
else{
this->sinal[x] = '-';
}
}



}


void transform_int(){
for(int x = 0; x < length; x++){
this->data[x] = static_cast<int>(this->data[x]);
if(this->data[x] == 0){
this->sinal[x] = ' '; 
}
}

}


void print_signal(){
for(int x = 0; x < length; x++){
    if(data[x] < 0){
cout<<data[x]<<endl;
}
else{
cout<<sinal[x]<<data[x]<<endl;

}
}
if(sinal == nullptr){
setErro(2);

}

}


void print(){
    if(data == nullptr){
setErro(1);
getErroMsg();
}
if(sinal == nullptr){
setErro(2);
getErroMsg();
}
if(length <=0){

setErro(3);
getErroMsg();
}
for(int x = 0; x < length; x++){
cout<<data[x]<<endl;
}

}

void transform_double(){
for(int x = 0; x < length; x++){
this->data[x] = static_cast<double>(this->data[x]);
if(this->data[x] == 0){
this->sinal[x] = ' '; 
}

}

}



bool get_Bool(){
    bool a = false;
    for(int y = 0; y < length; y++){
if(this->data[y] == 0 || this->data[y] == 1){
this->data[y] = static_cast<bool>(this->data[y]);
a = true;
}
else{
this->data[y] = -1;
a = false;
}
}
return(a);
}

bool contains(std::string a){
bool ok = false;
for(int x =0;x<length; x++){
if(a == this->data[x]){

ok = true;
}
}
return(ok);
}

void set_String(){
for(int x = 0; x < length; x++){
    cout<<"Digite a string["<<x<<"]:";
std::getline(cin, data[x]);

}
if(data == nullptr){
setErro(3);


}

}

std::string toUpperCase(){
    int x = 0;
    int n = 0;
std::string a = "";
cout<<"Escolha a String para deixar maiuscula["<<x<<"-"<<length-1<<"]";
cin>>x;getchar();
a = data[x];
n = data[x].length();
for(int y = 0;  y< n; y++){
a[y] = toupper(a[y]);

}
this->data[x] = a;

return(a);
}

std::string toLowerCase(){
    int x = 0;
    int n = 0;
std::string a = "";
cout<<"Escolha a String para deixar Minuscula["<<x<<"-"<<length-1<<"]";
cin>>x;getchar();
a = data[x];
n = data[x].length();
for(int y = 0;  y< n; y++){
a[y] = tolower(a[y]);

}
this->data[x] = a;

return(a);
}

std::string replace(char c, char b){
 int x = 0;
    int n = 0;
std::string a = "";
cout<<"Escolha a String para Trocar as letra["<<x<<"-"<<length-1<<"]:";
cin>>x;getchar();
a = data[x];
n = data[x].length();
for(int y = 0;  y< n; y++){
if(a[y] == c){
a[y] = b;
}
}
this->data[x] = a;

return(a);
}

std::string encrypt(){
int x = 0;
    int n = 0;
std::string a = "";
cout<<"Escolha a String para Trocar as letra["<<x<<"-"<<length-1<<"]:";
cin>>x;getchar();
a = data[x];
n = data[x].length();
for(int y = 0;  y< n; y++){
    if(a[y] == 'a' ||a[y] == 'b'|| a[y] == 'c'){
if(a[y] == 'a'){
a[y] = 'x';
}
if(a[y] == 'b'){
a[y] = 'y';
}
if(a[y] == 'c'){
a[y] = 'z';
}
}
else{
a[y] = a[y]-3;
}
}
this->data[x] = a;


return(a);
}

std::string decrypt(){
int x = 0;
    int n = 0;
std::string a = "";
cout<<"Escolha a String para Trocar as letras["<<x<<"-"<<length-1<<"]:";
cin>>x;getchar();
a = data[x];
n = data[x].length();
for(int y = 0;  y< n; y++){
    if(a[y] == 'x' ||a[y] == 'y'|| a[y] == 'z'){
if(a[y] == 'x'){
a[y] = 'a'; 
}
if(a[y] == 'y'){
a[y] = 'b';
}
if(a[y] == 'z'){
a[y] = 'c';
}
}
else{
a[y] = a[y]+3;
}
}
this->data[x] = a;


return(a);
}

int split(){
int x = 0;
    int n = 0;
    int z = 0;
    std::string b = "";
for(x = 0; x < length; x++){
    n = data[x].length();
for(int y = 0; y < n; y++){
b = this->data[x];
if(b[y] == ' '){
z++;
}
}
}

return(z);
}

int split_by(char delimitador){
    int x = 0;
    int n = 0;
    int z = 1;
    std::string a = "";
    
    cout<<"Escolha a String para fragmentar["<<0<<"-"<<length-1<<"]:";
    cin>>x;getchar();
    
    a = data[x];
    n = a.length();
    
    cout << "--- Fragmentos ---" << endl;
    for(int y = 0; y < n; y++){
        if(a[y] == delimitador){
            cout << endl;
            z++;
        } else {
            cout << a[y];
        }
    }
    cout << endl << "------------------" << endl;
    
    return(z);
}

std::string reverse_string(){
    int x = 0;
    int n = 0;
    std::string a = "";
    std::string invertida = "";
    
    cout<<"Escolha a String para Inverter["<<0<<"-"<<length-1<<"]:";
    cin>>x;getchar();
    
    a = data[x];
    n = a.length();
    
    for(int y = n - 1; y >= 0; y--){
        invertida += a[y];
    }
    
    this->data[x] = invertida;
    
    return(invertida);
}

};

