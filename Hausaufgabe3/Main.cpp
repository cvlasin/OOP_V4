#include <iostream>
#include <string.h>
#include "Shape.h"
#include "Header.h"
#include <vector>
using namespace std;

int main()
{
	vector<Shape*>Liste(10);

	Shape* f1 = new Shape("Dreieck", 90);
	Shape* f2 = new Shape("Rechteck", 200);
	Shape* f3 = new Shape("Funfeck", 250);
	Shape* f4 = new Shape("Sechseck", 300);

	Liste = { f1, f2, f3, f4 };

		apply(Liste, multiply);
		
		apply(Liste, divide);
		
		apply(Liste, add_to_string);
		
}