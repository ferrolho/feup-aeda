/*
 * Pessoa.h
 *
 *  Created on: Oct 12, 2013
 *      Author: henrique
 */

#ifndef PESSOA_H_
#define PESSOA_H_
#include <string>
using namespace std;

class Pessoa {
protected:
	string nome;
public:
	Pessoa(string Nome) : nome(Nome) {}
	virtual ~Pessoa();
};

#endif /* PESSOA_H_ */
