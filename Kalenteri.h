#ifndef KALENTERI_H
#define KALENTERI_H

#include "Tapahtuma.h"
#include <map>

class Kalenteri {

public:

	Kalenteri();
	
	~Kalenteri();

	void lis‰‰Tapahtuma(string pvm, Tapahtuma* uusiTapahtuma);

	void tulostaP‰iv‰nTapahtumat(string pvm);

private:

	multimap<string, Tapahtuma*> tapahtumat;

};

#endif