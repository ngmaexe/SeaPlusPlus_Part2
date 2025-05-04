#include "InvertebrateChecker.h"

InvertebrateChecker::InvertebrateChecker(RuleLoader& rl) : ruleLoader(rl) {}

bool InvertebrateChecker::check(SeaCreature* creature) {
    if (creature->getHasEggs()) return false;
    return creature->getSize() >= ruleLoader.getMinSize(creature->getSpecies());
}
