#include <iostream>

using namespace std;

int main()
{
    int num;
    setlocale(LC_ALL, "Russian");
    wcout << L"������� 1 :" << endl;
    for (int i = 0; i <= 50; i++)
        wcout << i << endl;

    wcout << L"������� 2 :" << endl;
    wcout << L"׸���� �� ����:" << endl;
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
    wcout << L"������� 3 :" << endl;
    wcout << L"������� �������������� �����" << endl;
    cin >> num;
    wcout << L"���� ����������" << endl;
    for (int i = 0; i < num; i++)
    {
        if (i % 1000 == 0)
        {
            counter++ ;
            wcout << counter <<L" ���" << endl;
        }
    }

    return 0;
}
