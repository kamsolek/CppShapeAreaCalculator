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
