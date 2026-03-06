#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    cout << "[ + ] Цикл \"WHILE\"\n" << endl;
    while (true) {
        cout << "[ + ] Введите число: ";
        int n;
        cin >> n;
        
        if (n == 0) break;
        
        if (n > 0 && n <= 15) {
            int count = 1;
            while (count <= n) {
                cout << "[ + ] Цикл отработал. Круг: " << count << "." << endl;
                count++;
            }
        }
        else cout << "[ + ] Ошибка! Введите число от 1 до 15." << endl;
    }
    
    return 0;
}
