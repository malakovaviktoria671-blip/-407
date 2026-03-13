#include <iostream>
#include <cstdlib>
using namespace std;

void drawRecursiveSquare(int size, char texture, int offset = 0) {
    if(size < 3) return;
    
    // Верхняя граница
    for(int i = 0; i < offset; i++) cout << "  ";
    for(int i = 0; i < size; i++) {
        cout << texture;
        if(i < size - 1) cout << "  ";
    }
    cout << endl;
    
    // Середина
    for(int i = 1; i < size - 1; i++) {
        for(int j = 0; j < offset; j++) cout << "  ";
        
        if(i == size / 2) {
            // Центральная строка с внутренним квадратом
            cout << texture << "  ";
            drawRecursiveSquare(size - 4, texture, offset + 2);
            // После рекурсивного вызова нужно вернуть позицию
            for(int j = 0; j < offset + 2; j++) cout << "  ";
            for(int j = 0; j < size - 2; j++) {
                if(j == size - 3) cout << texture;
            }
            cout << endl;
        } else {
            // Обычные строки
            cout << texture;
            for(int j = 1; j < size - 1; j++) {
                cout << "  .";
            }
            cout << "  " << texture << endl;
        }
    }
    
    // Нижняя граница
    for(int i = 0; i < offset; i++) cout << "  ";
    for(int i = 0; i < size; i++) {
        cout << texture;
        if(i < size - 1) cout << "  ";
    }
    cout << endl;
}

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
        cout << "[ 9 ] Змейка" << endl;
        cout << "[ 10 ] Рекурсивный квадрат" << endl;
        cout << "[ 11 ] Выйти" << endl;
        cout << "========================================" << endl;
        cout << "[ + ] Выберите фигуру: ";
        cin >> choice;
        
        if(choice == 11) {
            cout << "[ + ] Программа завершена!" << endl;
            break;
        }
        
        if(choice == 10) {
            system("cls || clear");
            
            cout << "[ + ] Фигура: \"Рекурсивный квадрат\"" << endl;
            cout <<
