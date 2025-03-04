//лаба 2.43
//Даны три действительных числа. Выбрать из них те, которые принадлежат интервалу(1, 3)

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    double x, y, z;
    cout << "Введите 3 переменных (через enter): ";
    cin >> x >> y >> z;

    if (1 <= x && x >= 3)
    {
        cout << x << " x - принадлежит диапазону" << endl; 
    }
    if (1 <= y && y >= 3)
    {
        cout << y << " y - принадлежит диапазону" << endl;
    }
    if (1 <= z && z >= 3)
    {
        cout << z << " z - принадлежит диапазону" << endl;
    }

}