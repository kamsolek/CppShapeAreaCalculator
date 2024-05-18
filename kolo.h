#include <iostream>
#include <string>
#include "figura.h"

using namespace std;

#ifndef KOLO_H
#define KOLO_H

class Kolo : public Figura {

    float r;

public:
    Kolo(float r);
    float oblicz_pole() const override;
};

#endif
