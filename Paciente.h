/*
ESTRUTURA DE DADOS I [Turma 03O11]

Atividade de Aplicação 2 - Introdução a Data Science com Estruturas de Dados I.

Nome: Caio Sampaio Oliveira, TIA: 32195621.
Nome: Marcello Gonzatto Birkan. TIA: 42020034.
Nome: . TIA: .
Nome: . TIA: .
Nome: . TIA: .

Referências Bibliográficas:

*/

#ifndef ____PACIENTE____
#define ____PACIENTE____

using namespace std;

// Classe N� da lista duplamente encadeada
class Paciente{
	private:
		int id;
    int sexo;
    int intubado;
    int diabetes;
    int asma;
    int cardiovascular;
    int obesidade;
    int fumante;
    int teste_covid;
    int icu;
    int obito;

	public:
		Paciente(){}

		Paciente(int id, int sexo, int tipo_paciente, int intubado,  int diabetes, int asma, int cardiovascular, int obesidade, int fumante, int teste_covid, int icu, int obito){
      this -> id = id;
      this -> sexo = sexo;
      this -> tipo_paciente = tipo_paciente;
      this -> intubado = intubado;
      this -> diabetes = diabetes;
      this -> asma = asma;
      this -> cardiovascular = cardiovascular;
      this -> obesidade = obesidade;
      this -> fumante = fumante;
      this -> teste_covid = teste_covid;
      this -> icu = icu;
      this -> obito = obito;
		};

		~Paciente(){};

		int getId(){ return id; };
		int getSexo(){ return sexo; };
		int getIntubado(){ return intubado; };
		int getDiabetes(){ return diabetes; };
    int getAsma(){ return asma; };
		int getCardiovascular(){ return cardiovascular; };
    int getObesidade(){ return obesidade; };
		int getFumante(){ return fumante; };
		int getTesteCovid(){ return teste_covid; };
    int getIcu(){ return icu; };
    int getObito(){ return obito; };

		void setSexo(int sexo){ this->sexo = sexo; };
		void setIntubado(int intubado){ this->intubado = intubado; };
		void setDiabetes(int diabetes){ this->diabetes = diabetes; };
		void setAsma(int asma){ this->asma = asma; };
		void setCardiovascular(int cardiovascular){ this->cardiovascular = cardiovascular; };
		void setObesidade(int obesidade){ this->obesidade = obesidade; };
    void setFumante(int fumante){ this->fumante = fumante; };
		void setTesteCovid(int teste_covid){ this->teste_covid = teste_covid; };
		void setIcu(int icu){ this->icu = icu; };
    void setObito(int obito){ this->obito = obito; };

};

#endif