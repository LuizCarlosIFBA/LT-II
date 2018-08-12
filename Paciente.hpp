#include <iostream>
#include "Pessoa.hpp"

using namespace std;

using namespace std;

class Paciente: public Pessoa{
  string convenio;

  Pessoa *pe = new Pessoa();  

  void setConvenio(string convenio)
  {
  	convenio = convenio;
  }
 
  string getConvenio()
  {
       return convenio;
  }
};
 


 //g++ main.cpp -o main.o 
