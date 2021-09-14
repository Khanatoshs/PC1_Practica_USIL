#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

template <typename T>
class LinkedList{
private:
  class Nodo{
    private:
      T dato;
      Nodo* p_next;
    public:
      Nodo(T n_dato):dato(n_dato){}
      T getData() {return dato;}
      Nodo* getNext() {return p_next;}
      void setNext(Nodo* nuevo){p_next=nuevo;}
  }

  Nodo* p_head = nullptr;
  Nodo* p_tail = nullptr;

public:

  void insert_at_head(T dato);
  void insert_at_tail(T dato);
  void getPos(size_t pos);
  T pop_head();
};


template <typename T>
void LinkedList<T>::insert_at_head(T dato){
  Nodo* nuevo = Nodo(dato);
  if(p_head){
    p_head->getNext(nuevo);
  }
    p_head = nuevo;
  
}

template <typename T>
void LinkedList<T>::insert_at_head(T dato){
  Nodo* nuevo = Nodo(dato);
  if(p_tail){
    p_tail->setNext(nuevo);
  }
  p_tail = nuevo;
}

template <typename T>
void LinkedList<T>::getPos(size_t pos){
  Nodo* aux = p_head;
  for(auto i=0;i!=pos;i++){
    aux = aux->getNext();
  }
  return aux;
}


#endif