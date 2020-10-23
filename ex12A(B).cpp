#include <iostream>
#include <cmath>
using namespace std;


int main() {


    double h;
    int i, j, n, m, count;
    double z[n];

    cout << "Введите количество N:  ";
    cin >> n;

    cout << "Введите количество M:  ";
    cin >> m;

    cout << "Введите z0: ";
    cin >> z[0];

    cout << "Введите z1: " ;
    cin>> z[1];

    for (i = 1; i < n ; i++)
    {
        z[i] = (1-z[i-1]) / (1 + pow(z[i-2], 2)) * sin(pow(z[i-1], 2)+z[i-1]*z[i-2]+2);
        // z[i] = abs(z[i]) Если добавить данную строчку, то получим решения дла задания Б
        cout << z[i] << endl;

    }

    for (int j = 0; j < m; j++)
    {
        count = 0;
        for (i = 1; i < n; i++)
        {
            if (z[i] >= (j-1) * h && z[i] < j * h) count++;
        }
        cout << "Количество z1...zn принадлежащих промежутку:  " << count << endl;
    }






    system("pause");
    return 0;
}
