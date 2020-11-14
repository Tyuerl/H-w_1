#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter c = ";
	cin >> c;
	cout << "Enter d = ";
	cin >> d;



	for (int i = 10000; i < 100000; i++)
	{
		if (i % a == b && i % c == d)
			cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
