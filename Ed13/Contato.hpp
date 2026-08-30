#include"ERRO.hpp"

class contato:public Erro{
private:
string fone;
string nome;
public:
~contato(){ // destrutor

}

contato(){ // construtor
setErro(0);

fone = "";
nome = "";

}

void setNome(std::string nome){
if(nome.empty()){setErro(1);}
else{
this->nome = nome;
}

}


void setFone(std::string fone){
if(fone.empty()){setErro(2);}
else{
this->fone = fone;
}


}


std::string getNome(){

return(this->nome);
}

std::string getFone(){

return(this->fone);
}

std::string toString(){


return("{"+getNome()+","+getFone()+"}");


}


contato(std::string nome_inicial, std::string fone_inicial){
setErro(0);

setNome(nome_inicial);
setFone(fone_inicial);

}

bool hasErro(){

return(getErro()!= 0);

}
contato(contato const &another){

setErro(0);
setNome(another.nome);
setFone(another.fone);
}

};


using ref_contato = contato*;


