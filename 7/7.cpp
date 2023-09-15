

#include <iostream>
using namespace std;
/*Ввести/вывести одномерный массив n. Найти в массиве отрицательный элемент (первый), предшествующий максимальному элементу (последнему)*/
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
   cout << "Введите размер массива: ";
   cin >> n;

    if (n <= 0) {
       cout << "Размер массива должен быть положительным числом." << endl;
        return 1;
    }

    int* arr = new int[n];

   cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxIndex = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxIndex)
        {
           maxIndex=i;
        }
    }
    
    for (int i = 0; i < maxIndex; i++)
    {
        if (arr[i]<0)
        {
            cout << "Первый отрицательный элемент: " << arr[i] << endl;
            break;
        }
    }

    delete[] arr;

    return 0;
}

