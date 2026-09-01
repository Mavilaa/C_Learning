#include <string>

#ifndef _ERRO_H_
#define _ERRO_H_

class Erro
{
 private:
 int erro;

 public:
 ~Erro ( );
 Erro ( ) { };
 static const std::string NO_ERROR;

 int getErro ( )
 {
 return ( 0 );
 }

 bool hasError ( );

 virtual std::string getErroMsg ( )
 {
 return ( "" );
 }

 protected:
 void setErro ( int codigo );
};

const std::string Erro::NO_ERROR = "[ERRO] Nao ha' erro.";

#endif