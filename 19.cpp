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
        cout << "[ 7 ] Плюс" << endl;
        cout << "[ 8 ] Ромб" << endl;
        cout << "[ 9 ] Выйти" << endl;
        cout << "========================================" << endl;
        cout << "[ + ] Выберите фигуру: ";
        cin >> choice;
        
        if(choice == 9) {
            cout << "[ + ] Программа завершена!" << endl;
            break;
        }
        
        if(choice == 8) {
            system("cls || clear");
            
            cout << "[ + ] Фигура: \"Ромб\"" << endl;
            cout << "========================================" << endl;
            cout << "[ + ] Размер: ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> texture;
            
            cout << "\n[ + ] Результат:\n" << endl;
            
            // Верхняя половина ромба
            for(int i = 0; i < size / 2 + 1; i++) {
                for(int j = 0; j < size / 2 - i; j++) {
                    cout << ".  ";
                }
                cout << texture;
                
                if(i > 0) {
                    for(int j = 0; j < 2*i - 1; j++) {
                        cout << "  .  ";
                    }
                    cout << "  " << texture;
                }
                
                for(int j = 0; j < size / 2 - i; j++) {
                    cout << "  .";
                }
                cout << endl;
            }
            
            // Нижняя половина ромба
            for(int i = size / 2 - 1; i >= 0; i--) {
                for(int j = 0; j < size / 2 - i; j++) {
                    cout << ".  ";
                }
                cout << texture;
                
                if(i > 0) {
                    for(int j = 0; j < 2*i - 1; j++) {
                        cout << "  .  ";
                    }
                    cout << "  " << texture;
                }
                
                for(int j = 0; j < size / 2 - i; j++) {
                    cout << "  .";
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
