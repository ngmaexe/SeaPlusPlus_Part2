#include "SeaCreature.h"

SeaCreature::SeaCreature(double s, const string& sp, bool eggs)
    : size(s), species(sp), hasEggs(eggs) {}

double SeaCreature::getSize() const { return size; }
string SeaCreature::getSpecies() const { return species; }
bool SeaCreature::getHasEggs() const { return hasEggs; }
