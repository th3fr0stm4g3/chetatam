// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    double x, y, z;
    cout << "Введите 3 переменных (через enter): ";
    cin >> x >> y >> z;
    
    if (1 >= x or y or z <= 3)
    {
        cout << x or y or z; "true";
    }
    else
    {
        cout << "false";
    }

}