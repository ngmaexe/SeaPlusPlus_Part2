#ifndef SEACREATURE_H
#define SEACREATURE_H
#include <string>
using namespace std;


class SeaCreature
{
protected:
    double size;
    string species;
    bool hasEggs;
public:
    SeaCreature(double s, const string& sp, bool eggs);
    virtual string getType() const = 0;
    double getSize() const;
    string getSpecies() const;
    bool getHasEggs() const;
    virtual ~SeaCreature() = default;
};

#endif
