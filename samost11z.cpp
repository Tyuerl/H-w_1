#include <iostream>
#include <cmath>
using namespace std;


double PR(double h, double b, int n, double a)
{
	double Res, pr = 1, x;
	int i;
	for (i = 1; i < n; i++)
	{
		x = b + i * h;
		if (a >= 0)
			Res = sin(1 + a * x - x * x);
		else
			Res = sin(a + x) * sin(a + x);
		pr *= Res;

	}

	return (pr);
}
double SUMM(double h, double b, int n, double a)
{
	double Res, summ = 0, x;
	int i;
	for (i = 1; i <= n; i++)
	{
		x = b + i * h;
		if (a >= 0)
			Res = sin(1 + a * x - x * x);
		else
			Res = sin(a + x) * sin(a + x);
		summ += abs(Res);
	}

	return  (summ);
}
int main()
{
	double a[3], h, b, max = -1, min = INT_MAX;
	int n, i;
	cout << "Enter h: ";
	cin >> h;

	cout << "Enter b: ";
	cin >> b;

	cout << "Enter n: ";
	cin >> n;

	for (i = 0; i < 3; i++)
	{
		cout << "Enter a" << i + 1 << ": ";
		cin >> a[i];
	}
	for (i = 0; i < 3; i++)
	{
		cout << "proizv: " << PR(h, b, n, a[i]) << " ";
		cout << "summ abs: " << SUMM(h, b, n, a[i]);
		cout << endl;
	}
	

}


