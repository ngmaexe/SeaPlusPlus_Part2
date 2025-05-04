#include "InvertebrateCreature.h"

InvertebrateCreature::InvertebrateCreature(double s, const string& sp, bool eggs)
    : SeaCreature(s, sp, eggs) {}

string InvertebrateCreature::getType() const {
    return "Invertebrate";
}

