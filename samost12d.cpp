#include <iostream>
#include <cmath>
using namespace std;


int main() {

    setlocale(LC_ALL, "ru");
    double h;
    int i, j, n,  m, count;

    cout << "Введите количество N: ";
    cin >> n;

    double* z = new double[n];
    cout << "Введите количество M: ";
    cin >> m;

    cout << "Введите z0: ";
    cin >> z[0];

    cout << "Введите z1: ";
    cin >> z[1];

    cout << "Введите h: ";
    cin >> h;
    for (i = 2; i < n; i++)
    {
        z[i] = sqrt(2 + sin(z[i - 1] + z[i - 2])) + sqrt(2 - cos(z[i - 1] + z[i - 2]));
        // cout << z[i] << endl;
        z[i] = pow(z[i] + 1.5, 2);
    }

    for (int j = 0; j < m; j++)
    {
        count = 0;
        for (i = 1; i < n; i++)
        {
            if (z[i] >= (j - 1) * h && z[i] < j * h)
                count++;
        }
        cout << "Количество z1...zn принадлежащих промежутку:  " << count << endl;
    }






    system("pause");
    return 0;
}

