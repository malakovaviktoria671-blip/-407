#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    double result;
    char choice;
    
    do {
        system("cls  clear"); // Очистка экрана (для Windows - cls, для Linux/Mac - clear)
        
        cout << "========== КАЛЬКУЛЯТОР ==========" << endl;
        cout << "Доступные операции:" << endl;
        cout << " +  - сложение" << endl;
        cout << " -  - вычитание" << endl;
        cout << " *  - умножение" << endl;
        cout << " /  - деление" << endl;
        cout << " %  - остаток от деления" << endl;
        cout << "================================" << endl;
        
        // Ввод операции
        cout << "Выберите операцию (+, -, *, /, %): ";
        cin >> operation;
        
        // Ввод чисел
        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите второе число: ";
        cin >> num2;
        
        // Выполнение операции с помощью if-else if-else
        if (operation == '+') {
            result = num1 + num2;
            cout << "[ + ] Результат: " << num1 << " + " << num2 << " = " << result << endl;
        }
        else if (operation == '-') {
            result = num1 - num2;
            cout << "[ + ] Результат: " << num1 << " - " << num2 << " = " << result << endl;
        }
        else if (operation == '*') {
            result = num1 * num2;
            cout << "[ + ] Результат: " << num1 << " * " << num2 << " = " << result << endl;
        }
        else if (operation == '/') {
            // Проверка деления на ноль
            if (num2 == 0) {
                cout << "[ - ] Ошибка! Деление на ноль запрещено!" << endl;
            } else {
                result = num1 / num2;
                cout << fixed << setprecision(2); // Устанавливаем 2 знака после запятой
                cout << "[ + ] Результат: " << num1 << " / " << num2 << " = " << result << endl;
            }
        }
        else if (operation == '%') {
            // Для остатка от деления числа должны быть целыми
            if (num1 == static_cast<int>(num1) && num2 == static_cast<int>(num2)) {
                if (static_cast<int>(num2) == 0) {
                    cout << "[ - ] Ошибка! Деление на ноль запрещено!" << endl;
                } else {
                    int intResult = static_cast<int>(num1) % static_cast<int>(num2);
                    cout << "[ + ] Результат: " << num1 << " % " << num2 << " = " << intResult << endl;
                }
            } else {
                cout << "[ - ] Ошибка! Операция % требует целые числа!" << endl;
            }
        }
        else {
            // Если введена неверная операция
            cout << "[ - ] Ошибка! Неизвестная операция!" << endl;
        }
        
        // Спрашиваем, хочет ли пользователь продолжить
        cout << "Продолжить? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y'  choice == 'Y');
    
    cout << "Программа завершена. До свидания!" << endl;
    
    return 0;
}
