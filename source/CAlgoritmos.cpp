#include "CAlgoritmos.h"

//poliformismos validos

#include <iostream>
#include <sys/time.h>
#include <time.h>
#include <stdlib.h>
#include<stdio.h>
using namespace std;

//numeros entre -10000 y 10000
CAlgoritmos::CAlgoritmos(int size) {
    
    size_ = size;
    vector_ = new int[size_];
    srand(time(NULL));
    for(int i = 0;i < size_;i++){
        vector_[i]=(rand() % 20000) - 10000;
    }
    show();
}

CAlgoritmos::CAlgoritmos(int* vec, int siz) {
    size_ = siz;
    vector_ = vec;
}

CAlgoritmos::~CAlgoritmos() { 
    //delete vector
}

int CAlgoritmos::getDataVector(int pos) {
    return vector_[pos];
}

int CAlgoritmos::getSize() {
    return size_;
}

int* CAlgoritmos::getVector() {
    return vector_;
}

void CAlgoritmos::setDataVector(int pos, int valor) {
    vector_[pos] = valor;
}

void CAlgoritmos::setVector(int* nuevovector) {

    for(int i = 0; i< getSize(); i++)
        vector_[i] = nuevovector[i];
}

void CAlgoritmos::show() {
    
    cout << "\t\t";
    for(int i = 0; i < getSize(); i++)
        cout << getDataVector(i) << " | ";
    cout << endl << endl;
}

//el tamaño será el mismo que el vector original
void CAlgoritmos::show(int* vec, int size) {
    cout <<"\t\t";
    for (int i = 0; i< size; i++) 
        cout << vec[i] << " | ";
    cout << endl << endl;
}

//Ordenaciones sin definir en el padre
void CAlgoritmos::ordenacion(bool) {}

    
