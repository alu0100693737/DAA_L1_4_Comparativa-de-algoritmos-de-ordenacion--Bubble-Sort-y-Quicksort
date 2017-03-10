#include "CQuickSort.h"
#include <iostream>
using namespace std;

CQuickSort::CQuickSort(int* vec, int tam) : CAlgoritmos(vec,tam) {}

CQuickSort::CQuickSort(int tam) : CAlgoritmos(tam) {}

CQuickSort::~CQuickSort() {}

void CQuickSort::ordenacion(bool a) {
    int* copia = new int[getSize()];
    int* resultado = new int[getSize()];
    
    for(int i = 0; i< getSize(); i++)
        copia[i] = getDataVector(i);
    
    quicksort(0, getSize() - 1);
    for(int i = 0; i < getSize(); i++) 
        resultado[i] = getDataVector(i);
    
    if(a)
        show(resultado, getSize());
    
    //Devolvemos los valores originales al vector
    setVector(copia);
}

void CQuickSort::quicksort(int ini, int fin) {
    int aux;
    int i = ini;
    int f = fin;
    int p = getDataVector((i + f )/2);

    while(i < f){
        while(getDataVector(i)< p){
            i++;
        }
        while(getDataVector(f) > p){
            f--;
        }
        if (i <= f){
            aux= getDataVector(i);
            setDataVector(i, getDataVector(f));
            setDataVector(f, aux);
            i++;
            f--;
        }
    }

    if (ini < f)
        quicksort(ini,f);
    if (i< fin)
        quicksort(i,fin);
}
