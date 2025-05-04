#include "Angler.h"
#include <iostream>

Angler::Angler(string n) : name(n) {}

SeaCreature* Angler::inputCreatureDataFromUser() {
    string type, species;
    double size;
    char eggs;

    cout << "Creature type (v = vertebrate, i = invertebrate): ";
    cin >> type;
    cout << "Species (check in rules): ";
    cin >> species;
    cout << "Size (cm): ";
    cin >> size;
    cout << "Has eggs? (y/n): ";
    cin >> eggs;
    bool hasEggs = (eggs == 'y' || eggs == 'Y');

    if (type == "v") return new VertebrateCreature(size, species, hasEggs);
    else return new InvertebrateCreature(size, species, hasEggs);
}

void Angler::receiveCheckResult(const string& result) {
    cout << "Result: " << result << endl;
}

