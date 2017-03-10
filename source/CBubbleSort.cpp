#include "CBubbleSort.h"
#include <iostream>
using namespace std;

CBubbleSort::CBubbleSort(int tam) : CAlgoritmos(tam) {}

CBubbleSort::CBubbleSort(int* vec, int tam) : CAlgoritmos(vec,tam) {}

CBubbleSort::~CBubbleSort() {}

void CBubbleSort::ordenacion(bool a) {
    int* copia = new int[getSize()];
    int* resultado = new int[getSize()];
    
    for(int i = 0; i< getSize(); i++)
        copia[i] = getDataVector(i);
    
    resultado = bubble();
    if(a)
        show(resultado, getSize());
    
    //Devolvemos los valores originales al vector
    setVector(copia);
}

int* CBubbleSort::bubble() {
    int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      for(i = 1; (i <= getSize()) && flag; i++) {
          flag = 0;
          for (j = 0; j < (getSize() - 1); j++) {
               if (getDataVector(j + 1) < getDataVector(j)) {    
                    temp = getDataVector(j);             // swap elements
                    setDataVector(j, getDataVector(j + 1));
                    setDataVector((j + 1), temp);
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return getVector();
}
    
    
