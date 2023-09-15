#include <iostream>
using namespace std;
/*В каждой строке двумерного массива (m,n), не содержащей нечётных элементов,
минимальные элементы заменить нулём*/
int main() 
{
    
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

                if (array[i][j] % 2 == 0) {
                    break;
                }
                else {
                    cout << "Ошибка: Введено нечетное число. Повторите ввод." << endl;
                }
            }
        }
    }

   
    for (int i = 0; i < rows; i++) 
    {
        int minElement = INT_MAX; 
        int minCol = 0;
        for (int j = 0; j < cols; j++) 
        {
            if (array[i][j] < minElement) {
                minElement = array[i][j];
                minCol = j;
            }
        }
        array[i][minCol] = 0;
    }

    
    cout << "Обновленный массив:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
