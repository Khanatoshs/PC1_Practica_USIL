#ifndef __STACK_H__
#define __STACK_H__

#include"LinkedList.h"

template <typename T>
class Stack{
private:
  LinkedList<T> lista;
public:
  Stack(){}
  void push(T dato){lista.insert_at_head(dato);}
  T pop(){return lista.pop_head();}
  bool is_empty() {return lista.is_empty();}
};

#endif