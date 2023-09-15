

#include <iostream>
using namespace std;
/*В заданной последовательности натуральных чисел найти количество чисел, произведение цифр которых чётное*/

int main()
{
    setlocale(LC_ALL, "Russian");
    int n; 
    int count = 0; 

    cout << "Введите количество чисел: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        cout << "Введите число: ";
        cin >> num;

        int product = 1;

        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                product *= digit;
            }
            num /= 10;
        }

        if (product % 2 == 0) {
            count++;
        }
    }

    cout << "Количество чисел с четным произведением цифр: " << count << endl;
}

