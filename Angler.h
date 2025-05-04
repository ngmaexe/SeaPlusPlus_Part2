#ifndef ANGLER_H
#define ANGLER_H

#include <string>
#include "SeaCreature.h"
#include "VertebrateCreature.h"
#include "InvertebrateCreature.h"
using namespace std;

class Angler {
private:
    string name;
public:
    Angler(string n);
    SeaCreature* inputCreatureDataFromUser();
    void receiveCheckResult(const string& result);
};

#endif
