#include <iostream>
#include <string>
#include "figura.h"

using namespace std;

#ifndef KWADRAT_H
#define KWADRAT_H

class Kwadrat : public Figura {

    float a;

public:
    Kwadrat(float a);
    float oblicz_pole() const override;
};

#endif
