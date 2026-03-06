#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    
    while (true) {
        system("cls");
        cout << "[ Меню ]\n1. Начать игру\n2. Выйти" << endl;
        cout << "Выберите пункт: ";
        string menu;
        cin >> menu;
        
        if (menu == "2") break;
        if (menu != "1") continue;
        
        // Генерация 3 уникальных чисел
        int num1, num2, num3;
        do {
            num1 = rand() % 10 + 1;
            num2 = rand() % 10 + 1;
            num3 = rand() % 10 + 1;
        } while (num1 == num2  num1 == num3  num2 == num3);
        
        int attempts = 5;
        int guessed = 0;
        bool guessed1 = false, guessed2 = false, guessed3 = false;
        
        while (attempts > 0 && guessed < 3) {
            system("cls");
            cout << "[ + ] Угаданных чисел: [ " << guessed << " / 3 ]" << endl;
            cout << "[ + ] Попыток: [ " << attempts << " ]\n" << endl;
            
            cout << "[ > ] Угадать число: ";
            int guess;
            cin >> guess;
            
            if (cin.fail()  guess < 1  guess > 10) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "[ - ] Число должно быть от 1 до 10. Попытка не снимается." << endl;
                _getch();
                continue;
            }
            
            attempts--; // Снимаем попытку
            
            if (!guessed1 && guess == num1) { guessed1 = true; guessed++; cout << "[ + ] Вы угадали число!" << endl; }
            else if (!guessed2 && guess == num2) { guessed2 = true; guessed++; cout << "[ + ] Вы угадали число!" << endl; }
            else if (!guessed3 && guess == num3) { guessed3 = true; guessed++; cout << "[ + ] Вы угадали число!" << endl; }
            else cout << "[ - ] Вы не угадали число!" << endl;
            
            _getch();
        }
        
        system("cls");
        if (guessed == 3) cout << "[ + ] Победа! Вы угадали все числа." << endl;
        else cout << "[ - ] Поражение! Загаданы были: " << num1 << ", " << num2 << ", " << num3 << endl;
        _getch();
    }
    
    return 0;
}
