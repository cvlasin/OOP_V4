#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
using namespace std;

void apply(vector<Shape*> v, void (f)(Shape*))
{
	 int i = 0;
	 while (i < size(v))
	 {
		 f(v[i]);
		 i++;
		 cout << endl;
	 }   
}

void multiply(Shape*objekt)
{
	cout << "Multiply " << objekt->gettername() << " with: ";
	int x;
	cin >> x;
	double surface;
	surface = objekt->gettersurface();
	surface = surface * x;;
	objekt->settersurface(surface);
}

void divide(Shape*objekt)
{
	cout << "Divide " << objekt->gettername() << "with: ";
	int y;
	cin >> y;
	double surface;
	surface = objekt->gettersurface();
	surface = surface / y;
	objekt->settersurface(surface);
}

void add_to_string(Shape*objekt)
{	
	string character;
	cout << "Add character at the end to " << objekt->gettername() << " : ";
	cin >> character;
	string String;
	String = objekt->gettername() + " " + to_string(objekt->gettersurface()) + character;
	cout << endl << String << endl;
}