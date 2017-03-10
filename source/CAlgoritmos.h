/**Clase framework para probar los comportamientos de los algoritmos DyV y algoritmos clásicos*/

#ifndef _CAlgoritmos_H
#define _CAlgoritmos_H 
#include <iostream>
using namespace std;
class CAlgoritmos {
    private: 
        int* vector_;
        int size_;
    public:
        //datos aleatorios
        CAlgoritmos(int size);
        //datos por entrada
        CAlgoritmos(int* vec, int size);
        virtual ~CAlgoritmos();

        int* getVector();
        int getDataVector(int pos);
        int getSize();
        void setDataVector(int pos, int valor);
        void setVector(int* nuevovector);
        
        //muestra vector original
        void show();
        //muestra vector pasado por parametro
        void show(int* vec, int size);

        //Algoritmos de ordenacion
        virtual void ordenacion(bool); //Metodo abstracto// bool para saber si show o no
};
#endif
