/*
ESTRUTURA DE DADOS I [Turma 03O11]

Atividade de Aplicação 2 - Introdução a Data Science com Estruturas de Dados I.

Nome: Caio Sampaio Oliveira, TIA: 32195621.
Nome: Gabriel Montes Chagas. TIA: 32162243.
Nome: Guilherme Picoli Rodrigues. TIA: 32147317.
Nome: Leonardo Henrique de Oliveira Matos. TIA: 32139561.
Nome: Marcello Gonzatto Birkan. TIA: 42020034.

Referências Bibliográficas:

*/

#ifndef ____LDECO_NO____
#define ____LDECO_NO____

#include "Paciente.h"

using namespace std;

// Elemento do tipo inteiro a ser inserido no n� da LDL 
//typedef Paciente Elemento;

// Classe N� da lista duplamente encadeada
class No {
	private:
		int chave;
		Paciente *dado;
		No *ant, *prox;
	public:
		No() {}
		No(int chave, Paciente *dado, No *ant, No *prox){
			this->chave = chave;
			this->dado = dado;
			this->ant = ant;
			this->prox = prox;
		};
		~No(){};
		Paciente getDado() { return *dado;};
		No *getAnt(){ return ant;};
		No *getProx(){ return prox;};
		int getChave(){ return chave; };
		void setDado(Paciente *dado) { this->dado = dado;};
		void setChave(int chave){ this->chave = chave; };
		void setAnt(No *ant){ this->ant = ant; };
		void setProx(No *prox){ this->prox = prox; };		
};

#endif