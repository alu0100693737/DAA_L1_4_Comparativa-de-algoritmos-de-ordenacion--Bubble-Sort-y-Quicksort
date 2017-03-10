#ifndef _CQUICKSORT_H
#define _CQUICKSORT_H

#include "CAlgoritmos.h"
#include <iostream>

using namespace std;

class CQuickSort : public CAlgoritmos {
private:
public:
    CQuickSort(int*, int);
    CQuickSort(int);
    ~CQuickSort();
    void ordenacion(bool);
    
    void quicksort(int ini, int fin);
};
#endif
