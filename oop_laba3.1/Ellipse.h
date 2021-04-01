#pragma once
#pragma pack(1)
#include "Pair.h"

class Ellipse : public Pair
{
public:

	Ellipse(const double a = 0, const double b = 0);
	Ellipse(const Ellipse& s);
	~Ellipse(void);

	Ellipse& operator = (const Ellipse& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Ellipse& s);
	friend istream& operator >> (istream& in, Ellipse& s);

	double Square() const;
	double Perimeter() const;

};