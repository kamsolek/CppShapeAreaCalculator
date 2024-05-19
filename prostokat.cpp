#include <iostream>
#include <string>
#include "prostokat.h"

using namespace std;

Prostokat::Prostokat(float a, float b) : Figura(3, "Prostokat"), a(a), b(b) {}

float Prostokat::oblicz_pole() const
{
    return a * b;
}
;
