#include"ClasseE.hpp"

class contato: public Erro{
private:
string nome;
string fones[2];
int quantidade;
public:
~contato(){
}
contato(){
setErro(0);
fones[0] = "";
fones[1] = "";
nome = "";
quantidade = 0;
}
void setNome(std::string nome){
if(nome.empty()){setErro(1);
}
else{
this->nome = nome;
}
}
void setFone(std::string fone){
if(fone.empty()){setErro(2);
}
else{
this->fones[0] = fone;
if(quantidade == 0){
quantidade = 1;
}
}
}
std:: string getNome(){
return(this->nome);
}
std::string getFone(){
return(this->fones[0]);
}
std::string getFone2(){
return(this->fones[1]);
}
std::string toString(){
if(quantidade == 2){
return("{"+getNome()+","+fones[0]+","+fones[1]+"}");
}
return("{"+getNome()+","+fones[0]+"}");
}
contato(std::string nome, std::string fone){
setNome(nome);
setFone(fone);
}
contato(std::string nome, std::string fone1, std::string fone2){
setNome(nome);
fones[0] = fone1;
fones[1] = fone2;
quantidade = 2;
}
bool hasErro(){
return(getErro()!=0);
}
contato(contato const &other){
setNome(other.nome);
this->quantidade = other.quantidade;
for(int x = 0; x < quantidade; x++){
this->fones[x] = other.fones[x];
}
}
void readName(){
cout<<this->nome<<endl;
}
void readPhone(){
for(int x = 0; x < quantidade; x++){
cout<<this->fones[x]<<endl;
}
}
bool isvalidPhone(std::string fone){
char c = ' ';
bool y = false;
for(int x = 0; x < 9; x++){
c = fone[x];
if(('0'<= c && c <='9') ||(c == '-')){
y = true;
}
else{
y = false;
}
}
return(y);
}
void fprint(std::string fileName){
string a = "";
ofstream afile;
afile.open(fileName);
afile<<nome<<endl;
afile<<fones[0]<<endl;
afile.close();
}
void fread(std::string fileName){
int tamanho = 0;
ifstream afile;
afile.open(fileName);
afile>>nome;
afile>>fones[0];
setNome(nome);
setFone(fones[0]);
afile.close();
}
void readFromFile(std::string fileName){
ifstream arq;
arq.open(fileName);
if(arq.is_open()){
string temp = "";
int qtd = 0;
arq>>qtd;
arq>>temp;
if(!temp.empty()){
this->nome = temp;
this->quantidade = qtd;
for(int x = 0; x < qtd; x++){
arq>>this->fones[x];
}
}
arq.close();
}
else{
setErro(3);
}
}
void writeToFile(std::string fileName){
ofstream arq;
arq.open(fileName);
if(arq.is_open()){
arq<<quantidade<<endl;
arq<<nome<<endl;
for(int x = 0; x < quantidade; x++){
arq<<fones[x]<<endl;
}
arq.close();
}
else{
setErro(4);
}
}
int phones(){
return(this->quantidade);
}
void setPhone2a(std::string fone){
if(this->quantidade == 1){
char op = ' ';
cout<<"Quer acrescentar mais um numero? (s/n): ";
cin>>op;
if(op == 's' || op == 'S'){
this->fones[1] = fone;
this->quantidade = 2;
}
}
else if(this->quantidade == 2){
this->fones[1] = fone;
}
}
void setPhone2b(std::string fone){
if(this->quantidade < 2){
setErro(5);
}
else{
this->fones[1] = fone;
}
}
void setPhone2c(std::string fone_vazio){
if(this->quantidade < 2){
setErro(6);
}
else{
this->fones[1] = fone_vazio;
this->quantidade = 1;
}
}
};

using ref_contato = contato*;