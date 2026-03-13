#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int choice, type;
    int width, height;
    char texture;
    
    while(true) {
        cout << "\n[ + ] Программа - \"Геометрические фигуры\"" << endl;
        cout << "========================================" << endl;
        cout << "[ 1 ] Линия" << endl;
        cout << "[ 2 ] Квадрат" << endl;
        cout << "[ 3 ] Прямоугольник" << endl;
        cout << "[ 4 ] Выйти" << endl;
        cout << "========================================" << endl;
        cout << "[ + ] Выберите фигуру: ";
        cin >> choice;
        
        if(choice == 4) {
            cout << "[ + ] Программа завершена!" << endl;
            break;
        }
        
        if(choice == 3) {
            system("cls  clear");
            
            cout << "[ + ] Фигура: \"Прямоугольник\"" << endl;
            cout << "========================================" << endl;
            cout << "[ 1 ] Заполненный" << endl;
            cout << "[ 2 ] Пустой" << endl;
            cout << "========================================" << endl;
            cout << "[ + ] Выберите тип: ";
            cin >> type;
            
            if(type != 1 && type != 2) {
                cout << "[ - ] Неправильный тип прямоугольника!" << endl;
                continue;
            }
            
            cout << "[ + ] Ширина: ";
            cin >> width;
            cout << "[ + ] Высота: ";
            cin >> height;
            cout << "[ + ] Текстура: ";
            cin >> texture;
            
            cout << "\n[ + ] Результат:\n" << endl;
            
            if(type == 1) { // Заполненный прямоугольник
                for(int i = 0; i < height; i++) {
                    for(int j = 0; j < width; j++) {
                        cout << texture;
                        if(j < width - 1) cout << "  ";
                    }
                    cout << endl;
                }
            } else { // Пустой прямоугольник (только контур)
                for(int i = 0; i < height; i++) {
                    for(int j = 0; j < width; j++) {
                        if(i == 0  i == height-1  j == 0  j == width-1) {
                            cout << texture;
                        } else {
                            cout << ".";
                        }
                        if(j < width - 1) cout << "  ";
                    }
                    cout << endl;
                }
            }
        } else {
            cout << "[ - ] Выберите существующую фигуру!" << endl;
        }
    }
    return 0;
}
