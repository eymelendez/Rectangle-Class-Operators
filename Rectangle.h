// Rectangle.h

#pragma once

#include<iostream>
#include<cstdio>

using namespace::std;

// Pag. 751 Version 4 Class Rectangle

/*
Edwin Melendez Lopez #89139
Class Rectangle con Operadores
CECS 2222 sec. 22
Prof. Claudia Talavera*/


class Rectangle
{
public:

	Rectangle(double aWidth = 1.0, double aLength = 1.0); // default construct
	Rectangle(const Rectangle &aRectangle);
	~Rectangle();

	void setWidth(double);
	void setLength(double);
	void setArea(double, double, double);
	void setPerimeter(double, double, double);

	double getWidth() const;		// El "const" significa que el contenido del objeto NO
	double getLength() const;		// se va alterar.
	double getArea() const;
	double getPerimeter() const;

	Rectangle &operator = (const Rectangle &); // Operador de asignar

	bool Rectangle::operator > (const Rectangle &tempRectangle);
	bool Rectangle::operator < (const Rectangle &tempRectangle);
	bool operator ==(const Rectangle &);

	friend ostream &operator << (ostream &, const Rectangle &); // Imprime
	friend istream &operator >> (istream &, Rectangle &);		// Recibe



private:
	double Width;
	double Length;
	double Area;
	double Perimeter;
};
