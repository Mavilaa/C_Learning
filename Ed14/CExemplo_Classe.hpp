#include "CExemplo_erro.hpp"
#include <iostream>
using std::cin ;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <string>
using std::string;
#include <fstream>
using std::ofstream;
using std::ifstream;

class MyString : public Erro
{
 public:
 std::string getErroMsg ( )
 {
 return ( NO_ERROR );
 }
};