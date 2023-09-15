#include <iostream>
using namespace std;
/*В каждой строке двумерного массива размера (m,n),не содержащей нулевых элементов,
найти максимальный элемент. Создать одномерный массив найденных максимальных элементов*/
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

                if (array[i][j] != 0) {
                    break;
                }
                else {
                    cout << "Введен 0" << endl;
                }
            }
        }
    }

    int* maxValues = new int[rows];

   
    for (int i = 0; i < rows; ++i) {
        int maxInRow = array[i][0];
        for (int j = 1; j < cols; ++j) {
            if (array[i][j] > maxInRow) {
                maxInRow = array[i][j];
            }
        }
        maxValues[i] = maxInRow; 
    }

    cout << "Максимальные значения из каждой строки:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << maxValues[i] << " ";
    }
    cout << endl;
 
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;
    delete[] maxValues;

    return 0;
}