#include <iostream>
#include <string>
#include "kwadrat.h"

using namespace std;

Kwadrat::Kwadrat(float a) : Figura(2, "Kwadrat"), a(a) {}

float Kwadrat::oblicz_pole() const
{
    return a * a;
};
