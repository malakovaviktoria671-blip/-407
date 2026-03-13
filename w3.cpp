#include <iostream>
using namespace std;

int main() {
    int num, count = 0, sum = 0;
    
    cout << "[ + ] Статистика последовательности" << endl;
    cout << "(Для завершения введите 0)" << endl;
    
    while(true) {
        cout << "[ + ] Введите число: ";
        cin >> num;
        
        if(num == 0) {
            break;
        }
        
        if(num > 0) {
            count++;
            sum += num;
        } else {
            cout << "[ - ] Ошибка! Вводите только положительные числа!" << endl;
        }
    }
    
    cout << "[ + ] Количество чисел: " << count << endl;
    cout << "[ + ] Сумма: " << sum << endl;
    
    return 0;
}
