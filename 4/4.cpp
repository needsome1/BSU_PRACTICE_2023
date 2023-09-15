#include <iostream>
using namespace std;
/*В двумерном массиве(m,n),элементы строки с максимальной суммой 
положительных элементов заменить нулями*/
int main() {
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

    int maxSum = 0; 
    int rowWithMaxSum = -1; 

    
    for (int i = 0; i < rows; ++i) {
        int sum = 0; 
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] > 0) {
                sum += array[i][j];
            }
        }
        if (sum > maxSum) {
            maxSum = sum;
            rowWithMaxSum = i;
        }
    }

    
    if (rowWithMaxSum != -1) 
    {      
        for (int j = 0; j < cols; ++j) {
            array[rowWithMaxSum][j] = 0;
        }
    }

    cout << "Обновленный массив:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}