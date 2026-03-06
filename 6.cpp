#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    cout << "[ + ] Месяца года" << endl;
    string months[] = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", 
                       "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
    
    for (int i = 0; i < 12; i++)
        cout << "[ " << i + 1 << " ] " << months[i] << endl;
    
    cout << "[ + ] Выберите месяц: ";
    int month;
    cin >> month;
    
    switch (month) {
        case 1: cout << "[ + ] Выбран месяц \"Январь\"" << endl; break;
        case 2: cout << "[ + ] Выбран месяц \"Февраль\"" << endl; break;
        case 3: cout << "[ + ] Выбран месяц \"Март\"" << endl; break;
        case 4: cout << "[ + ] Выбран месяц \"Апрель\"" << endl; break;
        case 5: cout << "[ + ] Выбран месяц \"Май\"" << endl; break;
        case 6: cout << "[ + ] Выбран месяц \"Июнь\"" << endl; break;
        case 7: cout << "[ + ] Выбран месяц \"Июль\"" << endl; break;
        case 8: cout << "[ + ] Выбран месяц \"Август\"" << endl; break;
        case 9: cout << "[ + ] Выбран месяц \"Сентябрь\"" << endl; break;
        case 10: cout << "[ + ] Выбран месяц \"Октябрь\"" << endl; break;
        case 11: cout << "[ + ] Выбран месяц \"Ноябрь\"" << endl; break;
        case 12: cout << "[ + ] Выбран месяц \"Декабрь\"" << endl; break;
        default: cout << "[ + ] Не правильно введен номер месяца!" << endl; break;
    }
    
    return 0;
}
