#include <iostream>
using namespace std;
/*В двумерном массиве размера (m,n) найти сумму элементов тех строк которые кратны заданному числу p*/
int main() 
{
    setlocale(LC_ALL, "Russian");
    int rows, cols;

    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            cout << "Введите значение для array[" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    int p;
    cout << "Введите значение p: ";
    cin >> p;

    int sumOfRows = 0;

    for (int i = 0; i < rows; ++i) 
    {
        int rowSum = 0; 
        for (int j = 0; j < cols; ++j) 
        {
            if (array[i][j] % p == 0)
            {
                rowSum += array[i][j];
            }
            
        }    
         sumOfRows += rowSum;    
    }
    cout << "Сумма строк, элементы которых кратны " << p << ": " << sumOfRows << endl;

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
