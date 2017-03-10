///////////////////////////////////////////////////////////////
//  COrdenacion.cpp - Implementación de la clase COrdenacion //
//                                                           //
//      Autores: Javier Alberto Martín                       //
//               Iván García Campos                          //
//               Eduardo Escobar Alberto                     //
//                                                           //
//               Fecha: 10/03/2017                           //
///////////////////////////////////////////////////////////////

#include "COrdenacion.h"

//poliformismos validos

#include <iostream>
#include <sys/time.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

//numeros entre -10000 y 10000
COrdenacion::COrdenacion(int size) {
    
    size_ = size;
    vector_ = new int[size_];
    srand(time(NULL));
    for(int i = 0;i < size_;i++){
        vector_[i]=(rand() % 20000) - 10000;
    }
    show();
}

COrdenacion::COrdenacion(int* vec, int siz) {
    size_ = siz;
    vector_ = vec;
}

COrdenacion::~COrdenacion() { 
    //delete vector
}

int COrdenacion::getDataVector(int pos) {
    return vector_[pos];
}

int COrdenacion::getSize() {
    return size_;
}

int* COrdenacion::getVector() {
    return vector_;
}

void COrdenacion::setDataVector(int pos, int valor) {
    vector_[pos] = valor;
}

void COrdenacion::setVector(int* nuevovector) {
    for(int i = 0; i < getSize(); i++)
        vector_[i] = nuevovector[i];
}

void COrdenacion::show() {
    cout << "\t\t";
    for(int i = 0; i < getSize(); i++)
        cout << getDataVector(i) << " | ";
    cout << endl << endl;
}

//el tamaño será el mismo que el vector original
void COrdenacion::show(int* vec, int size) {
    cout <<"\t\t";
    for (int i = 0; i < size; i++)
        cout << vec[i] << " | ";
        
    cout << endl << endl;
}

//Ordenaciones sin definir en el padre
void COrdenacion::ordenacion(bool) {}