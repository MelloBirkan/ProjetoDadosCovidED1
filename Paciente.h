/*
ESTRUTURA DE DADOS I [Turma 03O11]

Atividade de Aplicação 2 - Introdução a Data Science com Estruturas de Dados I.

Nome: Caio Sampaio Oliveira. TIA: 32195621.
Nome: Gabriel Montes Chagas. TIA: 32162243.
Nome: Guilherme Picoli Rodrigues. TIA: 32147317.
Nome: Leonardo Henrique de Oliveira Matos. TIA: 32139561.
Nome: Marcello Gonzatto Birkan. TIA: 42020034.

Referências Bibliográficas:

SZWARCFITER, J.L.; MARKENZON, L. Estruturas de Dados e seus Algoritmos, 3ª Ed. Rio de Janeiro: LTC, 2010.

ÜNAL, Yavuz; DUDAK, Muhammed Nuri. Classification of Covid-19 Dataset with Some Machine Learning Methods. Journal of Amasya University the Institute of Sciences and Technology, Turquia, v. 1, n. 1, p. 30-37, jul. de 2020. Disponível em: <https://dergipark.org.tr/en/pub/jauist/issue/55760/748667>. Acesso em: 07 de Maio de 2022.
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
    int hipertensao;
    int cardiovascular;
    int obesidade;
    int fumante;
    int teste_covid;
    int icu;
    int obito;

	public:
		Paciente(){}

		Paciente(int id, int sexo, int intubado,  int diabetes, int asma,int hipertensao, int cardiovascular, int obesidade, int fumante, int teste_covid, int icu, int obito){
      this -> id = id;
      this -> sexo = sexo;
      this -> intubado = intubado;
      this -> diabetes = diabetes;
      this -> asma = asma;
      this -> hipertensao = hipertensao;
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
    int getHipertensao(){ return hipertensao; };
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
    void setHipertensao(int hipertensao){ this->hipertensao = hipertensao; };
		void setCardiovascular(int cardiovascular){ this->cardiovascular = cardiovascular; };
		void setObesidade(int obesidade){ this->obesidade = obesidade; };
    void setFumante(int fumante){ this->fumante = fumante; };
		void setTesteCovid(int teste_covid){ this->teste_covid = teste_covid; };
		void setIcu(int icu){ this->icu = icu; };
    void setObito(int obito){ this->obito = obito; };

};

#endif