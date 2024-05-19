# CppShapeAreaCalculator
A C++ project for calculating the areas of various geometric figures, carried out as a programming assignment at college. 


The project uses polymorphism when calling the "oblicz_pole" method. The parent class is declared and the area of the surface figure is calculating by virtual method "oblicz_pole".


An array of 5 objects of the Figure class was declared, various figures with different parameters were added to it and the components of the surface area is calculating in a loop and the sum of all fields is given.
The project uses pointers and dynamic data allocation via the new operator.

**Main.cpp code:**

```cpp
#include <iostream>
#include <string>
#include "kolo.h"
#include "prostokat.h"
#include "kwadrat.h"

using namespace std;

int main()
{
    Figura* figury[5];
    figury[0] = new Kwadrat(2.5);
    figury[1] = new Kolo(2.5);
    figury[2] = new Prostokat(2.6, 1.7);
    figury[3] = new Kolo(5.6);
    figury[4] = new Prostokat(8.7, 122);

    float Suma_pol = 0.0;

    for (int i = 0; i < 5; i++) {
        Suma_pol += figury[i]->oblicz_pole();
    }

    cout << "Suma pol wynosi: " << Suma_pol << endl;

    return 0;
}
```
