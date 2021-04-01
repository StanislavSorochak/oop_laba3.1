#include "Ellipse.h"

Ellipse::Ellipse(const double A, const double B)
{

	if (A > 0 && B > 0)
	{
		SetA(A);
		SetB(B);
	}
	else
	{
		SetA(0);
		SetB(0);
	}
}

Ellipse::Ellipse(const Ellipse& v)
{
	double a = v.GetA();
	double b = v.GetB();
}

Ellipse::~Ellipse(void)
{}

Ellipse& Ellipse::operator = (const Ellipse& n)
{
	double a = n.GetA();
	double b = n.GetB();

	return *this;
}

Ellipse::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << GetA() << endl;
	ss << "b = " << GetB() << endl;

	return ss.str();
}

ostream& operator <<(ostream& out, const Ellipse& s)
{
	out << (string)s;
	return out;
}

istream& operator >>(istream& in, Ellipse& s)
{
	double a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;

	if (a > 0 && b > 0)
	{
		s.SetA(a);
		s.SetB(b);

	}
	else
	{
		s.SetA(0);
		s.SetB(0);

	}
	return in;
}

double Ellipse::Square() const
{
	double a = GetA();
	double b = GetB();

	double S = 0;

	if (a == 0 || b == 0)
	{
		cout << "Square of Ellipse doesn't exists" << endl;
	}
	else
	{

		S = 4 * ((3.14 * a * b + (a - b)) / (a + b));
	}
	return S;
}

double Ellipse::Perimeter() const
{
	double a = GetA();
	double b = GetB();
	double P = 3.14 * a * b;
	return P;
}