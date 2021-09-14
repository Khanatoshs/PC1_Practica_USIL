#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

template <typename T>
class LinkedList{

public:
  class Nodo{
    private:
      T dato;
      Nodo* p_next;
    public:
      Nodo(T n_dato):dato(n_dato){}
      T getData() {return dato;}
      T& getDataRef(){return &dato;}
      Nodo* getNext() {return p_next;}
      void setNext(Nodo* nuevo){p_next=nuevo;}
  };

  class iterator{
    private:
    Nodo* p_nodo;
    public:
    iterator(Nodo* nodo):p_nodo(nodo){}
    bool operator==(iterator iter){return p_nodo == iter.p_nodo;}
    bool operator!=(iterator iter){return p_nodo != iter.p_nodo;}
    T &operator*(){return p_nodo->getDataRef();}
    void operator++(int){ p_nodo=p_nodo->getNext();}

  };
private:
  Nodo* p_head = nullptr;
  Nodo* p_tail = nullptr;
  size_t size;
public:

  void insert_at_head(T dato);
  void insert_at_tail(T dato);
  T getPos(size_t pos);
  T pop_head();
  bool is_empty(){return getSize()==0;}
  size_t getSize(){return size;}
  iterator begin() const { return iterador(p_head); }
  iterator end() const { return iterador(p_tail); }
  
};


template <typename T>
inline void LinkedList<T>::insert_at_head(T dato){
  Nodo* nuevo = new Nodo(dato);
  if(p_head){
    p_head->setNext(nuevo);
  }
  p_head = nuevo;
  size++;
}

template <typename T>
inline void LinkedList<T>::insert_at_tail(T dato){
  Nodo* nuevo = new Nodo(dato);
  if(p_tail){
    p_tail->setNext(nuevo);
  }
  p_tail = nuevo;
  size++;
}

template <typename T>
inline T LinkedList<T>::getPos(size_t pos){
  Nodo* aux = p_head;
  for(auto i=0;i!=pos;i++){
    aux = aux->getNext();
  }
  return aux->getData;
}

template <typename T>
inline T LinkedList<T>::pop_head(){
  if(p_head){
    Nodo* aux = p_head;
    T dato = aux->getData();
    p_head = p_head->getNext();
    delete aux;
    size--;
    return dato;
  }
}



#endif