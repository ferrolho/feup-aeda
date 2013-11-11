#ifndef PESADO_H_
#define PESADO_H_
#include "Automovel.h"

class Pesado: public Automovel {
public:
	Pesado(string Matricula, int Ano, string Marca, int Periodicidade) : Automovel(Matricula, Ano, Marca, Periodicidade) {}
	virtual ~Pesado() {}

	TipoCartaConducao getTipo() const { return PESADO; }
	string getTipoNumaString() const { return "pesado"; }
	int info();
};

#endif
