#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int choice, type;
    int size;
    char texture;
    
    while(true) {
        cout << "\n[ + ] Программа - \"Геометрические фигуры\"" << endl;
        cout << "========================================" << endl;
        cout << "[ 1 ] Линия" << endl;
        cout << "[ 2 ] Квадрат" << endl;
        cout << "[ 3 ] Прямоугольник" << endl;
        cout << "[ 4 ] Треугольник" << endl;
        cout << "[ 5 ] Выйти" << endl;
        cout << "========================================" << endl;
        cout << "[ + ] Выберите фигуру: ";
        cin >> choice;
        
        if(choice == 5) {
            cout << "[ + ] Программа завершена!" << endl;
            break;
        }
        
        if(choice == 4) {
            system("cls  clear");
            
            cout << "[ + ] Фигура: \"Треугольник\"" << endl;
            cout << "========================================" << endl;
            cout << "[ 1 ] Заполненный" << endl;
            cout << "[ 2 ] Пустой" << endl;
            cout << "========================================" << endl;
            cout << "[ + ] Выберите тип: ";
            cin >> type;
            
            if(type != 1 && type != 2) {
                cout << "[ - ] Неправильный тип треугольника!" << endl;
                continue;
            }
            
            cout << "[ + ] Высота: ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> texture;
            
            cout << "\n[ + ] Результат:\n" << endl;
            
            if(type == 1) { // Заполненный треугольник
                for(int i = 0; i < size; i++) {
                    // Отступы слева
                    for(int j = 0; j < size - i - 1; j++) {
                        cout << ".  ";
                    }
                    // Рисуем символы
                    for(int j = 0; j <= i; j++) {
                        cout << texture;
                        if(j < i) cout << "  ";
                    }
                    cout << endl;
                }
            } else { // Пустой треугольник (только контур)
                for(int i = 0; i < size; i++) {
                    // Отступы слева
                    for(int j = 0; j < size - i - 1; j++) {
                        cout << ".  ";
                    }
                    // Рисуем символы
                    for(int j = 0; j <= i; j++) {
                        if(j == 0  j == i || i == size-1) {
                            cout << texture;
                        } else {
                            cout << ".";
                        }
                        if(j < i) cout << "  ";
                    }
                    cout << endl;
                }
            }
            
            cout << endl;
        } else {
            cout << "[ - ] Выберите существующую фигуру!" << endl;
        }
    }
    return 0;
}
