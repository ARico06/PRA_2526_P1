#include <iostream>
#ifndef LIST_H
#define LIST_H
using namespace std;

template<typename T>

class List {
	public:
		void insert(int pos, T element); //inserta element en pos
		void append(T element);//inserta element al principio de la lista
		void prepend(T element);//inserta element al final de la lista
		T remove(int pos); //elimina el elemento en pos y lo devuelve. Lanza out_of_range si pos no es valida.
		T get(int pos);//devuelve el elemento en pos (OOR)
		bool empty(); //¿lista vacia?
		int size();//num. elementos de la lista
};

#endif

