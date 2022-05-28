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

#ifndef ____LDL____
#define ____LDL____

#include "No.h"
// Classe de Lista Duplamente Encadeada
class LDL{
	private:
		No *cabeca;
		int qtde;
	public:
		LDL();
		~LDL() {};// Exercicio
		void setCabeca(No *cabeca){ this->cabeca = cabeca;	};
		No *getCabeca(){ return cabeca; };
		int getQtde(){ return qtde;	};
		void setQtde(int qtde) { this->qtde =  qtde; };
		bool isEmpty();	
    bool isEmptyLista(No *cabeca);	
		bool isFull();
		bool remove(int chave);
    bool atualiza(int chave, Paciente *dado);
		bool insereOrdemCrescente(int chave, Paciente *dado);
		void mostraOrdemCrescente();
		void mostraOrdemDecrescente();
		No *busca(int chave);
    
};

#endif