#ifndef INVERTEBRATECREATURE_H
#define INVERTEBRATECREATURE_H

#include "SeaCreature.h"

class InvertebrateCreature : public SeaCreature {
public:
    InvertebrateCreature(double s, const string& sp, bool eggs);
    string getType() const override;
};
#endif
