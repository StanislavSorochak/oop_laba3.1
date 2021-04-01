#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Pair
{
private:
	double a, b;

public:
	double GetA() const { return a; }
	double GetB() const { return b; }

	void SetA(double value) { a = value; }
	void SetB(double value) { b = value; }

	Pair();
	Pair(const double a, const double b);
	Pair(const Pair& s);
	~Pair(void);

	Pair& operator = (const Pair& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Pair& s);
	friend istream& operator >> (istream& in, Pair& s);

	double Dobutok();
};