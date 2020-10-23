#include <iostream>
#include  <cmath>

using namespace std;

double Min(double h, double b, int n, double a)
{
	double Res, max = -1, min = INT_MAX, x;
	int i;
	for (i = 1; i <= n; i++)
	{
		x = b + i * h;
		Res = (1 - 5.7 * cos(a - x)) / (2.6 + pow(cos(a + x), 2));
		cout << "F" << i << "= " << Res << endl;
		if (Res < min)
			min = Res;
	}
	return min;
}

double Pr(double h, double b, int n, double a)
{
	double pr = 1, Res, x;
	int i;
	for (i = 1; i <= n; i++)
	{
		x = b + i * h;
		Res = (1 - 5.7 * cos(a - x)) / (2.6 + pow(cos(a + x), 2));
		pr *= abs(Res);
	}
	return pr;
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
		cout << i + 1 << "  series: " << endl;
		cout <<" PR: " << Pr(h, b, n, a[i]) << endl;
		cout << " MIN: " << Min(h, b, n, a[i]) << endl;
	}





}

