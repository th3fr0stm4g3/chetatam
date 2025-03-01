// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//щнагеирвш

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