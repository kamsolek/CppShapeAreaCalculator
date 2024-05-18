#include <iostream>
#include <string>
#include "figura.h"

using namespace std;

#ifndef PROSTOKAT_H
#define PROSTOKAT_H

class Prostokat : public Figura {

    float a;
    float b;

public:
    Prostokat(float a, float b);
    float oblicz_pole() const override;
};

#endif
