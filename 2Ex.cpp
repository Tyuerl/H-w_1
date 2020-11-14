#include <iostream>
using namespace std;

int main()
{
	int n, temp;
	cout << "Enter n = ";
	cin >> n;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			temp++;

	if (temp > 0)
		cout << "composite";
	else
		cout << "Prime";

		return 0;
}
