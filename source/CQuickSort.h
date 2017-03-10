///////////////////////////////////////////////////////////////
//     CQuickSort.h - Declaración de la clase CQuickSort     //
//                                                           //
//      Autores: Javier Alberto Martín                       //
//               Iván García Campos                          //
//               Eduardo Escobar Alberto                     //
//                                                           //
//               Fecha: 10/03/2017                           //
///////////////////////////////////////////////////////////////

#ifndef _CQUICKSORT_H
#define _CQUICKSORT_H

#include "COrdenacion.h"
#include <iostream>

using namespace std;

/**Clase heredada de 'COrdenacion' que concreta el caso del algoritmo "QuickSort" para la ordenación de un vector de números*/
class CQuickSort : public COrdenacion {
public:
	/**
	 * @brief Constructor con valores ya introducidos por teclado
	 * @param vector Vector a ordenar 
	 * @param size Tamaño del vector
	 */
    CQuickSort(int* vector, int size);
    /**
	 * @brief Constructor que asigna valores aleatorios entre -10000 y 10000
	 * @param size Tamaño del vector
	 */
    CQuickSort(int size);
    /**
	 * @brief Destructor
	 */
    ~CQuickSort();
    /**
	 * @brief Método que copia el vector para no perderlo y llama a quicksort
	 * @param debug Muestra el vector si está a 1
	 */
    void ordenacion(bool debug);
    /**
	 * @brief Método principal recursivo que realiza el algoritmo Quicksort
	 * @param ini Pivote que apunta al dato izquierdo a comparar
	 * @param fin Pivote que apunta al dato derecho a comparar
	 */
    void quicksort(int ini, int fin);
};

#endif