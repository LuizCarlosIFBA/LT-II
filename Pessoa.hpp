#include <iostream>

using namespace std;

class Pessoa{
     private: string nome;
     private: int telefone;
     private: string sexo;
     private: int idade;
		 
	 public: void setNome(string Nome)
     {
        nome = Nome;
     }
 
     public: string getNome()
     {
        return nome;
     }	
	
     public: void setTelefone(int Telefone)
     {
        telefone = Telefone;
     }
 
     public: int getTelefone()
     {
        return telefone;
     }

     public: void setIdade(int Idade)
     {
        idade = Idade;
     }
 
     public: int getIdade()
     {
        return idade;
     }

     public: void setSexo(string Sexo)
     {
        sexo = Sexo;
     }
 
     public: string getSexo()
     {
        return sexo;
     }
	 
	 
};
 
 
class Medico : public Pessoa{
 
  private: string CRM;
  private:string especialidade;
 
  public: void inserir(string nome, int idade, int telefone, string sexo, string esp,string crm){
		setNome(nome);
		setIdade(idade);
		setTelefone(telefone);
		setSexo(sexo);
		setEspecialidade(esp);
		setCRM(crm);
  }

  public: void listar(){
    cout << " Nome: ";
	cout << getNome()<<endl;
	cout << " Idade: ";
	cout << getIdade()<<endl;
	cout << " Telefone: ";
	cout << getTelefone()<<endl;
	cout << " Sexo: ";
	cout << getSexo()<<endl;
	
	cout << " Especialidade: ";
	cout << getEspecialidade()<<endl;
	cout << " CRM: ";
	cout << getCRM()<<endl;  
  }
  
  public: void setEspecialidade(string esp)
  {
  	especialidade = esp;
  }
 
  public: string getEspecialidade()
  {
       return especialidade;
  }

  public: void setCRM(string crm)
  {
  	CRM = crm;
  }
 
  public: string getCRM()
  {
       return CRM;
  }  	

};

class Paciente : public Pessoa {
   
  public: void inserir(string nome, int idade, int telefone, string sexo, string convenio){
		setNome(nome);
		setIdade(idade);
		setTelefone(telefone);
		setSexo(sexo);
		setConvenio(convenio);
  }  
  
  public: void listar(){
    cout << " Nome: ";
	cout << getNome()<<endl;
	cout << " Idade: ";
	cout << getIdade()<<endl;
	cout << " Telefone: ";
	cout << getTelefone()<<endl;
	cout << " Sexo: ";
	cout << getSexo()<<endl;
	
	cout << " Convenio: ";
	cout << getConvenio()<<endl;
  }
  
	  
  private: string convenio;

  public: void setConvenio(string Convenio)
  {
  	convenio = Convenio;
  }
 
  public: string getConvenio()
  {
       return convenio;
  }
  
};
 
 //g++ main.cpp -o main.o 
