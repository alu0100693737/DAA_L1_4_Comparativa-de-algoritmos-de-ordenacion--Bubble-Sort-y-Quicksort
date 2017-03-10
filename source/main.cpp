#include "CAlgoritmos.h"
#include "CQuickSort.h"
#include "CBubbleSort.h"
#include <iostream>
int main() {
        int size;
        
        cout << "\n\t\tIntroduzca el tamaño del vector a ordenar \n\t\t";
        cin >> size;
        
        /*cout << "\t\tOrdenacion Algoritmo QuickSort. " << endl << endl;
        CQuickSort* quicksort = new CQuickSort(size);
        quicksort->ordenacion(true);
        
        cout << "\t\tOrdenacion Algoritmo BubbleSort. " << endl << endl;
        CBubbleSort* bubble = new CBubbleSort(size);
        bubble->ordenacion(true);*/
        
        
         int* vec = new int[size];
         cout << "\n\t\tIntroduzca los valores que desea introducir en el vector\n\n";
         
         for(int i = 0; i < size; i++) {
          cout << "\t\t";
          cin >> vec[i];
         }
         
         cout << "\n\t\tVector Original.\n\n\t\t";
         for(int i = 0; i < size; i++) 
          cout << vec[i] << " | ";

         cout << "\n\n\t\tOrdenacion Algoritmo QuickSort. \n\n";
         CQuickSort* quicksort = new CQuickSort(vec, size);
         quicksort->ordenacion(true);
         
         cout << "\t\tOrdenacion Algoritmo BubbleSort. \n\n";
         CBubbleSort* bubble = new CBubbleSort(vec, size);
         bubble->ordenacion(true);
        
}
