#ifndef TAPAHTUMA_H
#define TAPAHTUMA_H

#include <iostream>
#include <string>

using namespace std;


class Tapahtuma {


public:

	Tapahtuma(string nimi, string aika) {
		tapahtumanNimi = nimi;

	}

	// Oletuskonstruktori

	Tapahtuma() {

		tapahtumanNimi = "";
		kellonaika = "00:00";
	}

	void tulosta() {

		cout << tapahtumanNimi << " klo " << kellonaika << endl;

	}


	// Luokan atribuutit ovat julkisia.

	string tapahtumanNimi;
	string kellonaika;


};






#endif