#pragma once
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex(){}
	
	Complex(double real, double imag) 
	{
		this->real = real; 
		this->imag = imag; 
	}

	~Complex() {};

	void SetComplex(double real,double imag)
	{
		this->real = real;
		this->imag = imag;

	}

	double GetReal()
	{
		return this->real;
	}
	
	double GetImag()
	{
		return this->imag;
	}

	//double GetComplexAbs()
	//{
	//	return this->real * this->real + this->imag * this->imag;
	//}

	friend void complexPrint(Complex c);
	friend Complex operator+ (const Complex&, const Complex&);
	friend Complex operator- (const Complex&, const Complex&);
	friend Complex operator* (const Complex&, const Complex&);
	friend Complex operator/ (const Complex&, const Complex&);
	
private:
	double real;
	double imag;
};



