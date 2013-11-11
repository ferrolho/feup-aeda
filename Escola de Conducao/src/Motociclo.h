#ifndef MOTOCICLO_H_
#define MOTOCICLO_H_
#include "Viatura.h"

class Motociclo: public Viatura {
public:
	Motociclo(string Matricula, int Ano, string Marca, int Periodicidade) : Viatura(Matricula, Ano, Marca, Periodicidade) {}
	virtual ~Motociclo() {}

	TipoCartaConducao getTipo() const { return MOTOCICLO; }
	string getTipoNumaString() const { return "motociclo"; }
	int info();
};

#endif
