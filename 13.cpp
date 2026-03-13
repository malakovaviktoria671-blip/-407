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
        cout << "[ 3 ] Выйти" << endl;
        cout << "========================================" << endl;
        cout << "[ + ] Выберите фигуру: ";
        cin >> choice;
        
        if(choice == 3) {
            cout << "[ + ] Программа завершена!" << endl;
            break;
        }
        
        if(choice == 2) {
            system("cls  clear");
            
            cout << "[ + ] Фигура: \"Квадрат\"" << endl;
            cout << "========================================" << endl;
            cout << "[ 1 ] Заполненный" << endl;
            cout << "[ 2 ] Пустой" << endl;
            cout << "========================================" << endl;
            cout << "[ + ] Выберите тип: ";
            cin >> type;
            
            if(type != 1 && type != 2) {
                cout << "[ - ] Неправильный тип квадрата!" << endl;
                continue;
            }
            
            cout << "[ + ] Размер: ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> texture;
            
            cout << "\n[ + ] Результат:\n" << endl;
            
            if(type == 1) { // Заполненный квадрат
                for(int i = 0; i < size; i++) {
                    for(int j = 0; j < size; j++) {
                        cout << texture;
                        if(j < size - 1) cout << "  ";
                    }
                    cout << endl;
                }
            } else { // Пустой квадрат (только контур)
                for(int i = 0; i < size; i++) {
                    for(int j = 0; j < size; j++) {
                        if(i == 0  i == size-1  j == 0  j == size-1) {
                            cout << texture;
                        } else {
                            cout << ".";
                        }
                        if(j < size - 1) cout << "  ";
                    }
                    cout << endl;
                }
            }
        } else if(choice == 1) {
            system("cls || clear");
            int typeLine, length;
            
            cout << "[ + ] Фигура: \"Линия\"" << endl;
            cout << "========================================" << endl;
            cout << "[ 1 ] Горизонтальная" << endl;
            cout << "[ 2 ] Вертикальная" << endl;
            cout << "========================================" << endl;
            cout << "[ + ] Выберите тип: ";
            cin >> typeLine;
            
            cout << "[ + ] Длина линии: ";
            cin >> length;
            cout << "[ + ] Текстура: ";
            cin >> texture;
            
            cout << "\n[ + ] Результат:\n" << endl;
            
            if(typeLine == 1) {
                for(int i = 0; i < length; i++) {
                    cout << texture;
                    if(i < length - 1) cout << "  ";
                }
                cout << endl;
            } else {
                for(int i = 0; i < length; i++) {
                    cout << texture << endl;
                }
            }
        } else {
            cout << "[ - ] Неправильный выбор фигуры!" << endl;
        }
    }
    return 0;
}
