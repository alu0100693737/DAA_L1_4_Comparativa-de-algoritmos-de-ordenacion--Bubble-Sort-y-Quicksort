///////////////////////////////////////////////////////////////
//    CBubbleSort.h - Declaración de la clase CBubbleSort    //
//                                                           //
//      Autores: Javier Alberto Martín                       //
//               Iván García Campos                          //
//               Eduardo Escobar Alberto                     //
//                                                           //
//               Fecha: 10/03/2017                           //
///////////////////////////////////////////////////////////////

#ifndef _CBUBBLE_H
#define _CBUBBLE_H

#include "COrdenacion.h"
#include <iostream>

using namespace std;

/**Clase heredada de 'COrdenacion' que concreta el caso del algoritmo "Bubble Sort" para la ordenación de un vector de números*/
class CBubbleSort : public COrdenacion {
public:
    /**
	 * @brief Constructor que asigna valores aleatorios entre -10000 y 10000
	 * @param size Tamaño del vector
	 */
    CBubbleSort(int size);
    /**
	 * @brief Constructor con valores ya introducidos por teclado
	 * @param vector Vector a ordenar
	 * @param size Tamaño del vector
	 */
    CBubbleSort(int* vector, int size);
    /**
	 * @brief Destructor
	 */
    ~CBubbleSort();
    /**
	 * @brief Método que copia el vector para no perderlo y llama a bubble
	 * @param debug Muestra el vector si está a 1
	 */
    void ordenacion(bool debug);
    /**
	 * @brief Método principal que realiza el algoritmo Bubble Sort
	 */
    void bubble();
};

#endif