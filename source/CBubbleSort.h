/** Primera pasada:
{9,21,4,40,10,35} --> {9,21,4,40,10,35} (no se realiza intercambio)
{9,21,4,40,10,35} --> {9,4,21,40,10,35} (intercambio entre el 21 y el 4)
{9,4,21,40,10,35} --> {9,4,21,40,10,35} (no se realiza intercambio)
{9,4,21,40,10,35} --> {9,4,21,10,40,35} (intercambio entre el 40 y el 10)
{9,4,21,10,40,35} --> {9,4,21,10,35,40} (intercambio entre el 40 y el 35)
Segunda pasada:
{9,4,21,10,35,40} --> {4,9,21,10,35,40} (intercambio entre el 9 y el 4)
{4,9,21,10,35,40} --> {4,9,21,10,35,40} (no se realiza intercambio)
{4,9,21,10,35,40} --> {4,9,10,21,35,40} (intercambio entre el 21 y el 10)
Aunque el array ya está ordenado se harían otras 3 pasadas más
{4,9,10,21,35,40} --> {4,9,10,21,35,40} (no se realiza intercambio)
{4,9,21,10,35,40} --> {4,9,10,21,35,40} (no se realiza intercambio) */

#ifndef _CBUBBLE_H
#define _CBUBBLE_H

#include "CAlgoritmos.h"
#include <iostream>

using namespace std;

class CBubbleSort : public CAlgoritmos {
private:
public:
    CBubbleSort(int);
    CBubbleSort(int*, int);
    ~CBubbleSort();
    void ordenacion(bool);
    
    int* bubble();
};
#endif
