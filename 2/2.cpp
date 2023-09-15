#include <iostream>
using namespace std;
/*В каждой строке двумерного массива размера (m,n), не содержащей 
отрицательных элементов, все четные элементы заменить max-элементом строки*/
int main() {
    
    setlocale(LC_ALL, "Russian");
    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;
  
    int** array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            while (true) 
            {
                cout << "Введите значение для array[" << i << "][" << j << "]: ";
                cin >> array[i][j];

                if (array[i][j] >=0) {
                    break;
                }
                else {
                    cout << "Ошибка: Введено отрицательное число. Повторите ввод." << endl;
                }
            }
        }
    }
    
    for (int i = 0; i < rows; ++i) 
    {
        int maxOddInRow = INT_MIN;
       
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] % 2 != 0 && array[i][j] > maxOddInRow) {
                maxOddInRow = array[i][j];
            }
        }
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] % 2 == 0) {
                array[i][j] = maxOddInRow;
            }
        }
    }

   cout << "Обновленный массив:" << endl;
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