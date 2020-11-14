#include <iostream>
using namespace std;

int main()
{
	int i, n, a, b, c, d;
	cout << "enter N= ";
	cin >> n;
	cout << " enter A= ";
	cin >> a;
	cout << " enter B= ";
	cin >> b;
	cout <<  " enter C= ";
	cin >> c;
	cout << " enter D= ";
	cin >> d;

	for (i = 0; i < n; i++)
	{
		
		if (i <= b && i >= a)
		{
			cout << b - i + a << " ";
			continue;
		}
		if (i <= d && i >= c)
		{
			cout << d - i + c << " ";
			continue;
		}
		cout << i << " ";
		
	}

}
