#ifndef INVERTEBRATECHECKER_H
#define INVERTEBRATECHECKER_H

#include "SeaChecker.h"
#include "RuleLoader.h"

class InvertebrateChecker : public SeaChecker {
private:
    RuleLoader& ruleLoader;
public:
    InvertebrateChecker(RuleLoader& rl);
    bool check(SeaCreature* creature) override;
};

#endif
