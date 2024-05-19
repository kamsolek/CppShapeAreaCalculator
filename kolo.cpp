#include <iostream>
#include <string>
#include "kolo.h"
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

Kolo::Kolo(float r) : Figura(1, "Kolo"), r(r) {}

float Kolo::oblicz_pole() const
{
    return r*r*M_PI;
};
