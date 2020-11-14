#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	bool swth = 0;
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
		{
			cout << i << " ";
			swth = 1;
		}
			
	}
	cout << endl;
	if (swth == 0) cout << "-1";
	system("pause");
	return 0;
}
