//
// Created by Michel Georges Sémon on 11.02.20.
//

#include "Brique.h"



Brique::Brique(Forme forme, Couleur couleur)
        :forme(forme), couleur(couleur) { }

ostream& Brique::afficher(ostream& sortie) const {
    if (couleur == "")
        sortie << forme;
    else
        sortie << "(" << forme << ", " << couleur << ")";
    return sortie;
}

ostream &operator<<(ostream &out, const Brique &brique) {
    return brique.afficher(out);
}