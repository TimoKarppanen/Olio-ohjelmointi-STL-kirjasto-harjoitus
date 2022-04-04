#include "Kalenteri.h"
#include "Tapahtuma.h"
#include <map>
#include <algorithm>

Kalenteri::Kalenteri() {




}


/* Destruktori tuhoaa lis‰tyt tapahtumat */

Kalenteri::~Kalenteri() {

	multimap<string, Tapahtuma*>::iterator it = tapahtumat.begin();

	while (it != tapahtumat.end()) {
		delete (*it).second;
		it++;
	}
}


void Kalenteri::lis‰‰Tapahtuma(string pvm, Tapahtuma* uusiTapahtuma) {

	tapahtumat.insert(make_pair(pvm, uusiTapahtuma));

	cout << " Uusi tapahtuma on nyt lis‰tty s‰iliˆˆn " << endl;
	
}


void Kalenteri::tulostaP‰iv‰nTapahtumat(string pvm) {

	cout << " tulostetaan p‰iv‰n tapahtumat " << endl;

	
	multimap<string, Tapahtuma*>::iterator it = tapahtumat.find(pvm);

	if (it != tapahtumat.end()) {


		cout << (*it).first << endl;

		for (; it != tapahtumat.upper_bound(pvm); it++) {
			(*it).second->tulosta();
		}
	}

	else {

		cout << " ei tapahtumia " << endl;
	}

}

