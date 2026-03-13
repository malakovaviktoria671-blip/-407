#include <iostream>
using namespace std;

int main() {
    int num, original, count = 0;
    
    cout << "[ + ] Количество цифр в числе" << endl;
    cout << "[ + ] Введите число: ";
    cin >> num;
    
    if(num <= 0) {
        cout << "[ - ] Ошибка! Введите положительное число!" << endl;
        return 0;
    }
    
    original = num;
    
    while(num > 0) {
        num = num / 10; // отрезаем последнюю цифру
        count++;
    }
    
    cout << "[ + ] Количество цифр в числе " << original << ": " << count << endl;
    
    return 0;
}
