#pragma once
#include<iostream>
#define PI 3.14

using namespace std;

class Circle
{
public:
	Circle() {};
	
	Circle(double r) 
	{
		this->radius = r;
	}

	~Circle() {};
	
	void SetCircle(double r)
	{
		this->radius = r;
	}

	double GetRadius()
	{
		return this->radius;
	}

	double GetArea()
	{
		return PI * pow((this->radius), 2);
	}

	double GetCircleLength()
	{
		return 2 * PI * (this->radius);
	}

private:
	double radius;
};