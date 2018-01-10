// MAIN_Rectangle.cpp

#include<iostream>

using namespace::std;
#include "Rectangle.h"

int main()
{
	Rectangle R1, R2(2, 4);
	
	//R1.display();
	//R2.display();

	cout << "Entre el largo y el ancho del rectangulo #1: \n";
	cin >> R1;

	cout << "Entre el largo y el ancho del rectangulo #2: \n";
	cin >> R2;

	if (R1 == R2) 
	{
		cout << "Los rectangulos son iguales en area\n";

	}

	else 
	{

		if (R1 > R2)
		{
			cout << "El Rectangulo #1 es el mayor area\n";
		}

		if (R1 < R2) 
		{
			cout << "El Rectangulo #2 es el mayor\n";
		}

	}

	cout << "\n\n";
	cout << R1;			// ostream.
	cout << endl;
	cout << R2;			// ostream.



	system("pause");

	return 0;

} // end main. 28 de marzo de 2017 - Successful!

/*Output: 

Entre el largo y el ancho del rectangulo #1:
Enter the Width: 5
Enter the Length: 4
Entre el largo y el ancho del rectangulo #2:
Enter the Width: 9
Enter the Length: 7
El Rectangulo #2 es el mayor


Width: 5
Length: 4
Area: 20
Perimeter: 18

Width: 9
Length: 7
Area: 63
Perimeter: 32
Press any key to continue . . .

*/