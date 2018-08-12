#include <iostream>
#include <iostream>
using namespace std;

using namespace std;

class Pessoa{
     string nome;
     int telefone;
     char sexo;
     int idade;

     void setNome(string nome)
     {
        nome = nome;
     }
 
     string getNome()
     {
        return nome;
     }	
	
     void setTelefone(int telefone)
     {
        telefone = telefone;
     }
 
     int getTelefone()
     {
        return telefone;
     }

     void setIdade(int idade)
     {
        idade = idade;
     }
 
     int getIdade()
     {
        return idade;
     }

     void setSexo(char sexo)
     {
        sexo = sexo;
     }
 
     int getSexo()
     {
        return sexo;
     }

 };

 //g++ main.cpp -o main.o 
