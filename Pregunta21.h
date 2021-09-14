#ifndef __PREGUNTA21_H__
#define __PREGUNTA21_H__
#include<iostream>
#include "LinkedList.h"
using namespace std;

LinkedList<int> crearLista(int* arr, size_t tam){
    LinkedList<int> lista;
    for(auto i=0;i<tam;i++){
        lista.insert_at_tail(arr[i]);
    }
    return lista;
}

double promedio(LinkedList<int> listaInt){
    double promedio = 0.0;
    int suma = 0;
    for(auto iter = listaInt.begin();iter!=listaInt.end();iter++){
        suma += *iter;
    }
    promedio = (double)suma/(double)listaInt.getSize();
    return promedio;    
}


void pregunta21(int* arr, size_t tam){
    auto lista = crearLista(arr,tam);
    cout<<"Promedio de lista INT: "<<promedio(lista)<<endl;
}


#endif