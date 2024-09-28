#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    cout << "Введіть число: ";
    cin >> number;
    int count = 0;
    if (number < 0) {
        number = -number;
    }
    if (number == 0) {
        count = 1;
    }
    for (int i = number; i != 0; i /= 10) {
        count++;
    }
    cout << "Кількість цифр: " << count << endl;
}
        

