///////////////////////////////////////////////////////////////
//  CQuickSort.cpp - Implementación de la clase CQuickSort   //
//                                                           //
//      Autores: Javier Alberto Martín                       //
//               Iván García Campos                          //
//               Eduardo Escobar Alberto                     //
//                                                           //
//               Fecha: 10/03/2017                           //
///////////////////////////////////////////////////////////////

#include "CQuickSort.h"
#include <iostream>

CQuickSort::CQuickSort(int* vec, int tam) : COrdenacion(vec,tam) {}

CQuickSort::CQuickSort(int tam) : COrdenacion(tam) {}

CQuickSort::~CQuickSort() {}

void CQuickSort::ordenacion(bool mostrar) {
    int* copia = new int[getSize()];
    int* resultado = new int[getSize()];
    
    for(int i = 0; i< getSize(); i++)
        copia[i] = getDataVector(i);
    
    quicksort(0, getSize() - 1);
    for(int i = 0; i < getSize(); i++) 
        resultado[i] = getDataVector(i);
    
    if(mostrar)
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
        while(getDataVector(i) < p)
            i++;

        while(getDataVector(f) > p)
            f--;

        if (i <= f){
            aux= getDataVector(i);
            setDataVector(i, getDataVector(f));
            setDataVector(f, aux);
            i++;
            f--;
        }
    }

    if (ini < f)
        quicksort(ini, f);
    if (i < fin)
        quicksort(i, fin);
}