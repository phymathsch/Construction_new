//
// Created by Michel Georges Sémon on 11.02.20.
//
//#include <iostream>
//#include <string>
#include <vector>
//using namespace std;

#ifndef CONSTRUCTION_NEW_CONSTRUCTION_H
#define CONSTRUCTION_NEW_CONSTRUCTION_H


#include "Brique.h"

class Construction
{
    friend class Grader;

    // pour les tests lors des ajouts
    typedef vector<Brique> briques_k;
    typedef vector<briques_k> rangees_j;
    typedef vector<rangees_j> couches_i;

public:
    Construction(Brique brique);
    ostream& afficher(ostream& sortie) const;
    void operator^=(Construction const &c);
    void operator-=(Construction const &c);
    void operator+=(Construction const &b);
    // aides
    int Get_nb_couches_i() const;
    int Get_nb_rangees_j() const;
    int Get_nb_briques_k();
private:
    couches_i contenu;
};

ostream &operator<<(ostream &, const Construction &);

#endif //CONSTRUCTION_NEW_CONSTRUCTION_H
