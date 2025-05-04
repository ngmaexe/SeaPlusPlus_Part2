#ifndef VERTEBRATECHECKER_H
#define VERTEBRATECHECKER_H

#include "SeaChecker.h"
#include "RuleLoader.h"

class VertebrateChecker : public SeaChecker {
private:
    RuleLoader& ruleLoader;
public:
    VertebrateChecker(RuleLoader& rl);
    bool check(SeaCreature* creature) override;
};

#endif
