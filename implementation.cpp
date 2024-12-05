#include"header.h"

bubble::bubble()
{
	this->number = 0;
	this->size=10;
	this->pset=new int[size];
	this->counter=0;
}

bubble::bubble(int size)
{
	this->number = 0;
	this->size = size;
	this->pset = new int[size];
	this->counter = 0;
}

int bubble::getsize()
{
	return size;
}

int bubble::getcounter()
{
	return counter;
}

void bubble::setcounter(int counter)
{
	this->counter = counter;
}

void bubble::setnumber(int number)
{
	this->number = number;
}

void bubble::setsize(int size)
{
	this->size = size;
}

void bubble::input()
{
	cout << "please enter size of set:";
	cin >> size;
	pset = new int[size];

	for (int i = counter;i < size; i++)
	{
		if (counter == size)
		{
			cout << "set is full!!!!!!!!!!!" << endl;
		}
		else
		{
			cout << "Enter the element number " << i + 1 << ":";
			cin >> pset[i];
			counter++;
		}
	}
}


void bubble::display()
{
	for (int i = 0;i < counter; i++)
	{
		cout << pset[i] << ",";
	}

	cout<<endl;
}

void bubble::sort()
{
	int temp = 0;
	for (int i = 0; i < counter; i++)
	{
		for (int j = 0; j < counter; j++)
		{
			if (pset[i] < pset[j])
			{
				temp = pset[i];
				pset[i] = pset[j];
				pset[j] = temp;
			}
			else 
			{
				continue;
			}
		}
		
	}
}

void bubble::duplicate()
{
	for (int i = 0;i < counter; i++)
	{
		for (int j = i + 1; j < counter; j++)
		{
			if (pset[i] == pset[j])
			{
				pset[j] = 0;
				shift(j);
				counter--;
			}
			else {
				continue;
			}
		}
	}
}

void bubble::shift(int index)
{
	for (int i = index; i < counter; i++)
	{
		pset[i] = pset[i + 1];
	}
}

void bubble::resize()
{
	int* npset = new int [size + 10];
	for (int i = 0;i < size;i++)
	{
		npset[i] = pset[i];
		
	}
	delete[]pset;
	pset = npset;
}

void bubble::savememory()
{
	int free = size - counter;
	int save = size - free;
	int* npset = new int[save];
	for (int i = 0; i < counter; i++)
	{
		npset[i] = pset[i];
	}
	delete[]pset;
	pset = npset;
}