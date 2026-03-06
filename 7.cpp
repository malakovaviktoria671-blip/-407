#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    cout << "[ + ] Календарь" << endl;
    string months[] = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", 
                       "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
    string monthsGen[] = {"января", "февраля", "марта", "апреля", "мая", "июня", 
                          "июля", "августа", "сентября", "октября", "ноября", "декабря"};
    
    for (int i = 0; i < 12; i++)
        cout << "[ " << i + 1 << " ] " << months[i] << endl;
    
    cout << "[ + ] Выберите месяц: ";
    int month;
    cin >> month;
    
    if (month >= 1 && month <= 12) {
        cout << "[ + ] Выбран месяц - \"" << months[month - 1] << "\"" << endl;
        cout << "[ + ] Выберите день месяца: ";
        int day;
        cin >> day;
        
        if (day >= 1 && day <= 31) {
            cout << "[ + ] Календарь: " << day << " " << monthsGen[month - 1] << "." << endl;
        }
        else cout << "[ + ] Неверный день!" << endl;
    }
    else cout << "[ + ] Неверный месяц!" << endl;
    
    return 0;
}
