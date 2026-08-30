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
#define _ERRO_H_

class Erro{
private:
int erro;
public:
~Erro(){

}


Erro(){
erro = 0;
}

static const std::string NO_ERROR;


int getErro(){


return(erro);
}


bool hasErro(){
if(getErro() != 0){


return(true);
}
}


virtual std::string getErroMsg(){
    if(getErro() == 1){

    return("ERRO:Nao existe dados");
    }
    if(getErro() == 2){

    return("ERRO:Sinal inexistente");
    }
    if(getErro() == 3){

    
    return("ERRO:tamanho invalido");
    }

    return("Erro");

}
protected:

void setErro(int codigo){
erro = codigo;
}

};


const std::string Erro::NO_ERROR= "[ERRO] Nao ha erro.";

