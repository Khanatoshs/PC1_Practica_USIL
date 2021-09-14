#ifndef __QUEUE_H__
#define __QUEUE_H__

#include"LinkedList.h"

template <typename T>
class Queue{
  private:
  LinkedList<T> lista;
  public:
  Queue(){}
  void enqueue(T dato){lista.insert_at_tail(dato);}
  T dequeue(){return lista.pop_head();}
};



#endif