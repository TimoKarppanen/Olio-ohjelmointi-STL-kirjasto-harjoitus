
#include "Tapahtuma.h"
#include "Kalenteri.h"

int main() {

	setlocale(LC_ALL, "fi-FI");

	Kalenteri kalenteri;

	kalenteri.lis‰‰Tapahtuma("1.6.2018", new Tapahtuma(" Konsertti", "14:00 "));
	kalenteri.lis‰‰Tapahtuma("3.6.2018", new Tapahtuma(" Kaisan syntt‰rit", "12:00 "));
	kalenteri.lis‰‰Tapahtuma("3.6.2018", new Tapahtuma(" Hammasl‰‰k‰ri", "14:30 "));
	kalenteri.lis‰‰Tapahtuma("3.6.2018", new Tapahtuma(" Iltarastit", "17:00 "));
	kalenteri.lis‰‰Tapahtuma("16.6.2018", new Tapahtuma(" Jukolan viesti", "23:00 "));

	kalenteri.tulostaP‰iv‰nTapahtumat("3.6.2018");
	kalenteri.tulostaP‰iv‰nTapahtumat("10.6.2018");

}