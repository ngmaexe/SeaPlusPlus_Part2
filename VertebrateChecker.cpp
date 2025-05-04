#include "VertebrateChecker.h"

VertebrateChecker::VertebrateChecker(RuleLoader& rl) : ruleLoader(rl) {}

bool VertebrateChecker::check(SeaCreature* creature) {
    if (creature->getHasEggs()) return false;
    return creature->getSize() >= ruleLoader.getMinSize(creature->getSpecies());
}
