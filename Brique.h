//
// Created by Michel Georges Sémon on 11.02.20.
//
#include <iostream>
#include <string>
//#include <vector>
using namespace std;

#ifndef CONSTRUCTION_NEW_BRIQUE_H
#define CONSTRUCTION_NEW_BRIQUE_H



// Pour simplifier
typedef string Forme   ;
typedef string Couleur ;

class Brique
{
private:
    Forme   forme   ;
    Couleur couleur ;

public:
    /*****************************************************
      Compléter le code à partir d'ici
    *******************************************************/

    Brique(Forme forme, Couleur couleur);
    ostream& afficher(ostream& sortie) const;
};

ostream &operator<<(ostream &, const Brique &);

#endif //CONSTRUCTION_NEW_BRIQUE_H
