/*
ESTRUTURA DE DADOS I [Turma 03O11]

Atividade de Aplicação 2 - Introdução a Data Science com Estruturas de Dados I.

Nome: Caio Sampaio Oliveira, TIA: 32195621.
Nome: Marcello Gonzatto Birkan. TIA: 42020034.

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
    int tipo_paciente;
    int intubado;
    int pneumonia;
    int idade;
    int gravidez;
    int diabetes;
    int copd;
    int asma;
    int imunossupressao;
    int hipertensao;
    int outras_doencas;
    int cardiovascular;
    int obesidade;
    int irc;
    int fumante;
    int outro_caso;
    int teste_covid;
    int icu;
    int obito;

	public:
		Paciente(){}

		Paciente(int id, int sexo, int tipo_paciente, int intubado, int pneumonia, int idade, int gravidez, int diabetes, int copd, int asma, int imunossupressao, int hipertensao, int outras_doencas, int cardiovascular, int obesidade, int irc, int fumante, int outro_caso, int teste_covid, int icu, int obito){
      this -> id = id;
      this -> sexo = sexo;
      this -> tipo_paciente = tipo_paciente;
      this -> intubado = intubado;
      this -> pneumonia = pneumonia;
      this -> idade = idade;
      this -> gravidez = gravidez;
      this -> diabetes = diabetes;
      this -> copd = copd;
      this -> asma = asma;
      this -> imunossupressao = imunossupressao;
      this -> hipertensao = hipertensao;
      this -> outras_doencas = outras_doencas;
      this -> cardiovascular = cardiovascular;
      this -> obesidade = obesidade;
      this -> irc = irc;
      this -> fumante = fumante;
      this -> outro_caso = outro_caso;
      this -> teste_covid = teste_covid;
      this -> icu = icu;
      this -> obito = obito;
		};

		~Paciente(){};

		int getId(){ return id; };
		int getSexo(){ return sexo; };
		int getTipoPaciente(){ return tipo_paciente; };
		int getIntubado(){ return intubado; };
    int getPneumonia(){ return pneumonia; };
    int getIdade(){ return idade; };
		int getGravidez(){ return gravidez; };
		int getDiabetes(){ return diabetes; };
		int getCopd(){ return copd; };
    int getAsma(){ return asma; };
    int getImunossupressao(){ return imunossupressao; };
		int getHipertensao(){ return hipertensao; };
		int getOutrasDoencas(){ return outras_doencas; };
		int getCardiovascular(){ return cardiovascular; };
    int getObesidade(){ return obesidade; };
    int getIrc(){ return irc; };
		int getFumante(){ return fumante; };
		int getOutroCaso(){ return outro_caso; };
		int getTesteCovid(){ return teste_covid; };
    int getIcu(){ return icu; };
    int getObito(){ return obito; };

		void setSexo(int sexo){ this->sexo = sexo; };
		void setTipoPaciente(int tipo_paciente){ this->tipo_paciente = tipo_paciente; };
		void setIntubado(int intubado){ this->intubado = intubado; };
		void setPneumonia(int pneumonia){ this->pneumonia = pneumonia; };
    void setIdade(int idade){ this->idade = idade; };
    void setGravidez(int gravidez){ this->gravidez = gravidez; };
		void setDiabetes(int diabetes){ this->diabetes = diabetes; };
		void setCopd(int copd){ this->copd = copd; };
		void setAsma(int asma){ this->asma = asma; };
    void setImunossupressao(int imunossupressao){ this->imunossupressao = imunossupressao; };
    void setHipertensao(int hipertensao){ this->hipertensao = hipertensao; };
		void setOutrasDoencas(int outras_doencas){ this->outras_doencas = outras_doencas; };
		void setCardiovascular(int cardiovascular){ this->cardiovascular = cardiovascular; };
		void setObesidade(int obesidade){ this->obesidade = obesidade; };
    void setIrc(int irc){ this->irc = irc; };
    void setFumante(int fumante){ this->fumante = fumante; };
		void setOutroCaso(int outro_caso){ this->outro_caso = outro_caso; };
		void setTesteCovid(int teste_covid){ this->teste_covid = teste_covid; };
		void setIcu(int icu){ this->icu = icu; };
    void setObito(int obito){ this->obito = obito; };

};

#endif