#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Shape
{
	private:
		double Surface;

		string Name;
	public:
		Shape();

		Shape(string, double);
		
		void settername(string);
		
		string gettername();
		
		void settersurface(double);
		
		double gettersurface();
};