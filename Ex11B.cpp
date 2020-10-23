
#include <iostream>
#include <cmath>
using namespace std;


double Max(double h, double b, int n, double a)
{
	double Res, max = -1, min = INT_MAX, x;
	int i;
	for (i = 0; i < n; i++)
	{
		x = b + i * h;
		if (a >= 0)
			Res = x * cos(a - x + 1);
		else
			Res = 2 * cos(a + x);
		if (abs(Res) > max)
			max = abs(Res);
	}

	return  (max);
}
double Min(double h, double b, int n, double a)
{
	double Res, max = -1, min = INT_MAX, x;
	int i;
	for (i = 1; i <= n; i++)
	{
		x = b + i * h;
		if (a >= 0)
			Res = x * cos(a - x + 1);
		else
			Res = 2 * cos(a + x);
		cout << "F" << i << "= " << Res << endl;
		if (abs(Res) < min)
			min = abs(Res);
	}

	return  (min);
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
		cout << Min(h, b, n, a[i]) << endl; // Лишний вывод 
		if (max < Max(h, b, n, a[i]))
			max = Max(h, b, n, a[i]);
		if (min > Min(h, b, n, a[i]))
			min = Min(h, b, n, a[i]);
	}
	cout << "MAX: " << max << " ";
	cout << "MIN: " << min;

} 




