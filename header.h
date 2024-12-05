
#pragma once
#include <iostream>
using namespace std;

class bubble
{
private:
	int number;
	int size;
	int* pset;
	int counter;

public:
	bubble();
	bubble(int);
	
	int getsize();
	int getcounter();

	void setnumber(int);
	void setsize(int);
	void setcounter(int);
	void display();
	void input();
	void sort();
	void duplicate();
	void shift(int);
	void resize();
	void savememory();
};




