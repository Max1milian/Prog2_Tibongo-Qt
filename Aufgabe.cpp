#include "Aufgabe.hpp"
//#include "Spielstein.hpp"

Spielstein* Aufgabe::getSpielstein(unsigned int index){
    if (index < sizeof(steine) / sizeof(steine[0]))
    {
           return steine.at(index);
    }

    else {
        return nullptr;
    }

}

bool Aufgabe::geloest(){
    for (auto i = 0; i < steine.size(); i++)
    {
        for (auto j = 0; j < steine[j]->getPositionen()->size(); j++)
        {
            //ueberprueft zuerst vom Stein die Position und wenn das ergebnis gleich dem loesungsptr ist gibt er true zurück
            if (!(steine.at(i)->position + steine.at(i)->getPositionen()->at(j) == (loesung_ptr->position + loesung_ptr->getPositionen()->at(j))))//
            {
                return false;
            }   
        }
    }
    return true;
}

void Aufgabe::zeichne(){
     for (auto i = 0; i < steine.size(); i++)
     {
        steine.at(i)->zeichne();
     }
     
}

void Aufgabe::loesche(){
    for (auto i = 0; i < steine.size(); i++)
    {
        steine.at(i)->loesche();
    }
    

}
