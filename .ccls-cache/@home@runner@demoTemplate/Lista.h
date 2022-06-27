#ifndef _LISTA_H_
#define _LISTA_H_

#include <iostream>
#include <vector>

const int MAX = 100;

template <class T>
class Lista {
  private:
    std::vector<T> data;
    int currentSize;

  public:
    Lista();
    bool insert(T value);
    void erase();
    T getData(int indice);
    int getSize();
    void print();
};

#endif // _LISTA_H_