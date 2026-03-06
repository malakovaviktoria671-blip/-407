8 ЗАДАНИЕ #include <iostream>
#include <conio.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    while (true) {
        system("cls");
        cout << "[ + ] Переводчик\n\n[ 1 ] Русские слова\n[ 2 ] Английские слова\n[ 3 ] Выйти" << endl;
        cout << "\nВыберите пункт: ";
        string choice;
        cin >> choice;
        
        if (choice == "3") break;
        if (choice != "1" && choice != "2") { 
            cout << "Неверный пункт!" << endl; 
            _getch(); 
            continue; 
        }
        
        system("cls");
        if (choice == "1") {
            cout << "[ + ] Переводчик \"Список русских слов\"\n\n[ 1 ] Дом\n[ 2 ] Дорога\n[ 3 ] Кот\n[ 4 ] Собака\n[ 5 ] Машина" << endl;
            cout << "\n[ + ] Выберите номер слова: ";
            string wordNum;
            cin >> wordNum;
            cout << "[ + ] Перевод: ";
            
            if (wordNum == "1") cout << "дом -> house" << endl;
            else if (wordNum == "2") cout << "дорога -> road" << endl;
            else if (wordNum == "3") cout << "кот -> cat" << endl;
            else if (wordNum == "4") cout << "собака -> dog" << endl;
            else if (wordNum == "5") cout << "машина -> car" << endl;
            else cout << "Неверный номер" << endl;
        }
        else if (choice == "2") {
            cout << "[ + ] Переводчик \"Список английских слов\"\n\n[ 1 ] House\n[ 2 ] Road\n[ 3 ] Cat\n[ 4 ] Dog\n[ 5 ] Car" << endl;
            cout << "\n[ + ] Выберите номер слова: ";
            string wordNum;
            cin >> wordNum;
            cout << "[ + ] Перевод: ";
            
            if (wordNum == "1") cout << "house -> дом" << endl;
            else if (wordNum == "2") cout << "road -> дорога" << endl;
            else if (wordNum == "3") cout << "cat -> кот" << endl;
            else if (wordNum == "4") cout << "dog -> собака" << endl;
            else if (wordNum == "5") cout << "car -> машина" << endl;
            else cout << "Неверный номер" << endl;
        }
        _getch();
    }
    
    return 0;
}
