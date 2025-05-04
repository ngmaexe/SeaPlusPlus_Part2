#include "RuleLoader.h"
#include <fstream>
#include <iostream>

RuleLoader::RuleLoader(const string& filename) {
    ifstream infile(filename);
    if (!infile) {
        cout << "? Error opening file: " << filename << endl;
        return;
    }

    string species;
    double minSize;
    while (infile >> species >> minSize) {
        minSizes[species] = minSize;
    }

    if (minSizes.empty()) {
        cerr << "?? Warning: No rules loaded from " << filename << endl;
    }
}

double RuleLoader::getMinSize(const string& species) {
    if (minSizes.count(species) == 0) {
        cerr << "?? Rule not found for species: " << species << endl;
        return 0.0;
    }
    return minSizes[species];
}

