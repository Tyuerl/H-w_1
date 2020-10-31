#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	double eps;
	int n;
	cout << "Enter n: ";
	cin >> n;
	double* a = new double[n + 1];
	double* b = new double[n + 1];
	cout << "Enter eps: " ;
	cin >> eps;
	cout << "Enter a0";
	cin >> a[0];
	cout << "Enter b0";
	cin >> b[0];

	for (int i = 1; i<= n; i++)
	{
		if (a[i - 1] < 0)
			b[i] = pow(sin(a[i - 1] + b[i - 1]), 2);
		else
			b[i] = sin(1 + a[i - 1] * b[i - 1] - b[i - 1] * b[i - 1]);
		a[i] = sqrt(2 + sin(a[i - 1] + b[i - 1])) + sqrt(2 - cos(a[i - 1] + b[i - 1]));
		
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (sqrt(abs(a[i] + b[j])) < eps)
			{
				cout << "a" << i << " = " << a[i];
				cout << endl;
				break;
			}	
		}
	}
}


