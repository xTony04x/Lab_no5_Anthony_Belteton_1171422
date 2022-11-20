#pragma once
#include"cartas.h"

class Lista
{
	class Nodo
	{
	public:
		cartas* data;
		Nodo* next;

	
	private:
		Nodo* header = nullptr;
		Nodo* tail = nullptr;
		int count = 0;
	};

	
public:
	void Add(cartas* item);

	void clear();
	
	int count();
	
	bool contains(cartas* item);
	
	int indexof(cartas* item);
	
	void insert(int index, cartas* item);
	
	cartas* Getitem(int index);
	
	void setitem(int index, cartas* item);
	
	int lastindexof(cartas* item);
	
	bool remove(cartas* item);
	
	void removeat(int index);

};

