#pragma once
#include <iostream>
#include "Object.h"
#include "Magazin.h"
using namespace std;

class List
{
public:
	List();
	List(int);
public:

	~List(void);
	void Add();
	void Add(Object*);
	void Del();
	void Show();
	int operator()();
	void HandleEvent(const TEvent& e);
protected:
	Object** beg;
	int size;
	int cur;
};

