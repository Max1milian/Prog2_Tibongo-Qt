#ifndef AUFGABE_HPP_
#define AUFGABE_HPP_

#include "Spielstein.hpp"
#include <vector>

class Aufgabe {
  friend class MainWindow;

private:
  std::vector<Spielstein *> steine;

public:
  int aktiverSpielstein = 0;
  Spielstein *loesung_ptr;
  Spielstein *getSpielstein(unsigned int index);
  bool geloest();
  void zeichne();
  void loesche();
  void initSchwer();
  //übergibt die steine des Konstruktors in den Vektor, damit wir sie auf dem
  // Spielfeld platzieren können
  Aufgabe(Spielstein *stein1_ptr, Spielstein *stein2_ptr,
          Spielstein *stein3_ptr, Spielstein *loesung_ptr) {
    steine.push_back(stein1_ptr);
    steine.push_back(stein2_ptr);
    steine.push_back(stein3_ptr);
    this->loesung_ptr = loesung_ptr;
  }
};

#endif
