#include "Ellipse.h"

Pair ReturnObj(Pair a)
{
	return a;
}

int main()
{
	Pair pair(12.3, 0.5);
	cout << "x=12.3 y=0.5" << endl;
	cout << "Dobutok = " << pair.Dobutok() << endl;

	Ellipse M;
	cin >> M;
	cout << M << endl;

	cout << "Return Object" << endl;
	cout << ReturnObj(pair) << endl;

	cout << "Principle of substitution" << endl;
	Pair N = M;
	cout << N << endl;

	cout << "Size = " << sizeof(N) << endl;
	double A = 0.0;
	double B = 0.0;

	Ellipse T(3, 4);
	cout << "x=3 y=4" << endl;
	cout << "Square: " << T.Square() << endl;

	Ellipse K;
	cin >> K;
	cout << K << endl;

	double P = K.Perimeter();
	cout << "Perimeter = " << P << endl;
}