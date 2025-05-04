#ifndef RULELOADER_H
#define RULELOADER_H

#include <string>
#include <map>
using namespace std;

class RuleLoader {
private:
    map<string, double> minSizes;
public:
    RuleLoader(const string& filename);
    double getMinSize(const string& species);
};

#endif
