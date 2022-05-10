#pragma once
#include <iostream>

using namespace std;

class Vector
{
public:
	Vector(){}
	
	Vector(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	~Vector() {};

	void SetVector(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	double GetVectorX(Vector a)
	{
		return a.x;
	}

	double GetVectorY(Vector a)
	{
		return a.y;
	}

	void VectorPrint()
	{
		cout << "Vector = (" << this->x << "; " << this->y << ")" <<endl;
	}

	friend Vector VectorSum(Vector&,Vector&);
	friend double Mult(Vector&,Vector&);
	friend Vector MultByScalar(Vector&,double);

private:
	double x;
	double y;
};

