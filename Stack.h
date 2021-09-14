#ifndef __STACK_H__
#define __STACK_H__

#include"LinkedList.h"

template <typename T>
class Stack{
private:
  LinkedList<T> lista;
public:
  Stack(){}
  void push(T dato){lista.insert_at_head();}
  T pop(){return lista.pop_head();}
};

#endif