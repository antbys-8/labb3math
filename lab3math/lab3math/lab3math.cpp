
#include "pch.h"
#include "allaFiler.h"

int main()
{

	/*float value1, value2, value3, value4;
	cout << "we will create 2 Vectors. give me the X cordinate for the first Vector: ";
	cin >> value1;
	cout << endl << "And the Y cordinate for the first Vector: ";
	cin >> value2;
	cout << endl << "Give me the X cordinate for the second Vector: ";
	cin >> value3;
	cout << endl << "And the Y cordinate for the second Vector: ";
	cin >> value4;
	cout << endl << "Creating 2 vectors:" << endl;
	Vector2D a(value1, value2);
	Vector2D b(value3, value4);
	cout << " Possition of Vector one is: ";
	a.print();
	cout << " And possition of Vector two is: ";
	b.print();
	cout << endl;
	cout << "Calculating the length of Vector one:  " << endl;
	cout << "The length of Vector one is: ";
	a.print(a.length());
	cout << endl;
	Vector2D v2 = a + b;
	Vector2D v3 = a - b;
	cout << "Vector one + Vector two is: ";
	v2.print();
	cout << endl;
	cout << "Vector one - Vector two is: ";
	v3.print();
	cout << endl;
	float x = a * b;
	cout << "Vector one dot multiplication vith Vector two is: " << x << endl;
	cout << "The normal for Vector one and Vector two is: ";
	a.print(a.crossZ(b));
	cout << endl;
	cout << "The Ortogonal projection of Vector one on Vector 2 is: ";
	a.projection(b);
	cout << endl;
	cout << "If Vector one is equal to Vector 2 this will print a 1, if it's not, it will print a 0: " << (b == a) << endl;
	cout << "If Vector one is  not equal to Vector 2 this will print a 1, if it is equal 2, it will print a 0: " << (b != a) << endl;
	cout << "Using get for X cordinate for Vector 1: " << a.getX() << endl;
	cout << "Using get for Y cordinate for Vector 1: " << a.getY() << endl;
	cout << "NormalisationVector for the first Vector is: ";
	a.print(a.normalisation());
	cout << endl;
	cout << "Testing dot and dot multi: " << endl;
	a.print(a.dot(b));
	cout << endl;
	a.print(a.dotdivition(b));*/
	Vector2D a(2, 3);
	Vector2D b = Vector2D(a);
	b.print();
	float val1, val2, val3, val4;
	cout << "Testing Matrix. Give value 1: ";
	cin >> val1;
	cout << "\nGive value 2:";
	cin >> val2;
	cout << "\nGive value 3:";
	cin >> val3;
	cout << "\nGive value 4:";
	cin >> val4;
	Matrix one(val1, val2, val3, val4);
	Matrix I;
	Matrix multi(2, 2, 2, 2);
	Matrix bb = (Matrix(one));
	Matrix fromVector = (Vector2D(b));
	cout << "\nPrinting matrix one: ";
	one.print();
	cout << "\nPrinting the copy of matrix one";
	bb.print();
	cout << "\nPrinting matrix transformed from vector2D";
	fromVector.print();
	cout << "\nPrinting the index matrix: ";
	I.print();
	cout << "\nPrinting the multiplyer matrix from the one matrix";
	one.print(multi);
	cout << "\nTesting set cord: (changing the first value to 8 and then printing out the matrix";
	one.setCoord(1, 8);
	one.print();
	cout << "\nTesting set line: (changing the first value of line 2 to 1 and the second value of line 2 to 5, and then printing out the matrix";
	one.setLine(2, 1, 5);
	one.print();
	cout << "\nTesting set row: (changing the first value of row 2 to 6 and the second value of row 2 to 3, and then printing out the matrix";
	one.setRow(2, 6, 3);
	one.print();
	cout << "\nAnd now we will use the set, to restore the original matrix and print it out: " << endl;
	one.set(val1, val2, val3, val4);
	cout << "\nTesting the matrix multiplication first one, multiplied with I (should give result equal to one) and then one multplyed with multi " << endl;
	one.print(one*I);
	one.print(one*multi);

}
