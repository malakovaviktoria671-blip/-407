#include <iostream>
#include <cstdlib> // для system()
using namespace std;

int main() {
    int figureChoice, typeChoice;
    int length;
    char texture;
    
    while(true) {
        cout << "\n[ + ] Программа - \"Геометрические фигуры\"" << endl;
        cout << "[ 1 ] Линия" << endl;
        cout << "[ 2 ] Выйти" << endl;
        cout << "[ + ] Выберите фигуру: ";
        cin >> figureChoice;
        
        if(figureChoice == 2) {
            cout << "[ + ] Программа завершена. До свидания!" << endl;
            break;
        }
        
        if(figureChoice == 1) {
            // Очистка консоли
            system("cls || clear");
            
            cout << "[ + ] Фигура: \"Линия\"" << endl;
            cout << "[ 1 ] Горизонтальная" << endl;
            cout << "[ 2 ] Вертикальная" << endl;
            cout << "[ + ] Выберите тип: ";
            cin >> typeChoice;
            
            if(typeChoice != 1 && typeChoice != 2) {
                cout << "[ - ] Ошибка! Неправильный тип линии!" << endl;
                continue;
            }
            
            cout << "[ + ] Длина линии: ";
            cin >> length;
            
            if(length <= 0) {
                cout << "[ - ] Ошибка! Длина должна быть положительным числом!" << endl;
                continue;
            }
            
            cout << "[ + ] Текстура линии: ";
            cin >> texture;
            
            cout << "\n[ + ] Результат:\n" << endl;
            
            int counter = 0;
            
            if(typeChoice == 1) { // Горизонтальная линия
                while(counter < length) {
                    cout << texture;
                    if(counter < length - 1) {
                        cout << "  "; // два пробела между символами
                    }
                    counter++;
                }
                cout << endl;
            } else { // Вертикальная линия
                while(counter < length) {
                    cout << texture << endl;
                    counter++;
                }
            }
        } else {
            cout << "[ - ] Ошибка! Неправильный выбор фигуры!" << endl;
        }
    }
    
    return 0;
}
