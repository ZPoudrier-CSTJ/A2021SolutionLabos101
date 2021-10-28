#pragma once
// Liste des includes
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// Listes des constantes : Comment elles ne peuvent pas changer de valeur, on peut les rendres publiques à tous.
const int LARGEUR_COL1 = 15;
const int LARGEUR_COL2 = 15;

// pas de varialbes car pourrait être modifier

// Liste Fonction
void Tracerligne(char motif, int nbmotif, bool fill);
void Centrertexte(char motif, int nbmotif, string texte, bool fill);