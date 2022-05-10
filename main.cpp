#include "Circle.h"
#include "Complex.h"
#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
	Complex c1, c2;
	double imag1, real1,real2,imag2;

	cin >> real1 >> imag1>>real2>>imag2;
	cout << endl;
	c1.SetComplex(real1, imag1);
	c2.SetComplex(real2, imag2);

	Complex c3;
	
	c3 = c1 + c2;
	complexPrint(c3);
	c3 = c1 * c2;
	complexPrint(c3);
	c3 = c1 - c2;
	complexPrint(c3);
	c3 = c1 / c2;
	complexPrint(c3);

	
	
	Vector a, b;
	double xa, ya, xb, yb;
	
	cin >> xa >> ya>>xb>>yb;
	cout << endl;
	a.SetVector(xa, ya);
	b.SetVector(xb, yb);

	Vector c;
	c = VectorSum(a, b);
	c.VectorPrint();

	double mult;
	mult = Mult(a, b);
	cout << mult<<endl<<endl;

	double k;
	cin >> k;
	c = MultByScalar(c, k);
	c.VectorPrint();



	Circle circle(5);
	cout << "Radius = " << circle.GetRadius() << endl;
	cout << "Area = " << circle.GetArea() << endl;
	cout << "Length = " << circle.GetCircleLength() << endl;



}