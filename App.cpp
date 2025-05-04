#include "App.h"
#include <iostream>
using namespace std;

App::App() : engine("rules1.txt") {}

void App::run() {
    string name;
    cout << "Enter angler name (one word only): ";
    cin >> name;
    Angler angler(name);

    SeaCreature* creature = angler.inputCreatureDataFromUser();
    if (creature) {
        string result = engine.checkCreature(creature);
        angler.receiveCheckResult(result);
        delete creature;
    }
}
