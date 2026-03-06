#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    cout << "[ W1 ] Сумматор чисел" << endl;
    int sum = 0;
    int num;
    
    cout << "[ + ] Введите число: ";
    while (cin >> num && num != 0) {
        sum += num;
        cout << "[ + ] Введите число: ";
    }
    cout << "[ + ] Сумма: " << sum << endl;
    
    return 0;
}
