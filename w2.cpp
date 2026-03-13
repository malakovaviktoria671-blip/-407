#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "[ + ] Обратный отсчет" << endl;
    cout << "[ + ] Введите число: ";
    cin >> num;
    
    if(num <= 0) {
        cout << "[ - ] Ошибка! Введите положительное число!" << endl;
        return 0;
    }
    
    int counter = num;
    while(counter >= 1) {
        cout << "Отсчет: " << counter << endl;
        counter--;
    }
    
    cout << "[ + ] Старт!" << endl;
    
    return 0;
}
