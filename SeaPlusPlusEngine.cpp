#include "SeaPlusPlusEngine.h"

SeaPlusPlusEngine::SeaPlusPlusEngine(const string& ruleFile)
    : ruleLoader(ruleFile),
      vertebrateChecker(ruleLoader),
      invertebrateChecker(ruleLoader) {}

string SeaPlusPlusEngine::checkCreature(SeaCreature* creature) {
    if (creature->getType() == "Vertebrate") {
        return vertebrateChecker.check(creature) ? "Keep it" : "Release it";
    } else {
        return invertebrateChecker.check(creature) ? "Keep it" : "Release it";
    }
}
