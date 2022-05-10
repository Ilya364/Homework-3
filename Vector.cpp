#include "Vector.h"

Vector VectorSum(Vector &a,Vector &b)
{
	Vector result(a.x + b.x, a.y + b.y);
	return result;
}

double Mult(Vector& a, Vector& b)
{
	return (a.x * b.x + a.y * b.y);
}

Vector MultByScalar(Vector &a, double k)
{
	return Vector(k * a.x, k * a.y);
}