///////////////////////////////////////////////////////////////
//    COrdenacion.h - Declaración de la clase COrdenacion    //
//                                                           //
//      Autores: Javier Alberto Martín                       //
//               Iván García Campos                          //
//               Eduardo Escobar Alberto                     //
//                                                           //
//               Fecha: 10/03/2017                           //
///////////////////////////////////////////////////////////////

#ifndef _COrdenacion_H
#define _COrdenacion_H 
#include <iostream>

using namespace std;

/**Clase padre para algoritmos de ordenación*/
class COrdenacion {
    private: 
        int* vector_;   ///< Variable que contiene el vector de números 
        int size_;      ///< Variable que almacena el tamaño del vector 'vector_'
    public:
        /**
         * @brief Constructor que asigna valores aleatorios entre -10000 y 10000
         * @param size Tamaño del vector
         */
        COrdenacion(int size);
        /**
         * @brief Constructor con valores ya introducidos por teclado
         * @param vec Vector a ordenar
         * @param size Tamaño del vector
         */
        COrdenacion(int* vec, int size);
        /**
         * @brief Destructor
         */
        virtual ~COrdenacion();
        /**
         * @brief Método que devuelve el vector completo
         * @return Vector completo
         */
        int* getVector();
        /**
         * @brief Método que devuelve un dato del vector dado una posición
         * @param pos Posición del vector de donde extraer el dato
         * @return Dato extraido
         */
        int getDataVector(int pos);
        /**
         * @brief Método que devuelve el tamaño del vector
         * @return Tamaño del vector
         */
        int getSize();
        /**
         * @brief Método que introduce un dato en una posición del vector
         * @param pos Posición del vector en el que se introducirá el dato
         * @param valor Dato que se introducirá en el vector
         */
        void setDataVector(int pos, int valor);
        /**
         * @brief Método que cambia el vector
         * @param nuevovector Nuevo vector
         */
        void setVector(int* nuevovector);
        /**
         * @brief Método que muestra el vector de la clase
         */
        void show();
        /**
         * @brief Método que muestra vector pasado por parámetro
         * @param vec Vector a mostrar
         * @param size Tamaño del vector a mostrar
         */
        void show(int* vec, int size);
        /**
         * @brief Método principal abstracto para la ordenación 
         * @param debug Muestra el vector si está a 1
         */
        virtual void ordenacion(bool debug); //Metodo abstracto// bool para saber si show o no
};
#endif
