#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a = -0.6;
	double b = 5.3;
	double z, t = 0;

	if (a < b)
	{
		z = abs(pow(a, 2) - pow(b, 2));
	}
	else
	{
		z = 1 - (2 * cos(a) * sin(b));
	}

	if (z < b)
	{
		t = pow((z + pow(a, 2) * b), 1 / 3);
	}
	if (z == b)
	{
		t = 1 - log(z) + cos(pow(a, 2) * b);
	}
	if (z > b)
	{
		t = 1 / (cos(z * a));
	}
	
	cout << "a = " << a << ", b = " << b << ", z = " << z << ", t = " << t;


}
