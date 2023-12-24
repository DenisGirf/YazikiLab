#include <iostream>

using namespace std;

int main()
{
    int num;
    setlocale(LC_ALL, "Russian");
    wcout << L"Задание 1 :" << endl;
    for (int i = 0; i <= 50; i++)
        wcout << i << endl;

    wcout << L"Задание 2 :" << endl;
    wcout << L"Чётные из ряда:" << endl;
    for (int i = 0; i <= 50;)
    {
        while (i <= 50)
        {
            if (i % 2 == 0)
                wcout << i << endl;
            i++;
        }
    }

    int counter = 0 ;
    wcout << L"Задание 3 :" << endl;
    wcout << L"Введите четырехзначное число" << endl;
    cin >> num;
    wcout << L"Цикл выполнился" << endl;
    for (int i = 0; i < num; i++)
    {
        if (i % 1000 == 0)
        {
            counter++ ;
            wcout << counter <<L" раз" << endl;
        }
    }

    return 0;
}
