#ifndef SEAPLUSPLUSENGINE_H
#define SEAPLUSPLUSENGINE_H

#include "RuleLoader.h"
#include "VertebrateChecker.h"
#include "InvertebrateChecker.h"

class SeaPlusPlusEngine {
private:
    RuleLoader ruleLoader;
    VertebrateChecker vertebrateChecker;
    InvertebrateChecker invertebrateChecker;
public:
    SeaPlusPlusEngine(const string& ruleFile);
    string checkCreature(SeaCreature* creature);
};

#endif
