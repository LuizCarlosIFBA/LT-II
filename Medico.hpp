#include <iostream>
#include "Pessoa.hpp"

using namespace std;

using namespace std;

class Medico: public Pessoa{
  string CRM;
  string especialidade;

  Pessoa *pe = new Pessoa();  
	
  void setEspecialidade(string especialidade)
  {
  	especialidade = especialidade;
  }
 
  string getEspecialidade()
  {
       return especialidade;
  }

  void setCRM(string CRM)
  {
  	CRM = CRM;
  }
 
  string getCRM()
  {
       return CRM;
  }  	
};
 
 //g++ main.cpp -o main.o 
