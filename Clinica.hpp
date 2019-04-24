#include <iostream>
#include "Pessoa.hpp"


using namespace std;


class Clinica{
  Medico m;    
  Medico m2;   
  
  Paciente p;  
 
  public:string medico;
  public:string paciente_clinica;
  public:int tempo;
  
  public: void marcar_consulta(string Medico,int Tempo,string Paciente_clinica){
	tempo = Tempo;
	medico = Medico;	
	paciente_clinica = Paciente_clinica;
	
	cout<<" "<<endl;
	cout<<"//------CONSULTAS------//"<<endl;
	cout<<"Tempo em minutos: ";
	cout<<tempo<<endl;
	cout<<"Medico: ";
	cout<<medico<<endl;
	cout<<"Paciente: ";
	cout<<paciente_clinica<<endl;
  }
	
  public: void listar_consultaXmedico(){
      marcar_consulta("Dr.M",30,"Cati");
  }

  public: void incluir_medico(){
	m.inserir("Dr.M",20,111111111,"Masculino","Clinico geral","xx-000");
	m2.inserir("Dr. J",30,111111000,"Masculino","Clinico geral","xx-111");
  }

  public: void listar_medicos(){
	m.listar();
	cout<<" "<<endl;
	m2.listar();
  }

  public: void incluir_paciente(){
	p.inserir("Catí", 12, 999999999,"Masculino","Master");
  }

  void listar_pacientes(){
	p.listar();
  }	

  void mostradados(){
	cout<<"//------LISTAR MÉDICO(S)------//"<<endl;
	cout<<" "<<endl;
	listar_medicos();
	cout<<" "<<endl;
	cout<<"//------LISTAR PACIENTE(S)------//"<<endl;
	cout<<" "<<endl;
	listar_pacientes();
  }

  public: void entradados(){
	  incluir_medico();
	  incluir_paciente();
  }	

};
 


 //g++ main.cpp -o main.o 
