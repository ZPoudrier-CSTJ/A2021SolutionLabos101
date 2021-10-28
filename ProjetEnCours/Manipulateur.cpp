
#include "Manipulateur.h"

void Tracerligne(char motif, int nbmotif, bool fill)
{
		cout << setfill(motif) << setw(nbmotif) << "" << (fill ? "\n" : "");

}

void Centrertexte(char motif, int nbmotif, string texte, bool fill)
{
	int texte1;
	int texte2;
	texte1 = texte.length() / 2;
	texte2 = texte.length() / 2;

	cout << left << setfill(motif) << setw(nbmotif/2 - texte1) << "";
	cout << texte;
	cout << right << setfill(motif) << setw(nbmotif/2 - texte2) << "" << (fill ? "\n" : "");


}
