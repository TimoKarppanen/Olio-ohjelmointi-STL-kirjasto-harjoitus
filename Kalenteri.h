#ifndef KALENTERI_H
#define KALENTERI_H

#include "Tapahtuma.h"
#include <map>

class Kalenteri {

public:

	Kalenteri();
	
	~Kalenteri();

	void lisääTapahtuma(string pvm, Tapahtuma* uusiTapahtuma);

	void tulostaPäivänTapahtumat(string pvm);

private:

	multimap<string, Tapahtuma*> tapahtumat;

};

#endif