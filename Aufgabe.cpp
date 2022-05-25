#include "Aufgabe.hpp"
#include "Spielstein.hpp"
#include "quadrupel.h"
#include <cstdlib>
#include <memory>

Spielstein *Aufgabe::getSpielstein(unsigned int index) {
  if (sizeof(steine[0] != 0) && index < sizeof(steine) / sizeof(steine[0])) {
    return steine.at(index);
  }

  else {
    return nullptr;
  }
}

bool Aufgabe::geloest() {
  for (auto i = 0; i < steine.size(); i++) {
    for (auto j = 0; j < steine[j]->getPositionen()->size(); j++) {
      // ueberprueft zuerst vom Stein die Position und wenn das ergebnis gleich
      // dem loesungsptr ist gibt er true zurück
      if (!(steine.at(i)->position + steine.at(i)->getPositionen()->at(j) ==
            (loesung_ptr->position + loesung_ptr->getPositionen()->at(j)))) //
      {
        return false;
      }
    }
  }
  return true;
}

Aufgabe::Aufgabe(){

}
void Aufgabe::zeichne() {
  for (auto i = 0; i < steine.size(); i++) {
    steine.at(i)->zeichne();
  }
}

void Aufgabe::loesche() {
  for (auto i = 0; i < steine.size(); i++) {
    steine.at(i)->loesche();
  }
}
void Aufgabe::initSchwer() {
  srand(5);
  unsigned int randNumber = rand();

  switch (randNumber) {
  case 0: {
    Quadrupel q0(SPIELSTEIN_I2, SPIELSTEIN_L2, SPIELSTEIN_T, SPIELSTEIN_Z3);
    std::unique_ptr<Spielstein> stein1 =
        std::make_unique<Spielstein>(q0.stein1);
    std::unique_ptr<Spielstein> stein2 =
        std::make_unique<Spielstein>(q0.stein2);
    std::unique_ptr<Spielstein> stein3 =
        std::make_unique<Spielstein>(q0.stein3);
    std::unique_ptr<Spielstein> stein4 =
        std::make_unique<Spielstein>(q0.stein4);
    // steine.push_back(stein1);//warum kann er das nicht übernehmen?
    break;
  }
  case 1: {
    Quadrupel q1(SPIELSTEIN_I3, SPIELSTEIN_Q, SPIELSTEIN_Z2, SPIELSTEIN_L3);
    std::unique_ptr<Spielstein> stein1 =
        std::make_unique<Spielstein>(q1.stein1);
    std::unique_ptr<Spielstein> stein2 =
        std::make_unique<Spielstein>(q1.stein2);
    std::unique_ptr<Spielstein> stein3 =
        std::make_unique<Spielstein>(q1.stein3);
    std::unique_ptr<Spielstein> stein4 =
        std::make_unique<Spielstein>(q1.stein4);
    break;
  }
  case 2: {
    Quadrupel q2(SPIELSTEIN_I2, SPIELSTEIN_I3, SPIELSTEIN_L4, SPIELSTEIN_Q);
    std::unique_ptr<Spielstein> stein1 =
        std::make_unique<Spielstein>(q2.stein1);
    std::unique_ptr<Spielstein> stein2 =
        std::make_unique<Spielstein>(q2.stein2);
    std::unique_ptr<Spielstein> stein3 =
        std::make_unique<Spielstein>(q2.stein3);
    std::unique_ptr<Spielstein> stein4 =
        std::make_unique<Spielstein>(q2.stein4);
    break;
  }
  case 3: {
    Quadrupel q3(SPIELSTEIN_Z3, SPIELSTEIN_L2, SPIELSTEIN_I3, SPIELSTEIN_T);
    std::unique_ptr<Spielstein> stein1 =
        std::make_unique<Spielstein>(q3.stein1);
    std::unique_ptr<Spielstein> stein2 =
        std::make_unique<Spielstein>(q3.stein2);
    std::unique_ptr<Spielstein> stein3 =
        std::make_unique<Spielstein>(q3.stein3);
    std::unique_ptr<Spielstein> stein4 =
        std::make_unique<Spielstein>(q3.stein4);
    break;
  }
  case 4: {
    Quadrupel q4(SPIELSTEIN_Z3, SPIELSTEIN_I3, SPIELSTEIN_T, SPIELSTEIN_I4);
    std::unique_ptr<Spielstein> stein1 =
        std::make_unique<Spielstein>(q4.stein1);
    std::unique_ptr<Spielstein> stein2 =
        std::make_unique<Spielstein>(q4.stein2);
    std::unique_ptr<Spielstein> stein3 =
        std::make_unique<Spielstein>(q4.stein3);
    std::unique_ptr<Spielstein> stein4 =
        std::make_unique<Spielstein>(q4.stein4);
    break;
  }
  case 5: {
    Quadrupel q5(SPIELSTEIN_L2, SPIELSTEIN_L4, SPIELSTEIN_L2, SPIELSTEIN_T);
    std::unique_ptr<Spielstein> stein1 =
        std::make_unique<Spielstein>(q5.stein1);
    std::unique_ptr<Spielstein> stein2 =
        std::make_unique<Spielstein>(q5.stein2);
    std::unique_ptr<Spielstein> stein3 =
        std::make_unique<Spielstein>(q5.stein3);
    std::unique_ptr<Spielstein> stein4 =
        std::make_unique<Spielstein>(q5.stein4);
    break;
  }
  default: {
    Quadrupel q0(SPIELSTEIN_I2, SPIELSTEIN_L2, SPIELSTEIN_T, SPIELSTEIN_Z3);
    std::unique_ptr<Spielstein> stein1 =
        std::make_unique<Spielstein>(q0.stein1);
    std::unique_ptr<Spielstein> stein2 =
        std::make_unique<Spielstein>(q0.stein2);
    std::unique_ptr<Spielstein> stein3 =
        std::make_unique<Spielstein>(q0.stein3);
    std::unique_ptr<Spielstein> stein4 =
        std::make_unique<Spielstein>(q0.stein4);
    break;
  }
  }
}
