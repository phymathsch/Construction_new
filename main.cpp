//#include <string>
//#include <vector>
//#include <iostream>

//using namespace std;

#include "Brique.h"
#include "Construction.h"
int main()
{


//    vector<vector<vector<string>>> etage;
//    vector<vector<string>> rangee;
//    vector<string> elt;
//
//    elt.push_back("000");elt.push_back("001");elt.push_back("002");
//    rangee.push_back(elt);
//    elt.clear();
//    elt.push_back("010");elt.push_back("011");elt.push_back("012");
//    rangee.push_back(elt);
//    elt.clear();
//    elt.push_back("020");elt.push_back("021");elt.push_back("022");
//    rangee.push_back(elt);
//    etage.push_back(rangee);
//    elt.clear();
//    rangee.clear();
//
//    elt.push_back("100");elt.push_back("101");elt.push_back("102");
//    rangee.push_back(elt);
//    elt.clear();
//    elt.push_back("110");elt.push_back("111");elt.push_back("112");
//    rangee.push_back(elt);
//    elt.clear();
//    elt.push_back("120");elt.push_back("121");elt.push_back("122");
//    rangee.push_back(elt);
//    elt.clear();
//    etage.push_back(rangee);
//
//


    vector<vector<vector<string>>> etage;
    vector<vector<string>> rangee;
    vector<string> elt;

    elt.push_back("000");elt.push_back("001");elt.push_back("002");elt.push_back("003");
    rangee.insert(rangee.begin(), elt);
    //rangee.push_back(elt);
    elt.clear();
    elt.push_back("010");elt.push_back("011");elt.push_back("012");
    rangee.insert(rangee.begin(), elt);
    //rangee.push_back(elt);
    elt.clear();
    elt.push_back("020");elt.push_back("021");elt.push_back("022");
    rangee.insert(rangee.begin(), elt);
    //rangee.push_back(elt);
    etage.push_back(rangee);
    elt.clear();
    rangee.clear();

    elt.push_back("100");elt.push_back("101");elt.push_back("102");
    rangee.push_back(elt);
    elt.clear();
    elt.push_back("110");elt.push_back("111");elt.push_back("112");
    rangee.push_back(elt);
    elt.clear();
    elt.push_back("120");elt.push_back("121");elt.push_back("122");
    rangee.push_back(elt);
    elt.clear();
    etage.push_back(rangee);
    rangee.clear();


    for (int i = 0; i< etage.size(); i++){
        for (int j = 0; j<etage.at(i).size(); ++j) {
            for (int k = 0; k<etage[i][j].size(); ++k) {
                cout << etage[i][j][k] << " / " ;
            } cout << endl;
        }cout << endl;
    }

//    for (auto y : etage) {
//        cout << "couche:";
//        for (auto z : y){
//            cout << endl;
//            for (auto elt : z)
//                cout << " " << elt << " ";
//        }cout << endl;
//    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

/*


#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Pour simplifier
typedef string Forme   ;
typedef string Couleur ;

class Brique
{
private:
    Forme   forme   ;
    Couleur couleur ;

public:
    */
/*****************************************************
      Compléter le code à partir d'ici
    *******************************************************//*


};

class Construction
{
    friend class Grader;

};

const Construction operator*(unsigned int n, Construction const& a)
{
}

const Construction operator/(unsigned int n, Construction const& a)
{
}

const Construction operator%(unsigned int n, Construction const& a)
{
}

*/
/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************//*


int main()
{
    // Modèles de briques
    Brique toitD("obliqueD", "rouge");
    Brique toitG("obliqueG", "rouge");
    Brique toitM(" pleine ", "rouge");
    Brique mur  (" pleine ", "blanc");
    Brique vide ("                 ", "");

    unsigned int largeur(4);
    unsigned int profondeur(3);
    unsigned int hauteur(3); // sans le toit

    // on construit les murs
    Construction maison( hauteur / ( profondeur % (largeur * mur) ) );

    // on construit le toit
    Construction toit(profondeur % ( toitG + 2*toitM + toitD ));
    toit ^= profondeur % (vide + toitG + toitD);

    // on pose le toit sur les murs
    maison ^= toit;

    // on admire notre construction
    cout << maison << endl;

    return 0;
}
*/
