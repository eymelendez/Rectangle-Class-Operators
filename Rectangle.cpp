// Rectangle.cpp

#include<iostream>

using namespace::std;

#include"Rectangle.h"




Rectangle::Rectangle(double aWidth, double aLength) :Width(aWidth), Length(aLength)   // Fusion Constructor or 2 contructors in one.
{


}

Rectangle::Rectangle(const Rectangle &aRectangle)
{
	setWidth(aRectangle.getWidth());
	setLength(aRectangle.getLength());



}

Rectangle::~Rectangle()
{
	cout << "Destruyendo Objeto \n";

}



void Rectangle::setWidth(double w)
{

	while (w < 0)
	{
		cout << "ERROR..." << endl;
		cout << "Entre el ancho: " << endl;
		cin >> w;
	}

	Width = w;


}

void Rectangle::setLength(double len)
{
	while (len < 0)
	{
		cout << "ERROR..." << endl;
		cout << "Entre el ancho: " << endl;
		cin >> len;
	}

	Length = len;

}

void Rectangle::setArea(double w, double len, double A)
{
	if (w >= 0 && len >= 0)
	{
		Area = A;

	}

	else
	{
		cout << "Invalid Area\n";

	}

}

void Rectangle::setPerimeter(double w, double len, double P)
{

	if (w >= 0 && len >= 0)
	{
		Perimeter = P;

	}

	else
	{
		cout << "Invalid Perimeter\n";

	}

}


double Rectangle::getWidth() const
{

	return Width;

}


double Rectangle::getLength() const
{
	return Length;

}


double Rectangle::getArea() const
{

	return getWidth() * getLength();

}

double Rectangle::getPerimeter() const
{


	return 2 * getWidth() + 2 * getLength();



}

ostream &operator << (ostream &output, const Rectangle &tempRectangle) 
{
	output << "Width: " << tempRectangle.getWidth() << endl;
	output << "Length: " << tempRectangle.getLength() << endl;
	output << "Area: " << tempRectangle.getArea() << endl;
	output << "Perimeter: " << tempRectangle.getPerimeter() << endl;

	return output;



} // end operator <<

istream &operator >> (istream &input, Rectangle &tempRectangle) 
{
	cout << "Enter the Width: ";
	input >> tempRectangle.Width;
	cout << "Enter the Length: ";
	input >> tempRectangle.Length;

	return input;


} // end operator >>

bool Rectangle::operator ==(const Rectangle &tempRectangle)
{
	bool flag = false;

	if (tempRectangle.getArea() == this->getArea())
	{
		flag = true;

	}

	return flag;



} // end operator ==

bool Rectangle::operator > (const Rectangle &tempRectangle) 
{

	bool flag = false;

	if (this->getArea() > tempRectangle.getArea()) 
	{
		flag = true;
	}

	return flag;

} // end operator <


bool Rectangle::operator < (const Rectangle &tempRectangle) 
{
	bool flag = false;

	if (this->getArea() < tempRectangle.getArea())
	{
		flag = true;
	}

	return flag;



} // end operator >


Rectangle & Rectangle::operator = (const Rectangle &tempRectangle) 
{

	this->Width = tempRectangle.getWidth();
	this->Length = tempRectangle.getLength();

	return *this;


} // end operator =