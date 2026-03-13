#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int choice, size;
    char texture;
    
    while(true) {
        cout << "\n[ + ] Программа - \"Геометрические фигуры\"" << endl;
        cout << "========================================" << endl;
        cout << "[ 1 ] Линия" << endl;
        cout << "[ 2 ] Квадрат" << endl;
        cout << "[ 3 ] Прямоугольник" << endl;
        cout << "[ 4 ] Треугольник" << endl;
        cout << "[ 5 ] Решетка" << endl;
        cout << "[ 6 ] Крестик" << endl;
        cout << "[ 7 ] Выйти" << endl;
        cout << "========================================" << endl;
        cout << "[ + ] Выберите фигуру: ";
        cin >> choice;
        
        if(choice == 7) {
            cout << "[ + ] Программа завершена!" << endl;
            break;
        }
        
        if(choice == 6) {
            system("cls  clear");
            
            cout << "[ + ] Фигура: \"Крестик\"" << endl;
            cout << "========================================" << endl;
            cout << "[ + ] Размер: ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> texture;
            
            cout << "\n[ + ] Результат:\n" << endl;
            
            for(int i = 0; i < size; i++) {
                for(int j = 0; j < size; j++) {
                    if(i == j  i + j == size - 1) {
                        cout << texture;
                    } else {
                        cout << ".";
                    }
                    if(j < size - 1) cout << "  ";
                }
                cout << endl;
            }
            cout << endl;
        } else {
            cout << "[ - ] Выберите существующую фигуру!" << endl;
        }
    }
    return 0;
}
