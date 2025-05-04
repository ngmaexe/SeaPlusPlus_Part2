#include "VertebrateCreature.h"

VertebrateCreature::VertebrateCreature(double s, const string& sp, bool eggs)
    : SeaCreature(s, sp, eggs) {}

string VertebrateCreature::getType() const {
    return "Vertebrate";
}
