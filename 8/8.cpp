#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    const int maxLength = 100;
    char input[maxLength]; 

    cout << "Введите строку: ";
    cin.getline(input, maxLength); 

    cout << "Вы ввели: " << input << endl;

    int max_length = 0;
    int current_length = 0;

    for (int i = 0; i < strlen(input); ++i) {
        if (input[i] == '*') {
            current_length++;
        }
        else {
            if (current_length > max_length) {
                max_length = current_length;
            }
            current_length = 0; 
        }
    }

    
    if (current_length > max_length) {
        max_length = current_length;
    }

    cout << "Максимальная длина подстроки из звездочек: " << max_length << endl;

    return 0;
        
}
