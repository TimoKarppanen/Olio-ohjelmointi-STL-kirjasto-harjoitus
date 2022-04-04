
#include "Tapahtuma.h"
#include "Kalenteri.h"

int main() {

	setlocale(LC_ALL, "fi-FI");

	Kalenteri kalenteri;

	kalenteri.lisääTapahtuma("1.6.2018", new Tapahtuma(" Konsertti", "14:00 "));
	kalenteri.lisääTapahtuma("3.6.2018", new Tapahtuma(" Kaisan synttärit", "12:00 "));
	kalenteri.lisääTapahtuma("3.6.2018", new Tapahtuma(" Hammaslääkäri", "14:30 "));
	kalenteri.lisääTapahtuma("3.6.2018", new Tapahtuma(" Iltarastit", "17:00 "));
	kalenteri.lisääTapahtuma("16.6.2018", new Tapahtuma(" Jukolan viesti", "23:00 "));

	kalenteri.tulostaPäivänTapahtumat("3.6.2018");
	kalenteri.tulostaPäivänTapahtumat("10.6.2018");

}