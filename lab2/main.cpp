#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");


    // Одномерные массивы

    // задание № 1
    int mass[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Массив: [";
    for(int a = 0; a < 10; a++)
    {



        cout << mass[a] << " ";
    }

    cout << "]";



    // задание № 2

    int mass2[10];

    srand(time(0));
    for (int a = 0; a < 10; a++) {

        mass2[a] = rand() % 21 - 10;
    }


    cout << "Элементы массива: ";

    for (int a = 0; a < 10; a++) {
        cout << mass2[a] << " ";
    }



  // задание № 3
    int mass3[5];

    for (int a = 0; a < 5; a++)
    {
        cout << "Введите элемент массива " << a+1 << ": ";
        cin >> mass3[a];
    }

    cout << "Массив: [ ";
    for (int a = 0; a < 5; a++)
        cout << mass3[a] << " ";
    cout << "]" << endl;



   // задание № 4
    int mass4[10];

   srand(time(0));
    for (int a = 0; a < 10; a++) {
        mass4[a] = rand() % 21 - 10;
    }


    cout << "Исходный массив: [";
    for (int a = 0; a < 10; a++) {
        cout << mass4[a] << " ";
    }

    cout << "]" << endl;


    for (int a = 0; a < 10; a++)
    {
        if (mass4[a]%2 == 0)

            mass4[a] *= 3;
        else

            mass4[a] *= 5;
    }


    cout << "Преобразованный массив: [";
    for (int i = 0; i < 10; i++)
        cout << mass4[i] << " ";
    cout << "]" << endl;



    // двумерный массив

    // задание № 1
    int mass5[5][5];

    srand(time(0));

    for (int b = 0; b < 5; b++)
    {
        for (int a = 0; a < 5; a++)
        {
            mass5[b][a] = rand()%21 - 10;
        }
    }

     for (int b = 0; b < 5; b++)
    {
        for (int a = 0; a < 5; a++)
        {
            cout << setw(5) << mass5[a][a] << "\t";
        }
        cout << endl;
    }



    // задание № 2
    int mass6[5][5];

    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mass6[i][j] = rand()%21 - 10;
        }
    }

     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mass6[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Сумма элементов в каждой строке:" << endl;
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += mass6[i][j];
        }
        cout << "Строка " << i + 1 << ": " << sum << endl;
    }



    // задание № 3
    int mass7[5][5];

    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mass7[i][j] = rand()%21 - 10;
        }
    }

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mass7[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(mass7[i][j] < 0)
                mass7[i][j] = 0;
        }
    }

    cout << endl;

    cout << "Преобразованный массив:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mass7[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}

