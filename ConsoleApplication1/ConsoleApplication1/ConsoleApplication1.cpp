// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

 // Вывести на экран среднее арифметическое трех введенных чисел


#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    double x, y;
    cout << "Введите x, y (через enter): ";
    cin >> x >> y;
    y = abs(y); // abs это модуль
    if (4 <= x * x + y * y and x * x + y * y <= 16)
    {
        cout << "Входит";
    }
    else 
    {
        cout << "Не входит";
    }
    
}




