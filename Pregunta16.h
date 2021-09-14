#ifndef __PREGUNTA16_H__
#define __PREGUNTA16_H__

#include "Stack.h"
#include "Queue.h"

template <typename T>
void pregunta16(T* arr,size_t tam){
  Stack<T> stacky;
  Queue<T> queuey;
  for(auto i=0;i<tam;i++){
    arr[i]%2==0?queuey.enqueue(arr[i]):stacky.push(arr[i]);
  }
}


#endif