///////////////////////////////////////////////////////////////
//  CBubbleSort.cpp - Implementación de la clase CBubbleSort //
//                                                           //
//      Autores: Javier Alberto Martín                       //
//               Iván García Campos                          //
//               Eduardo Escobar Alberto                     //
//                                                           //
//               Fecha: 10/03/2017                           //
///////////////////////////////////////////////////////////////

#include "CBubbleSort.h"
#include <iostream>

CBubbleSort::CBubbleSort(int tam) : COrdenacion(tam) {}

CBubbleSort::CBubbleSort(int* vec, int tam) : COrdenacion(vec,tam) {}

CBubbleSort::~CBubbleSort() {}

void CBubbleSort::ordenacion(bool mostrar) {
    int* copia = new int[getSize()];
    int* resultado = new int[getSize()];

    for(int i = 0; i< getSize(); i++)
        copia[i] = getDataVector(i);

    resultado = bubble();
    if(mostrar)
        show(resultado, getSize());

    //Devolvemos los valores originales al vector

    setVector(copia);

}

int* CBubbleSort::bubble() {
    int i, j, flag = 1;                                     // flag = 1 para empezar primera etapa
    int aux;
    for(i = 1; (i <= getSize()) && flag; i++) {
        flag = 0;
        for (j = 0; j < (getSize() - 1); j++) {
            if (getDataVector(j + 1) < getDataVector(j)) {    
                aux = getDataVector(j);                     // intercambiar elementos
                setDataVector(j, getDataVector(j + 1));
                setDataVector((j + 1), aux);
                flag = 1;                                   // indica que el intercambio se hizo
            }
        }
    }
    return getVector();
}