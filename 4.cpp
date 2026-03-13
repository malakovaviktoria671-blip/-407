#include <iostream>
using namespace std;

int main() {
    int userNumber;
    int answer;
    
    cout << "Введите число: ";
    cin >> userNumber;
    
    // Множитель программы начинается с 1 и идет до 9
    for (int multiplier = 1; multiplier <= 9; multiplier++) {
        // Выводим пример
        cout << "Решите пример: " << userNumber << " x " << multiplier << endl;
        cout << "Ответ: ";
        cin >> answer;
        
        // Проверяем правильность ответа
        if (answer == userNumber * multiplier) {
            cout << "Пример решен правильно!" << endl;
        } else {
            cout << "Ошибка, пример решен неверно!" << endl;
            return 0; // Завершаем программу при ошибке
        }
    }
    
    // Если все примеры решены правильно
    cout << "Примеры решены, поздравляем!" << endl;
    
    return 0;
}
