#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
	double kp, kk, p;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
	double dg = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		p = z(2 * k + 1) - pow(z(2 * k - 1), 2) + sqrt(z(k));
		cout << k << " " << p << endl;
		k += dg;
	}
	return 0;
}double z(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + 1) / (sin(pow(x, 2)) + exp(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = (x) / (1 * j);
			S += a;
		} while (j < 7);
		return S;
	}
}